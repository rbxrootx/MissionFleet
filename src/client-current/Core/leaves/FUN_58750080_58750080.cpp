// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58750080 .. +0x1521 bytes.
extern "C" __declspec(naked) void FUN_58750080_58750080() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a4h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes F3 0F 10 05 F0 4E 8B 58: movss xmm0, dword ptr [0x588b4ef0]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x4e
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 85 60 FF FF FF: movss dword ptr [ebp - 0xa0], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], 0
        push 18h
        push 0
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 52 CD 0F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xcd
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        push 400h
        push 0
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 2c8h
        push ecx
        ; Exact mapped bytes E8 39 CD 0F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xcd
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x587500ec
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 20h
        ; Exact mapped bytes 0F 8D BA 00 00 00: jge 0x587501b0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov byte ptr [ecx + eax + 2c9h], 55h
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx + 2dch]
        and ecx, 0fffffc00h
        or ecx, 55h
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + edx + 2dch], ecx
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + ecx + 2dch]
        and eax, 0fff003ffh
        or eax, 15400h
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + ecx + 2dch], eax
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + eax + 2dch]
        and edx, 0c00fffffh
        or edx, 5500000h
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + eax + 2dch], edx
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + edx + 2cch], 55h
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        mov byte ptr [edx + ecx + 2e0h], 55h
        ; Exact mapped bytes E9 33 FF FF FF: jmp 0x587500e3
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x587501c2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 20h
        ; Exact mapped bytes 0F 8D BD 13 00 00: jge 0x58751589
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + ecx*4 + 0b50h], 0
        ; Exact mapped bytes 0F 84 A4 13 00 00: je 0x58751584
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov dl, byte ptr [ebp - 24h]
        mov byte ptr [ecx + eax + 2c8h], dl
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + eax*4 + 0b50h]
        ; Exact mapped bytes E8 6B 31 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x31
        __asm _emit 0xd7
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
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
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov byte ptr [ecx + eax + 2c9h], dl
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 3D 31 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x31
        __asm _emit 0xd7
        __asm _emit 0xff
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
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov byte ptr [eax + edx + 2cbh], cl
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + ecx*4 + 0b50h]
        ; Exact mapped bytes E8 13 31 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x31
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 50h]
        xor eax, 55h
        cdq
        mov ecx, 5
        idiv ecx
        xor eax, 55h
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov ecx, dword ptr [ebp - 20h]
        mov byte ptr [ecx + edx + 2e0h], al
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 DF 30 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x30
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 9ch]
        movzx ecx, word ptr [eax + edx + 8]
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        and ecx, 3ffh
        mov eax, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax + edx + 2dch]
        and edx, 0fffffc00h
        or edx, ecx
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + eax + 2dch], edx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 86 30 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 94h]
        movzx eax, word ptr [edx + ecx + 8]
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        and eax, 3ffh
        shl eax, 0ah
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + ecx + 2dch]
        and ecx, 0fff003ffh
        or ecx, eax
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + edx + 2dch], ecx
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + ecx*4 + 0b50h]
        ; Exact mapped bytes E8 2B 30 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x30
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        mov eax, 2
        shl eax, 1
        mov ecx, dword ptr [ebp - 98h]
        movzx edx, word ptr [ecx + eax + 8]
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        and edx, 3ffh
        shl edx, 14h
        mov ecx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ecx + eax + 2dch]
        and eax, 0c00fffffh
        or eax, edx
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + ecx + 2dch], eax
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + eax*4 + 0b50h]
        ; Exact mapped bytes E8 D1 2F D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x2f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, 2
        imul ecx, edx, 0bh
        movzx edx, word ptr [eax + ecx + 14h]
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + eax + 2cch], edx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 A2 2F D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x2f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 2
        shl ecx, 2
        movzx edx, word ptr [eax + ecx + 14h]
        xor edx, 55h
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        lea eax, [ecx + eax + 2c8h]
        mov ecx, 2
        imul ecx, ecx, 0
        ; Exact mapped bytes 66 89 54 08 08: mov word ptr [eax + ecx + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 63 2F D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x2f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 6
        movzx eax, word ptr [eax + edx + 14h]
        xor eax, 55h
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        lea ecx, [edx + ecx + 2c8h]
        mov edx, 2
        shl edx, 0
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + eax*4 + 0b50h]
        ; Exact mapped bytes E8 24 2F D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x2f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, 2
        imul ecx, edx, 5
        movzx edx, word ptr [eax + ecx + 14h]
        xor edx, 55h
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        lea eax, [ecx + eax + 2c8h]
        mov ecx, 2
        shl ecx, 1
        ; Exact mapped bytes 66 89 54 08 08: mov word ptr [eax + ecx + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 E6 2E D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x2e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [eax + 170h]
        mov dword ptr [edx + ecx + 2e4h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 85 2D 05 00 00: jne 0x587509d7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 3
        ; Exact mapped bytes 0F 85 0E 04 00 00: jne 0x587508d6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 96 2E D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x2e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        and edx, 4000000h
        ; Exact mapped bytes 75 0E: jne 0x587504f9
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 2ch]
        and eax, 8000000h
        ; Exact mapped bytes 0F 84 13 01 00 00: je 0x5875060c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        mov byte ptr [edx + ecx + 2cah], 2
        mov eax, 2
        imul ecx, eax, 7
        ; Exact mapped bytes 66 8B 54 0D E4: mov dx, word ptr [ebp + ecx - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 55 82: mov word ptr [ebp - 0x7e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x82
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + eax*4 + 0b50h]
        ; Exact mapped bytes E8 43 2E D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x2e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, 2
        imul ecx, edx, 7
        movzx edx, word ptr [eax + ecx + 14h]
        xor edx, 55h
        ; Exact mapped bytes 66 89 95 7A FF FF FF: mov word ptr [ebp - 0x86], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 7eh]
        push eax
        movzx ecx, word ptr [ebp - 86h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C7 22 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        imul ecx, edx, 3
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov esi, dword ptr [ebp - 20h]
        lea edx, [esi + edx + 2c8h]
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        mov eax, 2
        imul ecx, eax, 7
        ; Exact mapped bytes 66 8B 54 0D E4: mov dx, word ptr [ebp + ecx - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 95 78 FF FF FF: mov word ptr [ebp - 0x88], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + eax*4 + 0b50h]
        ; Exact mapped bytes E8 D4 2D D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x2d
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, 2
        imul ecx, edx, 7
        movzx edx, word ptr [eax + ecx + 14h]
        xor edx, 55h
        ; Exact mapped bytes 66 89 95 76 FF FF FF: mov word ptr [ebp - 0x8a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 88h]
        push eax
        movzx ecx, word ptr [ebp - 8ah]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 55 22 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        shl edx, 2
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov esi, dword ptr [ebp - 20h]
        lea ecx, [esi + ecx + 2c8h]
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        imul eax, edx, 5
        xor edx, edx
        ; Exact mapped bytes 66 89 54 01 08: mov word ptr [ecx + eax + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x08
        ; Exact mapped bytes E9 C5 02 00 00: jmp 0x587508d1
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        and eax, 20000h
        ; Exact mapped bytes 75 1A: jne 0x58750630
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 2ch]
        and ecx, 40000h
        ; Exact mapped bytes 75 0F: jne 0x58750630
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 2ch]
        and edx, 10000h
        ; Exact mapped bytes 0F 84 A5 01 00 00: je 0x587507d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov byte ptr [ecx + eax + 2cah], 3
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 1D 2D D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x2d
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 64h]
        and ecx, 20000h
        ; Exact mapped bytes 74 6C: je 0x587506ca
        __asm _emit 0x74
        __asm _emit 0x6c
        mov edx, 2
        imul eax, edx, 0
        ; Exact mapped bytes 66 8B 4C 05 E4: mov cx, word ptr [ebp + eax - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 8D 72 FF FF FF: mov word ptr [ebp - 0x8e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 EC 2C D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x2c
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 14h]
        xor eax, 55h
        ; Exact mapped bytes 66 89 45 CE: mov word ptr [ebp - 0x32], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xce
        movzx ecx, word ptr [ebp - 8eh]
        push ecx
        movzx edx, word ptr [ebp - 32h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 73 21 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov esi, dword ptr [ebp - 20h]
        lea ecx, [esi + ecx + 2c8h]
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 94 2C D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x2c
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 64h]
        and ecx, 40000h
        ; Exact mapped bytes 74 66: je 0x5875074d
        __asm _emit 0x74
        __asm _emit 0x66
        mov edx, 2
        imul eax, edx, 0
        ; Exact mapped bytes 66 8B 4C 05 E4: mov cx, word ptr [ebp + eax - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 4D CC: mov word ptr [ebp - 0x34], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xcc
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 66 2C D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x2c
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 14h]
        xor eax, 55h
        ; Exact mapped bytes 66 89 45 A0: mov word ptr [ebp - 0x60], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa0
        movzx ecx, word ptr [ebp - 34h]
        push ecx
        movzx edx, word ptr [ebp - 60h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F0 20 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        imul edx, ecx, 5
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov esi, dword ptr [ebp - 20h]
        lea ecx, [esi + ecx + 2c8h]
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 11 2C D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x2c
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 64h]
        and ecx, 10000h
        ; Exact mapped bytes 74 66: je 0x587507d0
        __asm _emit 0x74
        __asm _emit 0x66
        mov edx, 2
        imul eax, edx, 0
        ; Exact mapped bytes 66 8B 4C 05 E4: mov cx, word ptr [ebp + eax - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 4D CA: mov word ptr [ebp - 0x36], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xca
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 E3 2B D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x2b
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 14h]
        xor eax, 55h
        ; Exact mapped bytes 66 89 45 C8: mov word ptr [ebp - 0x38], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc8
        movzx ecx, word ptr [ebp - 36h]
        push ecx
        movzx edx, word ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 6D 20 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        shl ecx, 2
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov esi, dword ptr [ebp - 20h]
        lea edx, [esi + edx + 2c8h]
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        ; Exact mapped bytes E9 FC 00 00 00: jmp 0x587508d1
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov byte ptr [ecx + eax + 2cah], 0
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        imul eax, edx, 3
        xor edx, edx
        ; Exact mapped bytes 66 89 54 01 08: mov word ptr [ecx + eax + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x08
        mov eax, 2
        imul ecx, eax, 0
        ; Exact mapped bytes 66 8B 54 0D E4: mov dx, word ptr [ebp + ecx - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 55 C6: mov word ptr [ebp - 0x3a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xc6
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + eax*4 + 0b50h]
        ; Exact mapped bytes E8 48 2B D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x2b
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, 2
        imul ecx, edx, 0
        movzx edx, word ptr [eax + ecx + 14h]
        xor edx, 55h
        ; Exact mapped bytes 66 89 55 C4: mov word ptr [ebp - 0x3c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xc4
        movzx eax, word ptr [ebp - 3ah]
        push eax
        movzx ecx, word ptr [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D2 1F 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        shl edx, 2
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov esi, dword ptr [ebp - 20h]
        lea ecx, [esi + ecx + 2c8h]
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov edx, 2
        imul eax, edx, 0
        ; Exact mapped bytes 66 8B 4C 05 E4: mov cx, word ptr [ebp + eax - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 4D C2: mov word ptr [ebp - 0x3e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc2
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 E2 2A D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x2a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 14h]
        xor eax, 55h
        ; Exact mapped bytes 66 89 45 C0: mov word ptr [ebp - 0x40], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc0
        movzx ecx, word ptr [ebp - 3eh]
        push ecx
        movzx edx, word ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 6C 1F 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        imul edx, ecx, 5
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov esi, dword ptr [ebp - 20h]
        lea ecx, [esi + ecx + 2c8h]
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        ; Exact mapped bytes E9 FC 00 00 00: jmp 0x587509d2
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov byte ptr [eax + edx + 2cah], 0
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        lea eax, [edx + ecx + 2c8h]
        mov ecx, 2
        imul edx, ecx, 3
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4C 10 08: mov word ptr [eax + edx + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x08
        mov edx, 2
        imul eax, edx, 0
        ; Exact mapped bytes 66 8B 4C 05 E4: mov cx, word ptr [ebp + eax - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 4D BE: mov word ptr [ebp - 0x42], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xbe
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 47 2A D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x2a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 14h]
        xor eax, 55h
        ; Exact mapped bytes 66 89 45 BC: mov word ptr [ebp - 0x44], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xbc
        movzx ecx, word ptr [ebp - 42h]
        push ecx
        movzx edx, word ptr [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D1 1E 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        shl ecx, 2
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov esi, dword ptr [ebp - 20h]
        lea edx, [esi + edx + 2c8h]
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        mov eax, 2
        imul ecx, eax, 0
        ; Exact mapped bytes 66 8B 54 0D E4: mov dx, word ptr [ebp + ecx - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 55 BA: mov word ptr [ebp - 0x46], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xba
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + eax*4 + 0b50h]
        ; Exact mapped bytes E8 E1 29 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x29
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, 2
        imul ecx, edx, 0
        movzx edx, word ptr [eax + ecx + 14h]
        xor edx, 55h
        ; Exact mapped bytes 66 89 55 B8: mov word ptr [ebp - 0x48], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xb8
        movzx eax, word ptr [ebp - 46h]
        push eax
        movzx ecx, word ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 6B 1E 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        imul ecx, edx, 5
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov esi, dword ptr [ebp - 20h]
        lea edx, [esi + edx + 2c8h]
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        ; Exact mapped bytes E9 C3 0A 00 00: jmp 0x5875149a
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 1
        ; Exact mapped bytes 0F 8C 79 01 00 00: jl 0x58750b5a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 4
        ; Exact mapped bytes 0F 8F 6F 01 00 00: jg 0x58750b5a
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + eax*4 + 0b50h]
        ; Exact mapped bytes E8 73 29 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x29
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [eax + 64h]
        and edx, 20000000h
        ; Exact mapped bytes 74 53: je 0x58750a5b
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov byte ptr [ecx + eax + 2cah], 6
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        shl edx, 0
        xor eax, eax
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        lea eax, [edx + ecx + 2c8h]
        mov ecx, 2
        shl ecx, 1
        xor edx, edx
        ; Exact mapped bytes 66 89 54 08 08: mov word ptr [eax + ecx + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x08
        ; Exact mapped bytes E9 FA 00 00 00: jmp 0x58750b55
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov byte ptr [ecx + eax + 2cah], 1
        mov edx, 2
        shl edx, 0
        ; Exact mapped bytes 66 8B 44 15 E4: mov ax, word ptr [ebp + edx - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x15
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 45 B6: mov word ptr [ebp - 0x4a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb6
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + ecx*4 + 0b50h]
        ; Exact mapped bytes E8 E1 28 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x28
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 2
        shl ecx, 0
        movzx edx, word ptr [eax + ecx + 14h]
        xor edx, 55h
        ; Exact mapped bytes 66 89 55 B4: mov word ptr [ebp - 0x4c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xb4
        movzx eax, word ptr [ebp - 4ah]
        push eax
        movzx ecx, word ptr [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 6B 1D 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        imul ecx, edx, 3
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov esi, dword ptr [ebp - 20h]
        lea edx, [esi + edx + 2c8h]
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        mov eax, 2
        shl eax, 1
        ; Exact mapped bytes 66 8B 4C 05 E4: mov cx, word ptr [ebp + eax - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 4D B2: mov word ptr [ebp - 0x4e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb2
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 7C 28 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x28
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 2
        shl ecx, 1
        movzx edx, word ptr [eax + ecx + 14h]
        xor edx, 55h
        ; Exact mapped bytes 66 89 55 B0: mov word ptr [ebp - 0x50], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xb0
        movzx eax, word ptr [ebp - 4eh]
        push eax
        movzx ecx, word ptr [ebp - 50h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 07 1D 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        shl edx, 2
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov esi, dword ptr [ebp - 20h]
        lea ecx, [esi + ecx + 2c8h]
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        imul eax, edx, 5
        xor edx, edx
        ; Exact mapped bytes 66 89 54 01 08: mov word ptr [ecx + eax + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x08
        ; Exact mapped bytes E9 40 09 00 00: jmp 0x5875149a
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + eax*4 + 0b50h]
        ; Exact mapped bytes E8 04 28 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x28
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [eax + 64h]
        and edx, 80203c00h
        ; Exact mapped bytes 0F 84 F7 01 00 00: je 0x58750d72
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + eax*4 + 0b50h]
        ; Exact mapped bytes E8 E3 27 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x27
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [eax + 64h]
        and edx, 80200400h
        ; Exact mapped bytes 74 16: je 0x58750bae
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov byte ptr [ecx + eax + 2cah], 0bh
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x58750c3b
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 B0 27 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x27
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 64h]
        and ecx, 800h
        ; Exact mapped bytes 74 13: je 0x58750bde
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov byte ptr [eax + edx + 2cah], 0ch
        ; Exact mapped bytes EB 5D: jmp 0x58750c3b
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + ecx*4 + 0b50h]
        ; Exact mapped bytes E8 80 27 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x27
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [eax + 64h]
        and eax, 1000h
        ; Exact mapped bytes 74 13: je 0x58750c0d
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        mov byte ptr [edx + ecx + 2cah], 0eh
        ; Exact mapped bytes EB 2E: jmp 0x58750c3b
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + eax*4 + 0b50h]
        ; Exact mapped bytes E8 51 27 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x27
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [eax + 64h]
        and edx, 2000h
        ; Exact mapped bytes 74 11: je 0x58750c3b
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov byte ptr [ecx + eax + 2cah], 0dh
        mov edx, 2
        shl edx, 3
        ; Exact mapped bytes 66 8B 44 15 E4: mov ax, word ptr [ebp + edx - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x15
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 45 AE: mov word ptr [ebp - 0x52], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xae
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + ecx*4 + 0b50h]
        ; Exact mapped bytes E8 12 27 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x27
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 9
        movzx eax, word ptr [eax + edx + 14h]
        xor eax, 55h
        ; Exact mapped bytes 66 89 45 AC: mov word ptr [ebp - 0x54], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xac
        movzx ecx, word ptr [ebp - 52h]
        push ecx
        movzx edx, word ptr [ebp - 54h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9C 1B 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov esi, dword ptr [ebp - 20h]
        lea ecx, [esi + ecx + 2c8h]
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov edx, 2
        imul eax, edx, 9
        ; Exact mapped bytes 66 8B 4C 05 E4: mov cx, word ptr [ebp + eax - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 4D AA: mov word ptr [ebp - 0x56], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xaa
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 AC 26 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x26
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 2
        shl ecx, 3
        movzx edx, word ptr [eax + ecx + 14h]
        xor edx, 55h
        ; Exact mapped bytes 66 89 55 A8: mov word ptr [ebp - 0x58], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xa8
        movzx eax, word ptr [ebp - 56h]
        push eax
        movzx ecx, word ptr [ebp - 58h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 36 1B 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        shl edx, 2
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov esi, dword ptr [ebp - 20h]
        lea ecx, [esi + ecx + 2c8h]
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov edx, 2
        imul eax, edx, 0ah
        ; Exact mapped bytes 66 8B 4C 05 E4: mov cx, word ptr [ebp + eax - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 4D A6: mov word ptr [ebp - 0x5a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xa6
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 46 26 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0ah
        movzx eax, word ptr [eax + edx + 14h]
        xor eax, 55h
        ; Exact mapped bytes 66 89 45 A4: mov word ptr [ebp - 0x5c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa4
        movzx ecx, word ptr [ebp - 5ah]
        push ecx
        movzx edx, word ptr [ebp - 5ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D0 1A 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        imul edx, ecx, 5
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov esi, dword ptr [ebp - 20h]
        lea ecx, [esi + ecx + 2c8h]
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        ; Exact mapped bytes E9 28 07 00 00: jmp 0x5875149a
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 EC 25 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x25
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 64h]
        and ecx, 80000h
        ; Exact mapped bytes 0F 84 88 01 00 00: je 0x58750f1b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov byte ptr [eax + edx + 2cah], 4
        mov ecx, 2
        imul edx, ecx, 0
        ; Exact mapped bytes 66 8B 44 15 E4: mov ax, word ptr [ebp + edx - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x15
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 45 A2: mov word ptr [ebp - 0x5e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa2
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + ecx*4 + 0b50h]
        ; Exact mapped bytes E8 A9 25 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x25
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 14h]
        xor eax, 55h
        ; Exact mapped bytes 66 89 85 74 FF FF FF: mov word ptr [ebp - 0x8c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 5eh]
        push ecx
        movzx edx, word ptr [ebp - 8ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 2D 1A 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov esi, dword ptr [ebp - 20h]
        lea ecx, [esi + ecx + 2c8h]
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 4E 25 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x25
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 64h]
        and ecx, 20000h
        ; Exact mapped bytes 74 66: je 0x58750e93
        __asm _emit 0x74
        __asm _emit 0x66
        mov edx, 2
        imul eax, edx, 0
        ; Exact mapped bytes 66 8B 4C 05 E4: mov cx, word ptr [ebp + eax - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 4D 9E: mov word ptr [ebp - 0x62], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x9e
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 20 25 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x25
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 14h]
        xor eax, 55h
        ; Exact mapped bytes 66 89 45 9C: mov word ptr [ebp - 0x64], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x9c
        movzx ecx, word ptr [ebp - 62h]
        push ecx
        movzx edx, word ptr [ebp - 64h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 AA 19 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov esi, dword ptr [ebp - 20h]
        lea ecx, [esi + ecx + 2c8h]
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 CB 24 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x24
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 64h]
        and ecx, 10000h
        ; Exact mapped bytes 74 66: je 0x58750f16
        __asm _emit 0x74
        __asm _emit 0x66
        mov edx, 2
        imul eax, edx, 0
        ; Exact mapped bytes 66 8B 4C 05 E4: mov cx, word ptr [ebp + eax - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 4D 9A: mov word ptr [ebp - 0x66], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x9a
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 9D 24 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x24
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 14h]
        xor eax, 55h
        ; Exact mapped bytes 66 89 45 98: mov word ptr [ebp - 0x68], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x98
        movzx ecx, word ptr [ebp - 66h]
        push ecx
        movzx edx, word ptr [ebp - 68h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 27 19 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        imul edx, ecx, 5
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov esi, dword ptr [ebp - 20h]
        lea ecx, [esi + ecx + 2c8h]
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        ; Exact mapped bytes E9 7F 05 00 00: jmp 0x5875149a
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 43 24 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x24
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 64h]
        and ecx, 4000000h
        ; Exact mapped bytes 75 21: jne 0x58750f59
        __asm _emit 0x75
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 26 24 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x24
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 64h]
        and ecx, 8000000h
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x5875105a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov byte ptr [eax + edx + 2cah], 2
        mov ecx, 2
        imul edx, ecx, 7
        ; Exact mapped bytes 66 8B 44 15 E4: mov ax, word ptr [ebp + edx - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x15
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 45 96: mov word ptr [ebp - 0x6a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x96
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + ecx*4 + 0b50h]
        ; Exact mapped bytes E8 E3 23 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x23
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 7
        movzx eax, word ptr [eax + edx + 14h]
        xor eax, 55h
        ; Exact mapped bytes 66 89 45 94: mov word ptr [ebp - 0x6c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x94
        movzx ecx, word ptr [ebp - 6ah]
        push ecx
        movzx edx, word ptr [ebp - 6ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 6D 18 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov esi, dword ptr [ebp - 20h]
        lea ecx, [esi + ecx + 2c8h]
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov edx, 2
        imul eax, edx, 7
        ; Exact mapped bytes 66 8B 4C 05 E4: mov cx, word ptr [ebp + eax - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 4D 92: mov word ptr [ebp - 0x6e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x92
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 7D 23 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x23
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 7
        movzx eax, word ptr [eax + edx + 14h]
        xor eax, 55h
        ; Exact mapped bytes 66 89 45 90: mov word ptr [ebp - 0x70], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x90
        movzx ecx, word ptr [ebp - 6eh]
        push ecx
        movzx edx, word ptr [ebp - 70h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 07 18 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        shl ecx, 2
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov esi, dword ptr [ebp - 20h]
        lea edx, [esi + edx + 2c8h]
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        lea edx, [ecx + eax + 2c8h]
        mov eax, 2
        imul ecx, eax, 5
        xor eax, eax
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        ; Exact mapped bytes E9 40 04 00 00: jmp 0x5875149a
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + ecx*4 + 0b50h]
        ; Exact mapped bytes E8 04 23 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x23
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [eax + 64h]
        and eax, 20000h
        ; Exact mapped bytes 75 3C: jne 0x587510b2
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + ecx*4 + 0b50h]
        ; Exact mapped bytes E8 E8 22 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [eax + 64h]
        and eax, 40000h
        ; Exact mapped bytes 75 20: jne 0x587510b2
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + ecx*4 + 0b50h]
        ; Exact mapped bytes E8 CC 22 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x22
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [eax + 64h]
        and eax, 10000h
        ; Exact mapped bytes 0F 84 9F 01 00 00: je 0x58751251
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        mov byte ptr [edx + ecx + 2cah], 3
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + eax*4 + 0b50h]
        ; Exact mapped bytes E8 9B 22 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x22
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [eax + 64h]
        and edx, 20000h
        ; Exact mapped bytes 74 66: je 0x58751146
        __asm _emit 0x74
        __asm _emit 0x66
        mov eax, 2
        imul ecx, eax, 0
        ; Exact mapped bytes 66 8B 54 0D E4: mov dx, word ptr [ebp + ecx - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 55 8E: mov word ptr [ebp - 0x72], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x8e
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + eax*4 + 0b50h]
        ; Exact mapped bytes E8 6D 22 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x22
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, 2
        imul ecx, edx, 0
        movzx edx, word ptr [eax + ecx + 14h]
        xor edx, 55h
        ; Exact mapped bytes 66 89 55 8C: mov word ptr [ebp - 0x74], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x8c
        movzx eax, word ptr [ebp - 72h]
        push eax
        movzx ecx, word ptr [ebp - 74h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F7 16 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        imul ecx, edx, 3
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov esi, dword ptr [ebp - 20h]
        lea edx, [esi + edx + 2c8h]
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + eax*4 + 0b50h]
        ; Exact mapped bytes E8 18 22 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x22
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [eax + 64h]
        and edx, 40000h
        ; Exact mapped bytes 74 66: je 0x587511c9
        __asm _emit 0x74
        __asm _emit 0x66
        mov eax, 2
        imul ecx, eax, 0
        ; Exact mapped bytes 66 8B 54 0D E4: mov dx, word ptr [ebp + ecx - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 55 8A: mov word ptr [ebp - 0x76], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x8a
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + eax*4 + 0b50h]
        ; Exact mapped bytes E8 EA 21 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x21
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, 2
        imul ecx, edx, 0
        movzx edx, word ptr [eax + ecx + 14h]
        xor edx, 55h
        ; Exact mapped bytes 66 89 55 88: mov word ptr [ebp - 0x78], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x88
        movzx eax, word ptr [ebp - 76h]
        push eax
        movzx ecx, word ptr [ebp - 78h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 74 16 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        shl edx, 2
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov esi, dword ptr [ebp - 20h]
        lea ecx, [esi + ecx + 2c8h]
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 95 21 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x21
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 64h]
        and ecx, 10000h
        ; Exact mapped bytes 74 66: je 0x5875124c
        __asm _emit 0x74
        __asm _emit 0x66
        mov edx, 2
        imul eax, edx, 0
        ; Exact mapped bytes 66 8B 4C 05 E4: mov cx, word ptr [ebp + eax - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 4D 86: mov word ptr [ebp - 0x7a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x86
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 67 21 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x21
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 14h]
        xor eax, 55h
        ; Exact mapped bytes 66 89 45 84: mov word ptr [ebp - 0x7c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x84
        movzx ecx, word ptr [ebp - 7ah]
        push ecx
        movzx edx, word ptr [ebp - 7ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F1 15 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        imul edx, ecx, 5
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov esi, dword ptr [ebp - 20h]
        lea ecx, [esi + ecx + 2c8h]
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        ; Exact mapped bytes E9 49 02 00 00: jmp 0x5875149a
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 0D 21 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x21
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 64h]
        and ecx, 4000h
        ; Exact mapped bytes 75 21: jne 0x5875128f
        __asm _emit 0x75
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 F0 20 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x20
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 64h]
        and ecx, 8000h
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x58751399
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 CF 20 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x20
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 64h]
        and ecx, 4000h
        ; Exact mapped bytes 74 11: je 0x587512bd
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov byte ptr [eax + edx + 2cah], 10h
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + ecx*4 + 0b50h]
        ; Exact mapped bytes E8 A1 20 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [eax + 64h]
        and eax, 8000h
        ; Exact mapped bytes 74 11: je 0x587512ea
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        mov byte ptr [edx + ecx + 2cah], 11h
        mov eax, 2
        imul ecx, eax, 0
        ; Exact mapped bytes 66 8B 54 0D E4: mov dx, word ptr [ebp + ecx - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 95 70 FF FF FF: mov word ptr [ebp - 0x90], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + eax*4 + 0b50h]
        ; Exact mapped bytes E8 60 20 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, 2
        imul ecx, edx, 0
        movzx edx, word ptr [eax + ecx + 14h]
        xor edx, 55h
        ; Exact mapped bytes 66 89 55 80: mov word ptr [ebp - 0x80], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x80
        movzx eax, word ptr [ebp - 90h]
        push eax
        movzx ecx, word ptr [ebp - 80h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E7 14 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        imul ecx, edx, 3
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov esi, dword ptr [ebp - 20h]
        lea edx, [esi + edx + 2c8h]
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        lea edx, [ecx + eax + 2c8h]
        mov eax, 2
        shl eax, 2
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4C 02 08: mov word ptr [edx + eax + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        imul eax, edx, 5
        xor edx, edx
        ; Exact mapped bytes 66 89 54 01 08: mov word ptr [ecx + eax + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x08
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x5875149a
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + eax*4 + 0b50h]
        ; Exact mapped bytes E8 C5 1F D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x1f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [eax + 64h]
        and edx, 20000000h
        ; Exact mapped bytes 74 42: je 0x587513f8
        __asm _emit 0x74
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        lea edx, [ecx + eax + 2c8h]
        mov eax, 2
        shl eax, 0
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4C 02 08: mov word ptr [edx + eax + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        shl edx, 1
        xor eax, eax
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x5875149a
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + ecx*4 + 0b50h]
        ; Exact mapped bytes E8 66 1F D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x1f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [eax + 64h]
        and eax, 800000h
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x5875149a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        imul edx, ecx, 5
        ; Exact mapped bytes 66 8B 44 15 E4: mov ax, word ptr [ebp + edx - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x15
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 85 7E FF FF FF: mov word ptr [ebp - 0x82], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + ecx*4 + 0b50h]
        ; Exact mapped bytes E8 32 1F D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x1f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 5
        movzx eax, word ptr [eax + edx + 14h]
        xor eax, 55h
        ; Exact mapped bytes 66 89 85 7C FF FF FF: mov word ptr [ebp - 0x84], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 82h]
        push ecx
        movzx edx, word ptr [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B3 13 00 00: call 0x58752820
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        shl ecx, 1
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov esi, dword ptr [ebp - 20h]
        lea edx, [esi + edx + 2c8h]
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov byte ptr [ecx + eax + 2cah], 8
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + edx*4 + 0b50h]
        ; Exact mapped bytes E8 C4 1E D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x1e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        mov al, byte ptr [eax + 174h]
        mov byte ptr [edx + ecx + 2e1h], al
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        movzx eax, byte ptr [edx + ecx + 2e1h]
        and eax, 1
        ; Exact mapped bytes 74 57: je 0x5875152f
        __asm _emit 0x74
        __asm _emit 0x57
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x587514ea
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 6
        ; Exact mapped bytes 7D 3D: jge 0x5875152d
        __asm _emit 0x7d
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        lea ecx, [eax + edx + 2c8h]
        mov edx, dword ptr [ebp - 28h]
        movzx eax, word ptr [ecx + edx*2 + 8]
        imul eax, eax, 0bh
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov ecx, dword ptr [ebp - 20h]
        lea edx, [ecx + edx + 2c8h]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 89 44 4A 08: mov word ptr [edx + ecx*2 + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x4a
        __asm _emit 0x08
        ; Exact mapped bytes EB B4: jmp 0x587514e1
        __asm _emit 0xeb
        __asm _emit 0xb4
        ; Exact mapped bytes EB 55: jmp 0x58751584
        __asm _emit 0xeb
        __asm _emit 0x55
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x58751541
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 30h]
        add edx, 1
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 6
        ; Exact mapped bytes 7D 3D: jge 0x58751584
        __asm _emit 0x7d
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        lea edx, [ecx + eax + 2c8h]
        mov eax, dword ptr [ebp - 30h]
        movzx ecx, word ptr [edx + eax*2 + 8]
        imul eax, ecx, 9
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov ecx, dword ptr [ebp - 20h]
        lea edx, [ecx + edx + 2c8h]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 66 89 44 4A 08: mov word ptr [edx + ecx*2 + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x4a
        __asm _emit 0x08
        ; Exact mapped bytes EB B4: jmp 0x58751538
        __asm _emit 0xeb
        __asm _emit 0xb4
        ; Exact mapped bytes E9 30 EC FF FF: jmp 0x587501b9
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9F DB FF FF: call 0x5874f130
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 B3 FA 0D 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfa
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
