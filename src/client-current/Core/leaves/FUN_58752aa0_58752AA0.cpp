// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58752AA0 .. +0x1513 bytes.
extern "C" __declspec(naked) void FUN_58752aa0_58752AA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push esi
        mov dword ptr [ebp - 8], ecx
        mov eax, 2
        imul ecx, eax, 0
        xor edx, edx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 94 08 C8 0A 00 00: mov word ptr [eax + ecx + 0xac8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0xc8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        shl ecx, 0
        xor edx, edx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 94 08 C8 0A 00 00: mov word ptr [eax + ecx + 0xac8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0xc8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        shl ecx, 1
        xor edx, edx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 94 08 C8 0A 00 00: mov word ptr [eax + ecx + 0xac8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0xc8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0c5ch], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0c60h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0c64h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0c68h], 0
        push 400h
        mov edx, dword ptr [ebp - 8]
        add edx, 2c8h
        push edx
        mov eax, dword ptr [ebp - 8]
        add eax, 6c8h
        push eax
        ; Exact mapped bytes E8 49 9D 0F 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x9d
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 40h], 0
        mov dword ptr [ebp - 44h], 0
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58752b77
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 8D AC 0F 00 00: jge 0x58753b2d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 2c8h]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FF F7 FF FF: call 0x587523a0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 0ad0h], ecx
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58752bcd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x58752cae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 2c8h]
        mov eax, dword ptr [ebp - 14h]
        movzx ecx, word ptr [edx + eax*2 + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        cdq
        idiv dword ptr [ecx*4 + 589475ach]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0ffffh
        ; Exact mapped bytes 76 07: jbe 0x58752c13
        __asm _emit 0x76
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0ffffh
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 6c8h]
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 45 E0: mov ax, word ptr [ebp - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 66 89 44 51 08: mov word ptr [ecx + edx*2 + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + ecx*2 + 0ac8h]
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 6c8h]
        mov edx, dword ptr [ebp - 14h]
        movzx ecx, word ptr [ecx + edx*2 + 8]
        add eax, ecx
        cmp eax, 0ffffh
        ; Exact mapped bytes 7E 15: jle 0x58752c73
        __asm _emit 0x7e
        __asm _emit 0x15
        mov edx, 0ffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 94 41 C8 0A 00 00: mov word ptr [ecx + eax*2 + 0xac8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x41
        __asm _emit 0xc8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 36: jmp 0x58752ca9
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 6c8h]
        mov edx, dword ptr [ebp - 14h]
        movzx eax, word ptr [ecx + edx*2 + 8]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 8]
        movzx ecx, word ptr [edx + ecx*2 + 0ac8h]
        add ecx, eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 8C 50 C8 0A 00 00: mov word ptr [eax + edx*2 + 0xac8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0xc8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 16 FF FF FF: jmp 0x58752bc4
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + ecx + 2cah]
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 11h
        ; Exact mapped bytes 0F 87 5C 0E 00 00: ja 0x58753b28
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x5c
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 24 8D B4 3F 75 58: jmp dword ptr [ecx*4 + 0x58753fb4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0x3f
        __asm _emit 0x75
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        imul eax, edx, 3
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov esi, dword ptr [ebp - 8]
        lea edx, [esi + edx + 6c8h]
        mov esi, 2
        imul esi, esi, 3
        ; Exact mapped bytes 66 8B 44 01 08: mov ax, word ptr [ecx + eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 44 32 08: mov word ptr [edx + esi + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x32
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 2c8h]
        mov ecx, 2
        shl ecx, 2
        movzx edx, word ptr [eax + ecx + 8]
        mov eax, edx
        imul eax, dword ptr [ebp - 10h]
        mov ecx, 0ch
        imul ecx, ecx, 0
        mov esi, 4
        shl esi, 0
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 6c8h]
        mov ecx, 2
        shl ecx, 2
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        imul eax, edx, 5
        movzx ecx, word ptr [ecx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov edx, 0ch
        imul ecx, edx, 0
        mov esi, 4
        shl esi, 1
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 6c8h]
        mov ecx, 2
        imul ecx, ecx, 5
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        ; Exact mapped bytes E9 64 0D 00 00: jmp 0x58753b28
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 0F 84 CE 00 00 00: je 0x58752e9f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 2
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x58752e9f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 2c8h]
        mov ecx, 2
        imul edx, ecx, 3
        movzx eax, word ptr [eax + edx + 8]
        imul eax, dword ptr [ebp - 10h]
        mov ecx, 0ch
        shl ecx, 0
        mov edx, 4
        imul esi, edx, 0
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 6c8h]
        mov edx, 2
        imul edx, edx, 3
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 2c8h]
        mov eax, 2
        shl eax, 2
        movzx ecx, word ptr [edx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov ecx, 0ch
        shl ecx, 0
        mov esi, 4
        shl esi, 0
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 6c8h]
        mov ecx, 2
        shl ecx, 2
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        ; Exact mapped bytes EB 3E: jmp 0x58752edd
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 6c8h]
        mov edx, 2
        imul eax, edx, 3
        xor edx, edx
        ; Exact mapped bytes 66 89 54 01 08: mov word ptr [ecx + eax + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 6c8h]
        mov eax, 2
        shl eax, 2
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4C 02 08: mov word ptr [edx + eax + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        imul eax, edx, 5
        movzx ecx, word ptr [ecx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov ecx, 0ch
        shl ecx, 0
        mov esi, 4
        shl esi, 1
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 6c8h]
        mov ecx, 2
        imul ecx, ecx, 5
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        ; Exact mapped bytes E9 EF 0B 00 00: jmp 0x58753b28
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + edx + 2c8h]
        cmp ecx, 5
        ; Exact mapped bytes 7D 37: jge 0x58752f86
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 3
        ; Exact mapped bytes 0F 85 C1 01 00 00: jne 0x5875312e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + eax + 2c8h]
        test edx, edx
        ; Exact mapped bytes 0F 85 A8 01 00 00: jne 0x5875312e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 0F 84 3C 01 00 00: je 0x587530cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
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
        cmp ecx, 2
        ; Exact mapped bytes 0F 84 1E 01 00 00: je 0x587530cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 2c8h]
        mov eax, 2
        imul ecx, eax, 3
        movzx edx, word ptr [edx + ecx + 8]
        mov eax, edx
        imul eax, dword ptr [ebp - 10h]
        mov ecx, 0ch
        shl ecx, 1
        mov edx, 4
        imul esi, edx, 0
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 6c8h]
        mov edx, 2
        imul edx, edx, 3
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 2c8h]
        mov eax, 2
        shl eax, 2
        movzx ecx, word ptr [edx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov ecx, 0ch
        shl ecx, 1
        mov esi, 4
        shl esi, 0
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 6c8h]
        mov ecx, 2
        shl ecx, 2
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 6c8h]
        mov edx, 2
        imul eax, edx, 5
        xor edx, edx
        ; Exact mapped bytes 66 89 54 01 08: mov word ptr [ecx + eax + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 6c8h]
        mov eax, 2
        imul ecx, eax, 3
        movzx edx, word ptr [edx + ecx + 8]
        add edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 6c8h]
        mov eax, 2
        shl eax, 2
        movzx ecx, word ptr [edx + eax + 8]
        add ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 5D: jmp 0x5875312c
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 6c8h]
        mov edx, 2
        imul eax, edx, 3
        xor edx, edx
        ; Exact mapped bytes 66 89 54 01 08: mov word ptr [ecx + eax + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 6c8h]
        mov eax, 2
        shl eax, 2
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4C 02 08: mov word ptr [edx + eax + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 6c8h]
        mov edx, 2
        imul eax, edx, 5
        xor edx, edx
        ; Exact mapped bytes 66 89 54 01 08: mov word ptr [ecx + eax + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x08
        ; Exact mapped bytes EB 5D: jmp 0x5875318b
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 6c8h]
        mov eax, 2
        imul ecx, eax, 3
        xor eax, eax
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 6c8h]
        mov ecx, 2
        shl ecx, 2
        xor edx, edx
        ; Exact mapped bytes 66 89 54 08 08: mov word ptr [eax + ecx + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 6c8h]
        mov eax, 2
        imul ecx, eax, 5
        xor eax, eax
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        ; Exact mapped bytes E9 98 09 00 00: jmp 0x58753b28
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 2c8h]
        mov ecx, 2
        imul edx, ecx, 3
        movzx eax, word ptr [eax + edx + 8]
        imul eax, dword ptr [ebp - 10h]
        mov ecx, 0ch
        imul ecx, ecx, 3
        mov edx, 4
        imul esi, edx, 0
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 6c8h]
        mov edx, 2
        imul edx, edx, 3
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 2c8h]
        mov eax, 2
        shl eax, 2
        movzx ecx, word ptr [edx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov edx, 0ch
        imul ecx, edx, 3
        mov esi, 4
        shl esi, 0
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 6c8h]
        mov ecx, 2
        shl ecx, 2
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        imul eax, edx, 5
        movzx ecx, word ptr [ecx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov edx, 0ch
        imul ecx, edx, 3
        mov esi, 4
        shl esi, 1
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 6c8h]
        mov ecx, 2
        imul ecx, ecx, 5
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 10h]
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
        cmp edx, 8
        ; Exact mapped bytes 0F 85 DC 00 00 00: jne 0x5875338b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 6c8h]
        mov eax, 2
        imul ecx, eax, 5
        movzx edx, word ptr [edx + ecx + 8]
        test edx, edx
        ; Exact mapped bytes 0F 84 B5 00 00 00: je 0x58753389
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 45 FC: movsx eax, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xfc
        cmp eax, 1
        ; Exact mapped bytes 7D 34: jge 0x58753311
        __asm _emit 0x7d
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 6c8h]
        mov ecx, 2
        imul edx, ecx, 5
        movzx eax, word ptr [eax + edx + 8]
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 8]
        add ecx, dword ptr [edx + 0c5ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0c5ch], ecx
        ; Exact mapped bytes EB 6C: jmp 0x5875337d
        __asm _emit 0xeb
        __asm _emit 0x6c
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        cmp ecx, 2
        ; Exact mapped bytes 7D 34: jge 0x5875334e
        __asm _emit 0x7d
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 6c8h]
        mov edx, 2
        imul eax, edx, 5
        movzx ecx, word ptr [ecx + eax + 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0c5ch]
        lea ecx, [eax + ecx*2]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0c5ch], ecx
        ; Exact mapped bytes EB 2F: jmp 0x5875337d
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 6c8h]
        mov eax, 2
        imul ecx, eax, 5
        movzx edx, word ptr [edx + ecx + 8]
        mov eax, dword ptr [ebp - 8]
        add edx, dword ptr [eax + 0c5ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0c5ch], edx
        ; Exact mapped bytes 66 8B 55 FC: mov dx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes EB 2F: jmp 0x587533ba
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 6c8h]
        mov eax, 2
        imul ecx, eax, 5
        movzx edx, word ptr [edx + ecx + 8]
        mov eax, dword ptr [ebp - 8]
        add edx, dword ptr [eax + 0c5ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0c5ch], edx
        ; Exact mapped bytes E9 69 07 00 00: jmp 0x58753b28
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        imul eax, edx, 3
        movzx ecx, word ptr [ecx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov ecx, 0ch
        shl ecx, 2
        mov edx, 4
        imul esi, edx, 0
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 6c8h]
        mov edx, 2
        imul edx, edx, 3
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 2c8h]
        mov eax, 2
        shl eax, 2
        movzx ecx, word ptr [edx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov ecx, 0ch
        shl ecx, 2
        mov esi, 4
        shl esi, 0
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 6c8h]
        mov ecx, 2
        shl ecx, 2
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        imul eax, edx, 5
        movzx ecx, word ptr [ecx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov ecx, 0ch
        shl ecx, 2
        mov esi, 4
        shl esi, 1
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 6c8h]
        mov ecx, 2
        imul ecx, ecx, 5
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 6c8h]
        mov edx, 2
        imul eax, edx, 3
        movzx ecx, word ptr [ecx + eax + 8]
        mov edx, dword ptr [ebp - 8]
        add ecx, dword ptr [edx + 0c64h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0c64h], ecx
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 6c8h]
        mov ecx, 2
        shl ecx, 2
        movzx edx, word ptr [eax + ecx + 8]
        mov eax, dword ptr [ebp - 8]
        add edx, dword ptr [eax + 0c60h]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0c60h], edx
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 6c8h]
        mov edx, 2
        imul eax, edx, 5
        movzx ecx, word ptr [ecx + eax + 8]
        mov edx, dword ptr [ebp - 8]
        add ecx, dword ptr [edx + 0c68h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0c68h], ecx
        ; Exact mapped bytes E9 D0 05 00 00: jmp 0x58753b28
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 2c8h]
        mov ecx, 2
        imul edx, ecx, 3
        movzx eax, word ptr [eax + edx + 8]
        imul eax, dword ptr [ebp - 10h]
        mov ecx, 0ch
        imul ecx, ecx, 5
        mov edx, 4
        imul esi, edx, 0
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 6c8h]
        mov edx, 2
        imul edx, edx, 3
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 2c8h]
        mov eax, 2
        shl eax, 2
        movzx ecx, word ptr [edx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov edx, 0ch
        imul ecx, edx, 5
        mov esi, 4
        shl esi, 0
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 6c8h]
        mov ecx, 2
        shl ecx, 2
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        imul eax, edx, 5
        movzx ecx, word ptr [ecx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov edx, 0ch
        imul ecx, edx, 5
        mov esi, 4
        shl esi, 1
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 6c8h]
        mov ecx, 2
        imul ecx, ecx, 5
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        ; Exact mapped bytes E9 C6 04 00 00: jmp 0x58753b28
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        imul eax, edx, 3
        movzx ecx, word ptr [ecx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov edx, 0ch
        imul ecx, edx, 6
        mov edx, 4
        imul esi, edx, 0
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 6c8h]
        mov edx, 2
        imul edx, edx, 3
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 2c8h]
        mov eax, 2
        shl eax, 2
        movzx ecx, word ptr [edx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov edx, 0ch
        imul ecx, edx, 6
        mov esi, 4
        shl esi, 0
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 6c8h]
        mov ecx, 2
        shl ecx, 2
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        imul eax, edx, 5
        movzx ecx, word ptr [ecx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov edx, 0ch
        imul ecx, edx, 6
        mov esi, 4
        shl esi, 1
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 6c8h]
        mov ecx, 2
        imul ecx, ecx, 5
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        ; Exact mapped bytes E9 BA 03 00 00: jmp 0x58753b28
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        imul eax, edx, 3
        movzx ecx, word ptr [ecx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov edx, 0ch
        imul ecx, edx, 9
        mov edx, 4
        imul esi, edx, 0
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 6c8h]
        mov edx, 2
        imul edx, edx, 3
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 2c8h]
        mov eax, 2
        shl eax, 2
        movzx ecx, word ptr [edx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov edx, 0ch
        imul ecx, edx, 9
        mov esi, 4
        shl esi, 0
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 6c8h]
        mov ecx, 2
        shl ecx, 2
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        imul eax, edx, 5
        movzx ecx, word ptr [ecx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov edx, 0ch
        imul ecx, edx, 9
        mov esi, 4
        shl esi, 1
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 6c8h]
        mov ecx, 2
        imul ecx, ecx, 5
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        ; Exact mapped bytes E9 AE 02 00 00: jmp 0x58753b28
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        imul eax, edx, 3
        movzx ecx, word ptr [ecx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov edx, 0ch
        imul ecx, edx, 0ah
        mov edx, 4
        imul esi, edx, 0
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 6c8h]
        mov edx, 2
        imul edx, edx, 3
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 2c8h]
        mov eax, 2
        shl eax, 2
        movzx ecx, word ptr [edx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov edx, 0ch
        imul ecx, edx, 0ah
        mov esi, 4
        shl esi, 0
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 6c8h]
        mov ecx, 2
        shl ecx, 2
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        imul eax, edx, 5
        movzx ecx, word ptr [ecx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov edx, 0ch
        imul ecx, edx, 0ah
        mov esi, 4
        shl esi, 1
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 6c8h]
        mov ecx, 2
        imul ecx, ecx, 5
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        ; Exact mapped bytes E9 A2 01 00 00: jmp 0x58753b28
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        imul eax, edx, 3
        movzx ecx, word ptr [ecx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov edx, 0ch
        imul ecx, edx, 0bh
        mov edx, 4
        imul esi, edx, 0
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 6c8h]
        mov edx, 2
        imul edx, edx, 3
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 2c8h]
        mov eax, 2
        shl eax, 2
        movzx ecx, word ptr [edx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov edx, 0ch
        imul ecx, edx, 0bh
        mov esi, 4
        shl esi, 0
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 6c8h]
        mov ecx, 2
        shl ecx, 2
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        imul eax, edx, 5
        movzx ecx, word ptr [ecx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov edx, 0ch
        imul ecx, edx, 0bh
        mov esi, 4
        shl esi, 1
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 6c8h]
        mov ecx, 2
        imul ecx, ecx, 5
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x58753b28
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 2c8h]
        mov edx, 2
        imul eax, edx, 3
        movzx ecx, word ptr [ecx + eax + 8]
        mov eax, ecx
        imul eax, dword ptr [ebp - 10h]
        mov edx, 0ch
        imul ecx, edx, 0ch
        mov edx, 4
        imul esi, edx, 0
        cdq
        idiv dword ptr [ecx + esi + 589475c4h]
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 6c8h]
        mov edx, 2
        imul edx, edx, 3
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 6c8h]
        mov eax, 2
        shl eax, 2
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4C 02 08: mov word ptr [edx + eax + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 6c8h]
        mov edx, 2
        imul eax, edx, 5
        xor edx, edx
        ; Exact mapped bytes 66 89 54 01 08: mov word ptr [ecx + eax + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x08
        ; Exact mapped bytes E9 41 F0 FF FF: jmp 0x58752b6e
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, 2
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + eax + 0ac8h]
        cdq
        idiv dword ptr [ecx + 589475b8h]
        mov ecx, 2
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 84 11 C8 0A 00 00: mov word ptr [ecx + edx + 0xac8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0xc8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        movzx eax, word ptr [eax + edx + 0ac8h]
        cdq
        idiv dword ptr [ecx + 589475b8h]
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 84 0A C8 0A 00 00: mov word ptr [edx + ecx + 0xac8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0xc8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, 2
        shl edx, 1
        mov eax, dword ptr [ebp - 8]
        movzx eax, word ptr [eax + edx + 0ac8h]
        cdq
        idiv dword ptr [ecx + 589475b8h]
        mov ecx, 2
        shl ecx, 1
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 84 0A C8 0A 00 00: mov word ptr [edx + ecx + 0xac8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0xc8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 8E 99 00 00 00: jle 0x58753c6c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, 1
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 9
        ; Exact mapped bytes 77 64: ja 0x58753c53
        __asm _emit 0x77
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 24 95 FC 3F 75 58: jmp dword ptr [edx*4 + 0x58753ffc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0x3f
        __asm _emit 0x75
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], 3e8h
        ; Exact mapped bytes EB 58: jmp 0x58753c5a
        __asm _emit 0xeb
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], 2c3h
        ; Exact mapped bytes EB 4F: jmp 0x58753c5a
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov dword ptr [ebp - 18h], 241h
        ; Exact mapped bytes EB 46: jmp 0x58753c5a
        __asm _emit 0xeb
        __asm _emit 0x46
        mov dword ptr [ebp - 18h], 1f4h
        ; Exact mapped bytes EB 3D: jmp 0x58753c5a
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov dword ptr [ebp - 18h], 1bfh
        ; Exact mapped bytes EB 34: jmp 0x58753c5a
        __asm _emit 0xeb
        __asm _emit 0x34
        mov dword ptr [ebp - 18h], 198h
        ; Exact mapped bytes EB 2B: jmp 0x58753c5a
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov dword ptr [ebp - 18h], 179h
        ; Exact mapped bytes EB 22: jmp 0x58753c5a
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 18h], 162h
        ; Exact mapped bytes EB 19: jmp 0x58753c5a
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 18h], 14dh
        ; Exact mapped bytes EB 10: jmp 0x58753c5a
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 18h], 13ch
        ; Exact mapped bytes EB 07: jmp 0x58753c5a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 12ch
        mov eax, dword ptr [ebp - 1ch]
        imul eax, dword ptr [ebp - 18h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 5A: je 0x58753ccf
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        movzx edx, word ptr [ecx + 98h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0c20h], edx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        movzx eax, word ptr [edx + 9ah]
        mov ecx, 20h
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 6c8h]
        mov ecx, 2
        imul ecx, ecx, 5
        movzx edx, word ptr [edx + ecx + 8]
        add eax, edx
        imul eax, eax, 41h
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0c24h], eax
        ; Exact mapped bytes EB 1A: jmp 0x58753ce9
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0c20h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0c24h], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EF 0C D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x0c
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x58753d86
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DF 0C D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x0c
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx edx, word ptr [eax + 380h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0c2ch], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C7 0C D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x0c
        __asm _emit 0xd3
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
        cmp edx, 2
        ; Exact mapped bytes 74 18: je 0x58753d41
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AF 0C D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x0c
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 75 1E: jne 0x58753d5f
        __asm _emit 0x75
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0c2ch]
        imul ecx, dword ptr [eax + 0c2ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0c30h], ecx
        ; Exact mapped bytes EB 25: jmp 0x58753d84
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [eax + 0c2ch]
        imul eax, dword ptr [ecx + 0c2ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0c30h], eax
        ; Exact mapped bytes EB 1A: jmp 0x58753da0
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0c2ch], 1
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0c30h], 1
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 18h], 0
        ; Exact mapped bytes 0F 84 08 01 00 00: je 0x58753eb5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 33 D8 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x33
        __asm _emit 0xd8
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 0dh
        ; Exact mapped bytes 74 17: je 0x58753ddb
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 33 D8 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x33
        __asm _emit 0xd8
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 84h]
        cmp ecx, 10h
        ; Exact mapped bytes 75 4F: jne 0x58753e2a
        __asm _emit 0x75
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 74 26: je 0x58753e0a
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 10h]
        movzx edx, word ptr [eax + 7ch]
        mov eax, edx
        imul eax, dword ptr [ecx + 0a4h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58753e11
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 1ch]
        cdq
        mov ecx, 14h
        idiv ecx
        add eax, dword ptr [ebp - 34h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0c50h], eax
        ; Exact mapped bytes EB 70: jmp 0x58753e9a
        __asm _emit 0xeb
        __asm _emit 0x70
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 74 5A: je 0x58753e8d
        __asm _emit 0x74
        __asm _emit 0x5a
        mov dword ptr [ebp - 38h], 46h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        movzx eax, word ptr [ecx + 7ch]
        imul eax, dword ptr [edx + 0a4h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov ecx, eax
        mov eax, dword ptr [ebp - 1ch]
        cdq
        mov esi, 14h
        idiv esi
        add ecx, eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0c50h], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c50h]
        cmp ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 7E 0C: jle 0x58753e8b
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [edx + 0c50h], eax
        ; Exact mapped bytes EB 0D: jmp 0x58753e9a
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0c50h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 18h]
        imul ecx, dword ptr [eax + 9ch], 32h
        add ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0c54h], ecx
        ; Exact mapped bytes EB 1A: jmp 0x58753ecf
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0c50h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0c54h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0c34h], 0
        mov eax, 2
        shl eax, 1
        mov ecx, dword ptr [ebp - 8]
        movzx ecx, word ptr [ecx + eax + 0ac8h]
        add ecx, 64h
        mov eax, 3e8h
        cdq
        idiv ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0c3ch], eax
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0c3ch], 0
        ; Exact mapped bytes 75 09: jne 0x58753f17
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 1
        ; Exact mapped bytes EB 0C: jmp 0x58753f23
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0c3ch]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [eax + 0c3ch], ecx
        mov edx, 2
        shl edx, 1
        mov eax, dword ptr [ebp - 8]
        movzx eax, word ptr [eax + edx + 0ac8h]
        cdq
        sub eax, edx
        sar eax, 1
        add eax, 64h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0c38h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 86 0A D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x0a
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x58753fa1
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7A 0A D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x0a
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, 3ffh
        ; Exact mapped bytes 66 23 50 0C: and dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x50
        __asm _emit 0x0c
        movzx eax, dx
        mov ecx, 2
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + edx + 0ac8h]
        add edx, 3e8h
        imul eax, edx
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0c40h], eax
        ; Exact mapped bytes EB 0D: jmp 0x58753fae
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0c40h], 1
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
