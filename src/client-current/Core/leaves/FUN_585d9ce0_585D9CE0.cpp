// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D9CE0 .. +0x4CED bytes.
extern "C" __declspec(naked) void FUN_585d9ce0_585D9CE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 634h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 388h], ecx
        push 0dch
        push 0
        mov eax, dword ptr [ebp - 388h]
        add eax, 10af0h
        push eax
        ; Exact mapped bytes E8 FC 30 27 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x30
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 0ch
        push 1c8h
        push 0
        mov ecx, dword ptr [ebp - 388h]
        add ecx, 1091ch
        push ecx
        ; Exact mapped bytes E8 E0 30 27 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x30
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 39ch], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 CC EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xcc
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 390h], eax
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 57 32 EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x32
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 398h], eax
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 E6 23 EB FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x23
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 630h], eax
        mov dword ptr [ebp - 410h], 1
        mov dword ptr [ebp - 468h], 0
        mov dword ptr [ebp - 418h], 0
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10bech], 0ffffffffh
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 47 8A FF FF: call 0x585d27f0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        xor eax, 7c8ba106h
        mov ecx, dword ptr [ebp - 388h]
        cmp dword ptr [ecx + 2101ch], eax
        ; Exact mapped bytes 74 1D: je 0x585d9ddb
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0
        push 0
        push 0ah
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 2B FA FF: call 0x5857c9c0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 5A FA FF: call 0x5857f810
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x5a
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 4
        ; Exact mapped bytes 0F 84 D2 01 00 00: je 0x585d9fc3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 5
        ; Exact mapped bytes 0F 84 BC 01 00 00: je 0x585d9fc3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 6
        ; Exact mapped bytes 0F 84 A6 01 00 00: je 0x585d9fc3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0ah
        ; Exact mapped bytes 0F 84 90 01 00 00: je 0x585d9fc3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0bh
        ; Exact mapped bytes 0F 84 7A 01 00 00: je 0x585d9fc3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0dh
        ; Exact mapped bytes 0F 84 64 01 00 00: je 0x585d9fc3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 10h
        ; Exact mapped bytes 0F 84 4E 01 00 00: je 0x585d9fc3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0eh
        ; Exact mapped bytes 0F 84 38 01 00 00: je 0x585d9fc3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0fh
        ; Exact mapped bytes 0F 84 22 01 00 00: je 0x585d9fc3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        cmp dword ptr [edx + 220d4h], 0
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x585d9f4b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, byte ptr [eax + 220d8h]
        test ecx, ecx
        ; Exact mapped bytes 74 74: je 0x585d9f39
        __asm _emit 0x74
        __asm _emit 0x74
        mov byte ptr [ebp - 3a9h], 1
        movzx ebx, byte ptr [ebp - 3a9h]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 CA EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xca
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CB 30 EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x30
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        shl ebx, cl
        mov byte ptr [ebp - 3a9h], bl
        movzx edx, byte ptr [ebp - 3a9h]
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, byte ptr [eax + 220d8h]
        and edx, ecx
        ; Exact mapped bytes 74 20: je 0x585d9f27
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE CA EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xca
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 97 30 EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x30
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10bech], eax
        ; Exact mapped bytes EB 10: jmp 0x585d9f37
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 388h]
        mov dword ptr [eax + 10bech], 3
        ; Exact mapped bytes EB 10: jmp 0x585d9f49
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10bech], 3
        ; Exact mapped bytes EB 73: jmp 0x585d9fbe
        __asm _emit 0xeb
        __asm _emit 0x73
        mov dword ptr [ebp - 408h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585d9f66
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 408h]
        add edx, 1
        mov dword ptr [ebp - 408h], edx
        cmp dword ptr [ebp - 408h], 8
        ; Exact mapped bytes 7D 4F: jge 0x585d9fbe
        __asm _emit 0x7d
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 408h]
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + eax*4 + 10bcch]
        xor edx, 55555555h
        mov dword ptr [ebp - 42ch], edx
        ; Exact mapped bytes 74 2C: je 0x585d9fbc
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 468h]
        cmp eax, dword ptr [ebp - 42ch]
        ; Exact mapped bytes 7D 1E: jge 0x585d9fbc
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 42ch]
        mov dword ptr [ebp - 468h], ecx
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [ebp - 408h]
        mov dword ptr [edx + 10bech], eax
        ; Exact mapped bytes EB 99: jmp 0x585d9f57
        __asm _emit 0xeb
        __asm _emit 0x99
        ; Exact mapped bytes E9 D4 05 00 00: jmp 0x585da597
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 6
        ; Exact mapped bytes 0F 85 3C 01 00 00: jne 0x585da115
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 220e0h]
        ; Exact mapped bytes E8 06 8E FF FF: call 0x585d2df0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10bech], eax
        mov edx, dword ptr [ebp - 388h]
        cmp dword ptr [edx + 10bech], 2
        ; Exact mapped bytes 0F 85 07 01 00 00: jne 0x585da110
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 414h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585da024
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 414h]
        add eax, 1
        mov dword ptr [ebp - 414h], eax
        cmp dword ptr [ebp - 414h], 8
        ; Exact mapped bytes 7D 13: jge 0x585da040
        __asm _emit 0x7d
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 414h]
        mov dword ptr [ebp + ecx*4 - 384h], 0
        ; Exact mapped bytes EB D5: jmp 0x585da015
        __asm _emit 0xeb
        __asm _emit 0xd5
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 1E EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x1e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 40ch], eax
        ; Exact mapped bytes EB 11: jmp 0x585da064
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes E8 D2 20 EB FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x20
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 40ch], eax
        cmp dword ptr [ebp - 40ch], 0
        ; Exact mapped bytes 74 27: je 0x585da094
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes E8 D8 75 EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x75
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x585da092
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes E8 29 2F EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x2f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp + eax*4 - 384h], 1
        ; Exact mapped bytes EB BF: jmp 0x585da053
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov dword ptr [ebp - 3c0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585da0af
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 3c0h]
        add edx, 1
        mov dword ptr [ebp - 3c0h], edx
        cmp dword ptr [ebp - 3c0h], 8
        ; Exact mapped bytes 7D 58: jge 0x585da110
        __asm _emit 0x7d
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 3c0h]
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + eax*4 + 10c44h]
        cmp edx, dword ptr [ebp - 418h]
        ; Exact mapped bytes 76 3B: jbe 0x585da10e
        __asm _emit 0x76
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 3c0h]
        cmp dword ptr [ebp + eax*4 - 384h], 0
        ; Exact mapped bytes 74 2B: je 0x585da10e
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 3c0h]
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + ecx*4 + 10c44h]
        mov dword ptr [ebp - 418h], eax
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ebp - 3c0h]
        mov dword ptr [ecx + 10bech], edx
        ; Exact mapped bytes EB 90: jmp 0x585da0a0
        __asm _emit 0xeb
        __asm _emit 0x90
        ; Exact mapped bytes E9 82 04 00 00: jmp 0x585da597
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0fh
        ; Exact mapped bytes 0F 85 65 03 00 00: jne 0x585da490
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A C8 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc8
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 73 2E EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x2e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 4a4h], eax
        xor edx, edx
        ; Exact mapped bytes 66 89 95 44 FC FF FF: mov word ptr [ebp - 0x3bc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 20h
        push 0
        lea eax, [ebp - 364h]
        push eax
        ; Exact mapped bytes E8 B4 2C 27 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x2c
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 0ch
        push 10h
        push 0
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 A4 2C 27 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x2c
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 0ch
        push 10h
        push 0
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 94 2C 27 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x2c
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 1D EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 3b0h], eax
        ; Exact mapped bytes EB 11: jmp 0x585da1a3
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 93 1F EB FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x1f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 3b0h], eax
        cmp dword ptr [ebp - 3b0h], 0
        ; Exact mapped bytes 0F 84 08 01 00 00: je 0x585da2b8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 85 22 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9E A8 EA FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa8
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [eax + 0a4h], 1
        ; Exact mapped bytes 75 02: jne 0x585da1cd
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB C5: jmp 0x585da192
        __asm _emit 0xeb
        __asm _emit 0xc5
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 D8 2D EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x2d
        __asm _emit 0xeb
        __asm _emit 0xff
        lea eax, [ebp + eax*2 - 14h]
        mov dword ptr [ebp - 49ch], eax
        mov ecx, dword ptr [ebp - 49ch]
        movzx edx, word ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp - 49ch]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 AE 2D EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x2d
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4a4h]
        ; Exact mapped bytes 74 4C: je 0x585da256
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 3B EC EC FF: call 0x584a8e50
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xec
        __asm _emit 0xec
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 10: je 0x585da22a
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 CB B4 EB FF: call 0x584956f0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb4
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 2A: jne 0x585da254
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 7B 2D EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x2d
        __asm _emit 0xeb
        __asm _emit 0xff
        lea ecx, [ebp + eax*2 - 24h]
        mov dword ptr [ebp - 4a0h], ecx
        mov edx, dword ptr [ebp - 4a0h]
        movzx eax, word ptr [edx]
        add eax, 1
        mov ecx, dword ptr [ebp - 4a0h]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        ; Exact mapped bytes EB 5D: jmp 0x585da2b3
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 4F 2D EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x2d
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4a4h]
        ; Exact mapped bytes 75 4A: jne 0x585da2b3
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 DC EB EC FF: call 0x584a8e50
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xeb
        __asm _emit 0xec
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 10: je 0x585da289
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 6C B4 EB FF: call 0x584956f0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xb4
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 2A: jne 0x585da2b3
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 1C 2D EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x2d
        __asm _emit 0xeb
        __asm _emit 0xff
        lea edx, [ebp + eax*2 - 24h]
        mov dword ptr [ebp - 4a8h], edx
        mov eax, dword ptr [ebp - 4a8h]
        movzx ecx, word ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp - 4a8h]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        ; Exact mapped bytes E9 DA FE FF FF: jmp 0x585da192
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3d0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585da2d3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 3d0h]
        add eax, 1
        mov dword ptr [ebp - 3d0h], eax
        cmp dword ptr [ebp - 3d0h], 8
        ; Exact mapped bytes 7D 4F: jge 0x585da32b
        __asm _emit 0x7d
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 3d0h]
        movzx edx, word ptr [ebp + ecx*2 - 14h]
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x585da2ed
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB D7: jmp 0x585da2c4
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov eax, dword ptr [ebp - 3d0h]
        movzx ecx, word ptr [ebp + eax*2 - 14h]
        mov edx, dword ptr [ebp - 3d0h]
        movzx eax, word ptr [ebp + edx*2 - 24h]
        cmp ecx, eax
        ; Exact mapped bytes 74 22: je 0x585da329
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 3d0h]
        mov dword ptr [ebp + ecx*4 - 364h], 1
        movzx edx, word ptr [ebp - 3bch]
        add edx, 1
        ; Exact mapped bytes 66 89 95 44 FC FF FF: mov word ptr [ebp - 0x3bc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 99: jmp 0x585da2c4
        __asm _emit 0xeb
        __asm _emit 0x99
        movzx eax, word ptr [ebp - 3bch]
        cmp eax, 1
        ; Exact mapped bytes 75 4D: jne 0x585da384
        __asm _emit 0x75
        __asm _emit 0x4d
        mov dword ptr [ebp - 3dch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585da352
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 3dch]
        add ecx, 1
        mov dword ptr [ebp - 3dch], ecx
        cmp dword ptr [ebp - 3dch], 8
        ; Exact mapped bytes 7D 24: jge 0x585da37f
        __asm _emit 0x7d
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 3dch]
        cmp dword ptr [ebp + edx*4 - 364h], 1
        ; Exact mapped bytes 75 12: jne 0x585da37d
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [ebp - 3dch]
        mov dword ptr [eax + 10bech], ecx
        ; Exact mapped bytes EB C4: jmp 0x585da343
        __asm _emit 0xeb
        __asm _emit 0xc4
        ; Exact mapped bytes E9 07 01 00 00: jmp 0x585da48b
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 425h], 0
        mov dword ptr [ebp - 3e0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585da3a6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 3e0h]
        add edx, 1
        mov dword ptr [ebp - 3e0h], edx
        cmp dword ptr [ebp - 3e0h], 6
        ; Exact mapped bytes 0F 8D D8 00 00 00: jge 0x585da48b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 21e24h]
        mov dword ptr [ebp - 578h], ecx
        mov edx, dword ptr [ebp - 3e0h]
        push edx
        mov ecx, dword ptr [ebp - 578h]
        ; Exact mapped bytes E8 89 82 FF FF: call 0x585d2660
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B2 83 FF FF: call 0x585d2790
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x585da486
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3e4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585da404
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 3e4h]
        add ecx, 1
        mov dword ptr [ebp - 3e4h], ecx
        cmp dword ptr [ebp - 3e4h], 8
        ; Exact mapped bytes 7D 77: jge 0x585da484
        __asm _emit 0x7d
        __asm _emit 0x77
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 21e24h]
        mov dword ptr [ebp - 5f4h], eax
        mov ecx, dword ptr [ebp - 3e0h]
        push ecx
        mov ecx, dword ptr [ebp - 5f4h]
        ; Exact mapped bytes E8 2F 82 FF FF: call 0x585d2660
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B8 CC EF FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xcc
        __asm _emit 0xef
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes 74 3F: je 0x585da47f
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [ebp - 3e4h]
        mov dword ptr [edx + 10bech], eax
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + 21e24h]
        mov dword ptr [ebp - 5f8h], edx
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 10bech]
        push ecx
        mov ecx, dword ptr [ebp - 5f8h]
        ; Exact mapped bytes E8 94 FB 00 00: call 0x585ea010
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 05: jmp 0x585da484
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 71 FF FF FF: jmp 0x585da3f5
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x585da48b
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 0C FF FF FF: jmp 0x585da397
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 07 01 00 00: jmp 0x585da597
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 420h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585da4ab
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 420h]
        add edx, 1
        mov dword ptr [ebp - 420h], edx
        cmp dword ptr [ebp - 420h], 8
        ; Exact mapped bytes 7D 13: jge 0x585da4c7
        __asm _emit 0x7d
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 420h]
        mov dword ptr [ebp + eax*4 - 344h], 0
        ; Exact mapped bytes EB D5: jmp 0x585da49c
        __asm _emit 0xeb
        __asm _emit 0xd5
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 1A EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x1a
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 3e8h], eax
        ; Exact mapped bytes EB 11: jmp 0x585da4eb
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes E8 4B 1C EB FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x1c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 3e8h], eax
        cmp dword ptr [ebp - 3e8h], 0
        ; Exact mapped bytes 74 27: je 0x585da51b
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes E8 51 71 EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x71
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x585da519
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes E8 A2 2A EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x2a
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp + eax*4 - 344h], 1
        ; Exact mapped bytes EB BF: jmp 0x585da4da
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov dword ptr [ebp - 3cch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585da536
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, 1
        mov dword ptr [ebp - 3cch], ecx
        cmp dword ptr [ebp - 3cch], 8
        ; Exact mapped bytes 7D 58: jge 0x585da597
        __asm _emit 0x7d
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 3cch]
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + edx*4 + 10c44h]
        cmp ecx, dword ptr [ebp - 418h]
        ; Exact mapped bytes 76 3B: jbe 0x585da595
        __asm _emit 0x76
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 3cch]
        cmp dword ptr [ebp + edx*4 - 344h], 0
        ; Exact mapped bytes 74 2B: je 0x585da595
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 3cch]
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + eax*4 + 10c44h]
        mov dword ptr [ebp - 418h], edx
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [ebp - 3cch]
        mov dword ptr [eax + 10bech], ecx
        ; Exact mapped bytes EB 90: jmp 0x585da527
        __asm _emit 0xeb
        __asm _emit 0x90
        mov edx, dword ptr [ebp - 388h]
        cmp dword ptr [edx + 21aa0h], 0
        ; Exact mapped bytes 75 0F: jne 0x585da5b5
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 388h]
        cmp dword ptr [eax + 21a9ch], 0
        ; Exact mapped bytes 74 67: je 0x585da61c
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 388h]
        cmp dword ptr [ecx + 21aach], 1
        ; Exact mapped bytes 75 20: jne 0x585da5e4
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 C3 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xc3
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DA 29 EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x29
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10bech], eax
        ; Exact mapped bytes EB 38: jmp 0x585da61c
        __asm _emit 0xeb
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D1 C3 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc3
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BA 29 EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x29
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x585da60c
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 388h]
        mov dword ptr [eax + 10bech], 1
        ; Exact mapped bytes EB 10: jmp 0x585da61c
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10bech], 0
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 4
        ; Exact mapped bytes 74 6C: je 0x585da69a
        __asm _emit 0x74
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 5
        ; Exact mapped bytes 74 5A: je 0x585da69a
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 6
        ; Exact mapped bytes 74 48: je 0x585da69a
        __asm _emit 0x74
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0ah
        ; Exact mapped bytes 74 36: je 0x585da69a
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0bh
        ; Exact mapped bytes 74 24: je 0x585da69a
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0eh
        ; Exact mapped bytes 74 12: je 0x585da69a
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0fh
        ; Exact mapped bytes 75 47: jne 0x585da6e1
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 18 EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x18
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 3ech], eax
        ; Exact mapped bytes EB 11: jmp 0x585da6be
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 3ech]
        ; Exact mapped bytes E8 78 1A EB FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x1a
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 3ech], eax
        cmp dword ptr [ebp - 3ech], 0
        ; Exact mapped bytes 74 1A: je 0x585da6e1
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 3ech]
        ; Exact mapped bytes E8 2E 7F FF FF: call 0x585d2600
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 3ech]
        ; Exact mapped bytes E8 82 DA F7 FF: call 0x58558160
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xda
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CC: jmp 0x585da6ad
        __asm _emit 0xeb
        __asm _emit 0xcc
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 17 EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x17
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 3f0h], eax
        ; Exact mapped bytes EB 11: jmp 0x585da705
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 3f0h]
        ; Exact mapped bytes E8 31 1A EB FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x1a
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 3f0h], eax
        cmp dword ptr [ebp - 3f0h], 0
        ; Exact mapped bytes 74 36: je 0x585da744
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 3f0h]
        ; Exact mapped bytes E8 97 28 EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x28
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 388h]
        cmp eax, dword ptr [ecx + 10bech]
        ; Exact mapped bytes 74 1B: je 0x585da742
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 3f0h]
        ; Exact mapped bytes E8 1E 6F EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x6f
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x585da742
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 410h], 0
        ; Exact mapped bytes EB 02: jmp 0x585da744
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B0: jmp 0x585da6f4
        __asm _emit 0xeb
        __asm _emit 0xb0
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 61 28 EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x28
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 5fch], eax
        mov edx, dword ptr [ebp - 5fch]
        and edx, 0fh
        shl edx, 4
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 10a4ch]
        and ecx, 0ffffff0fh
        or ecx, edx
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a4ch], ecx
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 10788h]
        and ecx, 0fh
        shl ecx, 8
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a4ch]
        and eax, 0fffff0ffh
        or eax, ecx
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a4ch], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 22108h]
        and eax, 1
        shl eax, 10h
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + 10a4ch]
        and edx, 0fffeffffh
        or edx, eax
        mov eax, dword ptr [ebp - 388h]
        mov dword ptr [eax + 10a4ch], edx
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + 22110h]
        and edx, 1
        shl edx, 11h
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 10a4ch]
        and ecx, 0fffdffffh
        or ecx, edx
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a4ch], ecx
        mov dword ptr [ebp - 3a8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585da832
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 3a8h]
        add eax, 1
        mov dword ptr [ebp - 3a8h], eax
        cmp dword ptr [ebp - 3a8h], 8
        ; Exact mapped bytes 7D 30: jge 0x585da86b
        __asm _emit 0x7d
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 3a8h]
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + ecx*4 + 10ca4h], 0
        mov eax, dword ptr [ebp - 3a8h]
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + eax*4 + 220e8h], 0
        ; Exact mapped bytes EB B8: jmp 0x585da823
        __asm _emit 0xeb
        __asm _emit 0xb8
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A 16 EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x16
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 394h], eax
        ; Exact mapped bytes EB 11: jmp 0x585da88f
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 A7 18 EB FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x18
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 394h], eax
        cmp dword ptr [ebp - 394h], 0
        ; Exact mapped bytes 0F 84 09 04 00 00: je 0x585daca5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 69 85 FF FF: call 0x585d2e10
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 604h], eax
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 F8 26 EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x26
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 388h]
        lea eax, [edx + eax*4 + 220e8h]
        mov dword ptr [ebp - 4ach], eax
        mov ecx, dword ptr [ebp - 4ach]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 600h], edx
        mov eax, dword ptr [ebp - 600h]
        add eax, dword ptr [ebp - 604h]
        mov ecx, dword ptr [ebp - 4ach]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 08 0D F8 FF: call 0x5855b600
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 60ch], eax
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 9E 26 EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x26
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 388h]
        lea eax, [edx + eax*4 + 10ca4h]
        mov dword ptr [ebp - 4b0h], eax
        mov ecx, dword ptr [ebp - 4b0h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 608h], edx
        mov eax, dword ptr [ebp - 608h]
        add eax, dword ptr [ebp - 60ch]
        mov ecx, dword ptr [ebp - 4b0h]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 8E 0C F8 FF: call 0x5855b5e0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4c0h], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10bb4h]
        mov dword ptr [ebp - 4bch], eax
        mov ecx, dword ptr [ebp - 4bch]
        add ecx, dword ptr [ebp - 4c0h]
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10bb4h], ecx
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 C3 7D FF FF: call 0x585d2750
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4c8h], eax
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 10bb8h]
        mov dword ptr [ebp - 4c4h], ecx
        mov edx, dword ptr [ebp - 4c4h]
        add edx, dword ptr [ebp - 4c8h]
        mov eax, dword ptr [ebp - 388h]
        mov dword ptr [eax + 10bb8h], edx
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 68 AC EB FF: call 0x58495630
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0xeb
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 4d0h], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10bbch]
        mov dword ptr [ebp - 4cch], eax
        mov ecx, dword ptr [ebp - 4cch]
        add ecx, dword ptr [ebp - 4d0h]
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10bbch], ecx
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 D4 0B F8 FF: call 0x5855b5e0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x0b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4d8h], eax
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 93 25 EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x25
        __asm _emit 0xeb
        __asm _emit 0xff
        imul eax, eax, 18h
        mov ecx, dword ptr [ebp - 388h]
        lea edx, [ecx + eax + 10af4h]
        mov dword ptr [ebp - 4b4h], edx
        mov eax, dword ptr [ebp - 4b4h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4d4h], ecx
        mov edx, dword ptr [ebp - 4d4h]
        add edx, dword ptr [ebp - 4d8h]
        mov eax, dword ptr [ebp - 4b4h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 F0 7C FF FF: call 0x585d2750
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4e0h], eax
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 3F 25 EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x25
        __asm _emit 0xeb
        __asm _emit 0xff
        imul ecx, eax, 18h
        mov edx, dword ptr [ebp - 388h]
        lea eax, [edx + ecx + 10af8h]
        mov dword ptr [ebp - 448h], eax
        mov ecx, dword ptr [ebp - 448h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4dch], edx
        mov eax, dword ptr [ebp - 4dch]
        add eax, dword ptr [ebp - 4e0h]
        mov ecx, dword ptr [ebp - 448h]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 7C AB EB FF: call 0x58495630
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xab
        __asm _emit 0xeb
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 4e8h], eax
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 E2 24 EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x24
        __asm _emit 0xeb
        __asm _emit 0xff
        imul edx, eax, 18h
        mov eax, dword ptr [ebp - 388h]
        lea ecx, [eax + edx + 10afch]
        mov dword ptr [ebp - 44ch], ecx
        mov edx, dword ptr [ebp - 44ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 4e4h], eax
        mov ecx, dword ptr [ebp - 4e4h]
        add ecx, dword ptr [ebp - 4e8h]
        mov edx, dword ptr [ebp - 44ch]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 5F 7C FF FF: call 0x585d2770
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 29 01 00 00: je 0x585dac42
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 4C 7C FF FF: call 0x585d2770
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 28h
        ; Exact mapped bytes 0F 8E C4 00 00 00: jle 0x585dabf1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 38 7C FF FF: call 0x585d2770
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 50h
        ; Exact mapped bytes 7E 63: jle 0x585daba0
        __asm _emit 0x7e
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 28 7C FF FF: call 0x585d2770
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 64h
        ; Exact mapped bytes 75 02: jne 0x585dab4f
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 4F: jmp 0x585dab9e
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 388h]
        mov cl, byte ptr [eax + 10bb0h]
        add cl, 1
        mov edx, dword ptr [ebp - 388h]
        mov byte ptr [edx + 10bb0h], cl
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 3B 24 EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x24
        __asm _emit 0xeb
        __asm _emit 0xff
        imul eax, eax, 18h
        mov ecx, dword ptr [ebp - 388h]
        lea edx, [ecx + eax + 10af0h]
        mov dword ptr [ebp - 450h], edx
        mov eax, dword ptr [ebp - 450h]
        mov cl, byte ptr [eax]
        add cl, 1
        mov edx, dword ptr [ebp - 450h]
        mov byte ptr [edx], cl
        ; Exact mapped bytes EB 4F: jmp 0x585dabef
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 388h]
        mov cl, byte ptr [eax + 10bb1h]
        add cl, 1
        mov edx, dword ptr [ebp - 388h]
        mov byte ptr [edx + 10bb1h], cl
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 EA 23 EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x23
        __asm _emit 0xeb
        __asm _emit 0xff
        imul eax, eax, 18h
        mov ecx, dword ptr [ebp - 388h]
        lea edx, [ecx + eax + 10af1h]
        mov dword ptr [ebp - 454h], edx
        mov eax, dword ptr [ebp - 454h]
        mov cl, byte ptr [eax]
        add cl, 1
        mov edx, dword ptr [ebp - 454h]
        mov byte ptr [edx], cl
        ; Exact mapped bytes EB 4F: jmp 0x585dac40
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 388h]
        mov cl, byte ptr [eax + 10bb2h]
        add cl, 1
        mov edx, dword ptr [ebp - 388h]
        mov byte ptr [edx + 10bb2h], cl
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 99 23 EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x23
        __asm _emit 0xeb
        __asm _emit 0xff
        imul eax, eax, 18h
        mov ecx, dword ptr [ebp - 388h]
        lea edx, [ecx + eax + 10af2h]
        mov dword ptr [ebp - 458h], edx
        mov eax, dword ptr [ebp - 458h]
        mov cl, byte ptr [eax]
        add cl, 1
        mov edx, dword ptr [ebp - 458h]
        mov byte ptr [edx], cl
        ; Exact mapped bytes EB 4F: jmp 0x585dac91
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 388h]
        mov cl, byte ptr [eax + 10bb3h]
        add cl, 1
        mov edx, dword ptr [ebp - 388h]
        mov byte ptr [edx + 10bb3h], cl
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 48 23 EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x23
        __asm _emit 0xeb
        __asm _emit 0xff
        imul eax, eax, 18h
        mov ecx, dword ptr [ebp - 388h]
        lea edx, [ecx + eax + 10af3h]
        mov dword ptr [ebp - 45ch], edx
        mov eax, dword ptr [ebp - 45ch]
        mov cl, byte ptr [eax]
        add cl, 1
        mov edx, dword ptr [ebp - 45ch]
        mov byte ptr [edx], cl
        mov eax, dword ptr [ebp - 39ch]
        add eax, 1
        mov dword ptr [ebp - 39ch], eax
        ; Exact mapped bytes E9 D9 FB FF FF: jmp 0x585da87e
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3a8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585dacc0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 3a8h]
        add ecx, 1
        mov dword ptr [ebp - 3a8h], ecx
        cmp dword ptr [ebp - 3a8h], 8
        ; Exact mapped bytes 0F 8D 85 00 00 00: jge 0x585dad52
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        cmp dword ptr [edx + 21a88h], 0
        ; Exact mapped bytes 74 49: je 0x585dad25
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 21e20h]
        ; Exact mapped bytes E8 D3 9C EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x9c
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4C 9D EA FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x9d
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [eax + 104h], 0
        ; Exact mapped bytes 74 28: je 0x585dad25
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 3a8h]
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [ebp - 3a8h]
        mov esi, dword ptr [ebp - 388h]
        mov eax, dword ptr [esi + eax*4 + 10ca4h]
        mov dword ptr [edx + ecx*4 + 10ca4h], eax
        ; Exact mapped bytes EB 28: jmp 0x585dad4d
        __asm _emit 0xeb
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 3a8h]
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + ecx*4 + 10ca4h]
        shl eax, 1
        mov ecx, dword ptr [ebp - 3a8h]
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + ecx*4 + 10ca4h], eax
        ; Exact mapped bytes E9 5F FF FF FF: jmp 0x585dacb1
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 4
        ; Exact mapped bytes 74 6C: je 0x585dadd0
        __asm _emit 0x74
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 5
        ; Exact mapped bytes 74 5A: je 0x585dadd0
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 6
        ; Exact mapped bytes 74 48: je 0x585dadd0
        __asm _emit 0x74
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0ah
        ; Exact mapped bytes 74 36: je 0x585dadd0
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0bh
        ; Exact mapped bytes 74 24: je 0x585dadd0
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0eh
        ; Exact mapped bytes 74 12: je 0x585dadd0
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0fh
        ; Exact mapped bytes 75 70: jne 0x585dae40
        __asm _emit 0x75
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [ebp - 3a8h]
        cmp eax, dword ptr [edx + 10bech]
        ; Exact mapped bytes 75 5C: jne 0x585dae40
        __asm _emit 0x75
        __asm _emit 0x5c
        cmp dword ptr [ebp - 410h], 0
        ; Exact mapped bytes 74 53: je 0x585dae40
        __asm _emit 0x74
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 3a8h]
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + ecx*4 + 10ca4h]
        mov dword ptr [ebp - 460h], eax
        ; Exact mapped bytes F2 0F 2A 85 A0 FB FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x460]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 460h]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 04 CD 70 4D 89 58: addsd xmm0, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 05 A8 5A 89 58: mulsd xmm0, qword ptr [0x58895aa8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 67 25 00: call 0x588315a0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x67
        __asm _emit 0x25
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3a8h]
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + edx*4 + 10ca4h], eax
        mov dword ptr [ebp - 38ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585dae5b
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 38ch]
        add edx, 1
        mov dword ptr [ebp - 38ch], edx
        cmp dword ptr [ebp - 38ch], 8
        ; Exact mapped bytes 7D 62: jge 0x585daec6
        __asm _emit 0x7d
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 38ch]
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + eax*4 + 10bcch]
        xor edx, 55555555h
        mov dword ptr [ebp - 4ech], edx
        imul eax, dword ptr [ebp - 38ch], 18h
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ebp - 4ech]
        mov dword ptr [ecx + eax + 10b00h], edx
        imul eax, dword ptr [ebp - 38ch], 18h
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ebp - 38ch]
        mov esi, dword ptr [ebp - 388h]
        mov edx, dword ptr [esi + edx*4 + 10c44h]
        mov dword ptr [ecx + eax + 10b04h], edx
        ; Exact mapped bytes EB 86: jmp 0x585dae4c
        __asm _emit 0xeb
        __asm _emit 0x86
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, byte ptr [eax + 20f3ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x585daf8a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [edx + 20fb8h]
        sub ecx, dword ptr [eax + 20fb0h]
        mov edx, dword ptr [ebp - 388h]
        add ecx, dword ptr [edx + 20fb4h]
        push ecx
        push 0ffffh
        push 1
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 DE 99 00 00: call 0x585e48f0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 388h]
        cmp dword ptr [edx + ecx + 20fa0h], 0
        ; Exact mapped bytes 75 18: jne 0x585daf43
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 388h]
        cmp dword ptr [ecx + eax + 20fa0h], 0
        ; Exact mapped bytes 74 22: je 0x585daf65
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10678h]
        and eax, 0ffffff00h
        or eax, 10h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10678h], eax
        ; Exact mapped bytes EB 20: jmp 0x585daf85
        __asm _emit 0xeb
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10678h]
        and eax, 0ffffff00h
        or eax, 20h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10678h], eax
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x585db061
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        cmp dword ptr [edx + 10bech], -1
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x585db040
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 10678h]
        and ecx, 400h
        ; Exact mapped bytes 74 22: je 0x585dafd3
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10678h]
        and eax, 0ffffff0fh
        or eax, 20h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10678h], eax
        ; Exact mapped bytes EB 6B: jmp 0x585db03e
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10678h]
        and eax, 300h
        ; Exact mapped bytes 74 58: je 0x585db03e
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + 10bech]
        cmp edx, dword ptr [ebp - 398h]
        ; Exact mapped bytes 75 23: jne 0x585db01d
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 10678h]
        and ecx, 0ffffff0fh
        or ecx, 10h
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10678h], ecx
        ; Exact mapped bytes EB 21: jmp 0x585db03e
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 10678h]
        and ecx, 0ffffff0fh
        or ecx, 20h
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10678h], ecx
        ; Exact mapped bytes EB 21: jmp 0x585db061
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 10678h]
        and ecx, 0ffffff0fh
        or ecx, 20h
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10678h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 B9 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb9
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CD 13 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x13
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E6 99 EA FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x99
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        shr eax, 0ah
        and eax, 3fffffh
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 1091ch], eax
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 4
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x585db142
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 5
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x585db142
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 6
        ; Exact mapped bytes 74 74: je 0x585db142
        __asm _emit 0x74
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0ah
        ; Exact mapped bytes 74 62: je 0x585db142
        __asm _emit 0x74
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0bh
        ; Exact mapped bytes 74 50: je 0x585db142
        __asm _emit 0x74
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0eh
        ; Exact mapped bytes 74 3E: je 0x585db142
        __asm _emit 0x74
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0fh
        ; Exact mapped bytes 74 2C: je 0x585db142
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 398h]
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + ecx*4 + 10c64h]
        xor eax, 55555555h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 F4 2C 18 00: call 0x5875de30
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x2c
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 80 05 00 00: jmp 0x585db6c2
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 4
        ; Exact mapped bytes 0F 84 0E 01 00 00: je 0x585db266
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 6
        ; Exact mapped bytes 0F 84 F8 00 00 00: je 0x585db266
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0bh
        ; Exact mapped bytes 0F 84 E2 00 00 00: je 0x585db266
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0eh
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x585db266
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0ah
        ; Exact mapped bytes 0F 84 B6 00 00 00: je 0x585db266
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 398h]
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + edx*4 + 10c64h]
        xor ecx, 55555555h
        mov dword ptr [ebp - 4f0h], ecx
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 D6 1D EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x1d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + eax*4 + 10c24h]
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 4f4h], eax
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 3F 12 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x12
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D8 97 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x97
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [eax + 68h]
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 4fch], eax
        mov eax, dword ptr [ebp - 4f0h]
        cdq
        idiv dword ptr [ebp - 4f4h]
        mov dword ptr [ebp - 4f8h], eax
        mov edx, dword ptr [ebp - 4f8h]
        mov dword ptr [ebp - 430h], edx
        mov eax, dword ptr [ebp - 430h]
        imul eax, dword ptr [ebp - 4fch]
        mov dword ptr [ebp - 430h], eax
        mov ecx, dword ptr [ebp - 430h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 D0 2B 18 00: call 0x5875de30
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x2b
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 5C 04 00 00: jmp 0x585db6c2
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 398h]
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + edx*4 + 10c64h]
        xor ecx, 55555555h
        mov dword ptr [ebp - 434h], ecx
        ; Exact mapped bytes F3 0F 10 05 50 4D 89 58: movss xmm0, dword ptr [0x58894d50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 85 5C FC FF FF: movss dword ptr [ebp - 0x3a4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 A0 11 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x11
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 39 97 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x97
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x585db369
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 7A 11 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x11
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 13 97 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x97
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
        cmp edx, 2
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x585db369
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 54 11 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x11
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 ED 96 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x96
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
        cmp ecx, 3
        ; Exact mapped bytes 74 66: je 0x585db369
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 32 11 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x11
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CB 96 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x96
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 4
        ; Exact mapped bytes 74 44: je 0x585db369
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 10 11 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x11
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A9 96 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x96
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
        cmp edx, 8
        ; Exact mapped bytes 74 22: je 0x585db369
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 EE 10 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x10
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 87 96 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x96
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
        cmp ecx, 5
        ; Exact mapped bytes 75 15: jne 0x585db37e
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes F3 0F 10 05 50 4D 89 58: movss xmm0, dword ptr [0x58894d50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 85 5C FC FF FF: movss dword ptr [ebp - 0x3a4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A7 02 00 00: jmp 0x585db625
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 B7 10 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x10
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 50 96 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x96
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], 3a98h
        ; Exact mapped bytes 73 15: jae 0x585db3ae
        __asm _emit 0x73
        __asm _emit 0x15
        ; Exact mapped bytes F3 0F 10 05 80 DA 8A 58: movss xmm0, dword ptr [0x588ada80]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0xda
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 85 5C FC FF FF: movss dword ptr [ebp - 0x3a4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 77 02 00 00: jmp 0x585db625
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 87 10 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x10
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 20 96 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], 3e80h
        ; Exact mapped bytes 73 15: jae 0x585db3de
        __asm _emit 0x73
        __asm _emit 0x15
        ; Exact mapped bytes F3 0F 10 05 7C DA 8A 58: movss xmm0, dword ptr [0x588ada7c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x7c
        __asm _emit 0xda
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 85 5C FC FF FF: movss dword ptr [ebp - 0x3a4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 47 02 00 00: jmp 0x585db625
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 57 10 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x10
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F0 95 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x95
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], 4268h
        ; Exact mapped bytes 73 15: jae 0x585db40e
        __asm _emit 0x73
        __asm _emit 0x15
        ; Exact mapped bytes F3 0F 10 05 78 DA 8A 58: movss xmm0, dword ptr [0x588ada78]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0xda
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 85 5C FC FF FF: movss dword ptr [ebp - 0x3a4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 17 02 00 00: jmp 0x585db625
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 27 10 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x10
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C0 95 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x95
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], 4650h
        ; Exact mapped bytes 73 15: jae 0x585db43e
        __asm _emit 0x73
        __asm _emit 0x15
        ; Exact mapped bytes F3 0F 10 05 74 DA 8A 58: movss xmm0, dword ptr [0x588ada74]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x74
        __asm _emit 0xda
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 85 5C FC FF FF: movss dword ptr [ebp - 0x3a4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E7 01 00 00: jmp 0x585db625
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 F7 0F EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 90 95 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x95
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], 4a38h
        ; Exact mapped bytes 73 15: jae 0x585db46e
        __asm _emit 0x73
        __asm _emit 0x15
        ; Exact mapped bytes F3 0F 10 05 9C 5A 89 58: movss xmm0, dword ptr [0x58895a9c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 85 5C FC FF FF: movss dword ptr [ebp - 0x3a4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B7 01 00 00: jmp 0x585db625
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 C7 0F EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 60 95 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x95
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], 4e20h
        ; Exact mapped bytes 73 15: jae 0x585db49e
        __asm _emit 0x73
        __asm _emit 0x15
        ; Exact mapped bytes F3 0F 10 05 CC 52 89 58: movss xmm0, dword ptr [0x588952cc]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 85 5C FC FF FF: movss dword ptr [ebp - 0x3a4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 87 01 00 00: jmp 0x585db625
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 97 0F EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 30 95 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x95
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], 5208h
        ; Exact mapped bytes 73 15: jae 0x585db4ce
        __asm _emit 0x73
        __asm _emit 0x15
        ; Exact mapped bytes F3 0F 10 05 70 DA 8A 58: movss xmm0, dword ptr [0x588ada70]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0xda
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 85 5C FC FF FF: movss dword ptr [ebp - 0x3a4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 57 01 00 00: jmp 0x585db625
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 67 0F EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 00 95 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x95
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], 55f0h
        ; Exact mapped bytes 73 15: jae 0x585db4fe
        __asm _emit 0x73
        __asm _emit 0x15
        ; Exact mapped bytes F3 0F 10 05 98 5A 89 58: movss xmm0, dword ptr [0x58895a98]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 85 5C FC FF FF: movss dword ptr [ebp - 0x3a4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 27 01 00 00: jmp 0x585db625
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 37 0F EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D0 94 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x94
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], 59d8h
        ; Exact mapped bytes 73 15: jae 0x585db52e
        __asm _emit 0x73
        __asm _emit 0x15
        ; Exact mapped bytes F3 0F 10 05 6C DA 8A 58: movss xmm0, dword ptr [0x588ada6c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x6c
        __asm _emit 0xda
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 85 5C FC FF FF: movss dword ptr [ebp - 0x3a4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F7 00 00 00: jmp 0x585db625
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 07 0F EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A0 94 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x94
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], 5dc0h
        ; Exact mapped bytes 73 15: jae 0x585db55e
        __asm _emit 0x73
        __asm _emit 0x15
        ; Exact mapped bytes F3 0F 10 05 C8 52 89 58: movss xmm0, dword ptr [0x588952c8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 85 5C FC FF FF: movss dword ptr [ebp - 0x3a4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C7 00 00 00: jmp 0x585db625
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 D7 0E EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x0e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 70 94 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], 61a8h
        ; Exact mapped bytes 73 15: jae 0x585db58e
        __asm _emit 0x73
        __asm _emit 0x15
        ; Exact mapped bytes F3 0F 10 05 68 DA 8A 58: movss xmm0, dword ptr [0x588ada68]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0xda
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 85 5C FC FF FF: movss dword ptr [ebp - 0x3a4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x585db625
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 A7 0E EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x0e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 40 94 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x94
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], 6590h
        ; Exact mapped bytes 73 12: jae 0x585db5bb
        __asm _emit 0x73
        __asm _emit 0x12
        ; Exact mapped bytes F3 0F 10 05 C4 52 89 58: movss xmm0, dword ptr [0x588952c4]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 85 5C FC FF FF: movss dword ptr [ebp - 0x3a4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 6A: jmp 0x585db625
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 7A 0E EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x0e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 13 94 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x94
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], 6978h
        ; Exact mapped bytes 73 12: jae 0x585db5e8
        __asm _emit 0x73
        __asm _emit 0x12
        ; Exact mapped bytes F3 0F 10 05 64 DA 8A 58: movss xmm0, dword ptr [0x588ada64]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0xda
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 85 5C FC FF FF: movss dword ptr [ebp - 0x3a4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 3D: jmp 0x585db625
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 4D 0E EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x0e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E6 93 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x93
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], 6d60h
        ; Exact mapped bytes 73 12: jae 0x585db615
        __asm _emit 0x73
        __asm _emit 0x12
        ; Exact mapped bytes F3 0F 10 05 C0 52 89 58: movss xmm0, dword ptr [0x588952c0]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 85 5C FC FF FF: movss dword ptr [ebp - 0x3a4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 10: jmp 0x585db625
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes F3 0F 10 05 60 DA 8A 58: movss xmm0, dword ptr [0x588ada60]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0xda
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 85 5C FC FF FF: movss dword ptr [ebp - 0x3a4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 434h], 0
        ; Exact mapped bytes 7D 0A: jge 0x585db638
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov dword ptr [ebp - 434h], 0
        mov ecx, dword ptr [ebp - 398h]
        mov esi, dword ptr [ebp - 388h]
        mov eax, dword ptr [ebp - 434h]
        xor edx, edx
        div dword ptr [esi + ecx*4 + 10c24h]
        mov esi, eax
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 E0 0D EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x0d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 79 93 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x93
        __asm _emit 0xea
        __asm _emit 0xff
        imul esi, dword ptr [eax + 68h]
        mov dword ptr [ebp - 464h], esi
        ; Exact mapped bytes F2 0F 2A 85 9C FB FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x464]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 464h]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 04 D5 70 4D 89 58: addsd xmm0, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 E4 F9 FF FF: movsd qword ptr [ebp - 0x61c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 E4 F9 FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0x61c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 85 5C FC FF FF: mulss xmm0, dword ptr [ebp - 0x3a4]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 2C C0: cvttss2si eax, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        mov dword ptr [ebp - 500h], eax
        mov ecx, dword ptr [ebp - 500h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 6F 27 18 00: call 0x5875de30
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x27
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 23 71 FF FF: call 0x585d27f0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 8D 8E 03 00 00: jge 0x585dba64
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10bech]
        cmp eax, dword ptr [ebp - 398h]
        ; Exact mapped bytes 0F 85 AA 01 00 00: jne 0x585db898
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 4
        ; Exact mapped bytes 0F 84 46 01 00 00: je 0x585db84a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 5
        ; Exact mapped bytes 0F 84 30 01 00 00: je 0x585db84a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 6
        ; Exact mapped bytes 0F 84 1A 01 00 00: je 0x585db84a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0ah
        ; Exact mapped bytes 0F 84 04 01 00 00: je 0x585db84a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0bh
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x585db84a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0eh
        ; Exact mapped bytes 0F 84 D8 00 00 00: je 0x585db84a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0fh
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x585db84a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 5D 70 FF FF: call 0x585d27f0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a28h], eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 2A 73 FF FF: call 0x585d2ae0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 D4 C1 00 00: call 0x585e79a0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 68 0C EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 01 92 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x92
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 75 59: jne 0x585db848
        __asm _emit 0x75
        __asm _emit 0x59
        mov ecx, dword ptr [ebp - 388h]
        cmp dword ptr [ecx + 21a88h], 0
        ; Exact mapped bytes 75 4A: jne 0x585db848
        __asm _emit 0x75
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a28h]
        shl eax, 3
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a28h], eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 B2 72 FF FF: call 0x585d2ae0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        shl eax, 3
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 59 C1 00 00: call 0x585e79a0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 49: jmp 0x585db893
        __asm _emit 0xeb
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 9B 6F FF FF: call 0x585d27f0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        imul eax, dword ptr [eax], 64h
        cdq
        mov ecx, 2710h
        idiv ecx
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a28h], eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 67 72 FF FF: call 0x585d2ae0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        imul eax, eax, 64h
        cdq
        mov ecx, 2710h
        idiv ecx
        push eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 0E C1 00 00: call 0x585e79a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 CA 01 00 00: jmp 0x585dba62
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 4
        ; Exact mapped bytes 0F 84 C6 00 00 00: je 0x585db974
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 5
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x585db974
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 6
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x585db974
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0ah
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x585db974
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0bh
        ; Exact mapped bytes 74 72: je 0x585db974
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0eh
        ; Exact mapped bytes 74 60: je 0x585db974
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0fh
        ; Exact mapped bytes 74 4E: je 0x585db974
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 BF 6E FF FF: call 0x585d27f0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        imul eax, dword ptr [eax], 5ah
        cdq
        mov ecx, 2710h
        idiv ecx
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a28h], eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 8B 71 FF FF: call 0x585d2ae0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        imul eax, eax, 5ah
        cdq
        mov ecx, 2710h
        idiv ecx
        push eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 32 C0 00 00: call 0x585e79a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 EE 00 00 00: jmp 0x585dba62
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 4
        ; Exact mapped bytes 74 48: je 0x585db9ce
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 6
        ; Exact mapped bytes 74 36: je 0x585db9ce
        __asm _emit 0x74
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0bh
        ; Exact mapped bytes 74 24: je 0x585db9ce
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0eh
        ; Exact mapped bytes 74 12: je 0x585db9ce
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0ah
        ; Exact mapped bytes 75 4B: jne 0x585dba19
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 17 6E FF FF: call 0x585d27f0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        imul eax, dword ptr [eax], 55h
        cdq
        mov ecx, 2710h
        idiv ecx
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a28h], eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 E3 70 FF FF: call 0x585d2ae0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        imul eax, eax, 55h
        cdq
        mov ecx, 2710h
        idiv ecx
        push eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 8A BF 00 00: call 0x585e79a0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 49: jmp 0x585dba62
        __asm _emit 0xeb
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 CC 6D FF FF: call 0x585d27f0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        imul eax, dword ptr [eax], 37h
        cdq
        mov ecx, 2710h
        idiv ecx
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a28h], eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 98 70 FF FF: call 0x585d2ae0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        imul eax, eax, 37h
        cdq
        mov ecx, 2710h
        idiv ecx
        push eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 3F BF 00 00: call 0x585e79a0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 20: jmp 0x585dba84
        __asm _emit 0xeb
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a28h], 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 1D BF 00 00: call 0x585e79a0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, byte ptr [eax + 20f3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 68: je 0x585dbafd
        __asm _emit 0x74
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 388h]
        cmp dword ptr [edx + 21a84h], 1
        ; Exact mapped bytes 74 0F: je 0x585dbab3
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 388h]
        cmp dword ptr [eax + 21a84h], 2
        ; Exact mapped bytes 75 4A: jne 0x585dbafd
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 388h]
        imul eax, dword ptr [ecx + 10a28h], 5
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a28h], eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 FE 6F FF FF: call 0x585d2ae0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        imul eax, eax, 5
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 A4 BE 00 00: call 0x585e79a0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 10a28h]
        push ecx
        ; Exact mapped bytes E8 FE 54 27 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x54
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a28h], eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 B5 6F FF FF: call 0x585d2ae0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 DC 54 27 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x54
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        push eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 5E BE 00 00: call 0x585e79a0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 10bech]
        cmp ecx, dword ptr [ebp - 398h]
        ; Exact mapped bytes 0F 85 72 04 00 00: jne 0x585dbfcd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        movzx eax, byte ptr [edx + 20f3ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 5D 04 00 00: jne 0x585dbfcd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 398h]
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + ecx*4 + 10bcch]
        xor eax, 55555555h
        mov dword ptr [ebp - 438h], eax
        ; Exact mapped bytes 7E 26: jle 0x585dbbb6
        __asm _emit 0x7e
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ebp - 438h]
        cmp edx, dword ptr [ecx + 10bf0h]
        ; Exact mapped bytes 76 12: jbe 0x585dbbb6
        __asm _emit 0x76
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [ebp - 438h]
        mov dword ptr [eax + 10bf0h], ecx
        ; Exact mapped bytes 83 3D 6C 20 96 58 00: cmp dword ptr [0x5896206c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 05 01 00 00: je 0x585dbcc8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 80h
        push 2
        push 0
        push 0
        push 40000000h
        push 588acf9ch
        ; Exact mapped bytes E8 21 77 1D 00: call 0x587b3300
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x77
        __asm _emit 0x1d
        __asm _emit 0x00
        ; Exact mapped bytes A3 70 20 96 58: mov dword ptr [0x58962070], eax
        __asm _emit 0xa3
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 398h]
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + edx*4 + 10bcch]
        xor ecx, 55555555h
        imul eax, ecx, 3ch
        mov ecx, dword ptr [ebp - 388h]
        xor edx, edx
        div dword ptr [ecx + 10bf0h]
        add eax, 28h
        mov edx, dword ptr [ebp - 388h]
        imul eax, dword ptr [edx + 10a28h]
        xor edx, edx
        mov ecx, 64h
        div ecx
        push eax
        mov edx, dword ptr [ebp - 398h]
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + edx*4 + 10bcch]
        xor ecx, 55555555h
        imul eax, ecx, 3ch
        mov ecx, dword ptr [ebp - 388h]
        xor edx, edx
        div dword ptr [ecx + 10bf0h]
        add eax, 28h
        push eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a28h]
        push eax
        push 588acfach
        lea ecx, [ebp - 224h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        lea edx, [ebp - 224h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 504h], eax
        ; Exact mapped bytes A1 70 20 96 58: mov eax, dword ptr [0x58962070]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 508h], eax
        push 0
        lea ecx, [ebp - 634h]
        push ecx
        mov edx, dword ptr [ebp - 504h]
        push edx
        lea eax, [ebp - 224h]
        push eax
        mov ecx, dword ptr [ebp - 508h]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 70 20 96 58: mov edx, dword ptr [0x58962070]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 4
        ; Exact mapped bytes 0F 84 66 02 00 00: je 0x585dbf44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 5
        ; Exact mapped bytes 0F 84 50 02 00 00: je 0x585dbf44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 6
        ; Exact mapped bytes 0F 84 3A 02 00 00: je 0x585dbf44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0ah
        ; Exact mapped bytes 0F 84 24 02 00 00: je 0x585dbf44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0bh
        ; Exact mapped bytes 0F 84 0E 02 00 00: je 0x585dbf44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0dh
        ; Exact mapped bytes 0F 84 F8 01 00 00: je 0x585dbf44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 10h
        ; Exact mapped bytes 0F 84 E2 01 00 00: je 0x585dbf44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0eh
        ; Exact mapped bytes 0F 84 CC 01 00 00: je 0x585dbf44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0fh
        ; Exact mapped bytes 0F 84 B6 01 00 00: je 0x585dbf44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, byte ptr [eax + 20f3ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 9C 01 00 00: jne 0x585dbf3f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        cmp dword ptr [edx + 10bf0h], 0
        ; Exact mapped bytes 0F 86 89 01 00 00: jbe 0x585dbf3f
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        cmp dword ptr [eax + 21a88h], 0
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x585dbe99
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        mov ecx, dword ptr [ecx + 21e20h]
        ; Exact mapped bytes E8 E6 8B EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x8b
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5F 8C EA FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x8c
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [eax + 104h], 3
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x585dbe94
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 398h]
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + edx*4 + 10bcch]
        xor ecx, 55555555h
        imul eax, ecx, 28h
        mov ecx, dword ptr [ebp - 388h]
        xor edx, edx
        div dword ptr [ecx + 10bf0h]
        add eax, 3ch
        mov edx, dword ptr [ebp - 388h]
        imul eax, dword ptr [edx + 10a28h]
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a28h], eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 96 6C FF FF: call 0x585d2ae0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov edx, dword ptr [ebp - 398h]
        mov eax, dword ptr [ebp - 388h]
        mov edx, dword ptr [eax + edx*4 + 10bcch]
        xor edx, 55555555h
        imul eax, edx, 28h
        mov esi, dword ptr [ebp - 388h]
        xor edx, edx
        div dword ptr [esi + 10bf0h]
        add eax, 3ch
        imul eax, ecx
        xor edx, edx
        mov ecx, 64h
        div ecx
        push eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 0D BB 00 00: call 0x585e79a0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x585dbf3f
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 398h]
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + edx*4 + 10bcch]
        xor ecx, 55555555h
        imul eax, ecx, 28h
        mov ecx, dword ptr [ebp - 388h]
        xor edx, edx
        div dword ptr [ecx + 10bf0h]
        add eax, 3ch
        mov edx, dword ptr [ebp - 388h]
        imul eax, dword ptr [edx + 10a28h]
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a28h], eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 EB 6B FF FF: call 0x585d2ae0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov edx, dword ptr [ebp - 398h]
        mov eax, dword ptr [ebp - 388h]
        mov edx, dword ptr [eax + edx*4 + 10bcch]
        xor edx, 55555555h
        imul eax, edx, 28h
        mov esi, dword ptr [ebp - 388h]
        xor edx, edx
        div dword ptr [esi + 10bf0h]
        add eax, 3ch
        imul eax, ecx
        xor edx, edx
        mov ecx, 64h
        div ecx
        push eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 62 BA 00 00: call 0x585e79a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x585dbfc8
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 410h], 0
        ; Exact mapped bytes 74 7B: je 0x585dbfc8
        __asm _emit 0x74
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 388h]
        imul eax, dword ptr [edx + 10a28h], 0ch
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a28h], eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 6D 6B FF FF: call 0x585d2ae0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        imul edx, eax, 0ch
        push edx
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 1C BA 00 00: call 0x585e79a0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        mov eax, dword ptr [eax + 10a28h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a28h], eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 2F 6B FF FF: call 0x585d2ae0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 D9 B9 00 00: call 0x585e79a0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x585dc06d
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 6C 20 96 58 00: cmp dword ptr [0x5896206c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x585dc06d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 80h
        push 2
        push 0
        push 0
        push 40000000h
        push 588acfd0h
        ; Exact mapped bytes E8 0A 73 1D 00: call 0x587b3300
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x73
        __asm _emit 0x1d
        __asm _emit 0x00
        ; Exact mapped bytes A3 70 20 96 58: mov dword ptr [0x58962070], eax
        __asm _emit 0xa3
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a28h]
        push eax
        push 588acfe0h
        lea ecx, [ebp - 324h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [ebp - 324h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 50ch], eax
        ; Exact mapped bytes A1 70 20 96 58: mov eax, dword ptr [0x58962070]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 510h], eax
        push 0
        lea ecx, [ebp - 614h]
        push ecx
        mov edx, dword ptr [ebp - 50ch]
        push edx
        lea eax, [ebp - 324h]
        push eax
        mov ecx, dword ptr [ebp - 510h]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 70 20 96 58: mov edx, dword ptr [0x58962070]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 78 67 FF FF: call 0x585d27f0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov eax, 4
        imul edi, eax, 0
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 63 67 FF FF: call 0x585d27f0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [esi + edi + 8]
        add edx, dword ptr [eax + ecx + 8]
        mov dword ptr [ebp - 490h], edx
        ; Exact mapped bytes 74 56: je 0x585dc0fb
        __asm _emit 0x74
        __asm _emit 0x56
        mov dword ptr [ebp - 38ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585dc0c0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 38ch]
        add eax, 1
        mov dword ptr [ebp - 38ch], eax
        cmp dword ptr [ebp - 38ch], 3
        ; Exact mapped bytes 7D 32: jge 0x585dc0fb
        __asm _emit 0x7d
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 1C 67 FF FF: call 0x585d27f0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38ch]
        imul eax, dword ptr [eax + ecx*4 + 8], 64h
        xor edx, edx
        div dword ptr [ebp - 490h]
        mov edx, dword ptr [ebp - 388h]
        add edx, dword ptr [ebp - 38ch]
        mov byte ptr [edx + 10a30h], al
        ; Exact mapped bytes EB B6: jmp 0x585dc0b1
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov eax, dword ptr [ebp - 388h]
        cmp dword ptr [eax + 10ae4h], 0
        ; Exact mapped bytes 74 15: je 0x585dc11f
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, 1
        shl ecx, 1
        mov edx, dword ptr [ebp - 388h]
        mov byte ptr [edx + ecx + 10a30h], 64h
        push 2
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 B4 69 FF FF: call 0x585d2ae0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        push 3
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 A5 69 FF FF: call 0x585d2ae0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, eax
        push esi
        push 5
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 55 B8 00 00: call 0x585e79a0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 5
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 87 69 FF FF: call 0x585d2ae0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 6B: je 0x585dc1c8
        __asm _emit 0x74
        __asm _emit 0x6b
        mov dword ptr [ebp - 38ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585dc178
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 38ch]
        add eax, 1
        mov dword ptr [ebp - 38ch], eax
        cmp dword ptr [ebp - 38ch], 3
        ; Exact mapped bytes 7D 45: jge 0x585dc1c6
        __asm _emit 0x7d
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 38ch]
        add ecx, 2
        push ecx
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 4A 69 FF FF: call 0x585d2ae0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        imul esi, eax, 64h
        push 5
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 3A 69 FF FF: call 0x585d2ae0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        push eax
        mov edx, dword ptr [ebp - 38ch]
        add edx, 2
        push edx
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 DD B7 00 00: call 0x585e79a0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB A3: jmp 0x585dc169
        __asm _emit 0xeb
        __asm _emit 0xa3
        ; Exact mapped bytes EB 3E: jmp 0x585dc206
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov dword ptr [ebp - 38ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585dc1e3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 38ch]
        add eax, 1
        mov dword ptr [ebp - 38ch], eax
        cmp dword ptr [ebp - 38ch], 3
        ; Exact mapped bytes 7D 1A: jge 0x585dc206
        __asm _emit 0x7d
        __asm _emit 0x1a
        push 0
        mov ecx, dword ptr [ebp - 38ch]
        add ecx, 2
        push ecx
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 9D B7 00 00: call 0x585e79a0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CE: jmp 0x585dc1d4
        __asm _emit 0xeb
        __asm _emit 0xce
        push 0bh
        push 0
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 6B 51 18 00: call 0x58761380
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x51
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 3f4h], eax
        cmp dword ptr [ebp - 3f4h], 0
        ; Exact mapped bytes 74 3F: je 0x585dc263
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 A7 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xa7
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 514h], eax
        push 0bh
        push 1
        mov ecx, dword ptr [ebp - 514h]
        ; Exact mapped bytes E8 3C 51 18 00: call 0x58761380
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x51
        __asm _emit 0x18
        __asm _emit 0x00
        imul eax, eax, 64h
        cdq
        idiv dword ptr [ebp - 3f4h]
        mov edx, 1
        imul ecx, edx, 0
        mov edx, dword ptr [ebp - 388h]
        mov byte ptr [edx + ecx + 10a34h], al
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 A7 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xa7
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 518h], eax
        push 0ch
        push 0
        mov ecx, dword ptr [ebp - 518h]
        ; Exact mapped bytes E8 FD 50 18 00: call 0x58761380
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x50
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 3f4h], eax
        cmp dword ptr [ebp - 3f4h], 0
        ; Exact mapped bytes 74 3F: je 0x585dc2d1
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 A7 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa7
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 51ch], eax
        push 0ch
        push 1
        mov ecx, dword ptr [ebp - 51ch]
        ; Exact mapped bytes E8 CE 50 18 00: call 0x58761380
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x50
        __asm _emit 0x18
        __asm _emit 0x00
        imul eax, eax, 64h
        cdq
        idiv dword ptr [ebp - 3f4h]
        mov ecx, 1
        shl ecx, 0
        mov edx, dword ptr [ebp - 388h]
        mov byte ptr [edx + ecx + 10a34h], al
        mov dword ptr [ebp - 39ch], 0
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 1077ah]
        cmp ecx, 7
        ; Exact mapped bytes 0F 85 7D 05 00 00: jne 0x585dc86e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        mov ecx, dword ptr [edx + 220dch]
        ; Exact mapped bytes E8 DE 38 EC FF: call 0x5849fbe0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x38
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 08 04 00 00: je 0x585dc712
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3f8h], 0
        mov dword ptr [ebp - 3fch], 0
        mov dword ptr [ebp - 400h], 0
        mov dword ptr [ebp - 38ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585dc343
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 38ch]
        add eax, 1
        mov dword ptr [ebp - 38ch], eax
        cmp dword ptr [ebp - 38ch], 20h
        ; Exact mapped bytes 0F 84 A1 03 00 00: je 0x585dc6f1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 E5 00 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 520h], eax
        mov ecx, dword ptr [ebp - 38ch]
        push ecx
        mov ecx, dword ptr [ebp - 520h]
        ; Exact mapped bytes E8 ED 67 EC FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x67
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [eax + 14h]
        and edx, 3ffh
        xor edx, 55h
        imul eax, dword ptr [ebp - 38ch], 6
        mov ecx, dword ptr [ebp - 388h]
        lea eax, [ecx + eax + 10962h]
        mov ecx, 2
        imul ecx, ecx, 0
        ; Exact mapped bytes 66 89 14 08: mov word ptr [eax + ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 96 00 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 524h], eax
        mov edx, dword ptr [ebp - 38ch]
        push edx
        mov ecx, dword ptr [ebp - 524h]
        ; Exact mapped bytes E8 9E 67 EC FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x67
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [eax + 14h]
        shr eax, 0ah
        and eax, 3ffh
        xor eax, 55h
        imul ecx, dword ptr [ebp - 38ch], 6
        mov edx, dword ptr [ebp - 388h]
        lea ecx, [edx + ecx + 10962h]
        mov edx, 2
        shl edx, 0
        ; Exact mapped bytes 66 89 04 11: mov word ptr [ecx + edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 45 00 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 528h], eax
        mov eax, dword ptr [ebp - 38ch]
        push eax
        mov ecx, dword ptr [ebp - 528h]
        ; Exact mapped bytes E8 4D 67 EC FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x67
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 14h
        and ecx, 3ffh
        xor ecx, 55h
        imul edx, dword ptr [ebp - 38ch], 6
        mov eax, dword ptr [ebp - 388h]
        lea edx, [eax + edx + 10962h]
        mov eax, 2
        shl eax, 1
        ; Exact mapped bytes 66 89 0C 02: mov word ptr [edx + eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x02
        imul ecx, dword ptr [ebp - 38ch], 6
        mov edx, dword ptr [ebp - 388h]
        lea eax, [edx + ecx + 10962h]
        mov ecx, 2
        shl ecx, 0
        movzx edx, word ptr [eax + ecx]
        cmp edx, 0ah
        ; Exact mapped bytes 7D 39: jge 0x585dc49f
        __asm _emit 0x7d
        __asm _emit 0x39
        imul eax, dword ptr [ebp - 38ch], 6
        mov ecx, dword ptr [ebp - 388h]
        lea edx, [ecx + eax + 10962h]
        mov eax, 2
        shl eax, 0
        movzx ecx, word ptr [edx + eax]
        mov edx, 0ah
        sub edx, ecx
        mov dword ptr [ebp - 3fch], edx
        mov dword ptr [ebp - 3f8h], 0
        ; Exact mapped bytes EB 33: jmp 0x585dc4d2
        __asm _emit 0xeb
        __asm _emit 0x33
        mov dword ptr [ebp - 3fch], 0
        imul eax, dword ptr [ebp - 38ch], 6
        mov ecx, dword ptr [ebp - 388h]
        lea edx, [ecx + eax + 10962h]
        mov eax, 2
        shl eax, 0
        movzx ecx, word ptr [edx + eax]
        sub ecx, 0ah
        mov dword ptr [ebp - 3f8h], ecx
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 63 FF EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 52ch], eax
        mov edx, dword ptr [ebp - 38ch]
        push edx
        mov ecx, dword ptr [ebp - 52ch]
        ; Exact mapped bytes E8 6B 66 EC FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x66
        __asm _emit 0xec
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 46ch], eax
        mov eax, dword ptr [ebp - 3f8h]
        xor eax, 55h
        and eax, 3ffh
        shl eax, 0ah
        mov ecx, dword ptr [ebp - 46ch]
        mov edx, dword ptr [ecx]
        and edx, 0fff003ffh
        or edx, eax
        mov eax, dword ptr [ebp - 46ch]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 0E FF EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 530h], eax
        mov ecx, dword ptr [ebp - 38ch]
        push ecx
        mov ecx, dword ptr [ebp - 530h]
        ; Exact mapped bytes E8 46 5D EE FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x5d
        __asm _emit 0xee
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 470h], eax
        mov edx, dword ptr [ebp - 3f8h]
        xor edx, 55h
        and edx, 3ffh
        shl edx, 0ah
        mov eax, dword ptr [ebp - 470h]
        mov ecx, dword ptr [eax]
        and ecx, 0fff003ffh
        or ecx, edx
        mov edx, dword ptr [ebp - 470h]
        mov dword ptr [edx], ecx
        imul eax, dword ptr [ebp - 38ch], 6
        mov ecx, dword ptr [ebp - 388h]
        lea edx, [ecx + eax + 10962h]
        mov eax, 2
        shl eax, 0
        ; Exact mapped bytes 66 8B 8D 08 FC FF FF: mov cx, word ptr [ebp - 0x3f8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 0C 02: mov word ptr [edx + eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x02
        cmp dword ptr [ebp - 3fch], 0
        ; Exact mapped bytes 0F 84 2C 01 00 00: je 0x585dc6dd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 38ch], 6
        mov eax, dword ptr [ebp - 388h]
        lea ecx, [eax + edx + 10962h]
        mov edx, 2
        imul eax, edx, 0
        movzx ecx, word ptr [ecx + eax]
        cmp ecx, dword ptr [ebp - 3fch]
        ; Exact mapped bytes 7D 0C: jge 0x585dc5e5
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 400h], 0
        ; Exact mapped bytes EB 2C: jmp 0x585dc611
        __asm _emit 0xeb
        __asm _emit 0x2c
        imul edx, dword ptr [ebp - 38ch], 6
        mov eax, dword ptr [ebp - 388h]
        lea ecx, [eax + edx + 10962h]
        mov edx, 2
        imul eax, edx, 0
        movzx ecx, word ptr [ecx + eax]
        sub ecx, dword ptr [ebp - 3fch]
        mov dword ptr [ebp - 400h], ecx
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 24 FE EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 534h], eax
        mov edx, dword ptr [ebp - 38ch]
        push edx
        mov ecx, dword ptr [ebp - 534h]
        ; Exact mapped bytes E8 2C 65 EC FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x65
        __asm _emit 0xec
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 474h], eax
        mov eax, dword ptr [ebp - 400h]
        xor eax, 55h
        and eax, 3ffh
        mov ecx, dword ptr [ebp - 474h]
        mov edx, dword ptr [ecx]
        and edx, 0fffffc00h
        or edx, eax
        mov eax, dword ptr [ebp - 474h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 D2 FD EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 538h], eax
        mov ecx, dword ptr [ebp - 38ch]
        push ecx
        mov ecx, dword ptr [ebp - 538h]
        ; Exact mapped bytes E8 0A 5C EE FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x5c
        __asm _emit 0xee
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 478h], eax
        mov edx, dword ptr [ebp - 400h]
        xor edx, 55h
        and edx, 3ffh
        mov eax, dword ptr [ebp - 478h]
        mov ecx, dword ptr [eax]
        and ecx, 0fffffc00h
        or ecx, edx
        mov edx, dword ptr [ebp - 478h]
        mov dword ptr [edx], ecx
        imul eax, dword ptr [ebp - 38ch], 6
        mov ecx, dword ptr [ebp - 388h]
        lea edx, [ecx + eax + 10962h]
        mov eax, 2
        imul ecx, eax, 0
        ; Exact mapped bytes 66 8B 85 00 FC FF FF: mov ax, word ptr [ebp - 0x400]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 04 0A: mov word ptr [edx + ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 39ch]
        add ecx, 1
        mov dword ptr [ebp - 39ch], ecx
        ; Exact mapped bytes E9 43 FC FF FF: jmp 0x585dc334
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 388h]
        mov al, byte ptr [ebp - 39ch]
        mov byte ptr [edx + 10961h], al
        ; Exact mapped bytes E9 2E 0A 00 00: jmp 0x585dd136
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 29 0A 00 00: jmp 0x585dd136
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5C 01 00 00: jmp 0x585dc86e
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 65 FF FF: call 0x585d2c30
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 49 01 00 00: je 0x585dc86e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585dc740
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 38ch]
        add ecx, 1
        mov dword ptr [ebp - 38ch], ecx
        cmp dword ptr [ebp - 38ch], 20h
        ; Exact mapped bytes 0F 8D 05 01 00 00: jge 0x585dc852
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 E8 FC EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 53ch], eax
        mov edx, dword ptr [ebp - 38ch]
        push edx
        mov ecx, dword ptr [ebp - 53ch]
        ; Exact mapped bytes E8 F0 63 EC FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x63
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [eax + 14h]
        and eax, 3ffh
        xor eax, 55h
        imul ecx, dword ptr [ebp - 38ch], 6
        mov edx, dword ptr [ebp - 388h]
        lea ecx, [edx + ecx + 10962h]
        mov edx, 2
        imul edx, edx, 0
        ; Exact mapped bytes 66 89 04 11: mov word ptr [ecx + edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 9A FC EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xfc
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 540h], eax
        mov eax, dword ptr [ebp - 38ch]
        push eax
        mov ecx, dword ptr [ebp - 540h]
        ; Exact mapped bytes E8 A2 63 EC FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x63
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 0ah
        and ecx, 3ffh
        xor ecx, 55h
        imul edx, dword ptr [ebp - 38ch], 6
        mov eax, dword ptr [ebp - 388h]
        lea edx, [eax + edx + 10962h]
        mov eax, 2
        shl eax, 0
        ; Exact mapped bytes 66 89 0C 02: mov word ptr [edx + eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 48 FC EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 544h], eax
        mov ecx, dword ptr [ebp - 38ch]
        push ecx
        mov ecx, dword ptr [ebp - 544h]
        ; Exact mapped bytes E8 50 63 EC FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x63
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [eax + 14h]
        shr edx, 14h
        and edx, 3ffh
        xor edx, 55h
        imul eax, dword ptr [ebp - 38ch], 6
        mov ecx, dword ptr [ebp - 388h]
        lea eax, [ecx + eax + 10962h]
        mov ecx, 2
        shl ecx, 1
        ; Exact mapped bytes 66 89 14 08: mov word ptr [eax + ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 39ch]
        add edx, 1
        mov dword ptr [ebp - 39ch], edx
        ; Exact mapped bytes E9 DF FE FF FF: jmp 0x585dc731
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 388h]
        mov cl, byte ptr [ebp - 39ch]
        mov byte ptr [eax + 10961h], cl
        ; Exact mapped bytes E9 CD 08 00 00: jmp 0x585dd136
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C8 08 00 00: jmp 0x585dd136
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 3b1h], 1
        mov edx, 1
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, byte ptr [ecx + eax + 10a30h]
        test edx, edx
        ; Exact mapped bytes 75 49: jne 0x585dc8d8
        __asm _emit 0x75
        __asm _emit 0x49
        mov eax, 1
        shl eax, 0
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, byte ptr [ecx + eax + 10a30h]
        test edx, edx
        ; Exact mapped bytes 75 2F: jne 0x585dc8d8
        __asm _emit 0x75
        __asm _emit 0x2f
        mov eax, 1
        shl eax, 1
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, byte ptr [ecx + eax + 10a30h]
        test edx, edx
        ; Exact mapped bytes 75 16: jne 0x585dc8d8
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 388h]
        cmp dword ptr [eax + 10a24h], 0
        ; Exact mapped bytes 75 07: jne 0x585dc8d8
        __asm _emit 0x75
        __asm _emit 0x07
        mov byte ptr [ebp - 3b1h], 0
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, byte ptr [ecx + 57ch]
        and edx, 40h
        ; Exact mapped bytes 0F 84 09 07 00 00: je 0x585dcff7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 1077ah]
        cmp ecx, 8
        ; Exact mapped bytes 0F 84 F3 06 00 00: je 0x585dcff7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 1077ah]
        cmp eax, 9
        ; Exact mapped bytes 0F 84 DD 06 00 00: je 0x585dcff7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        cmp dword ptr [ecx + 1067ch], 0
        ; Exact mapped bytes 0F 85 86 05 00 00: jne 0x585dceb3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 F8 8F EB FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x8f
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 0F 84 72 05 00 00: je 0x585dceb3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 8E EB FF: call 0x58495830
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x8e
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 0eh
        ; Exact mapped bytes 0F 84 5E 05 00 00: je 0x585dceb3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 8E EB FF: call 0x58495830
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x8e
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 13h
        ; Exact mapped bytes 0F 84 4A 05 00 00: je 0x585dceb3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [ebp - 3b1h]
        test edx, edx
        ; Exact mapped bytes 0F 84 3B 05 00 00: je 0x585dceb3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585dc993
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 38ch]
        add eax, 1
        mov dword ptr [ebp - 38ch], eax
        cmp dword ptr [ebp - 38ch], 20h
        ; Exact mapped bytes 0F 8D FC 04 00 00: jge 0x585dce9c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 95 FA EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xfa
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 548h], eax
        mov ecx, dword ptr [ebp - 38ch]
        push ecx
        mov ecx, dword ptr [ebp - 548h]
        ; Exact mapped bytes E8 9D 61 EC FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x61
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [eax + 14h]
        and edx, 3ffh
        xor edx, 55h
        imul eax, dword ptr [ebp - 38ch], 6
        mov ecx, dword ptr [ebp - 388h]
        lea eax, [ecx + eax + 10962h]
        mov ecx, 2
        imul ecx, ecx, 0
        ; Exact mapped bytes 66 89 14 08: mov word ptr [eax + ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 46 FA EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfa
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 54ch], eax
        mov edx, dword ptr [ebp - 38ch]
        push edx
        mov ecx, dword ptr [ebp - 54ch]
        ; Exact mapped bytes E8 4E 61 EC FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x61
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [eax + 14h]
        shr eax, 0ah
        and eax, 3ffh
        xor eax, 55h
        imul ecx, dword ptr [ebp - 38ch], 6
        mov edx, dword ptr [ebp - 388h]
        lea ecx, [edx + ecx + 10962h]
        mov edx, 2
        shl edx, 0
        ; Exact mapped bytes 66 89 04 11: mov word ptr [ecx + edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 F5 F9 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf9
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 550h], eax
        mov eax, dword ptr [ebp - 38ch]
        push eax
        mov ecx, dword ptr [ebp - 550h]
        ; Exact mapped bytes E8 FD 60 EC FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x60
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 14h
        and ecx, 3ffh
        xor ecx, 55h
        imul edx, dword ptr [ebp - 38ch], 6
        mov eax, dword ptr [ebp - 388h]
        lea edx, [eax + edx + 10962h]
        mov eax, 2
        shl eax, 1
        ; Exact mapped bytes 66 89 0C 02: mov word ptr [edx + eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x02
        imul ecx, dword ptr [ebp - 38ch], 6
        mov edx, dword ptr [ebp - 388h]
        lea eax, [edx + ecx + 10962h]
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx]
        test eax, eax
        ; Exact mapped bytes 0F 84 CF 03 00 00: je 0x585dce88
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3b8h], 0
        mov dword ptr [ebp - 404h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585dcade
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 404h]
        add ecx, 32h
        mov dword ptr [ebp - 404h], ecx
        imul edx, dword ptr [ebp - 38ch], 6
        mov eax, dword ptr [ebp - 388h]
        lea ecx, [eax + edx + 10962h]
        mov edx, 2
        imul eax, edx, 0
        movzx ecx, word ptr [ecx + eax]
        cmp dword ptr [ebp - 404h], ecx
        ; Exact mapped bytes 0F 8D 51 01 00 00: jge 0x585dcc5b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 38ch], 6
        mov eax, dword ptr [ebp - 388h]
        lea ecx, [eax + edx + 10962h]
        mov edx, 2
        imul eax, edx, 0
        movzx ecx, word ptr [ecx + eax]
        sub ecx, dword ptr [ebp - 404h]
        cmp ecx, 32h
        ; Exact mapped bytes 7E 0C: jle 0x585dcb41
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [ebp - 47ch], 32h
        ; Exact mapped bytes EB 2C: jmp 0x585dcb6d
        __asm _emit 0xeb
        __asm _emit 0x2c
        imul edx, dword ptr [ebp - 38ch], 6
        mov eax, dword ptr [ebp - 388h]
        lea ecx, [eax + edx + 10962h]
        mov edx, 2
        imul eax, edx, 0
        movzx ecx, word ptr [ecx + eax]
        sub ecx, dword ptr [ebp - 404h]
        mov dword ptr [ebp - 47ch], ecx
        mov edx, dword ptr [ebp - 47ch]
        mov dword ptr [ebp - 554h], edx
        ; Exact mapped bytes E8 EE 40 27 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x40
        __asm _emit 0x27
        __asm _emit 0x00
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 558h], edx
        mov dword ptr [ebp - 43ch], 12ch
        ; Exact mapped bytes 83 3D 60 35 90 58 FF: cmp dword ptr [0x58903560], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x585dcc29
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 60 35 90 58: mov edx, dword ptr [0x58903560]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 480h], edx
        ; Exact mapped bytes F2 0F 2A 85 80 FB FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x480]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 480h]
        shr eax, 1fh
        ; Exact mapped bytes F2 0F 58 04 C5 70 4D 89 58: addsd xmm0, qword ptr [eax*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 DC F9 FF FF: movsd qword ptr [ebp - 0x624], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 DC F9 FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0x624]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 5E 05 60 4D 89 58: divss xmm0, dword ptr [0x58894d60]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 43ch]
        mov dword ptr [ebp - 484h], ecx
        ; Exact mapped bytes F2 0F 2A 8D 7C FB FF FF: cvtsi2sd xmm1, dword ptr [ebp - 0x484]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 484h]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 0C D5 70 4D 89 58: addsd xmm1, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 8D D4 F9 FF FF: movsd qword ptr [ebp - 0x62c], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 8D D4 F9 FF FF: cvtsd2ss xmm1, qword ptr [ebp - 0x62c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 C8: mulss xmm1, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 28 C1: movaps xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc1
        ; Exact mapped bytes E8 AD 47 25 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x47
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 43ch], eax
        mov eax, dword ptr [ebp - 554h]
        imul eax, dword ptr [ebp - 43ch]
        xor edx, edx
        mov ecx, 64h
        div ecx
        cmp dword ptr [ebp - 558h], eax
        ; Exact mapped bytes 73 0F: jae 0x585dcc56
        __asm _emit 0x73
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 3b8h]
        add edx, 1
        mov dword ptr [ebp - 3b8h], edx
        ; Exact mapped bytes E9 74 FE FF FF: jmp 0x585dcacf
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 41ch], 0
        cmp dword ptr [ebp - 3b8h], 3
        ; Exact mapped bytes 7E 0A: jle 0x585dcc78
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov dword ptr [ebp - 3b8h], 3
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D 9D EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x9d
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B6 F7 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf7
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 55ch], eax
        mov eax, dword ptr [ebp - 38ch]
        push eax
        mov ecx, dword ptr [ebp - 55ch]
        ; Exact mapped bytes E8 5E 5C FF FF: call 0x585d2900
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        add ecx, dword ptr [ebp - 3b8h]
        ; Exact mapped bytes 3B 0D 34 D2 8F 58: cmp ecx, dword ptr [0x588fd234]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 7F 0E: jg 0x585dccc1
        __asm _emit 0x7f
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 3b8h]
        mov dword ptr [ebp - 41ch], edx
        ; Exact mapped bytes EB 3B: jmp 0x585dccfc
        __asm _emit 0xeb
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 9C EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x9c
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6D F7 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf7
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 560h], eax
        mov eax, dword ptr [ebp - 38ch]
        push eax
        mov ecx, dword ptr [ebp - 560h]
        ; Exact mapped bytes E8 15 5C FF FF: call 0x585d2900
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        ; Exact mapped bytes 8B 15 34 D2 8F 58: mov edx, dword ptr [0x588fd234]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        sub edx, ecx
        mov dword ptr [ebp - 41ch], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B9 9C EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x9c
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 32 F7 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf7
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 564h], eax
        movzx eax, byte ptr [ebp - 41ch]
        push eax
        mov ecx, dword ptr [ebp - 38ch]
        push ecx
        mov ecx, dword ptr [ebp - 564h]
        ; Exact mapped bytes E8 A2 23 17 00: call 0x5874f0d0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x23
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 41ch]
        mov dword ptr [ebp - 3b8h], edx
        cmp dword ptr [ebp - 3b8h], 0
        ; Exact mapped bytes 0F 8E 41 01 00 00: jle 0x585dce88
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 38ch], 6
        mov ecx, dword ptr [ebp - 388h]
        lea edx, [ecx + eax + 10962h]
        mov eax, 2
        imul ecx, eax, 0
        movzx edx, word ptr [edx + ecx]
        cmp edx, dword ptr [ebp - 3b8h]
        ; Exact mapped bytes 0F 8C 91 00 00 00: jl 0x585dce04
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 38ch], 6
        mov ecx, dword ptr [ebp - 388h]
        lea edx, [ecx + eax + 10962h]
        mov eax, 2
        imul ecx, eax, 0
        movzx edx, word ptr [edx + ecx]
        sub edx, dword ptr [ebp - 3b8h]
        mov eax, 2
        imul ecx, eax, 0
        imul eax, dword ptr [ebp - 38ch], 6
        mov esi, dword ptr [ebp - 388h]
        lea eax, [esi + eax + 10962h]
        ; Exact mapped bytes 66 89 14 08: mov word ptr [eax + ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        imul ecx, dword ptr [ebp - 38ch], 6
        mov edx, dword ptr [ebp - 388h]
        lea eax, [edx + ecx + 10962h]
        mov ecx, 2
        shl ecx, 0
        movzx edx, word ptr [eax + ecx]
        add edx, dword ptr [ebp - 3b8h]
        mov eax, 2
        shl eax, 0
        imul ecx, dword ptr [ebp - 38ch], 6
        mov esi, dword ptr [ebp - 388h]
        lea ecx, [esi + ecx + 10962h]
        ; Exact mapped bytes 66 89 14 01: mov word ptr [ecx + eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x01
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x585dce88
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 38ch], 6
        mov eax, dword ptr [ebp - 388h]
        lea ecx, [eax + edx + 10962h]
        mov edx, 2
        imul eax, edx, 0
        movzx ecx, word ptr [ecx + eax]
        imul edx, dword ptr [ebp - 38ch], 6
        mov eax, dword ptr [ebp - 388h]
        lea edx, [eax + edx + 10962h]
        mov eax, 2
        shl eax, 0
        movzx edx, word ptr [edx + eax]
        add edx, ecx
        mov eax, 2
        shl eax, 0
        imul ecx, dword ptr [ebp - 38ch], 6
        mov esi, dword ptr [ebp - 388h]
        lea ecx, [esi + ecx + 10962h]
        ; Exact mapped bytes 66 89 14 01: mov word ptr [ecx + eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x01
        imul edx, dword ptr [ebp - 38ch], 6
        mov eax, dword ptr [ebp - 388h]
        lea ecx, [eax + edx + 10962h]
        mov edx, 2
        imul eax, edx, 0
        xor edx, edx
        ; Exact mapped bytes 66 89 14 01: mov word ptr [ecx + eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 39ch]
        add eax, 1
        mov dword ptr [ebp - 39ch], eax
        ; Exact mapped bytes E9 E8 FA FF FF: jmp 0x585dc984
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 388h]
        mov dl, byte ptr [ebp - 39ch]
        mov byte ptr [ecx + 10961h], dl
        ; Exact mapped bytes E9 3F 01 00 00: jmp 0x585dcff2
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585dcece
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 38ch]
        add eax, 1
        mov dword ptr [ebp - 38ch], eax
        cmp dword ptr [ebp - 38ch], 20h
        ; Exact mapped bytes 0F 8D 05 01 00 00: jge 0x585dcfe0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 5A F5 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf5
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 568h], eax
        mov ecx, dword ptr [ebp - 38ch]
        push ecx
        mov ecx, dword ptr [ebp - 568h]
        ; Exact mapped bytes E8 62 5C EC FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x5c
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [eax + 14h]
        and edx, 3ffh
        xor edx, 55h
        imul eax, dword ptr [ebp - 38ch], 6
        mov ecx, dword ptr [ebp - 388h]
        lea eax, [ecx + eax + 10962h]
        mov ecx, 2
        imul ecx, ecx, 0
        ; Exact mapped bytes 66 89 14 08: mov word ptr [eax + ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 0B F5 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xf5
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 56ch], eax
        mov edx, dword ptr [ebp - 38ch]
        push edx
        mov ecx, dword ptr [ebp - 56ch]
        ; Exact mapped bytes E8 13 5C EC FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x5c
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [eax + 14h]
        shr eax, 0ah
        and eax, 3ffh
        xor eax, 55h
        imul ecx, dword ptr [ebp - 38ch], 6
        mov edx, dword ptr [ebp - 388h]
        lea ecx, [edx + ecx + 10962h]
        mov edx, 2
        shl edx, 0
        ; Exact mapped bytes 66 89 04 11: mov word ptr [ecx + edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 BA F4 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf4
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 570h], eax
        mov eax, dword ptr [ebp - 38ch]
        push eax
        mov ecx, dword ptr [ebp - 570h]
        ; Exact mapped bytes E8 C2 5B EC FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x5b
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 14h
        and ecx, 3ffh
        xor ecx, 55h
        imul edx, dword ptr [ebp - 38ch], 6
        mov eax, dword ptr [ebp - 388h]
        lea edx, [eax + edx + 10962h]
        mov eax, 2
        shl eax, 1
        ; Exact mapped bytes 66 89 0C 02: mov word ptr [edx + eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 39ch]
        add ecx, 1
        mov dword ptr [ebp - 39ch], ecx
        ; Exact mapped bytes E9 DF FE FF FF: jmp 0x585dcebf
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 388h]
        mov al, byte ptr [ebp - 39ch]
        mov byte ptr [edx + 10961h], al
        ; Exact mapped bytes E9 3F 01 00 00: jmp 0x585dd136
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585dd012
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 38ch]
        add ecx, 1
        mov dword ptr [ebp - 38ch], ecx
        cmp dword ptr [ebp - 38ch], 20h
        ; Exact mapped bytes 0F 8D 05 01 00 00: jge 0x585dd124
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 16 F4 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf4
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 574h], eax
        mov edx, dword ptr [ebp - 38ch]
        push edx
        mov ecx, dword ptr [ebp - 574h]
        ; Exact mapped bytes E8 1E 5B EC FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x5b
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [eax + 14h]
        and eax, 3ffh
        xor eax, 55h
        imul ecx, dword ptr [ebp - 38ch], 6
        mov edx, dword ptr [ebp - 388h]
        lea ecx, [edx + ecx + 10962h]
        mov edx, 2
        imul edx, edx, 0
        ; Exact mapped bytes 66 89 04 11: mov word ptr [ecx + edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 C8 F3 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf3
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 5d0h], eax
        mov eax, dword ptr [ebp - 38ch]
        push eax
        mov ecx, dword ptr [ebp - 5d0h]
        ; Exact mapped bytes E8 D0 5A EC FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x5a
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 0ah
        and ecx, 3ffh
        xor ecx, 55h
        imul edx, dword ptr [ebp - 38ch], 6
        mov eax, dword ptr [ebp - 388h]
        lea edx, [eax + edx + 10962h]
        mov eax, 2
        shl eax, 0
        ; Exact mapped bytes 66 89 0C 02: mov word ptr [edx + eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 76 F3 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf3
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 57ch], eax
        mov ecx, dword ptr [ebp - 38ch]
        push ecx
        mov ecx, dword ptr [ebp - 57ch]
        ; Exact mapped bytes E8 7E 5A EC FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x5a
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [eax + 14h]
        shr edx, 14h
        and edx, 3ffh
        xor edx, 55h
        imul eax, dword ptr [ebp - 38ch], 6
        mov ecx, dword ptr [ebp - 388h]
        lea eax, [ecx + eax + 10962h]
        mov ecx, 2
        shl ecx, 1
        ; Exact mapped bytes 66 89 14 08: mov word ptr [eax + ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 39ch]
        add edx, 1
        mov dword ptr [ebp - 39ch], edx
        ; Exact mapped bytes E9 DF FE FF FF: jmp 0x585dd003
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 388h]
        mov cl, byte ptr [ebp - 39ch]
        mov byte ptr [eax + 10961h], cl
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 106e4h]
        mov dword ptr [ebp - 3c8h], eax
        cmp dword ptr [ebp - 3c8h], 4e2h
        ; Exact mapped bytes 73 0C: jae 0x585dd160
        __asm _emit 0x73
        __asm _emit 0x0c
        mov dword ptr [ebp - 3c8h], 0
        ; Exact mapped bytes EB 16: jmp 0x585dd176
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [ebp - 3c8h], 9c4h
        ; Exact mapped bytes 76 0A: jbe 0x585dd176
        __asm _emit 0x76
        __asm _emit 0x0a
        mov dword ptr [ebp - 3c8h], 9c4h
        mov ecx, dword ptr [ebp - 3c8h]
        shr ecx, 1
        mov dword ptr [ebp - 3c8h], ecx
        mov edx, dword ptr [ebp - 388h]
        movzx eax, byte ptr [edx + 10961h]
        imul eax, dword ptr [ebp - 3c8h]
        xor edx, edx
        mov ecx, 9c4h
        div ecx
        mov edx, dword ptr [ebp - 388h]
        mov byte ptr [edx + 10961h], al
        mov dword ptr [ebp - 38ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585dd1c8
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 38ch]
        add eax, 1
        mov dword ptr [ebp - 38ch], eax
        cmp dword ptr [ebp - 38ch], 20h
        ; Exact mapped bytes 0F 8D 3D 03 00 00: jge 0x585dd512
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38ch]
        mov edx, dword ptr [ebp - 388h]
        lea eax, [edx + ecx*2 + 10921h]
        mov ecx, 1
        imul edx, ecx, 0
        mov byte ptr [eax + edx], 55h
        mov eax, dword ptr [ebp - 38ch]
        mov ecx, dword ptr [ebp - 388h]
        lea edx, [ecx + eax*2 + 10921h]
        mov eax, 1
        shl eax, 0
        mov byte ptr [edx + eax], 55h
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 77 EA FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x77
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 580h], eax
        mov ecx, dword ptr [ebp - 38ch]
        push ecx
        mov ecx, dword ptr [ebp - 580h]
        ; Exact mapped bytes E8 0A FE EA FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xfe
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 598h], eax
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 F9 F1 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf1
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 584h], eax
        mov edx, dword ptr [ebp - 38ch]
        push edx
        mov ecx, dword ptr [ebp - 584h]
        ; Exact mapped bytes E8 01 FE EA FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xea
        __asm _emit 0xff
        movzx eax, ax
        mov dword ptr [ebp - 440h], eax
        cmp dword ptr [ebp - 440h], 5
        ; Exact mapped bytes 74 1F: je 0x585dd290
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [ebp - 440h], 6
        ; Exact mapped bytes 0F 84 FF 00 00 00: je 0x585dd37d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 440h], 0dh
        ; Exact mapped bytes 0F 84 40 01 00 00: je 0x585dd3cb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 7D 02 00 00: jmp 0x585dd50d
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + 20e74h]
        mov dword ptr [ebp - 588h], edx
        mov eax, dword ptr [ebp - 38ch]
        push eax
        mov ecx, dword ptr [ebp - 588h]
        ; Exact mapped bytes E8 BC 5F FF FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 488h], eax
        mov ecx, dword ptr [ebp - 488h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 2ch]
        mov dword ptr [ebp - 58ch], eax
        push 0
        mov ecx, dword ptr [ebp - 488h]
        ; Exact mapped bytes FF 95 74 FA FF FF: call dword ptr [ebp - 0x58c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38ch]
        mov edx, dword ptr [ebp - 388h]
        lea ecx, [edx + ecx*2 + 10921h]
        mov edx, 1
        imul edx, edx, 0
        mov byte ptr [ecx + edx], al
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 20e74h]
        mov dword ptr [ebp - 590h], ecx
        mov edx, dword ptr [ebp - 38ch]
        push edx
        mov ecx, dword ptr [ebp - 590h]
        ; Exact mapped bytes E8 55 5F FF FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 48ch], eax
        mov eax, dword ptr [ebp - 48ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 2ch]
        mov dword ptr [ebp - 594h], edx
        push 1
        mov ecx, dword ptr [ebp - 48ch]
        ; Exact mapped bytes FF 95 6C FA FF FF: call dword ptr [ebp - 0x594]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38ch]
        mov edx, dword ptr [ebp - 388h]
        lea ecx, [edx + ecx*2 + 10921h]
        mov edx, 1
        shl edx, 0
        mov byte ptr [ecx + edx], al
        mov eax, dword ptr [ebp - 598h]
        push eax
        mov ecx, dword ptr [ebp - 38ch]
        push ecx
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 A9 D0 00 00: call 0x585ea420
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 90 01 00 00: jmp 0x585dd50d
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 20e74h]
        mov dword ptr [ebp - 59ch], eax
        mov ecx, dword ptr [ebp - 38ch]
        push ecx
        mov ecx, dword ptr [ebp - 59ch]
        ; Exact mapped bytes E8 CF 5E FF FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D8 D3 F8 FF: call 0x5856a780
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xd3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 38ch]
        mov ecx, dword ptr [ebp - 388h]
        lea edx, [ecx + edx*2 + 10921h]
        mov ecx, 1
        imul ecx, ecx, 0
        mov byte ptr [edx + ecx], al
        ; Exact mapped bytes E9 42 01 00 00: jmp 0x585dd50d
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA 95 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x95
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 63 F0 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xf0
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FC 75 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x75
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 9
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x585dd485
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
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
        ; Exact mapped bytes E8 ED 85 EB FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 5a0h], eax
        mov ecx, dword ptr [ebp - 38ch]
        sub ecx, 1ch
        push ecx
        mov ecx, dword ptr [ebp - 5a0h]
        ; Exact mapped bytes E8 52 1C 0B 00: call 0x5868f070
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x1c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38ch]
        mov ecx, dword ptr [ebp - 388h]
        lea edx, [ecx + edx*2 + 10921h]
        mov ecx, 1
        imul ecx, ecx, 0
        mov byte ptr [edx + ecx], al
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A9 85 EB FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 5a4h], eax
        mov edx, dword ptr [ebp - 38ch]
        sub edx, 1ch
        push edx
        mov ecx, dword ptr [ebp - 5a4h]
        ; Exact mapped bytes E8 6E 1C 0B 00: call 0x5868f0d0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x1c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38ch]
        mov edx, dword ptr [ebp - 388h]
        lea ecx, [edx + ecx*2 + 10921h]
        mov edx, 1
        shl edx, 0
        mov byte ptr [ecx + edx], al
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x585dd50d
        __asm _emit 0xe9
        __asm _emit 0x88
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
        ; Exact mapped bytes E8 40 85 EB FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 5a8h], eax
        mov eax, dword ptr [ebp - 38ch]
        sub eax, 1ch
        push eax
        mov ecx, dword ptr [ebp - 5a8h]
        ; Exact mapped bytes E8 75 69 0A 00: call 0x58683e20
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x69
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38ch]
        mov edx, dword ptr [ebp - 388h]
        lea ecx, [edx + ecx*2 + 10921h]
        mov edx, 1
        imul edx, edx, 0
        mov byte ptr [ecx + edx], al
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 84 EB FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 5ach], eax
        mov eax, dword ptr [ebp - 38ch]
        sub eax, 1ch
        push eax
        mov ecx, dword ptr [ebp - 5ach]
        ; Exact mapped bytes E8 91 69 0A 00: call 0x58683e80
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x69
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38ch]
        mov edx, dword ptr [ebp - 388h]
        lea ecx, [edx + ecx*2 + 10921h]
        mov edx, 1
        shl edx, 0
        mov byte ptr [ecx + edx], al
        ; Exact mapped bytes E9 A7 FC FF FF: jmp 0x585dd1b9
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 388h]
        mov byte ptr [eax + 10920h], 0
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a44h], 55555555h
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a38h], 55555555h
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, byte ptr [eax + 20f3ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x585dd5f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10bech]
        cmp eax, dword ptr [ebp - 398h]
        ; Exact mapped bytes 75 5F: jne 0x585dd5c7
        __asm _emit 0x75
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 388h]
        cmp dword ptr [ecx + 21a88h], 0
        ; Exact mapped bytes 74 27: je 0x585dd59e
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 7E E0 F7 FF: call 0x5855b600
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xe0
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        xor eax, 55555555h
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a40h], eax
        ; Exact mapped bytes EB 27: jmp 0x585dd5c5
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 57 E0 F7 FF: call 0x5855b600
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xe0
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        shl eax, 1
        xor eax, 55555555h
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a40h], eax
        ; Exact mapped bytes EB 27: jmp 0x585dd5ee
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 2E E0 F7 FF: call 0x5855b600
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe0
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        shr eax, 1
        xor eax, 55555555h
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a40h], eax
        ; Exact mapped bytes EB 7B: jmp 0x585dd66b
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov eax, dword ptr [ebp - 398h]
        mov ecx, dword ptr [ebp - 388h]
        mov esi, dword ptr [ecx + eax*4 + 10c84h]
        xor esi, 55555555h
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 3C 56 FF FF: call 0x585d2c50
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, eax
        mov dword ptr [ebp - 5b4h], esi
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a48h]
        mov dword ptr [ebp - 5b0h], eax
        mov ecx, dword ptr [ebp - 5b0h]
        add ecx, dword ptr [ebp - 5b4h]
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a48h], ecx
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 AF DF F7 FF: call 0x5855b600
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xdf
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        xor eax, 55555555h
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a40h], eax
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 1077ah]
        cmp ecx, 2
        ; Exact mapped bytes 75 40: jne 0x585dd6bd
        __asm _emit 0x75
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 C8 55 FF FF: call 0x585d2c50
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5bch], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a48h]
        mov dword ptr [ebp - 5b8h], eax
        mov ecx, dword ptr [ebp - 5b8h]
        add ecx, dword ptr [ebp - 5bch]
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a48h], ecx
        ; Exact mapped bytes E9 91 01 00 00: jmp 0x585dd84e
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 1077ah]
        cmp ecx, 4
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x585dd78b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 1077ah]
        cmp eax, 6
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x585dd78b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 1077ah]
        cmp edx, 0ah
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x585dd78b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 1077ah]
        cmp ecx, 0bh
        ; Exact mapped bytes 74 7A: je 0x585dd78b
        __asm _emit 0x74
        __asm _emit 0x7a
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0eh
        ; Exact mapped bytes 74 68: je 0x585dd78b
        __asm _emit 0x74
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 2
        ; Exact mapped bytes 74 56: je 0x585dd78b
        __asm _emit 0x74
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 398h]
        mov ecx, dword ptr [ebp - 388h]
        mov esi, dword ptr [ecx + eax*4 + 10c84h]
        xor esi, 55555555h
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 F7 54 FF FF: call 0x585d2c50
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, eax
        mov dword ptr [ebp - 5c4h], esi
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a48h]
        mov dword ptr [ebp - 5c0h], eax
        mov ecx, dword ptr [ebp - 5c0h]
        add ecx, dword ptr [ebp - 5c4h]
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a48h], ecx
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 1077ah]
        cmp ecx, 4
        ; Exact mapped bytes 74 5A: je 0x585dd7f7
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 1077ah]
        cmp eax, 6
        ; Exact mapped bytes 74 48: je 0x585dd7f7
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 1077ah]
        cmp edx, 0ah
        ; Exact mapped bytes 74 36: je 0x585dd7f7
        __asm _emit 0x74
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 1077ah]
        cmp ecx, 0bh
        ; Exact mapped bytes 74 24: je 0x585dd7f7
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0eh
        ; Exact mapped bytes 74 12: je 0x585dd7f7
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0fh
        ; Exact mapped bytes 75 57: jne 0x585dd84e
        __asm _emit 0x75
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 4E 54 FF FF: call 0x585d2c50
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 2A C0: cvtsi2ss xmm0, eax
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 59 05 94 5A 89 58: mulss xmm0, dword ptr [0x58895a94]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 2C C0: cvttss2si eax, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        mov dword ptr [ebp - 5c8h], eax
        mov ecx, dword ptr [ebp - 398h]
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + ecx*4 + 10c84h]
        xor eax, 55555555h
        add eax, dword ptr [ebp - 5c8h]
        mov ecx, dword ptr [ebp - 388h]
        add eax, dword ptr [ecx + 10a48h]
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a48h], eax
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 B7 4E FF FF: call 0x585d2710
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        xor eax, 55555555h
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a3ch], eax
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 C2 EB EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xeb
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2B 78 EC FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x78
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x585dd8d1
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 9C 7D EB FF: call 0x58495630
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x7d
        __asm _emit 0xeb
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        xor eax, 55555555h
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a24h], eax
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 F7 51 FF FF: call 0x585d2ab0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        push eax
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 92 A0 00 00: call 0x585e7960
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 46: jmp 0x585dd917
        __asm _emit 0xeb
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 54 7D EB FF: call 0x58495630
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x7d
        __asm _emit 0xeb
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        xor eax, 55555555h
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a24h], eax
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 AF 51 FF FF: call 0x585d2ab0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        push eax
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 4A A0 00 00: call 0x585e7960
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 388h]
        movzx eax, byte ptr [edx + 20f3ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 EC 00 00 00: je 0x585dda18
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 F9 4D FF FF: call 0x585d2730
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 18h]
        xor ecx, 55555555h
        mov dword ptr [ebp - 4b8h], ecx
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a24h]
        xor eax, 55555555h
        imul ecx, eax, 3
        shr ecx, 1
        mov dword ptr [ebp - 494h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 388h]
        cmp dword ptr [ecx + eax + 20fa0h], 0
        ; Exact mapped bytes 74 5A: je 0x585dd9d4
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 388h]
        cmp dword ptr [eax + edx + 20fa0h], 0
        ; Exact mapped bytes 74 42: je 0x585dd9d4
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 4b8h]
        add ecx, dword ptr [ebp - 494h]
        ; Exact mapped bytes F3 0F 2A C1: cvtsi2ss xmm0, ecx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 388h]
        ; Exact mapped bytes F3 0F 59 82 F4 0B 01 00: mulss xmm0, dword ptr [edx + 0x10bf4]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x82
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 1B 3A 25 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x3a
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 5cch], eax
        mov eax, dword ptr [ebp - 5cch]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a44h], eax
        ; Exact mapped bytes EB 1E: jmp 0x585dd9f2
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4b8h]
        add edx, dword ptr [ebp - 494h]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 388h]
        mov dword ptr [eax + 10a44h], edx
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + 10a44h]
        mov dword ptr [ebp - 610h], edx
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 21 4D FF FF: call 0x585d2730
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 610h]
        mov dword ptr [eax + 18h], ecx
        mov edx, dword ptr [ebp - 388h]
        movzx eax, byte ptr [edx + 20f3ch]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x585dda4d
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ebp - 398h]
        mov eax, dword ptr [ebp - 388h]
        mov edx, dword ptr [eax + edx*4 + 10bcch]
        mov dword ptr [ecx + 10a38h], edx
        ; Exact mapped bytes E9 14 01 00 00: jmp 0x585ddb61
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, byte ptr [eax + 57ch]
        and ecx, 10h
        ; Exact mapped bytes 0F 84 FE 00 00 00: je 0x585ddb61
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        cmp dword ptr [edx + 10bech], -1
        ; Exact mapped bytes 0F 84 EB 00 00 00: je 0x585ddb61
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 10678h]
        and ecx, 10h
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x585ddb61
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10bech]
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + eax*4 + 10bcch]
        xor edx, 55555555h
        ; Exact mapped bytes 0F 8D 8C 00 00 00: jge 0x585ddb3c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 10bech]
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + ecx*4 + 10bcch]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + 10bech]
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + edx*4 + 10bcch], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10bech]
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + eax*4 + 10bcch], 0
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10bech]
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + eax*4 + 10bcch]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 10bech]
        mov eax, dword ptr [ebp - 388h]
        mov dword ptr [eax + ecx*4 + 10bcch], edx
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + 10bech]
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + edx*4 + 10bcch]
        mov dword ptr [eax + 10a38h], edx
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 10bech]
        and ecx, 0fh
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a4ch]
        and eax, 0fffffff0h
        or eax, ecx
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a4ch], eax
        mov edx, dword ptr [ebp - 388h]
        mov byte ptr [edx + 10ac8h], 0
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 10a4ch]
        shr ecx, 4
        and ecx, 0fh
        mov edx, dword ptr [ebp - 388h]
        cmp dword ptr [edx + 10bech], ecx
        ; Exact mapped bytes 75 0D: jne 0x585ddbc7
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 388h]
        mov byte ptr [eax + 10ac8h], 1
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 7E 7E EB FF: call 0x58495a50
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x7e
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x585ddc95
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 0B 7D EB FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x7d
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x585ddc95
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 388h]
        mov ecx, dword ptr [ecx + 21e20h]
        ; Exact mapped bytes E8 F2 E4 EA FF: call 0x5848c0f0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe4
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 6E: je 0x585ddc71
        __asm _emit 0x74
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 388h]
        mov ecx, dword ptr [edx + 21e20h]
        ; Exact mapped bytes E8 DC E4 EA FF: call 0x5848c0f0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe4
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 74 58: je 0x585ddc71
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 21e20h]
        ; Exact mapped bytes E8 C6 E4 EA FF: call 0x5848c0f0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe4
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 66h
        ; Exact mapped bytes 74 42: je 0x585ddc71
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 388h]
        mov ecx, dword ptr [ecx + 21e20h]
        ; Exact mapped bytes E8 B0 E4 EA FF: call 0x5848c0f0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xe4
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 67h
        ; Exact mapped bytes 74 2C: je 0x585ddc71
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 388h]
        mov ecx, dword ptr [edx + 21e20h]
        ; Exact mapped bytes E8 9A E4 EA FF: call 0x5848c0f0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe4
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 68h
        ; Exact mapped bytes 74 16: je 0x585ddc71
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 21e20h]
        ; Exact mapped bytes E8 84 E4 EA FF: call 0x5848c0f0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 75 24: jne 0x585ddc95
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, byte ptr [ecx + 10ac8h]
        test edx, edx
        ; Exact mapped bytes 74 13: je 0x585ddc95
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 BA F4 FF: call 0x58529730
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xba
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6C 7F 03 00: call 0x58615c00
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x7f
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + 378h]
        mov dword ptr [eax + 10a50h], edx
        mov dword ptr [ebp - 38ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585ddcc8
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 38ch]
        add eax, 1
        mov dword ptr [ebp - 38ch], eax
        cmp dword ptr [ebp - 38ch], 0ah
        ; Exact mapped bytes 7D 7D: jge 0x585ddd4e
        __asm _emit 0x7d
        __asm _emit 0x7d
        mov ecx, dword ptr [ebp - 38ch]
        mov edx, dword ptr [ebp - 388h]
        lea eax, [edx + ecx*8 + 328h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 38ch]
        mov esi, dword ptr [ebp - 388h]
        lea ecx, [esi + ecx*8 + 10a6ch]
        mov esi, 4
        imul esi, esi, 0
        mov edx, dword ptr [eax + edx]
        mov dword ptr [ecx + esi], edx
        mov eax, dword ptr [ebp - 38ch]
        mov ecx, dword ptr [ebp - 388h]
        lea edx, [ecx + eax*8 + 328h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 38ch]
        mov esi, dword ptr [ebp - 388h]
        lea ecx, [esi + ecx*8 + 10a6ch]
        mov esi, 4
        shl esi, 0
        mov edx, dword ptr [edx + eax]
        mov dword ptr [ecx + esi], edx
        ; Exact mapped bytes E9 6B FF FF FF: jmp 0x585ddcb9
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 4
        ; Exact mapped bytes 74 70: je 0x585dddd0
        __asm _emit 0x74
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 5
        ; Exact mapped bytes 74 5E: je 0x585dddd0
        __asm _emit 0x74
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 6
        ; Exact mapped bytes 74 4C: je 0x585dddd0
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0ah
        ; Exact mapped bytes 74 3A: je 0x585dddd0
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 388h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0bh
        ; Exact mapped bytes 74 28: je 0x585dddd0
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 388h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0eh
        ; Exact mapped bytes 74 16: je 0x585dddd0
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 388h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0fh
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x585dde6e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a4ch]
        shr eax, 4
        and eax, 0fh
        mov ecx, dword ptr [ebp - 388h]
        cmp dword ptr [ecx + 10bech], eax
        ; Exact mapped bytes 75 7E: jne 0x585dde6e
        __asm _emit 0x75
        __asm _emit 0x7e
        cmp dword ptr [ebp - 410h], 0
        ; Exact mapped bytes 74 75: je 0x585dde6e
        __asm _emit 0x74
        __asm _emit 0x75
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a40h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a40h], eax
        mov edx, dword ptr [ebp - 388h]
        imul eax, dword ptr [edx + 10a40h], 0ch
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a40h], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a40h]
        xor edx, edx
        mov ecx, 0ah
        div ecx
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a40h], eax
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 10a40h]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a40h], ecx
        mov eax, dword ptr [ebp - 388h]
        cmp dword ptr [eax + 10d58h], 7d0h
        ; Exact mapped bytes 7D 0F: jge 0x585dde8f
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 388h]
        mov byte ptr [ecx + 10ac0h], 0
        ; Exact mapped bytes EB 70: jmp 0x585ddeff
        __asm _emit 0xeb
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 388h]
        cmp dword ptr [edx + 10d58h], 0fa0h
        ; Exact mapped bytes 7D 0F: jge 0x585ddeb0
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 388h]
        mov byte ptr [eax + 10ac0h], 1
        ; Exact mapped bytes EB 4F: jmp 0x585ddeff
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 388h]
        cmp dword ptr [ecx + 10d58h], 1770h
        ; Exact mapped bytes 7D 0F: jge 0x585dded1
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 388h]
        mov byte ptr [edx + 10ac0h], 2
        ; Exact mapped bytes EB 2E: jmp 0x585ddeff
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 388h]
        cmp dword ptr [eax + 10d58h], 1f40h
        ; Exact mapped bytes 7D 0F: jge 0x585ddef2
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 388h]
        mov byte ptr [ecx + 10ac0h], 3
        ; Exact mapped bytes EB 0D: jmp 0x585ddeff
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 388h]
        mov byte ptr [edx + 10ac0h], 4
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 36 E5 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xe5
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CF 6A EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x6a
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
        mov dword ptr [ebp - 498h], ecx
        cmp dword ptr [ebp - 498h], 9
        ; Exact mapped bytes 77 77: ja 0x585ddfa2
        __asm _emit 0x77
        __asm _emit 0x77
        mov edx, dword ptr [ebp - 498h]
        ; Exact mapped bytes FF 24 95 DC E9 5D 58: jmp dword ptr [edx*4 + 0x585de9dc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x58
        mov dword ptr [ebp - 3a0h], 4aah
        ; Exact mapped bytes EB 5E: jmp 0x585ddfa2
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov dword ptr [ebp - 3a0h], 4cah
        ; Exact mapped bytes EB 52: jmp 0x585ddfa2
        __asm _emit 0xeb
        __asm _emit 0x52
        mov dword ptr [ebp - 3a0h], 0be2h
        ; Exact mapped bytes EB 46: jmp 0x585ddfa2
        __asm _emit 0xeb
        __asm _emit 0x46
        mov dword ptr [ebp - 3a0h], 1308h
        ; Exact mapped bytes EB 3A: jmp 0x585ddfa2
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov dword ptr [ebp - 3a0h], 12f6h
        ; Exact mapped bytes EB 2E: jmp 0x585ddfa2
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov dword ptr [ebp - 3a0h], 1c7ch
        ; Exact mapped bytes EB 22: jmp 0x585ddfa2
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 3a0h], 1d4eh
        ; Exact mapped bytes EB 16: jmp 0x585ddfa2
        __asm _emit 0xeb
        __asm _emit 0x16
        mov dword ptr [ebp - 3a0h], 0ea60h
        ; Exact mapped bytes EB 0A: jmp 0x585ddfa2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3a0h], 1b58h
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 93 E4 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xe4
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2C 6A EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x6a
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0C: mov ax, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E8 0A: shr ax, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx esi, ax
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 72 E4 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe4
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0B 6A EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x6a
        __asm _emit 0xea
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
        movzx edx, cx
        add esi, edx
        imul esi, dword ptr [ebp - 3a0h]
        mov dword ptr [ebp - 3d8h], esi
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 10a48h]
        mov edx, dword ptr [ebp - 388h]
        add ecx, dword ptr [edx + 10a40h]
        push ecx
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 9E DC EA FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xdc
        __asm _emit 0xea
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov eax, dword ptr [ebp - 3d8h]
        sub eax, edx
        mov dword ptr [ebp - 3d8h], eax
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + 10a40h]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 388h]
        mov dword ptr [eax + 10a40h], edx
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + 10a24h]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 388h]
        mov dword ptr [eax + 10a24h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 78 EB FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x78
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 75 2C: jne 0x585de0a1
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 89 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 59 E0 F3 FF: call 0x5851c0e0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xe0
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 3C: jne 0x585de0c7
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A 89 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x89
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 53 69 FF FF: call 0x585d49f0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x585de0c7
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + 10a28h]
        cmp edx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes 7E 12: jle 0x585de0c7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [ebp - 3d8h]
        mov dword ptr [eax + 10a28h], ecx
        imul eax, dword ptr [ebp - 3a0h], 9
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 388h]
        cmp dword ptr [edx + 10a48h], eax
        ; Exact mapped bytes 7E 1B: jle 0x585de0ff
        __asm _emit 0x7e
        __asm _emit 0x1b
        imul eax, dword ptr [ebp - 3a0h], 9
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a48h], eax
        imul eax, dword ptr [ebp - 3a0h], 9
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 388h]
        cmp dword ptr [edx + 10a40h], eax
        ; Exact mapped bytes 76 1B: jbe 0x585de137
        __asm _emit 0x76
        __asm _emit 0x1b
        imul eax, dword ptr [ebp - 3a0h], 9
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a40h], eax
        imul eax, dword ptr [ebp - 3a0h], 0ch
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 388h]
        cmp dword ptr [edx + 10a24h], eax
        ; Exact mapped bytes 76 1B: jbe 0x585de16f
        __asm _emit 0x76
        __asm _emit 0x1b
        imul eax, dword ptr [ebp - 3a0h], 0ch
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10a24h], eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 64 49 FF FF: call 0x585d2ae0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes 7E 15: jle 0x585de199
        __asm _emit 0x7e
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 3d8h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 08 98 00 00: call 0x585e79a0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 0C 49 FF FF: call 0x585d2ab0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        imul eax, dword ptr [ebp - 3a0h], 0ch
        cdq
        mov esi, 0ah
        idiv esi
        cmp ecx, eax
        ; Exact mapped bytes 76 1C: jbe 0x585de1d5
        __asm _emit 0x76
        __asm _emit 0x1c
        imul eax, dword ptr [ebp - 3a0h], 0ch
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 8C 97 00 00: call 0x585e7960
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a40h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a40h], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a24h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a24h], eax
        mov edx, dword ptr [ebp - 388h]
        cmp dword ptr [edx + 10a28h], 0
        ; Exact mapped bytes 7D 10: jge 0x585de22e
        __asm _emit 0x7d
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 388h]
        mov dword ptr [eax + 10a28h], 0
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 A5 48 FF FF: call 0x585d2ae0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7D 10: jge 0x585de24f
        __asm _emit 0x7d
        __asm _emit 0x10
        push 0
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 52 97 00 00: call 0x585e79a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 86 7C F1 FF: call 0x584f5ee0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10ac4h], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a40h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a40h], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a24h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a24h], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a38h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a38h], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a44h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a44h], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a3ch]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a3ch], eax
        mov dword ptr [ebp - 38ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585de312
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 38ch]
        add edx, 1
        mov dword ptr [ebp - 38ch], edx
        cmp dword ptr [ebp - 38ch], 20h
        ; Exact mapped bytes 0F 8D 85 00 00 00: jge 0x585de3a4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38ch]
        mov ecx, dword ptr [ebp - 388h]
        lea edx, [ecx + eax*2 + 10921h]
        mov eax, 1
        imul ecx, eax, 0
        movzx edx, byte ptr [edx + ecx]
        xor edx, 55h
        mov eax, 1
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 38ch]
        mov esi, dword ptr [ebp - 388h]
        lea eax, [esi + eax*2 + 10921h]
        mov byte ptr [eax + ecx], dl
        mov ecx, dword ptr [ebp - 38ch]
        mov edx, dword ptr [ebp - 388h]
        lea eax, [edx + ecx*2 + 10921h]
        mov ecx, 1
        shl ecx, 0
        movzx edx, byte ptr [eax + ecx]
        xor edx, 55h
        mov eax, 1
        shl eax, 0
        mov ecx, dword ptr [ebp - 38ch]
        mov esi, dword ptr [ebp - 388h]
        lea ecx, [esi + ecx*2 + 10921h]
        mov byte ptr [ecx + eax], dl
        ; Exact mapped bytes E9 5F FF FF FF: jmp 0x585de303
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 21e80h]
        push eax
        push 5
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 E2 95 00 00: call 0x585e79a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        mov ecx, dword ptr [ebp - 388h]
        add ecx, 21e50h
        push ecx
        mov edx, dword ptr [ebp - 388h]
        add edx, 10a54h
        push edx
        ; Exact mapped bytes E8 B1 E4 26 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 388h]
        mov dword ptr [eax + 10ae0h], 0
        mov ecx, dword ptr [ebp - 388h]
        add ecx, 1091ch
        mov dword ptr [ebp - 444h], ecx
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10abch], 0
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + 10a28h]
        mov dword ptr [eax + 10abch], edx
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 10abch]
        xor ecx, 0f3a91cd0h
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10abch], ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B 32 F9 FF: call 0x58571660
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x32
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 5d8h], eax
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 10abch]
        mov dword ptr [ebp - 5d4h], ecx
        mov edx, dword ptr [ebp - 5d4h]
        xor edx, dword ptr [ebp - 5d8h]
        mov eax, dword ptr [ebp - 388h]
        mov dword ptr [eax + 10abch], edx
        mov dword ptr [ebp - 38ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585de4a0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 38ch]
        add ecx, 1
        mov dword ptr [ebp - 38ch], ecx
        cmp dword ptr [ebp - 38ch], 1c4h
        ; Exact mapped bytes 73 32: jae 0x585de4de
        __asm _emit 0x73
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 444h]
        movzx eax, byte ptr [edx]
        mov ecx, dword ptr [ebp - 388h]
        add eax, dword ptr [ecx + 10ae0h]
        mov edx, dword ptr [ebp - 388h]
        mov dword ptr [edx + 10ae0h], eax
        mov eax, dword ptr [ebp - 444h]
        add eax, 1
        mov dword ptr [ebp - 444h], eax
        ; Exact mapped bytes EB B3: jmp 0x585de491
        __asm _emit 0xeb
        __asm _emit 0xb3
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + edx + 10dach]
        ; Exact mapped bytes E8 B8 72 EB FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x72
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10adch], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a40h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a40h], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a24h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a24h], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a38h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a38h], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a44h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a44h], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a3ch]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a3ch], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a28h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a28h], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a2ch]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a2ch], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a48h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a48h], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10a4ch]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10a4ch], eax
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10ac4h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10ac4h], eax
        mov edx, dword ptr [ebp - 388h]
        movzx eax, byte ptr [edx + 10ac8h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov byte ptr [ecx + 10ac8h], al
        mov dword ptr [ebp - 38ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585de65f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 38ch]
        add edx, 1
        mov dword ptr [ebp - 38ch], edx
        cmp dword ptr [ebp - 38ch], 20h
        ; Exact mapped bytes 0F 8D 85 00 00 00: jge 0x585de6f1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38ch]
        mov ecx, dword ptr [ebp - 388h]
        lea edx, [ecx + eax*2 + 10921h]
        mov eax, 1
        imul ecx, eax, 0
        movzx edx, byte ptr [edx + ecx]
        xor edx, 55h
        mov eax, 1
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 38ch]
        mov esi, dword ptr [ebp - 388h]
        lea eax, [esi + eax*2 + 10921h]
        mov byte ptr [eax + ecx], dl
        mov ecx, dword ptr [ebp - 38ch]
        mov edx, dword ptr [ebp - 388h]
        lea eax, [edx + ecx*2 + 10921h]
        mov ecx, 1
        shl ecx, 0
        movzx edx, byte ptr [eax + ecx]
        xor edx, 55h
        mov eax, 1
        shl eax, 0
        mov ecx, dword ptr [ebp - 38ch]
        mov esi, dword ptr [ebp - 388h]
        lea ecx, [esi + ecx*2 + 10921h]
        mov byte ptr [ecx + eax], dl
        ; Exact mapped bytes E9 5F FF FF FF: jmp 0x585de650
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 10ae0h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 388h]
        mov dword ptr [ecx + 10ae0h], eax
        mov edx, dword ptr [ebp - 388h]
        add edx, 1091ch
        push edx
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 24 02 00: call 0x58600bb0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 10780h]
        and ecx, 1
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x585de830
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
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
        ; Exact mapped bytes E8 99 D7 EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd7
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 3c4h], eax
        ; Exact mapped bytes EB 11: jmp 0x585de760
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 D6 D9 EA FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xd9
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 3c4h], eax
        cmp dword ptr [ebp - 3c4h], 0
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x585de830
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 589604e0h
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 83 B9 EC FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xec
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 9F 00 00 00: jne 0x585de82b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 A9 DC EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xdc
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C2 62 EA FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x62
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [eax + 0a4h], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x585de82b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3d4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585de7c6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 3d4h]
        add edx, 1
        mov dword ptr [ebp - 3d4h], edx
        cmp dword ptr [ebp - 3d4h], 5
        ; Exact mapped bytes 7D 49: jge 0x585de818
        __asm _emit 0x7d
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 66 DC EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xdc
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7F 62 EA FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x62
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        shr eax, 0ah
        and eax, 3fffffh
        mov ecx, dword ptr [ebp - 3d4h]
        cmp dword ptr [ecx*4 + 589605ach], eax
        ; Exact mapped bytes 75 1C: jne 0x585de816
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 3d4h]
        mov al, byte ptr [edx + 589605c0h]
        add al, 1
        mov ecx, dword ptr [ebp - 3d4h]
        mov byte ptr [ecx + 589605c0h], al
        ; Exact mapped bytes EB 02: jmp 0x585de818
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 9F: jmp 0x585de7b7
        __asm _emit 0xeb
        __asm _emit 0x9f
        mov edx, dword ptr [ebp - 3c4h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 09 FA FF: call 0x5857f180
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x09
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1F FF FF FF: jmp 0x585de74f
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 388h]
        cmp dword ptr [eax + 21e10h], 0
        ; Exact mapped bytes 74 6A: je 0x585de8a9
        __asm _emit 0x74
        __asm _emit 0x6a
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + 21e14h]
        push edx
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        lea eax, [ebp - 424h]
        push eax
        push 31ch
        mov ecx, dword ptr [ebp - 388h]
        add ecx, 21af0h
        push ecx
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 21e14h]
        push eax
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + 21e14h]
        push edx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 388h]
        mov dword ptr [eax + 21e14h], 0ffffffffh
        ; Exact mapped bytes 83 3D 6C 20 96 58 00: cmp dword ptr [0x5896206c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x585de9cb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588acff0h
        lea ecx, [ebp - 124h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        lea edx, [ebp - 124h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 5dch], eax
        ; Exact mapped bytes A1 70 20 96 58: mov eax, dword ptr [0x58962070]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 5e0h], eax
        push 0
        lea ecx, [ebp - 424h]
        push ecx
        mov edx, dword ptr [ebp - 5dch]
        push edx
        lea eax, [ebp - 124h]
        push eax
        mov ecx, dword ptr [ebp - 5e0h]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 588ad02ch
        lea edx, [ebp - 124h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        lea eax, [ebp - 124h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 5e4h], eax
        ; Exact mapped bytes 8B 0D 70 20 96 58: mov ecx, dword ptr [0x58962070]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 5e8h], ecx
        push 0
        lea edx, [ebp - 424h]
        push edx
        mov eax, dword ptr [ebp - 5e4h]
        push eax
        lea ecx, [ebp - 124h]
        push ecx
        mov edx, dword ptr [ebp - 5e8h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 588ad038h
        lea eax, [ebp - 124h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        lea ecx, [ebp - 124h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 5ech], eax
        ; Exact mapped bytes 8B 15 70 20 96 58: mov edx, dword ptr [0x58962070]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 5f0h], edx
        push 0
        lea eax, [ebp - 424h]
        push eax
        mov ecx, dword ptr [ebp - 5ech]
        push ecx
        lea edx, [ebp - 124h]
        push edx
        mov eax, dword ptr [ebp - 5f0h]
        push eax
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 70 20 96 58: mov ecx, dword ptr [0x58962070]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        pop edi
        pop esi
    }
}
