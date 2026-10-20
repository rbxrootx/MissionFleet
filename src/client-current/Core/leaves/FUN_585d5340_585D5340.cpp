// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D5340 .. +0xFE7 bytes.
extern "C" __declspec(naked) void FUN_585d5340_585D5340() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff8h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        push -1
        push 58885cd4h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ebx
        sub esp, 0f0h
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebx + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 68h], ecx
        cmp dword ptr [ebp - 68h], 201h
        ; Exact mapped bytes 74 12: je 0x585d53a5
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 68h], 202h
        ; Exact mapped bytes 0F 84 5F 01 00 00: je 0x585d54ff
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 70 0F 00 00: jmp 0x585d6315
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        movzx eax, byte ptr [edx + 278h]
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x585d53c6
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, byte ptr [ecx + 278h]
        cmp edx, 1
        ; Exact mapped bytes 0F 85 34 01 00 00: jne 0x585d54fa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 2c4h], 0
        ; Exact mapped bytes 0F 85 24 01 00 00: jne 0x585d54fa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 2c8h], 0
        ; Exact mapped bytes 0F 85 14 01 00 00: jne 0x585d54fa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 106b4h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A8 3F 01 00: call 0x585e93a0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 10730h], 0
        ; Exact mapped bytes 0F 85 F1 00 00 00: jne 0x585d54fa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C A7 F3 FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa7
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 35 D4 FF FF: call 0x585d2850
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 D7 00 00 00: jne 0x585d54fa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 2bch], 1
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 15 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0xeb
        __asm _emit 0xff
        imul esi, eax, 3e8h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 C1 05 EC FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 5A F5 EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf5
        __asm _emit 0xea
        __asm _emit 0xff
        add esi, eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 2dch], esi
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 6C EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x6c
        __asm _emit 0xeb
        __asm _emit 0xff
        imul esi, eax, 3e8h
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 80 05 EC FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 89 02 EC FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0xec
        __asm _emit 0xff
        add esi, eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 2e0h], esi
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 2dch]
        mov dword ptr [ecx + 2d4h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 2d4h]
        mov dword ptr [ecx + 2cch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 2e0h]
        mov dword ptr [ecx + 2d8h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 2d8h]
        mov dword ptr [ecx + 2d0h], eax
        ; Exact mapped bytes E9 16 0E 00 00: jmp 0x585d6315
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, byte ptr [ecx + 278h]
        test edx, edx
        ; Exact mapped bytes 0F 85 6E 04 00 00: jne 0x585d597f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6e
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
        ; Exact mapped bytes E8 A4 14 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x14
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 56 04 00 00: je 0x585d597a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
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
        ; Exact mapped bytes E8 91 14 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x14
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1A C1 EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 3C 04 00 00: je 0x585d597a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 D5 FF FF: call 0x585d2a70
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 0F 85 BB 00 00 00: jne 0x585d5610
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
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
        ; Exact mapped bytes E8 60 14 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x14
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D9 6E EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x6e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 72 F4 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf4
        __asm _emit 0xea
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
        ; Exact mapped bytes 75 19: jne 0x585d5597
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 14 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x14
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F0 6E EB FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x6e
        __asm _emit 0xeb
        __asm _emit 0xff
        movzx eax, ax
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x585d55a2
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 31 C9 FF FF: call 0x585d1ed0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4F: jmp 0x585d55f1
        __asm _emit 0xeb
        __asm _emit 0x4f
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 23 01 00: call 0x585e7900
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 68 0A 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x68
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x585d55f1
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 68 0A 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x68
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 80h], eax
        push 588abe30h
        ; Exact mapped bytes E8 19 CA F4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xca
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        push 9fh
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 10 93 F2 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 2bch], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 2c0h], 0
        ; Exact mapped bytes E9 05 0D 00 00: jmp 0x585d6315
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 2c4h], 0
        ; Exact mapped bytes 0F 85 45 02 00 00: jne 0x585d5865
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 2c8h], 0
        ; Exact mapped bytes 0F 85 35 02 00 00: jne 0x585d5865
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 2c0h], 0
        ; Exact mapped bytes 0F 84 20 02 00 00: je 0x585d5860
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 13 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x13
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E7 6D EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x6d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 80 F3 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf3
        __asm _emit 0xea
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
        ; Exact mapped bytes 75 17: jne 0x585d5687
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 03 EC FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x03
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6E D0 FF FF: call 0x585d26f0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 15: jmp 0x585d569c
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 03 EC FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D7 69 EB FF: call 0x5848c070
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x69
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 2bch], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 2c0h], 0
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x585d56c8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 8
        ; Exact mapped bytes 0F 8D 8E 01 00 00: jge 0x585d5860
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + eax*4 + 29ch], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 12 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x12
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 FD 65 EB FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x65
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B6 12 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x12
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 0F 84 44 01 00 00: je 0x585d585b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 C1 67 EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x67
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 56 03 EC FF: call 0x58495a80
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 5D: je 0x585d578b
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 8A 12 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x12
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ecx + 2cch]
        ; Exact mapped bytes 7C 4A: jl 0x585d578b
        __asm _emit 0x7c
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 67 69 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x69
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        cmp eax, dword ptr [edx + 2d0h]
        ; Exact mapped bytes 7C 37: jl 0x585d578b
        __asm _emit 0x7c
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 64 12 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x12
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ecx + 2d4h]
        ; Exact mapped bytes 7F 24: jg 0x585d578b
        __asm _emit 0x7f
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 41 69 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x69
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        cmp eax, dword ptr [edx + 2d8h]
        ; Exact mapped bytes 7F 11: jg 0x585d578b
        __asm _emit 0x7f
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + eax*4 + 29ch], 1
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + edx*4 + 29ch], 0
        ; Exact mapped bytes 74 4D: je 0x585d57e8
        __asm _emit 0x74
        __asm _emit 0x4d
        push 1
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 48 01 00: call 0x585e9fc0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 4ch], edx
        ; Exact mapped bytes EB 0B: jmp 0x585d57c0
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 F3 68 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x68
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 20: je 0x585d57e6
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 12 67 EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x67
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        push 0
        push 1
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 AD 9D EC FF: call 0x5849f590
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x9d
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CF: jmp 0x585d57b5
        __asm _emit 0xeb
        __asm _emit 0xcf
        ; Exact mapped bytes EB 73: jmp 0x585d585b
        __asm _emit 0xeb
        __asm _emit 0x73
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 47 01 00: call 0x585e9fc0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 34h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x585d580d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 A6 68 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x68
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 48: je 0x585d585b
        __asm _emit 0x74
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 60h]
        ; Exact mapped bytes 75 20: jne 0x585d583b
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 BD 66 EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x66
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        push 1
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 58 9D EC FF: call 0x5849f590
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x9d
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1E: jmp 0x585d5859
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 9D 66 EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x66
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 38 9D EC FF: call 0x5849f590
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x9d
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A7: jmp 0x585d5802
        __asm _emit 0xeb
        __asm _emit 0xa7
        ; Exact mapped bytes E9 5F FE FF FF: jmp 0x585d56bf
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 15 01 00 00: jmp 0x585d597a
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x585d5877
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 8
        ; Exact mapped bytes 7D 52: jge 0x585d58cf
        __asm _emit 0x7d
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + ecx*4 + 29ch], 0
        ; Exact mapped bytes 74 40: je 0x585d58cd
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 11 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x11
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 53 64 EB FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x64
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2C 66 EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x66
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x585d58bc
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes EB 15: jmp 0x585d58cf
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes EB 11: jmp 0x585d58cd
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + ecx*4 + 29ch], 0
        ; Exact mapped bytes EB 9F: jmp 0x585d586e
        __asm _emit 0xeb
        __asm _emit 0x9f
        cmp dword ptr [ebp - 20h], 8
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x585d5971
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
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
        ; Exact mapped bytes E8 DC 10 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x10
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 07 64 EB FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x64
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C0 10 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x10
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D9 65 EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x65
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 58 00 EC FF: call 0x58495970
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0xec
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 98h]
        mov dword ptr [ebp - 0a0h], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 2c4h], 0
        ; Exact mapped bytes 74 1A: je 0x585d594b
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp - 0a0h], 4
        ; Exact mapped bytes 75 11: jne 0x585d594b
        __asm _emit 0x75
        __asm _emit 0x11
        push 0
        push 15h
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 88 61 01 00: call 0x585ebad0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1B: jmp 0x585d5966
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 2c8h], 0
        ; Exact mapped bytes 74 0F: je 0x585d5966
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0
        push 17h
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6B 61 01 00: call 0x585ebad0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 32 3A FF FF: call 0x585c93a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x585d597a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 27 3A FF FF: call 0x585c93a0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 96 09 00 00: jmp 0x585d6315
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, byte ptr [ecx + 278h]
        cmp edx, 1
        ; Exact mapped bytes 0F 85 83 09 00 00: jne 0x585d6315
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 10 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x10
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 70 09 00 00: je 0x585d6315
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 10 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 99 BC EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xbc
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 56 09 00 00: je 0x585d6315
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 D0 FF FF: call 0x585d2a70
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 27: jne 0x585d59f9
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F6 C4 FF FF: call 0x585d1ed0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 2bch], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 2c0h], 0
        ; Exact mapped bytes E9 1C 09 00 00: jmp 0x585d6315
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 21e44h], 0
        ; Exact mapped bytes 0F 85 95 05 00 00: jne 0x585d5f9e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C FD EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xfd
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 54h]
        sub ecx, 3e9h
        mov dword ptr [ebp - 54h], ecx
        cmp dword ptr [ebp - 54h], 7
        ; Exact mapped bytes 77 25: ja 0x585d5a4e
        __asm _emit 0x77
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 24 95 2C 63 5D 58: jmp dword ptr [edx*4 + 0x585d632c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0x63
        __asm _emit 0x5d
        __asm _emit 0x58
        mov dword ptr [ebp - 3ch], 0ah
        ; Exact mapped bytes EB 19: jmp 0x585d5a55
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 3ch], 0bh
        ; Exact mapped bytes EB 10: jmp 0x585d5a55
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 3ch], 0ch
        ; Exact mapped bytes EB 07: jmp 0x585d5a55
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 8B 0D 38 06 96 58: mov ecx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 FE EB FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfe
        __asm _emit 0xeb
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 85 FB 00 00 00: jne 0x585d5b6d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 0F EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7C 3D: jl 0x585d5abe
        __asm _emit 0x7c
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 0F EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 1bdh
        ; Exact mapped bytes 7F 2B: jg 0x585d5abe
        __asm _emit 0x7f
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 66 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x66
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 291h
        ; Exact mapped bytes 7C 19: jl 0x585d5abe
        __asm _emit 0x7c
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 66 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x66
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 300h
        ; Exact mapped bytes 7F 07: jg 0x585d5abe
        __asm _emit 0x7f
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 EF FF FF: call 0x585d4a10
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x585d5b1e
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 0E EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 1beh
        ; Exact mapped bytes 7C 3D: jl 0x585d5b1c
        __asm _emit 0x7c
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 0E EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x0e
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 31bh
        ; Exact mapped bytes 7F 2B: jg 0x585d5b1c
        __asm _emit 0x7f
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 65 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x65
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 266h
        ; Exact mapped bytes 7C 19: jl 0x585d5b1c
        __asm _emit 0x7c
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 65 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x65
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 300h
        ; Exact mapped bytes 7F 07: jg 0x585d5b1c
        __asm _emit 0x7f
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 1
        ; Exact mapped bytes EB 4F: jmp 0x585d5b6d
        __asm _emit 0xeb
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 0E EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x0e
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 1beh
        ; Exact mapped bytes 7C 3D: jl 0x585d5b6d
        __asm _emit 0x7c
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 0E EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 31bh
        ; Exact mapped bytes 7F 2B: jg 0x585d5b6d
        __asm _emit 0x7f
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 65 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x65
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 271h
        ; Exact mapped bytes 7C 19: jl 0x585d5b6d
        __asm _emit 0x7c
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 65 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x65
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 300h
        ; Exact mapped bytes 7F 07: jg 0x585d5b6d
        __asm _emit 0x7f
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 1
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 0E EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x0e
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 31ch
        ; Exact mapped bytes 7C 3D: jl 0x585d5bbc
        __asm _emit 0x7c
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 0E EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0e
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 400h
        ; Exact mapped bytes 7F 2B: jg 0x585d5bbc
        __asm _emit 0x7f
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 65 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x65
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 252h
        ; Exact mapped bytes 7C 19: jl 0x585d5bbc
        __asm _emit 0x7c
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 65 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x65
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 300h
        ; Exact mapped bytes 7F 07: jg 0x585d5bbc
        __asm _emit 0x7f
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 1
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 0F 84 D8 03 00 00: je 0x585d5f9e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 0F 85 CE 03 00 00: jne 0x585d5f9e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 0D EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x0d
        __asm _emit 0xeb
        __asm _emit 0xff
        imul esi, eax, 3e8h
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 21 FE EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 BA ED EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xed
        __asm _emit 0xea
        __asm _emit 0xff
        add esi, eax
        movzx eax, si
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 64 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x64
        __asm _emit 0xeb
        __asm _emit 0xff
        imul esi, eax, 3e8h
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 E3 FD EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 EC FA EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfa
        __asm _emit 0xeb
        __asm _emit 0xff
        add esi, eax
        movzx eax, si
        mov dword ptr [ebp - 78h], eax
        push 58h
        ; Exact mapped bytes E8 B1 B3 25 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb3
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 49: je 0x585d5caf
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes 8B 0D C0 06 96 58: mov ecx, dword ptr [0x589606c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B EE EA FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xee
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 106fch]
        mov dword ptr [ebp - 0a8h], eax
        push 40h
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        mov eax, dword ptr [ebp - 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 0a8h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 B6 55 1E 00: call 0x587bb260
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x55
        __asm _emit 0x1e
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x585d5cb6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 0ach], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 0c4h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [ecx + 21e48h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [eax + 21e4ch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB 0C EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x0c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C4 0C EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x0c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 21e48h]
        sub ecx, eax
        push ecx
        ; Exact mapped bytes E8 00 B3 27 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xb3
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 0C EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9C 0C EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 21e48h]
        sub ecx, eax
        push ecx
        ; Exact mapped bytes E8 D8 B2 27 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xb2
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        imul esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A 0C EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x0c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 63 63 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x63
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 21e4ch]
        sub ecx, eax
        push ecx
        ; Exact mapped bytes E8 AF B2 27 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb2
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov edi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 0C EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x0c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3B 63 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x63
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 21e4ch]
        sub ecx, eax
        push ecx
        ; Exact mapped bytes E8 87 B2 27 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xb2
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        imul edi, eax
        add esi, edi
        ; Exact mapped bytes F2 0F 2A C6: cvtsi2sd xmm0, esi
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc6
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 81 B2 27 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xb2
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 E9 B4 25 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 0b0h], eax
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x585d5dbf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 2
        ; Exact mapped bytes 74 5A: je 0x585d5e1f
        __asm _emit 0x74
        __asm _emit 0x5a
        mov dword ptr [ebp - 40h], 0
        ; Exact mapped bytes EB 09: jmp 0x585d5dd7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 40h]
        add eax, 1
        mov dword ptr [ebp - 40h], eax
        imul ecx, dword ptr [ebp - 28h], 38h
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 40h]
        cmp eax, dword ptr [edx + ecx + 22060h]
        ; Exact mapped bytes 7D 33: jge 0x585d5e1d
        __asm _emit 0x7d
        __asm _emit 0x33
        imul ecx, dword ptr [ebp - 28h], 38h
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx + 2205ch]
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [eax + ecx*4]
        cmp edx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes 72 15: jb 0x585d5e1b
        __asm _emit 0x72
        __asm _emit 0x15
        imul eax, dword ptr [ebp - 28h], 38h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 55 C0: mov dx, word ptr [ebp - 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 94 01 8C 20 02 00: mov word ptr [ecx + eax + 0x2208c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x8c
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x585d5e1d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B1: jmp 0x585d5dce
        __asm _emit 0xeb
        __asm _emit 0xb1
        ; Exact mapped bytes EB 97: jmp 0x585d5db6
        __asm _emit 0xeb
        __asm _emit 0x97
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 21e48h]
        mov edx, dword ptr [eax + 21e4ch]
        mov dword ptr [ebp - 0f0h], ecx
        mov dword ptr [ebp - 0ech], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B 0B EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x0b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B4 EB EA FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xeb
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0f8h], ecx
        mov dword ptr [ebp - 0f4h], edx
        mov eax, dword ptr [ebp - 0ech]
        push eax
        mov ecx, dword ptr [ebp - 0f0h]
        push ecx
        mov edx, dword ptr [ebp - 0f4h]
        push edx
        mov eax, dword ptr [ebp - 0f8h]
        push eax
        ; Exact mapped bytes E8 82 E0 F0 FF: call 0x584e3f00
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xe0
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 10h
        imul ecx, eax, 0ah
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 220c8h], ecx
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585d5e9f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 2ch]
        add eax, 1
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 0B EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x0b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8F 65 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x65
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 28 EB EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xeb
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E9 0A: shr cx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes 0F 8D BD 00 00 00: jge 0x585d5f8d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbd
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
        ; Exact mapped bytes E8 E5 0A EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x0a
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5E 65 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x65
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 49 71 EB FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x71
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x585d5f88
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
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
        ; Exact mapped bytes E8 B6 0A EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x0a
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2F 65 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x65
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 E8 70 EB FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xeb
        __asm _emit 0xff
        movzx edx, ax
        test edx, edx
        ; Exact mapped bytes 7E 59: jle 0x585d5f88
        __asm _emit 0x7e
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 20e74h]
        mov dword ptr [ebp - 0bch], ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 23 D3 FF FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 21e48h]
        mov edx, dword ptr [eax + 21e4ch]
        mov dword ptr [ebp - 100h], ecx
        mov dword ptr [ebp - 0fch], edx
        mov eax, dword ptr [ebp - 0fch]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 F9 DC F8 FF: call 0x58563c80
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xdc
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 09 FF FF FF: jmp 0x585d5e96
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 101h
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 13 F6 1D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf6
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 21e44h], 0
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 2c4h], 0
        ; Exact mapped bytes 0F 85 45 02 00 00: jne 0x585d6200
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 2c8h], 0
        ; Exact mapped bytes 0F 85 35 02 00 00: jne 0x585d6200
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 2c0h], 0
        ; Exact mapped bytes 0F 84 20 02 00 00: je 0x585d61fb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 09 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x09
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4C 64 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x64
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E5 E9 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe9
        __asm _emit 0xea
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
        cmp ecx, 9
        ; Exact mapped bytes 75 17: jne 0x585d6022
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA F9 EB FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xf9
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D3 C6 FF FF: call 0x585d26f0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 15: jmp 0x585d6037
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 F9 EB FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf9
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3C 60 EB FF: call 0x5848c070
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x60
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 2bch], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 2c0h], 0
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585d6063
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 8
        ; Exact mapped bytes 0F 8D 8E 01 00 00: jge 0x585d61fb
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + edx*4 + 29ch], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 09 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x09
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 62 5C EB FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x5c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1B 09 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 0F 84 44 01 00 00: je 0x585d61f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 26 5E EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 BB F9 EB FF: call 0x58495a80
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf9
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 5D: je 0x585d6126
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 EF 08 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x08
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        cmp eax, dword ptr [edx + 2cch]
        ; Exact mapped bytes 7C 4A: jl 0x585d6126
        __asm _emit 0x7c
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 CC 5F EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x5f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ecx + 2d0h]
        ; Exact mapped bytes 7C 37: jl 0x585d6126
        __asm _emit 0x7c
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 C9 08 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x08
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        cmp eax, dword ptr [edx + 2d4h]
        ; Exact mapped bytes 7F 24: jg 0x585d6126
        __asm _emit 0x7f
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 A6 5F EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x5f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ecx + 2d8h]
        ; Exact mapped bytes 7F 11: jg 0x585d6126
        __asm _emit 0x7f
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + edx*4 + 29ch], 1
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + ecx*4 + 29ch], 0
        ; Exact mapped bytes 74 4D: je 0x585d6183
        __asm _emit 0x74
        __asm _emit 0x4d
        push 1
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 3E 01 00: call 0x585e9fc0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 58h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x585d615b
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 58 5F EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x5f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 20: je 0x585d6181
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 77 5D EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x5d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        push 0
        push 1
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 12 94 EC FF: call 0x5849f590
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x94
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CF: jmp 0x585d6150
        __asm _emit 0xeb
        __asm _emit 0xcf
        ; Exact mapped bytes EB 73: jmp 0x585d61f6
        __asm _emit 0xeb
        __asm _emit 0x73
        push 0
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 3E 01 00: call 0x585e9fc0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 0B: jmp 0x585d61a8
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 0B 5F EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x5f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 48: je 0x585d61f6
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes 75 20: jne 0x585d61d6
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 22 5D EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x5d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        push 1
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 BD 93 EC FF: call 0x5849f590
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x93
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1E: jmp 0x585d61f4
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 02 5D EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x5d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 9D 93 EC FF: call 0x5849f590
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x93
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A7: jmp 0x585d619d
        __asm _emit 0xeb
        __asm _emit 0xa7
        ; Exact mapped bytes E9 5F FE FF FF: jmp 0x585d605a
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 15 01 00 00: jmp 0x585d6315
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x585d6212
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 8
        ; Exact mapped bytes 7D 52: jge 0x585d626a
        __asm _emit 0x7d
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + eax*4 + 29ch], 0
        ; Exact mapped bytes 74 40: je 0x585d6268
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D 07 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x07
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 B8 5A EB FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x5a
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 91 5C EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x5c
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x585d6257
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes EB 15: jmp 0x585d626a
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes EB 11: jmp 0x585d6268
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + eax*4 + 29ch], 0
        ; Exact mapped bytes EB 9F: jmp 0x585d6209
        __asm _emit 0xeb
        __asm _emit 0x9f
        cmp dword ptr [ebp - 24h], 8
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x585d630c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
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
        ; Exact mapped bytes E8 41 07 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x07
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 6C 5A EB FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x5a
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 25 07 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x07
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3E 5C EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x5c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 BD F6 EB FF: call 0x58495970
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf6
        __asm _emit 0xeb
        __asm _emit 0xff
        movzx eax, word ptr [eax + 98h]
        mov dword ptr [ebp - 0e4h], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 2c4h], 0
        ; Exact mapped bytes 74 1A: je 0x585d62e6
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp - 0e4h], 4
        ; Exact mapped bytes 75 11: jne 0x585d62e6
        __asm _emit 0x75
        __asm _emit 0x11
        push 0
        push 15h
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 ED 57 01 00: call 0x585ebad0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1B: jmp 0x585d6301
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 2c8h], 0
        ; Exact mapped bytes 74 0F: je 0x585d6301
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0
        push 17h
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D0 57 01 00: call 0x585ebad0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 97 30 FF FF: call 0x585c93a0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x585d6315
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8C 30 FF FF: call 0x585c93a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        nop
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
        mov esp, ebp
        pop ebp
        mov esp, ebx
    }
}
