// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E29B0 .. +0xD38 bytes.
extern "C" __declspec(naked) void FUN_585e29b0_585E29B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 9c4h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 910h], ecx
        mov eax, dword ptr [ebp - 910h]
        add eax, 106a4h
        mov dword ptr [ebp - 994h], eax
        lea ecx, [ebp - 9b4h]
        push ecx
        mov ecx, dword ptr [ebp - 994h]
        ; Exact mapped bytes E8 53 03 F2 FF: call 0x58502d40
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0xf2
        __asm _emit 0xff
        lea ecx, [ebp - 9b4h]
        ; Exact mapped bytes E8 38 F6 F1 FF: call 0x58502030
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf6
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 940h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 93ch], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ebp - 938h], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 934h], eax
        mov ecx, dword ptr [ebp - 910h]
        mov edx, dword ptr [ebp - 93ch]
        mov dword ptr [ecx + 10694h], edx
        push 0
        mov eax, dword ptr [ebp - 910h]
        mov ecx, dword ptr [eax + 10694h]
        push ecx
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 FA 27 15 00: call 0x58735240
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x27
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 6C 20 96 58 00: cmp dword ptr [0x5896206c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x585e2ade
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 910h]
        mov eax, dword ptr [edx + 10694h]
        mov dword ptr [ebp - 9b8h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F 2C EB FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x2c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 9bch], eax
        mov ecx, dword ptr [ebp - 9b8h]
        push ecx
        mov edx, dword ptr [ebp - 9bch]
        push edx
        push 588ac79ch
        lea eax, [ebp - 904h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        lea ecx, [ebp - 904h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 95ch], eax
        ; Exact mapped bytes 8B 15 70 20 96 58: mov edx, dword ptr [0x58962070]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 960h], edx
        push 0
        lea eax, [ebp - 9c4h]
        push eax
        mov ecx, dword ptr [ebp - 95ch]
        push ecx
        lea edx, [ebp - 904h]
        push edx
        mov eax, dword ptr [ebp - 960h]
        push eax
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp - 934h], 0
        ; Exact mapped bytes 0F 84 EE 0B 00 00: je 0x585e36d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 0D 9E 75 94 58: movzx ecx, byte ptr [0x5894759e]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0x9e
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x585e2b14
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 910h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 3
        ; Exact mapped bytes 74 0C: je 0x585e2b14
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 910h]
        ; Exact mapped bytes E8 CD C5 FF FF: call 0x585df0e0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 934h]
        mov dword ptr [ebp - 920h], ecx
        mov dword ptr [ebp - 930h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB 93 EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x93
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 90ch], eax
        ; Exact mapped bytes EB 20: jmp 0x585e2b5d
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes E8 E8 95 EA FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 90ch], eax
        mov edx, dword ptr [ebp - 930h]
        add edx, 1
        mov dword ptr [ebp - 930h], edx
        cmp dword ptr [ebp - 90ch], 0
        ; Exact mapped bytes 0F 84 2D 0B 00 00: je 0x585e3697
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes E8 CB F4 17 00: call 0x58762040
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf4
        __asm _emit 0x17
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 12 0B 00 00: jne 0x585e3692
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 910h]
        cmp dword ptr [eax + 21ab8h], 0
        ; Exact mapped bytes 74 17: je 0x585e2ba6
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 3E EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x3e
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [ebp - 90ch], eax
        ; Exact mapped bytes 0F 84 EC 0A 00 00: je 0x585e3692
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes E8 EF 2E EB FF: call 0x58495aa0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x2e
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B5 0A 00 00: je 0x585e366e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 920h]
        mov dl, byte ptr [ecx]
        mov byte ptr [ebp - 905h], dl
        mov eax, dword ptr [ebp - 920h]
        add eax, 1
        mov dword ptr [ebp - 920h], eax
        mov dword ptr [ebp - 914h], 0
        movzx ecx, byte ptr [ebp - 905h]
        cmp ecx, 40h
        ; Exact mapped bytes 0F 85 F1 00 00 00: jne 0x585e2ce1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes E8 15 91 18 00: call 0x5876bd10
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x91
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes E8 1A 6C 18 00: call 0x58769820
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x6c
        __asm _emit 0x18
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes E8 3D C9 EB FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xc9
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 910h]
        mov eax, dword ptr [edx + 10780h]
        and eax, 1
        ; Exact mapped bytes 74 35: je 0x585e2c5a
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes E8 F0 A4 EA FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xa4
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x585e2c5a
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 93 EA FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x93
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 964h], eax
        push 0
        mov ecx, dword ptr [ebp - 90ch]
        push ecx
        mov ecx, dword ptr [ebp - 964h]
        ; Exact mapped bytes E8 97 0E F1 FF: call 0x584f3af0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x0e
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes E8 DB 97 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x97
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 94 92 EA FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x92
        __asm _emit 0xea
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 4]
        mov eax, dword ptr [edx*4 + 58948c34h]
        mov dword ptr [ebp - 96ch], eax
        mov ecx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes E8 C8 94 EA FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x94
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 968h], eax
        mov ecx, dword ptr [ebp - 968h]
        push ecx
        mov ecx, dword ptr [ebp - 96ch]
        ; Exact mapped bytes E8 10 09 F4 FF: call 0x585235b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0xf4
        __asm _emit 0xff
        push 0
        push 0
        mov edx, dword ptr [ebp - 90ch]
        push edx
        mov ecx, dword ptr [ebp - 910h]
        ; Exact mapped bytes E8 1A 6A 00 00: call 0x585e96d0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes E8 3F 74 EC FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x74
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 970h], eax
        push 1
        mov eax, dword ptr [ebp - 970h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 F1 0F 00: call 0x586e1e00
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xf1
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 79 09 00 00: jmp 0x585e365a
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [ebp - 905h]
        cmp ecx, 4fh
        ; Exact mapped bytes 0F 85 D6 01 00 00: jne 0x585e2ec7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
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
        ; Exact mapped bytes E8 C4 3C EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x3c
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [ebp - 90ch], eax
        ; Exact mapped bytes 75 2C: jne 0x585e2d30
        __asm _emit 0x75
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 910h]
        cmp dword ptr [edx + 1067ch], 0
        ; Exact mapped bytes 75 1D: jne 0x585e2d30
        __asm _emit 0x75
        __asm _emit 0x1d
        push 0
        push 0
        push 0ch
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 9C F9 FF: call 0x5857c9c0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x9c
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 CA F9 FF: call 0x5857f810
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xca
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes E8 D5 8F 18 00: call 0x5876bd10
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x8f
        __asm _emit 0x18
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes E8 98 31 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x31
        __asm _emit 0xea
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes E8 FB C7 EB FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xc7
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 910h]
        mov ecx, dword ptr [eax + 10780h]
        and ecx, 1
        ; Exact mapped bytes 74 64: je 0x585e2dcb
        __asm _emit 0x74
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes E8 AE A3 EA FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xa3
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 55: jne 0x585e2dcb
        __asm _emit 0x75
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF 91 EA FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x91
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 974h], eax
        push 1
        mov edx, dword ptr [ebp - 90ch]
        push edx
        mov ecx, dword ptr [ebp - 974h]
        ; Exact mapped bytes E8 55 0D F1 FF: call 0x584f3af0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x0d
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 97ch], eax
        mov eax, dword ptr [ebp - 910h]
        mov ecx, dword ptr [eax + 10bf0h]
        mov dword ptr [ebp - 978h], ecx
        mov edx, dword ptr [ebp - 978h]
        sub edx, dword ptr [ebp - 97ch]
        mov eax, dword ptr [ebp - 910h]
        mov dword ptr [eax + 10bf0h], edx
        mov ecx, dword ptr [ebp - 910h]
        movzx edx, byte ptr [ecx + 20f3ch]
        test edx, edx
        ; Exact mapped bytes 75 68: jne 0x585e2e44
        __asm _emit 0x75
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes E8 C9 A1 EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xa1
        __asm _emit 0xea
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC 3B EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x3b
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B5 A1 EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xa1
        __asm _emit 0xea
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 45: je 0x585e2e44
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes E8 36 96 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x96
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CF 1B EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x1b
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [eax + 60h]
        mov dword ptr [ebp - 984h], eax
        mov ecx, dword ptr [ebp - 910h]
        mov edx, dword ptr [ecx + 10bf0h]
        mov dword ptr [ebp - 980h], edx
        mov eax, dword ptr [ebp - 980h]
        sub eax, dword ptr [ebp - 984h]
        mov ecx, dword ptr [ebp - 910h]
        mov dword ptr [ecx + 10bf0h], eax
        push 4
        mov edx, dword ptr [ebp - 90ch]
        push edx
        mov ecx, dword ptr [ebp - 910h]
        ; Exact mapped bytes E8 B8 50 00 00: call 0x585e7f10
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes E8 DD 95 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x95
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 96 90 EA FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0xea
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 4]
        mov ecx, dword ptr [eax*4 + 58948c34h]
        mov dword ptr [ebp - 98ch], ecx
        mov ecx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes E8 BA 95 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x95
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 73 90 EA FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0xea
        __asm _emit 0xff
        movzx edx, word ptr [eax]
        mov dword ptr [ebp - 988h], edx
        mov eax, dword ptr [ebp - 988h]
        push eax
        mov ecx, dword ptr [ebp - 98ch]
        ; Exact mapped bytes E8 08 07 F4 FF: call 0x585235b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0xf4
        __asm _emit 0xff
        push 40000000h
        push 0
        mov ecx, dword ptr [ebp - 90ch]
        push ecx
        mov ecx, dword ptr [ebp - 910h]
        ; Exact mapped bytes E8 0F 68 00 00: call 0x585e96d0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 93 07 00 00: jmp 0x585e365a
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [ebp - 905h]
        and edx, 80h
        ; Exact mapped bytes 0F 84 28 02 00 00: je 0x585e3102
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 914h]
        mov dword ptr [ebp - 94ch], eax
        mov ecx, dword ptr [ebp - 920h]
        add ecx, dword ptr [ebp - 914h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 C1 EA 06: shr dx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        mov eax, 3ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        movzx ecx, dx
        mov edx, dword ptr [ebp - 914h]
        lea eax, [edx + ecx + 2]
        mov dword ptr [ebp - 914h], eax
        mov ecx, dword ptr [ebp - 914h]
        cmp ecx, dword ptr [ebp - 940h]
        ; Exact mapped bytes 0F 8E DC 01 00 00: jle 0x585e3102
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 920h]
        add edx, dword ptr [ebp - 94ch]
        mov dword ptr [ebp - 950h], edx
        push 0
        push 80h
        push 4
        push 0
        push 0
        push 40000000h
        push 588ac7b4h
        ; Exact mapped bytes E8 AC 03 1D 00: call 0x587b3300
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x1d
        __asm _emit 0x00
        mov dword ptr [ebp - 924h], eax
        push 2
        push 0
        push 0
        mov eax, dword ptr [ebp - 924h]
        push eax
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 588ac7c8h
        lea ecx, [ebp - 804h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        push 0
        lea edx, [ebp - 944h]
        push edx
        lea eax, [ebp - 804h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        lea ecx, [ebp - 804h]
        push ecx
        mov edx, dword ptr [ebp - 924h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        movzx eax, byte ptr [ebp - 905h]
        push eax
        mov ecx, dword ptr [ebp - 940h]
        push ecx
        mov edx, dword ptr [ebp - 914h]
        push edx
        mov eax, dword ptr [ebp - 94ch]
        push eax
        push 588ac818h
        lea ecx, [ebp - 804h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 18h
        push 0
        lea edx, [ebp - 944h]
        push edx
        lea eax, [ebp - 804h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        lea ecx, [ebp - 804h]
        push ecx
        mov edx, dword ptr [ebp - 924h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B 90 EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x90
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 990h], eax
        mov eax, dword ptr [ebp - 910h]
        movzx ecx, word ptr [eax + 1077ah]
        mov dword ptr [ebp - 9ach], ecx
        mov edx, dword ptr [ebp - 990h]
        push edx
        mov eax, dword ptr [ebp - 930h]
        push eax
        mov ecx, dword ptr [ebp - 9ach]
        push ecx
        mov edx, dword ptr [ebp - 93ch]
        push edx
        push 588ac850h
        lea eax, [ebp - 804h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 18h
        push 0
        lea ecx, [ebp - 944h]
        push ecx
        lea edx, [ebp - 804h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        lea eax, [ebp - 804h]
        push eax
        mov ecx, dword ptr [ebp - 924h]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 950h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 C1 E8 06: shr ax, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        mov ecx, 3ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        movzx edx, ax
        push edx
        mov eax, dword ptr [ebp - 950h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 3F: and cx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x3f
        movzx edx, cx
        push edx
        push 588ac878h
        lea eax, [ebp - 804h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        push 0
        lea ecx, [ebp - 944h]
        push ecx
        lea edx, [ebp - 804h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        lea eax, [ebp - 804h]
        push eax
        mov ecx, dword ptr [ebp - 924h]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 924h]
        push edx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov dword ptr [ebp - 92ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585e311d
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 92ch]
        add eax, 1
        mov dword ptr [ebp - 92ch], eax
        mov ecx, dword ptr [ebp - 910h]
        mov edx, dword ptr [ebp - 92ch]
        cmp edx, dword ptr [ecx + 10de4h]
        ; Exact mapped bytes 0F 8D F1 04 00 00: jge 0x585e3626
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebp - 905h]
        mov edx, 1
        mov ecx, dword ptr [ebp - 92ch]
        shl edx, cl
        and eax, edx
        ; Exact mapped bytes 0F 84 D0 04 00 00: je 0x585e3621
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 914h]
        mov dword ptr [ebp - 954h], eax
        mov ecx, dword ptr [ebp - 920h]
        add ecx, dword ptr [ebp - 914h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 C1 EA 06: shr dx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        mov eax, 3ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        movzx ecx, dx
        mov edx, dword ptr [ebp - 914h]
        lea eax, [edx + ecx + 2]
        mov dword ptr [ebp - 914h], eax
        mov ecx, dword ptr [ebp - 914h]
        cmp ecx, dword ptr [ebp - 940h]
        ; Exact mapped bytes 0F 8E 84 04 00 00: jle 0x585e3621
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 920h]
        add edx, dword ptr [ebp - 954h]
        mov dword ptr [ebp - 958h], edx
        push 0
        push 80h
        push 4
        push 0
        push 0
        push 40000000h
        push 588ac8a4h
        ; Exact mapped bytes E8 35 01 1D 00: call 0x587b3300
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x1d
        __asm _emit 0x00
        mov dword ptr [ebp - 918h], eax
        push 2
        push 0
        push 0
        mov eax, dword ptr [ebp - 918h]
        push eax
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 588ac8b8h
        lea ecx, [ebp - 404h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        push 0
        lea edx, [ebp - 91ch]
        push edx
        lea eax, [ebp - 404h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        lea ecx, [ebp - 404h]
        push ecx
        mov edx, dword ptr [ebp - 918h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp - 93ch], 0
        ; Exact mapped bytes 0F 85 93 02 00 00: jne 0x585e34c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 948h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 37 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x37
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B2 6E EC FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x6e
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 998h], eax
        mov eax, dword ptr [ebp - 910h]
        mov ecx, dword ptr [eax + 10aech]
        mov dword ptr [ebp - 99ch], ecx
        mov edx, dword ptr [ebp - 938h]
        push edx
        mov eax, dword ptr [ebp - 998h]
        push eax
        mov ecx, dword ptr [ebp - 99ch]
        push ecx
        push 588ac908h
        lea edx, [ebp - 404h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        push 0
        lea eax, [ebp - 91ch]
        push eax
        lea ecx, [ebp - 404h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        lea edx, [ebp - 404h]
        push edx
        mov eax, dword ptr [ebp - 918h]
        push eax
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 8C EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x8c
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 928h], eax
        ; Exact mapped bytes EB 11: jmp 0x585e32e0
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 928h]
        ; Exact mapped bytes E8 56 8E EA FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x8e
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 928h], eax
        cmp dword ptr [ebp - 928h], 0
        ; Exact mapped bytes 0F 84 D8 01 00 00: je 0x585e34c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 928h]
        ; Exact mapped bytes E8 08 6E EC FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x6e
        __asm _emit 0xec
        __asm _emit 0xff
        push eax
        push 588ac938h
        lea ecx, [ebp - 404h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 0
        lea edx, [ebp - 91ch]
        push edx
        lea eax, [ebp - 404h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        lea ecx, [ebp - 404h]
        push ecx
        mov edx, dword ptr [ebp - 918h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 928h]
        ; Exact mapped bytes E8 FB EC 17 00: call 0x58762040
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xec
        __asm _emit 0x17
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 40: jne 0x585e338c
        __asm _emit 0x75
        __asm _emit 0x40
        push 588ac940h
        lea eax, [ebp - 404h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        lea ecx, [ebp - 91ch]
        push ecx
        lea edx, [ebp - 404h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        lea eax, [ebp - 404h]
        push eax
        mov ecx, dword ptr [ebp - 918h]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 3E: jmp 0x585e33ca
        __asm _emit 0xeb
        __asm _emit 0x3e
        push 588ac948h
        lea edx, [ebp - 404h]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        lea eax, [ebp - 91ch]
        push eax
        lea ecx, [ebp - 404h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        lea edx, [ebp - 404h]
        push edx
        mov eax, dword ptr [ebp - 918h]
        push eax
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 928h]
        ; Exact mapped bytes E8 CB 26 EB FF: call 0x58495aa0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x26
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 40: jne 0x585e341a
        __asm _emit 0x75
        __asm _emit 0x40
        push 588ac950h
        lea ecx, [ebp - 404h]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        lea edx, [ebp - 91ch]
        push edx
        lea eax, [ebp - 404h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        lea ecx, [ebp - 404h]
        push ecx
        mov edx, dword ptr [ebp - 918h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 3E: jmp 0x585e3458
        __asm _emit 0xeb
        __asm _emit 0x3e
        push 588ac954h
        lea eax, [ebp - 404h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        lea ecx, [ebp - 91ch]
        push ecx
        lea edx, [ebp - 404h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        lea eax, [ebp - 404h]
        push eax
        mov ecx, dword ptr [ebp - 918h]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov edx, dword ptr [ebp - 948h]
        and edx, 80000007h
        ; Exact mapped bytes 79 05: jns 0x585e346b
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffff8h
        inc edx
        cmp edx, 7
        ; Exact mapped bytes 75 41: jne 0x585e34b1
        __asm _emit 0x75
        __asm _emit 0x41
        push 588ac958h
        lea eax, [ebp - 404h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        push 0
        lea ecx, [ebp - 91ch]
        push ecx
        lea edx, [ebp - 404h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        lea eax, [ebp - 404h]
        push eax
        mov ecx, dword ptr [ebp - 918h]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov edx, dword ptr [ebp - 948h]
        add edx, 1
        mov dword ptr [ebp - 948h], edx
        ; Exact mapped bytes E9 0A FE FF FF: jmp 0x585e32cf
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 92ch]
        push eax
        movzx ecx, byte ptr [ebp - 905h]
        push ecx
        mov edx, dword ptr [ebp - 940h]
        push edx
        mov eax, dword ptr [ebp - 914h]
        push eax
        mov ecx, dword ptr [ebp - 954h]
        push ecx
        push 588ac960h
        lea edx, [ebp - 404h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 1ch
        push 0
        lea eax, [ebp - 91ch]
        push eax
        lea ecx, [ebp - 404h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        lea edx, [ebp - 404h]
        push edx
        mov eax, dword ptr [ebp - 918h]
        push eax
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C 8B EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x8b
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 9a0h], eax
        mov ecx, dword ptr [ebp - 910h]
        movzx edx, word ptr [ecx + 1077ah]
        mov dword ptr [ebp - 9a4h], edx
        mov eax, dword ptr [ebp - 9a0h]
        push eax
        mov ecx, dword ptr [ebp - 930h]
        push ecx
        mov edx, dword ptr [ebp - 9a4h]
        push edx
        mov eax, dword ptr [ebp - 93ch]
        push eax
        push 588ac9a8h
        lea ecx, [ebp - 404h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 18h
        push 0
        lea edx, [ebp - 91ch]
        push edx
        lea eax, [ebp - 404h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        lea ecx, [ebp - 404h]
        push ecx
        mov edx, dword ptr [ebp - 918h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 958h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 C1 E9 06: shr cx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x06
        mov edx, 3ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        movzx eax, cx
        push eax
        mov ecx, dword ptr [ebp - 958h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        movzx eax, dx
        push eax
        push 588ac9d0h
        lea ecx, [ebp - 404h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        push 0
        lea edx, [ebp - 91ch]
        push edx
        lea eax, [ebp - 404h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        lea ecx, [ebp - 404h]
        push ecx
        mov edx, dword ptr [ebp - 918h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 918h]
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 E8 FA FF FF: jmp 0x585e310e
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 90ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 9a8h], eax
        mov ecx, dword ptr [ebp - 914h]
        push ecx
        mov edx, dword ptr [ebp - 920h]
        push edx
        movzx eax, byte ptr [ebp - 905h]
        push eax
        mov ecx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes FF 95 58 F6 FF FF: call dword ptr [ebp - 0x9a8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x58
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 920h]
        add ecx, dword ptr [ebp - 914h]
        mov dword ptr [ebp - 920h], ecx
        ; Exact mapped bytes EB 24: jmp 0x585e3692
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 90ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 9c0h], ecx
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes FF 95 40 F6 FF FF: call dword ptr [ebp - 0x9c0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A6 F4 FF FF: jmp 0x585e2b3d
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 934h], 0
        ; Exact mapped bytes 74 27: je 0x585e36c7
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 934h]
        mov dword ptr [ebp - 9b0h], edx
        push 1
        mov eax, dword ptr [ebp - 9b0h]
        push eax
        ; Exact mapped bytes E8 7A D9 24 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xd9
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 934h], 0
        mov ecx, dword ptr [ebp - 910h]
        add ecx, 106a4h
        ; Exact mapped bytes E8 A8 B2 00 00: call 0x585ee980
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 6C D9 24 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xd9
        __asm _emit 0x24
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
