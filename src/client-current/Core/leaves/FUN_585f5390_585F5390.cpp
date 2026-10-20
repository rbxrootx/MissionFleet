// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F5390 .. +0x566 bytes.
extern "C" __declspec(naked) void FUN_585f5390_585F5390() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 124h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 0cch], ecx
        movzx eax, word ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 EC F2 FF: call 0x58523fc0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xec
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 0F 84 18 05 00 00: je 0x585f58e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 68 70 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 01 F6 E8 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf6
        __asm _emit 0xe8
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
        cmp edx, 8
        ; Exact mapped bytes 75 2A: jne 0x585f5419
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 0cch]
        cmp dword ptr [eax + 2f0h], 0
        ; Exact mapped bytes 76 1B: jbe 0x585f5419
        __asm _emit 0x76
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 0cch]
        mov edx, dword ptr [ecx + 2f0h]
        sub edx, 1
        mov eax, dword ptr [ebp - 0cch]
        mov dword ptr [eax + 2f0h], edx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 1C 70 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x70
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B5 F5 E8 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf5
        __asm _emit 0xe8
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
        cmp edx, 7
        ; Exact mapped bytes 74 22: je 0x585f545d
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 FA 6F E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x6f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 93 F5 E8 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf5
        __asm _emit 0xe8
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
        cmp ecx, 6
        ; Exact mapped bytes 75 2A: jne 0x585f5487
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 0cch]
        cmp dword ptr [edx + 2f4h], 0
        ; Exact mapped bytes 76 1B: jbe 0x585f5487
        __asm _emit 0x76
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 0cch]
        mov ecx, dword ptr [eax + 2f4h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 0cch]
        mov dword ptr [edx + 2f4h], ecx
        mov eax, dword ptr [ebp - 0cch]
        mov ecx, dword ptr [eax + 1bch]
        and ecx, 1
        ; Exact mapped bytes 74 2E: je 0x585f54c6
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 9D 6F E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x6f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 56 6A E9 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x6a
        __asm _emit 0xe9
        __asm _emit 0xff
        add eax, 6
        mov dword ptr [ebp - 0e8h], eax
        mov edx, dword ptr [ebp - 0e8h]
        push edx
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B BA F6 FF: call 0x58560f20
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xba
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        movzx esi, word ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB 14 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x14
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 74 6C E9 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x6c
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 56: je 0x585f5536
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 1C EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x1c
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 8
        ; Exact mapped bytes 74 3F: je 0x585f5536
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE 1C EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x1c
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 84h]
        cmp ecx, 9
        ; Exact mapped bytes 74 28: je 0x585f5536
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 E7 4B EB FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x4b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ech]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB C8 0E 00: call 0x586e1e00
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xc8
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 6F 7A E9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x7a
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        mov ecx, dword ptr [ebp - 0cch]
        movzx edx, word ptr [ecx + 110h]
        cmp edx, 10h
        ; Exact mapped bytes 75 4C: jne 0x585f55a5
        __asm _emit 0x75
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax*4 + 58948c34h]
        mov dword ptr [ebp - 0f0h], ecx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 C9 6E E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x6e
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 62 F4 E8 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dl, byte ptr [eax + 35ch]
        mov byte ptr [ebp - 0d1h], dl
        movzx eax, byte ptr [ebp - 0d1h]
        push eax
        movzx ecx, word ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 DE DC F2 FF: call 0x58523280
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xdc
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 26: jmp 0x585f55cb
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx*4 + 58948c34h]
        mov dword ptr [ebp - 0f4h], eax
        push 9
        movzx ecx, word ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 B6 DC F2 FF: call 0x58523280
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xdc
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 0cch]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 0f8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0dch]
        push ecx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 FF DD 10 00: call 0x587033f0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xdd
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0cch]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 6A E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x6a
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        mov ecx, dword ptr [ebp - 0fch]
        push ecx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 AA 27 E9 FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x27
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        movzx esi, word ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 13 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x13
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 13 6B E9 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x6b
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 85 88 01 00 00: jne 0x585f57cd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585f5660
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0d0h]
        add edx, 1
        mov dword ptr [ebp - 0d0h], edx
        cmp dword ptr [ebp - 0d0h], 8
        ; Exact mapped bytes 7D 15: jge 0x585f567e
        __asm _emit 0x7d
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [eax*4 + 58948c34h]
        ; Exact mapped bytes E8 55 DE F2 FF: call 0x585234d0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xde
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D3: jmp 0x585f5651
        __asm _emit 0xeb
        __asm _emit 0xd3
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0cch]
        mov edx, dword ptr [ecx + 9ch]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 86 90 F8 FF: call 0x5857e720
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585f56b6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0d0h]
        add eax, 1
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F BA FF FF: call 0x585f1110
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 28 40 F3 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x40
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes 0F 8D F4 00 00 00: jge 0x585f57c8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 BA FF FF: call 0x585f1110
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        mov ecx, dword ptr [ebp - 0d0h]
        push ecx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 19 B5 1C 00: call 0x587c0c10
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb5
        __asm _emit 0x1c
        __asm _emit 0x00
        push eax
        push 589604e0h
        ; Exact mapped bytes E8 DE B4 25 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xb4
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 84 B6 00 00 00: je 0x585f57c3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 B9 FF FF: call 0x585f1110
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        mov edx, dword ptr [ebp - 0d0h]
        push edx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 E0 B4 1C 00: call 0x587c0c10
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb4
        __asm _emit 0x1c
        __asm _emit 0x00
        mov dword ptr [ebp - 0d8h], eax
        mov eax, dword ptr [ebp - 0d8h]
        push eax
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 38 EC FF: call 0x584b8f50
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x38
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 77: je 0x585f57c3
        __asm _emit 0x74
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 0d8h]
        push ecx
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 37 EC FF: call 0x584b8f50
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x37
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        lea edx, [ebp - 64h]
        push edx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 ED EF EC FF: call 0x584c4760
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xef
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 18 EE FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x18
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        mov eax, dword ptr [ebp - 0d8h]
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 4A BA 06 00: call 0x586611e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xba
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 29: jne 0x585f57c3
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 0d8h]
        push ecx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 94 BA 06 00: call 0x58661240
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xba
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x585f57c3
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 0d8h]
        push edx
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E 35 EC FF: call 0x584b8cf0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x35
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DF FE FF FF: jmp 0x585f56a7
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x585f58af
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 28 49 EB FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x49
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        mov eax, dword ptr [ebp - 110h]
        push eax
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 37 EC FF: call 0x584b8f50
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x37
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x585f589e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 FD 48 EB FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x48
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 37 EC FF: call 0x584b8f50
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x37
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        lea edx, [ebp - 0c4h]
        push edx
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 2D EF EC FF: call 0x584c4760
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xef
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 17 EE FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x17
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 B1 48 EB FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x48
        __asm _emit 0xeb
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 85 B9 06 00: call 0x586611e0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 3F: jne 0x585f589e
        __asm _emit 0x75
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 96 48 EB FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0xeb
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 CA B9 06 00: call 0x58661240
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xb9
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 24: jne 0x585f589e
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 7B 48 EB FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x48
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        mov eax, dword ptr [ebp - 11ch]
        push eax
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 34 EC FF: call 0x584b8cf0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x34
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        movzx ecx, word ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 E6 F2 FF: call 0x58523f60
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe6
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 0cch]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 67 E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x67
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        mov ecx, dword ptr [ebp - 120h]
        push ecx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 EC 24 E9 FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x24
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 60 B7 23 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xb7
        __asm _emit 0x23
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
