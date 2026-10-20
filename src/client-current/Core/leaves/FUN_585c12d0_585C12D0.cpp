// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C12D0 .. +0x4F2 bytes.
extern "C" __declspec(naked) void FUN_585c12d0_585C12D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push esi
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585c12fa
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D BB 04 00 00: jge 0x585c17bf
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        push 0
        imul ecx, dword ptr [ebp - 8], 38h
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 22058h]
        push eax
        ; Exact mapped bytes E8 F4 BA 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xba
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        imul ecx, dword ptr [ebp - 8], 38h
        xor edx, edx
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 94 08 58 20 02 00: mov word ptr [eax + ecx + 0x22058], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x585c1350
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 20h
        ; Exact mapped bytes 0F 8D D6 00 00 00: jge 0x585c1430
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd6
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
        ; Exact mapped bytes E8 5B 56 EC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x56
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D4 B0 EC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb0
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6D 36 EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x36
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 268h]
        shr edx, cl
        and edx, 1
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x585c142b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
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
        ; Exact mapped bytes E8 20 56 EC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x56
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F1 BC EC FF: call 0x5848d0a0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xbc
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x585c13e1
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 56 EC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x56
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D3 BC EC FF: call 0x5848d0a0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xbc
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 94 F8 EC FF: call 0x58490c70
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf8
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 51: jmp 0x585c1430
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes EB 4A: jmp 0x585c142b
        __asm _emit 0xeb
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 55 EC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x55
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C5 BC EC FF: call 0x5848d0c0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xbc
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x585c142b
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 55 EC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x55
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A7 BC EC FF: call 0x5848d0c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xbc
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 48 F8 EC FF: call 0x58490c70
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf8
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x585c1430
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 17 FF FF FF: jmp 0x585c1347
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 34 03 00 00: je 0x585c176e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FE AE EC FF: call 0x5848c340
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xae
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 24 03 00 00: je 0x585c176e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 EE AE EC FF: call 0x5848c340
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xae
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 88 9A 00 00 00: mov cx, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 75 16: jne 0x585c147f
        __asm _emit 0x75
        __asm _emit 0x16
        imul eax, dword ptr [ebp - 8], 38h
        mov ecx, 2
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 8C 02 58 20 02 00: mov word ptr [edx + eax + 0x22058], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x585c1493
        __asm _emit 0xeb
        __asm _emit 0x14
        imul eax, dword ptr [ebp - 8], 38h
        mov ecx, 1
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 8C 02 58 20 02 00: mov word ptr [edx + eax + 0x22058], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C5 DA EC FF: call 0x5848ef60
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xda
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 80 9A 00 00 00: mov ax, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        imul edx, ecx, 0ah
        imul eax, dword ptr [ebp - 8], 38h
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + eax + 22060h], edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9A DA EC FF: call 0x5848ef60
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xda
        __asm _emit 0xec
        __asm _emit 0xff
        movzx edx, word ptr [eax + 0a8h]
        imul eax, dword ptr [ebp - 8], 38h
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + eax + 22070h], edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5D AE EC FF: call 0x5848c340
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xae
        __asm _emit 0xec
        __asm _emit 0xff
        imul edx, dword ptr [ebp - 8], 38h
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + edx + 22074h], eax
        imul edx, dword ptr [ebp - 8], 38h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 22074h]
        movzx edx, word ptr [ecx + 0a0h]
        imul eax, dword ptr [ebp - 8], 38h
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + eax + 22078h], edx
        imul edx, dword ptr [ebp - 8], 38h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 22074h]
        movzx edx, word ptr [ecx + 9eh]
        imul eax, dword ptr [ebp - 8], 38h
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + eax + 2207ch], edx
        imul edx, dword ptr [ebp - 8], 38h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 22074h]
        ; Exact mapped bytes 66 8B 91 98 00 00 00: mov dx, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        mov eax, 0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov byte ptr [ebp - 1], dl
        imul ecx, dword ptr [ebp - 8], 38h
        imul edx, dword ptr [ebp - 8], 38h
        mov eax, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 0ch]
        mov eax, dword ptr [eax + ecx + 22078h]
        imul eax, dword ptr [esi + edx + 22078h]
        cdq
        ; Exact mapped bytes F7 3D 70 77 94 58: idiv dword ptr [0x58947770]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        imul ecx, dword ptr [ebp - 8], 38h
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + ecx + 2207ch]
        add ecx, 5
        cdq
        idiv ecx
        ; Exact mapped bytes 0F BE 55 FF: movsx edx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xff
        mov ecx, 64h
        sub ecx, edx
        imul eax, ecx
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, 2710h
        sub edx, eax
        imul eax, dword ptr [ebp - 8], 38h
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + eax + 22080h], edx
        imul edx, dword ptr [ebp - 8], 38h
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + edx + 22060h], 0
        ; Exact mapped bytes 0F 8E 99 01 00 00: jle 0x585c176c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 8], 38h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 22060h]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 4C FA 26 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xfa
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        imul eax, dword ptr [ebp - 8], 38h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + eax + 2205ch], edx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x585c161f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        imul ecx, dword ptr [ebp - 8], 38h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + ecx + 22060h]
        ; Exact mapped bytes 7D 30: jge 0x585c1662
        __asm _emit 0x7d
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BA 51 00 00: call 0x585c6800
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        imul ecx, dword ptr [ebp - 8], 38h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 2205ch]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [eax + ecx*4], edx
        ; Exact mapped bytes EB B4: jmp 0x585c1616
        __asm _emit 0xeb
        __asm _emit 0xb4
        imul eax, dword ptr [ebp - 8], 38h
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + eax + 22068h], 0
        imul edx, dword ptr [ebp - 8], 38h
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + edx + 22064h], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x585c1698
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        imul edx, dword ptr [ebp - 8], 38h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + edx + 22060h]
        ; Exact mapped bytes 7D 48: jge 0x585c16f3
        __asm _emit 0x7d
        __asm _emit 0x48
        imul edx, dword ptr [ebp - 8], 38h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 2205ch]
        imul edx, dword ptr [ebp - 8], 38h
        mov eax, dword ptr [ebp - 10h]
        mov esi, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + eax*4]
        cmp ecx, dword ptr [esi + edx + 22064h]
        ; Exact mapped bytes 76 22: jbe 0x585c16f1
        __asm _emit 0x76
        __asm _emit 0x22
        imul edx, dword ptr [ebp - 8], 38h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 2205ch]
        imul edx, dword ptr [ebp - 8], 38h
        mov eax, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + esi*4]
        mov dword ptr [eax + edx + 22064h], ecx
        ; Exact mapped bytes EB 9C: jmp 0x585c168f
        __asm _emit 0xeb
        __asm _emit 0x9c
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x585c1705
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        imul eax, dword ptr [ebp - 8], 38h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + eax + 22060h]
        ; Exact mapped bytes 7D 54: jge 0x585c176c
        __asm _emit 0x7d
        __asm _emit 0x54
        imul eax, dword ptr [ebp - 8], 38h
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + eax + 2205ch]
        imul edx, dword ptr [ebp - 8], 38h
        mov eax, dword ptr [ebp - 0ch]
        imul eax, dword ptr [eax + edx + 22064h], 9
        xor edx, edx
        mov esi, 0ah
        div esi
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + edx*4], eax
        ; Exact mapped bytes 76 24: jbe 0x585c176a
        __asm _emit 0x76
        __asm _emit 0x24
        imul eax, dword ptr [ebp - 8], 38h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 2205ch]
        imul eax, dword ptr [ebp - 8], 38h
        mov ecx, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 10h]
        mov edx, dword ptr [edx + esi*4]
        mov dword ptr [ecx + eax + 22068h], edx
        ; Exact mapped bytes EB 02: jmp 0x585c176c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 90: jmp 0x585c16fc
        __asm _emit 0xeb
        __asm _emit 0x90
        ; Exact mapped bytes EB 4C: jmp 0x585c17ba
        __asm _emit 0xeb
        __asm _emit 0x4c
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 46: je 0x585c17ba
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 54 B8 EC FF: call 0x5848cfd0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb8
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x585c17ba
        __asm _emit 0x74
        __asm _emit 0x3a
        imul eax, dword ptr [ebp - 8], 38h
        mov ecx, 3
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 8C 02 58 20 02 00: mov word ptr [edx + eax + 0x22058], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 34 B8 EC FF: call 0x5848cfd0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb8
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 0a2h]
        imul ecx, dword ptr [ebp - 8], 38h
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + ecx + 22064h], eax
        ; Exact mapped bytes E9 32 FB FF FF: jmp 0x585c12f1
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
    }
}
