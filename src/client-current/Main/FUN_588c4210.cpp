// Complete Ghidra body ranges for the selected function.
// 3 discontiguous segments; total 6352 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C4210 .. +0x1094 bytes.
extern "C" __declspec(naked) void FUN_588c4210_segment_00() {
    __asm {
        sub esp, 258h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 254h], eax
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 26ch]
        push edi
        mov edi, dword ptr [esp + 26ch]
        mov eax, dword ptr [edi + 4]
        add eax, 7ffdcf00h
        mov ebx, ecx
        cmp eax, 2dh
        ; Exact mapped bytes 0F 87 93 18 00 00: ja 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x93
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 FC 5A 8C 58: jmp dword ptr [eax*4 + 0x588c5afc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x5a
        __asm _emit 0x8c
        __asm _emit 0x58
        mov eax, dword ptr [esi]
        ; Exact mapped bytes A3 9C B1 A0 58: mov dword ptr [0x58a0b19c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 4]
        ; Exact mapped bytes 89 0D A0 B1 A0 58: mov dword ptr [0x58a0b1a0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        mov edx, dword ptr [esi + 8]
        ; Exact mapped bytes 89 15 A4 B1 A0 58: mov dword ptr [0x58a0b1a4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        mov eax, dword ptr [esi + 0ch]
        ; Exact mapped bytes A3 A8 B1 A0 58: mov dword ptr [0x58a0b1a8], eax
        __asm _emit 0xa3
        __asm _emit 0xa8
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 2C C4 98 58: call dword ptr [0x5898c42c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes A3 98 B1 A0 58: mov dword ptr [0x58a0b198], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes E9 5B 18 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ch]
        mov edx, dword ptr [edi + 8]
        push esi
        push ecx
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 BB 21 F1 FF: call 0x587d6450
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x21
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes E9 42 18 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [edi + 0ch]
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push eax
        ; Exact mapped bytes E8 85 99 F5 FF: call 0x5881dc30
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 2C 18 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ch]
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [edi + 8]
        push esi
        push ecx
        mov ecx, dword ptr [eax + 0dch]
        mov ecx, dword ptr [ecx + 16ch]
        push edx
        ; Exact mapped bytes E8 21 4E F6 FF: call 0x588290f0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 08 18 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 06 07 00 00: je 0x588c49e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 7F: jne 0x588c4363
        __asm _emit 0x75
        __asm _emit 0x7f
        push 7fh
        lea edx, [esp + 169h]
        push 0
        push edx
        mov byte ptr [esp + 170h], 0
        ; Exact mapped bytes E8 4B 89 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x89
        __asm _emit 0x0b
        __asm _emit 0x00
        movzx eax, word ptr [esi + 0ah]
        movzx ecx, word ptr [esi + 8]
        movzx edx, word ptr [esi + 6]
        add esp, 0ch
        push eax
        movzx eax, word ptr [esi + 2]
        push ecx
        push edx
        push eax
        push 589a0ba0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 178h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 18h
        push 0
        lea edx, [esp + 168h]
        push edx
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea eax, [esp + 16ch]
        push eax
        push 210h
        ; Exact mapped bytes E8 99 77 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x77
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D2 09 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 79 17 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 0F 84 70 17 00 00: je 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 75 1C: jne 0x588c438d
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 497h
        ; Exact mapped bytes E8 6F 77 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x77
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A8 09 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x09
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 4F 17 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 FB 00 00 00: jne 0x588c4491
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [edi + 0ah]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 60: jne 0x588c43ff
        __asm _emit 0x75
        __asm _emit 0x60
        push 7fh
        lea ecx, [esp + 69h]
        push 0
        push ecx
        mov byte ptr [esp + 70h], al
        ; Exact mapped bytes E8 97 88 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x88
        __asm _emit 0x0b
        __asm _emit 0x00
        movzx edx, word ptr [esi + 0ah]
        movzx eax, word ptr [esi + 8]
        movzx ecx, word ptr [esi + 6]
        add esp, 0ch
        push edx
        movzx edx, word ptr [esi + 2]
        push eax
        push ecx
        push edx
        push 589a0b78h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 78h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 18h
        push 0
        lea ecx, [esp + 68h]
        push ecx
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea edx, [esp + 6ch]
        push edx
        push 211h
        ; Exact mapped bytes EB 74: jmp 0x588c4473
        __asm _emit 0xeb
        __asm _emit 0x74
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 7A: jne 0x588c447f
        __asm _emit 0x75
        __asm _emit 0x7a
        push 7fh
        lea eax, [esp + 0e9h]
        push 0
        push eax
        mov byte ptr [esp + 0f0h], 0
        ; Exact mapped bytes E8 2A 88 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x88
        __asm _emit 0x0b
        __asm _emit 0x00
        movzx ecx, word ptr [esi + 0ah]
        movzx edx, word ptr [esi + 8]
        movzx eax, word ptr [esi + 6]
        add esp, 0ch
        push ecx
        movzx ecx, word ptr [esi + 2]
        push edx
        push eax
        push ecx
        push 589a0b50h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 0f8h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 18h
        push 0
        lea eax, [esp + 0e8h]
        push eax
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea ecx, [esp + 0ech]
        push ecx
        push 212h
        ; Exact mapped bytes E8 78 76 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x76
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B1 08 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x08
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes E8 84 97 F5 FF: call 0x5881dc10
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 4B 16 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 5
        ; Exact mapped bytes 75 1C: jne 0x588c44b2
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 47eh
        ; Exact mapped bytes E8 4A 76 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x76
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 83 08 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 2A 16 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 6
        ; Exact mapped bytes 75 1C: jne 0x588c44d3
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 5dch
        ; Exact mapped bytes E8 29 76 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x76
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 62 08 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 09 16 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 7
        ; Exact mapped bytes 0F 85 00 16 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 589a0b2ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        push 2711h
        ; Exact mapped bytes E8 F7 75 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x75
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 30 08 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 D7 15 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push 40h
        lea edx, [esp + 28h]
        push 0
        push edx
        ; Exact mapped bytes E8 35 87 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x87
        __asm _emit 0x0b
        __asm _emit 0x00
        push 80h
        lea eax, [esp + 1f4h]
        push 0
        push eax
        ; Exact mapped bytes E8 21 87 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x87
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [edi + 10h]
        add esp, 18h
        cmp eax, 10h
        ; Exact mapped bytes 76 13: jbe 0x588c4545
        __asm _emit 0x76
        __asm _emit 0x13
        add eax, -10h
        push eax
        lea ecx, [esi + 10h]
        push ecx
        lea edx, [esp + 2ch]
        push edx
        ; Exact mapped bytes FF 15 94 C1 98 58: call dword ptr [0x5898c194]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        movzx edx, word ptr [edi + 8]
        xor eax, eax
        mov ecx, 589baab0h
        ; Exact mapped bytes 66 39 11: cmp word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x11
        ; Exact mapped bytes 74 0F: je 0x588c4564
        __asm _emit 0x74
        __asm _emit 0x0f
        add ecx, 0e84h
        inc eax
        cmp ecx, 589c2d54h
        ; Exact mapped bytes 7C EC: jl 0x588c4550
        __asm _emit 0x7c
        __asm _emit 0xec
        mov edi, dword ptr [edi + 0ch]
        test edi, edi
        ; Exact mapped bytes 75 60: jne 0x588c45cb
        __asm _emit 0x75
        __asm _emit 0x60
        movzx ecx, word ptr [esi + 0ah]
        imul eax, eax, 0e84h
        movzx edx, word ptr [esi + 8]
        push ecx
        movzx ecx, word ptr [esi + 6]
        push edx
        movzx edx, word ptr [esi + 2]
        push ecx
        push edx
        add eax, 589baa98h
        push eax
        lea eax, [esp + 38h]
        push eax
        push 589a0b10h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 200h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 20h
        push -1
        lea edx, [esp + 1e8h]
        push edx
        push edi
        ; Exact mapped bytes E8 1A 9D F5 FF: call 0x5881e2e0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x9d
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 11 15 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 1
        ; Exact mapped bytes 0F 85 08 15 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [esi + 0ah]
        imul eax, eax, 0e84h
        movzx edx, word ptr [esi + 8]
        push ecx
        movzx ecx, word ptr [esi + 6]
        push edx
        movzx edx, word ptr [esi + 2]
        push ecx
        push edx
        add eax, 589baa98h
        push eax
        lea eax, [esp + 38h]
        push eax
        push 589a0af8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 200h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 20h
        push -1
        lea edx, [esp + 1e8h]
        push edx
        push 0
        ; Exact mapped bytes E8 B0 9C F5 FF: call 0x5881e2e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x9c
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 A7 14 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        lea ecx, [eax*8]
        sub ecx, eax
        add ecx, ecx
        add ecx, ecx
        cmp dword ptr [edi + 10h], ecx
        ; Exact mapped bytes 0F 85 8E 14 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push eax
        mov eax, dword ptr [edx + 0dch]
        mov ecx, dword ptr [eax + 16ch]
        ; Exact mapped bytes E8 99 44 F6 FF: call 0x58828b00
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x44
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 70 14 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 10h], 0
        ; Exact mapped bytes 0F 86 66 14 00 00: jbe 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x66
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi]
        cmp al, 1
        ; Exact mapped bytes 0F 84 65 03 00 00: je 0x588c49e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 2
        ; Exact mapped bytes 0F 85 54 14 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 21ah
        ; Exact mapped bytes E8 58 74 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x74
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 91 06 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x06
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 57 EF FF: call 0x587b9db0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x57
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes E9 2D 14 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [edi + 0ah]
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 28 03 00 00: je 0x588c49e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 CF 00 00 00: jne 0x588c4795
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [edi + 8]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 2C: jne 0x588c46fb
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [edi + 0ch]
        push 0
        push 0
        push 0
        push ecx
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC F1 E8 FF: call 0x587538b0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf1
        __asm _emit 0xe8
        __asm _emit 0xff
        push eax
        push 44eh
        ; Exact mapped bytes E8 01 74 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x74
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3A 06 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x06
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 E1 13 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 2C: jne 0x588c472d
        __asm _emit 0x75
        __asm _emit 0x2c
        mov edx, dword ptr [edi + 0ch]
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 0
        push 0
        push edx
        ; Exact mapped bytes E8 9A F1 E8 FF: call 0x587538b0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf1
        __asm _emit 0xe8
        __asm _emit 0xff
        push eax
        push 44ch
        ; Exact mapped bytes E8 CF 73 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x73
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 08 06 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 AF 13 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 2C: jne 0x588c475f
        __asm _emit 0x75
        __asm _emit 0x2c
        mov eax, dword ptr [edi + 0ch]
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 0
        push 0
        push eax
        ; Exact mapped bytes E8 68 F1 E8 FF: call 0x587538b0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf1
        __asm _emit 0xe8
        __asm _emit 0xff
        push eax
        push 452h
        ; Exact mapped bytes E8 9D 73 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x73
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D6 05 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 7D 13 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 73 13 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ch]
        push 0
        push 0
        push 0
        push ecx
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 F1 E8 FF: call 0x587538b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf1
        __asm _emit 0xe8
        __asm _emit 0xff
        push eax
        push 450h
        ; Exact mapped bytes E8 67 73 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x73
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A0 05 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x05
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 47 13 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 3D 13 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3d
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [edi + 8]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 2C: jne 0x588c47d4
        __asm _emit 0x75
        __asm _emit 0x2c
        mov edx, dword ptr [edi + 0ch]
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 0
        push 0
        push edx
        ; Exact mapped bytes E8 F3 F0 E8 FF: call 0x587538b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0xff
        push eax
        push 44fh
        ; Exact mapped bytes E8 28 73 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x73
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 61 05 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x05
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 08 13 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 2C: jne 0x588c4806
        __asm _emit 0x75
        __asm _emit 0x2c
        mov eax, dword ptr [edi + 0ch]
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 0
        push 0
        push eax
        ; Exact mapped bytes E8 C1 F0 E8 FF: call 0x587538b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0xff
        push eax
        push 44dh
        ; Exact mapped bytes E8 F6 72 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x72
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2F 05 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 D6 12 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 2C: jne 0x588c4838
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [edi + 0ch]
        push 0
        push 0
        push 0
        push ecx
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F F0 E8 FF: call 0x587538b0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0xff
        push eax
        push 453h
        ; Exact mapped bytes E8 C4 72 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x72
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FD 04 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x04
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 A4 12 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 9A 12 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 0ch]
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 0
        push 0
        push edx
        ; Exact mapped bytes E8 59 F0 E8 FF: call 0x587538b0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0xff
        push eax
        push 451h
        ; Exact mapped bytes E8 8E 72 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x72
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C7 04 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 6E 12 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [edi + 0ah]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x588c4907
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [edi + 8]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 29: jne 0x588c48ad
        __asm _emit 0x75
        __asm _emit 0x29
        push 0
        push 0
        push 0
        push 213h
        ; Exact mapped bytes E8 5C 72 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x72
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 95 04 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes E8 68 93 F5 FF: call 0x5881dc10
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x93
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 2F 12 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 25 12 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 0
        push eax
        ; Exact mapped bytes E8 E6 EF E8 FF: call 0x587538b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xef
        __asm _emit 0xe8
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [edi + 0ch]
        push eax
        push 0
        push ecx
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD EF E8 FF: call 0x587538b0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xef
        __asm _emit 0xe8
        __asm _emit 0xff
        push eax
        push 214h
        ; Exact mapped bytes E8 02 72 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x72
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3B 04 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x04
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes E8 0E 93 F5 FF: call 0x5881dc10
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x93
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 D5 11 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x588c499d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [edi + 8]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 29: jne 0x588c4943
        __asm _emit 0x75
        __asm _emit 0x29
        push 0
        push 0
        push 0
        push 215h
        ; Exact mapped bytes E8 C6 71 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x71
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FF 03 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes E8 D2 92 F5 FF: call 0x5881dc10
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x92
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 99 11 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 8F 11 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 0ch]
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 0
        push edx
        ; Exact mapped bytes E8 50 EF E8 FF: call 0x587538b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xef
        __asm _emit 0xe8
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        mov eax, dword ptr [edi + 0ch]
        push 0
        push eax
        ; Exact mapped bytes E8 37 EF E8 FF: call 0x587538b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xef
        __asm _emit 0xe8
        __asm _emit 0xff
        push eax
        push 216h
        ; Exact mapped bytes E8 6C 71 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x71
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A5 03 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes E8 78 92 F5 FF: call 0x5881dc10
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x92
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 3F 11 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 74 42: je 0x588c49e5
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 2F 11 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 217h
        ; Exact mapped bytes E8 33 71 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x71
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6C 03 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes E8 3F 92 F5 FF: call 0x5881dc10
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x92
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 06 11 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 10h], 0
        ; Exact mapped bytes 76 25: jbe 0x588c4a01
        __asm _emit 0x76
        __asm _emit 0x25
        cmp byte ptr [esi], 1
        ; Exact mapped bytes 0F 85 F7 10 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 201h
        ; Exact mapped bytes E8 FB 70 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x70
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 34 03 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 DB 10 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [edi + 8]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 4B: jne 0x588c4a55
        __asm _emit 0x75
        __asm _emit 0x4b
        movzx eax, word ptr [edi + 0ah]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 1C: jne 0x588c4a2f
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 21bh
        ; Exact mapped bytes E8 CD 70 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 06 03 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 AD 10 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 A3 10 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 21ch
        ; Exact mapped bytes E8 A7 70 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x70
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E0 02 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 87 10 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 7D 10 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7d
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [edi + 0ah]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 2C: jne 0x588c4a94
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [edi + 0ch]
        push 0
        push 0
        push 0
        push ecx
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 EE E8 FF: call 0x587538b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xee
        __asm _emit 0xe8
        __asm _emit 0xff
        push eax
        push 21dh
        ; Exact mapped bytes E8 68 70 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A1 02 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 48 10 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 3E 10 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 0ch]
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 0
        push 0
        push edx
        ; Exact mapped bytes E8 FD ED E8 FF: call 0x587538b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xed
        __asm _emit 0xe8
        __asm _emit 0xff
        push eax
        push 21eh
        ; Exact mapped bytes E8 32 70 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x70
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6B 02 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 12 10 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edi + 0ch]
        test edi, edi
        ; Exact mapped bytes 75 63: jne 0x588c4b34
        __asm _emit 0x75
        __asm _emit 0x63
        push edi
        push edi
        push edi
        push 454h
        ; Exact mapped bytes E8 12 70 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x70
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4B 02 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0xea
        __asm _emit 0xff
        push 5898d0cch
        lea eax, [esp + 14h]
        push 5898d0b8h
        push eax
        ; Exact mapped bytes E8 51 83 0B 00: call 0x5897ce4a
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x83
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 D8 0F 00 00: je 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        push 589a0adch
        push ecx
        ; Exact mapped bytes E8 31 83 0B 00: call 0x5897ce44
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x83
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [esp + 18h]
        push 5898d040h
        push edx
        ; Exact mapped bytes E8 22 83 0B 00: call 0x5897ce44
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x83
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [esp + 20h]
        push eax
        ; Exact mapped bytes E8 12 83 0B 00: call 0x5897ce3e
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x83
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes E9 A8 0F 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 1
        ; Exact mapped bytes 0F 85 9F 0F 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 459h
        ; Exact mapped bytes E8 A3 6F EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x6f
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DC 01 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 83 0F 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0f2h
        mov edi, 58a0add0h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 58a0add0h
        ; Exact mapped bytes E8 CB 1F EC FF: call 0x58786b40
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x1f
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes E9 62 0F 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 8]
        push esi
        push ecx
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 91 F5 FF: call 0x5881dce0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x91
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 4D 0F 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 A0 45 A2 58: mov edx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 0a00h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 18h]
        push 0
        push 0f233h
        push 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        push 0
        push 0
        push 0
        push 485h
        ; Exact mapped bytes E8 35 6F EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x6f
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6E 01 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 15 0F 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A8 45 A2 58: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 174h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        push 0
        push 0f233h
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [edi + 0ch]
        push 0
        push 0
        add ecx, 456h
        push 0
        push ecx
        ; Exact mapped bytes E8 F9 6E EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x6e
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 32 01 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes E9 D9 0E 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E8 6E EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 0E: jne 0x588c4c26
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes E8 D3 6E EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x6e
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 0D 80 45 A2 58: cmp dword ptr [0x58a24580], ecx
        __asm _emit 0x39
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 1D: jne 0x588c4c51
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes E8 97 E1 F2 FF: call 0x587f2dd0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xe1
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 84 45 A2 58: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C E0 EF FF: call 0x587c2c90
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe0
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        push 0
        push 0f233h
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E9 70 0E 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        test eax, eax
        ; Exact mapped bytes 75 64: jne 0x588c4cd7
        __asm _emit 0x75
        __asm _emit 0x64
        mov edi, dword ptr [edi + 0ch]
        test edi, edi
        ; Exact mapped bytes 75 0D: jne 0x588c4c87
        __asm _emit 0x75
        __asm _emit 0x0d
        push edi
        push edi
        push edi
        push 4b0h
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x588c4d3c
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 1
        ; Exact mapped bytes 0F 85 B8 00 00 00: jne 0x588c4d48
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 05 80 45 A2 58: cmp dword ptr [0x58a24580], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 2D: jne 0x588c4cca
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 66 83 B8 F0 05 01 00 08: cmp word ptr [eax + 0x105f0], 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 74 23: je 0x588c4cca
        __asm _emit 0x74
        __asm _emit 0x23
        push -1
        push 5898fcf0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push eax
        push 0
        ; Exact mapped bytes E8 1B 96 F5 FF: call 0x5881e2e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x96
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 7E 00 00 00: jmp 0x588c4d48
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 4b1h
        ; Exact mapped bytes EB 65: jmp 0x588c4d3c
        __asm _emit 0xeb
        __asm _emit 0x65
        cmp eax, 1
        ; Exact mapped bytes 75 6C: jne 0x588c4d48
        __asm _emit 0x75
        __asm _emit 0x6c
        mov edi, dword ptr [edi + 0ch]
        test edi, edi
        ; Exact mapped bytes 75 3B: jne 0x588c4d1e
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 05 80 45 A2 58: cmp dword ptr [0x58a24580], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 13: jne 0x588c4d03
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 66 83 B8 F0 05 01 00 08: cmp word ptr [eax + 0x105f0], 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 74 09: je 0x588c4d03
        __asm _emit 0x74
        __asm _emit 0x09
        push -1
        push 5898fccch
        ; Exact mapped bytes EB AB: jmp 0x588c4cae
        __asm _emit 0xeb
        __asm _emit 0xab
        ; Exact mapped bytes E8 E8 6D EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 0
        push 0
        push 0
        push 4b2h
        ; Exact mapped bytes EB 1E: jmp 0x588c4d3c
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp edi, 1
        ; Exact mapped bytes 75 25: jne 0x588c4d48
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes E8 C8 6D EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x6d
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 0
        push 0
        push 0
        push 4b3h
        ; Exact mapped bytes E8 AF 6D EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x6d
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E8 FF E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, word ptr [ecx + 218cch]
        push edx
        mov ecx, ebx
        ; Exact mapped bytes E8 B3 50 EF FF: call 0x587b9e10
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x50
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, ebx
        ; Exact mapped bytes E8 8C 50 EF FF: call 0x587b9df0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes E9 73 0D 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 18 81 F2 FF: call 0x587ece90
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes E9 5F 0D 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 1
        ; Exact mapped bytes 0F 85 55 0D 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0dch]
        mov ecx, dword ptr [edx + 170h]
        push esi
        ; Exact mapped bytes E8 E1 A2 F6 FF: call 0x5882f080
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xa2
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0dch]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 AB AE F6 FF: call 0x5882fc60
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xae
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 22 0D 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 1
        mov edi, dword ptr [edi + 0ch]
        ; Exact mapped bytes 75 3A: jne 0x588c4dfd
        __asm _emit 0x75
        __asm _emit 0x3a
        mov esi, dword ptr [esi]
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 0dch]
        mov ecx, dword ptr [eax + 170h]
        push esi
        push edi
        ; Exact mapped bytes E8 F2 A2 F6 FF: call 0x5882f0d0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xa2
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, word ptr [ecx + 60h]
        cmp edx, edi
        ; Exact mapped bytes 0F 85 EC 0C 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0B 1E F1 FF: call 0x587d6c00
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x1e
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [eax + 44h], esi
        ; Exact mapped bytes E9 DF 0C 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 1
        ; Exact mapped bytes 75 1C: jne 0x588c4e1e
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 45ah
        ; Exact mapped bytes E8 DE 6C EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x6c
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 17 FF E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 BE 0C 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 2
        ; Exact mapped bytes 75 1C: jne 0x588c4e3f
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 45bh
        ; Exact mapped bytes E8 BD 6C EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x6c
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F6 FE E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 9D 0C 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 3
        ; Exact mapped bytes 0F 84 A1 01 00 00: je 0x588c4fe9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 4
        ; Exact mapped bytes 0F 85 8B 0C 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 45dh
        ; Exact mapped bytes E8 8F 6C EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x6c
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C8 FE E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 6F 0C 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 1
        mov edi, dword ptr [edi + 0ch]
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x588c4f04
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esi]
        mov esi, dword ptr [esi + 4]
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0dch]
        mov ecx, dword ptr [ecx + 170h]
        push esi
        push ebp
        push edi
        ; Exact mapped bytes E8 78 B1 F6 FF: call 0x58830010
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xb1
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 0dch]
        mov ecx, dword ptr [eax + 170h]
        push ebp
        ; Exact mapped bytes E8 A0 A2 F6 FF: call 0x5882f150
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xa2
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0dch]
        mov ecx, dword ptr [edx + 170h]
        mov ebx, eax
        ; Exact mapped bytes E8 97 AD F6 FF: call 0x5882fc60
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xad
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, word ptr [ecx + 60h]
        cmp eax, edi
        ; Exact mapped bytes 0F 85 01 0C 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 20 1D F1 FF: call 0x587d6c00
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x1d
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [eax + 48h], ebp
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 1D F1 FF: call 0x587d6c00
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x1d
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [eax + 50h], esi
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 1D F1 FF: call 0x587d6c00
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x1d
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [eax + 44h], ebx
        ; Exact mapped bytes E9 D8 0B 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 1
        ; Exact mapped bytes 0F 84 F5 FE FF FF: je 0x588c4e02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 2
        ; Exact mapped bytes 75 1C: jne 0x588c4f2e
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 45eh
        ; Exact mapped bytes E8 CE 6B EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x6b
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 07 FE E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 AE 0B 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 3
        ; Exact mapped bytes 75 62: jne 0x588c4f95
        __asm _emit 0x75
        __asm _emit 0x62
        mov edi, dword ptr [esi]
        mov ebx, dword ptr [esi + 4]
        mov esi, dword ptr [esi + 8]
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0dch]
        mov ecx, dword ptr [edx + 170h]
        push esi
        push ebx
        push edi
        ; Exact mapped bytes E8 BB B0 F6 FF: call 0x58830010
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb0
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, word ptr [ecx + 60h]
        cmp eax, edi
        ; Exact mapped bytes 75 16: jne 0x588c4f79
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes E8 98 1C F1 FF: call 0x587d6c00
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x1c
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [eax + 48h], ebx
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 1C F1 FF: call 0x587d6c00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x1c
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [eax + 50h], esi
        push 0
        push 0
        push 0
        push 45fh
        ; Exact mapped bytes E8 67 6B EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x6b
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A0 FD E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 47 0B 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 4
        ; Exact mapped bytes 0F 84 75 06 00 00: je 0x588c5613
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 5
        ; Exact mapped bytes 75 1C: jne 0x588c4fbf
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 461h
        ; Exact mapped bytes E8 3D 6B EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x6b
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 76 FD E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xfd
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 1D 0B 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 6
        ; Exact mapped bytes 75 1C: jne 0x588c4fe0
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 462h
        ; Exact mapped bytes E8 1C 6B EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x6b
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 55 FD E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfd
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 FC 0A 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 7
        ; Exact mapped bytes 0F 85 F3 0A 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 45ch
        ; Exact mapped bytes E8 F7 6A EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x6a
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 30 FD E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 D7 0A 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 1
        mov edi, dword ptr [edi + 0ch]
        ; Exact mapped bytes 75 4C: jne 0x588c505a
        __asm _emit 0x75
        __asm _emit 0x4c
        mov ebx, dword ptr [esi]
        mov esi, dword ptr [esi + 4]
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0dch]
        mov ecx, dword ptr [edx + 170h]
        push esi
        push ebx
        push edi
        ; Exact mapped bytes E8 53 B2 F6 FF: call 0x58830280
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb2
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, word ptr [ecx + 60h]
        cmp eax, edi
        ; Exact mapped bytes 0F 85 9D 0A 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BC 1B F1 FF: call 0x587d6c00
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x1b
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [eax + 4ch], ebx
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE 1B F1 FF: call 0x587d6c00
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x1b
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [eax + 54h], esi
        ; Exact mapped bytes E9 82 0A 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 1
        ; Exact mapped bytes 0F 84 9F FD FF FF: je 0x588c4e02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 2
        ; Exact mapped bytes 0F 84 A6 FE FF FF: je 0x588c4f12
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 3
        ; Exact mapped bytes 75 62: jne 0x588c50d3
        __asm _emit 0x75
        __asm _emit 0x62
        mov edi, dword ptr [esi]
        mov ebx, dword ptr [esi + 4]
        mov esi, dword ptr [esi + 8]
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0dch]
        mov ecx, dword ptr [edx + 170h]
        push esi
        push ebx
        push edi
        ; Exact mapped bytes E8 ED B1 F6 FF: call 0x58830280
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xb1
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, word ptr [ecx + 60h]
        cmp eax, edi
        ; Exact mapped bytes 75 16: jne 0x588c50b7
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes E8 5A 1B F1 FF: call 0x587d6c00
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x1b
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [eax + 4ch], ebx
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 1B F1 FF: call 0x587d6c00
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x1b
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [eax + 54h], esi
        push 0
        push 0
        push 0
        push 45fh
        ; Exact mapped bytes E8 29 6A EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x6a
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 62 FC E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 09 0A 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 4
        ; Exact mapped bytes 0F 84 37 05 00 00: je 0x588c5613
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 5
        ; Exact mapped bytes 0F 85 DA FE FF FF: jne 0x588c4fbf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 463h
        ; Exact mapped bytes E8 FB 69 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x69
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 34 FC E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 DB 09 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 1
        mov edi, dword ptr [edi + 0ch]
        ; Exact mapped bytes 75 2A: jne 0x588c5134
        __asm _emit 0x75
        __asm _emit 0x2a
        push esi
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 99 13 EC FF: call 0x587864b0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x13
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0dch]
        mov ecx, dword ptr [edx + 174h]
        push edi
        ; Exact mapped bytes E8 21 74 F6 FF: call 0x5882c550
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x74
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 A8 09 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 1
        ; Exact mapped bytes 0F 84 C5 FC FF FF: je 0x588c4e02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 2
        ; Exact mapped bytes 0F 84 6B 09 00 00: je 0x588c5ab1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 3
        ; Exact mapped bytes 0F 84 49 02 00 00: je 0x588c5398
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 4
        ; Exact mapped bytes 75 1C: jne 0x588c5170
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 466h
        ; Exact mapped bytes E8 8C 69 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x69
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C5 FB E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xfb
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 6C 09 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 5
        ; Exact mapped bytes 0F 84 9A 04 00 00: je 0x588c5613
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 6
        ; Exact mapped bytes 75 1C: jne 0x588c519a
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 467h
        ; Exact mapped bytes E8 62 69 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x69
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9B FB E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xfb
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 42 09 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 7
        ; Exact mapped bytes 0F 85 39 09 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 468h
        ; Exact mapped bytes E8 3D 69 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x69
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 76 FB E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xfb
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 1D 09 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 1
        mov edi, dword ptr [edi + 0ch]
        ; Exact mapped bytes 75 12: jne 0x588c51da
        __asm _emit 0x75
        __asm _emit 0x12
        lea eax, [esp + 20h]
        mov dword ptr [esp + 20h], 0
        push eax
        ; Exact mapped bytes E9 31 FF FF FF: jmp 0x588c510b
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 1
        ; Exact mapped bytes 0F 84 1F FC FF FF: je 0x588c4e02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 2
        ; Exact mapped bytes 0F 84 F0 08 00 00: je 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 3
        ; Exact mapped bytes 0F 84 A3 01 00 00: je 0x588c5398
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 4
        ; Exact mapped bytes 0F 85 DE 08 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 469h
        ; Exact mapped bytes E8 E2 68 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x68
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1B FB E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xfb
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 C2 08 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 1
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x588c52b2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        ; Exact mapped bytes E8 23 7A 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x7a
        __asm _emit 0x0b
        __asm _emit 0x00
        push 4
        mov ebx, eax
        ; Exact mapped bytes E8 1A 7A 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x7a
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ebp, eax
        mov eax, dword ptr [esi]
        mov dword ptr [ebx], eax
        mov ecx, dword ptr [esi + 4]
        add esp, 8
        mov dword ptr [ebp], ecx
        mov edi, dword ptr [edi + 0ch]
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push edi
        ; Exact mapped bytes E8 7D 12 EC FF: call 0x587864d0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x12
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 0dch]
        mov ecx, dword ptr [eax + 174h]
        push edi
        ; Exact mapped bytes E8 F5 73 F6 FF: call 0x5882c660
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x73
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        push edi
        ; Exact mapped bytes E8 98 12 EC FF: call 0x58786510
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x12
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 14h
        push edi
        ; Exact mapped bytes E8 CA 12 EC FF: call 0x58786550
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x12
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0dch]
        mov ecx, dword ptr [edx + 174h]
        push edi
        ; Exact mapped bytes E8 52 6A F6 FF: call 0x5882bcf0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x6a
        __asm _emit 0xf6
        __asm _emit 0xff
        push ebx
        ; Exact mapped bytes E8 9E 79 0B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x79
        __asm _emit 0x0b
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C52B2 .. +0x18C bytes.
extern "C" __declspec(naked) void FUN_588c4210_segment_01() {
    __asm {
        mov edi, dword ptr [edi + 0ch]
        cmp edi, 1
        ; Exact mapped bytes 0F 84 44 FB FF FF: je 0x588c4e02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 2
        ; Exact mapped bytes 0F 84 EA 07 00 00: je 0x588c5ab1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 3
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x588c5398
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 4
        ; Exact mapped bytes 0F 84 7B FE FF FF: je 0x588c5154
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 5
        ; Exact mapped bytes 0F 84 31 03 00 00: je 0x588c5613
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 6
        ; Exact mapped bytes 0F 85 F1 07 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 46ah
        ; Exact mapped bytes E8 F5 67 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x67
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2E FA E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfa
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 D5 07 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 1
        mov edi, dword ptr [edi + 0ch]
        ; Exact mapped bytes 75 6D: jne 0x588c537d
        __asm _emit 0x75
        __asm _emit 0x6d
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea eax, [esp + 18h]
        push eax
        push edi
        mov dword ptr [esp + 20h], 0
        ; Exact mapped bytes E8 A7 11 EC FF: call 0x587864d0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x11
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0dch]
        mov ecx, dword ptr [edx + 174h]
        push edi
        ; Exact mapped bytes E8 1F 73 F6 FF: call 0x5882c660
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x73
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea eax, [esp + 18h]
        push eax
        push edi
        ; Exact mapped bytes E8 BE 11 EC FF: call 0x58786510
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x11
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push edi
        ; Exact mapped bytes E8 F0 11 EC FF: call 0x58786550
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x11
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0dch]
        mov ecx, dword ptr [edx + 174h]
        push edi
        ; Exact mapped bytes E8 78 69 F6 FF: call 0x5882bcf0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x69
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 5F 07 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 1
        ; Exact mapped bytes 0F 84 7C FA FF FF: je 0x588c4e02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 2
        ; Exact mapped bytes 0F 84 22 07 00 00: je 0x588c5ab1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 3
        ; Exact mapped bytes 0F 85 5D FE FF FF: jne 0x588c51f5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 465h
        ; Exact mapped bytes E8 48 67 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x67
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 81 F9 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 28 07 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 1
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x588c544c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        ; Exact mapped bytes E8 89 78 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x0b
        __asm _emit 0x00
        push 4
        mov ebp, eax
        ; Exact mapped bytes E8 80 78 0B 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ebx, eax
        mov eax, dword ptr [esi]
        mov dword ptr [ebp], eax
        mov ecx, dword ptr [esi + 4]
        add esp, 8
        mov dword ptr [ebx], ecx
        mov edi, dword ptr [edi + 0ch]
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        push edi
        ; Exact mapped bytes E8 03 11 EC FF: call 0x587864f0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x11
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 0dch]
        mov ecx, dword ptr [eax + 174h]
        push edi
        ; Exact mapped bytes E8 1B 73 F6 FF: call 0x5882c720
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x73
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push edi
        ; Exact mapped bytes E8 1E 11 EC FF: call 0x58786530
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x11
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 32h
        push edi
        ; Exact mapped bytes E8 50 11 EC FF: call 0x58786570
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x11
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0dch]
        mov ecx, dword ptr [edx + 174h]
        push edi
        ; Exact mapped bytes E8 D8 69 F6 FF: call 0x5882be10
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x69
        __asm _emit 0xf6
        __asm _emit 0xff
        push ebp
        ; Exact mapped bytes E8 04 78 0B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x0b
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C544C .. +0x6B0 bytes.
extern "C" __declspec(naked) void FUN_588c4210_segment_02() {
    __asm {
        mov edi, dword ptr [edi + 0ch]
        cmp edi, 1
        ; Exact mapped bytes 0F 84 AA F9 FF FF: je 0x588c4e02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 2
        ; Exact mapped bytes 0F 84 50 06 00 00: je 0x588c5ab1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 3
        ; Exact mapped bytes 0F 84 2E FF FF FF: je 0x588c5398
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 4
        ; Exact mapped bytes 0F 84 E1 FC FF FF: je 0x588c5154
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 5
        ; Exact mapped bytes 0F 84 97 01 00 00: je 0x588c5613
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 6
        ; Exact mapped bytes 0F 85 57 06 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 46bh
        ; Exact mapped bytes E8 5B 66 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x66
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 94 F8 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf8
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 3B 06 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 1
        mov edi, dword ptr [edi + 0ch]
        ; Exact mapped bytes 0F 85 CF FE FF FF: jne 0x588c537d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea eax, [esp + 1ch]
        push eax
        push edi
        mov dword ptr [esp + 24h], 0
        ; Exact mapped bytes E8 29 10 EC FF: call 0x587864f0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x10
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0dch]
        mov ecx, dword ptr [edx + 174h]
        push edi
        ; Exact mapped bytes E8 41 72 F6 FF: call 0x5882c720
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x72
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea eax, [esp + 1ch]
        push eax
        push edi
        ; Exact mapped bytes E8 40 10 EC FF: call 0x58786530
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push edi
        ; Exact mapped bytes E8 72 10 EC FF: call 0x58786570
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x10
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0dch]
        mov ecx, dword ptr [edx + 174h]
        push edi
        ; Exact mapped bytes E8 FA 68 F6 FF: call 0x5882be10
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x68
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 C1 05 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 1
        mov edi, dword ptr [edi + 0ch]
        ; Exact mapped bytes 0F 85 BE 00 00 00: jne 0x588c55e6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [esi + 4]
        push eax
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes E8 83 38 EB FF: call 0x58778dc0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0xeb
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 77 06: ja 0x588c5547
        __asm _emit 0x77
        __asm _emit 0x06
        xor esi, esi
        mov dword ptr [esp + 14h], esi
        test eax, eax
        ; Exact mapped bytes 0F 84 8D 05 00 00: je 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [eax + 9bh]
        and al, 0fh
        ; Exact mapped bytes 66 0F B6 C0: movzx ax, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc0
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4B: je 0x588c55ab
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 74 45: je 0x588c55ab
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 6C 05 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 14h]
        push ecx
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 AF 0F EC FF: call 0x58786530
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x0f
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push edi
        ; Exact mapped bytes E8 E2 0F EC FF: call 0x58786570
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 0dch]
        mov ecx, dword ptr [eax + 174h]
        push edi
        ; Exact mapped bytes E8 6A 68 F6 FF: call 0x5882be10
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 31 05 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 14h]
        push ecx
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 54 0F EC FF: call 0x58786510
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x0f
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push edi
        ; Exact mapped bytes E8 87 0F EC FF: call 0x58786550
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x0f
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 0dch]
        mov ecx, dword ptr [eax + 174h]
        push edi
        ; Exact mapped bytes E8 0F 67 F6 FF: call 0x5882bcf0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x67
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 F6 04 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 1
        ; Exact mapped bytes 0F 84 13 F8 FF FF: je 0x588c4e02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 2
        ; Exact mapped bytes 0F 84 B9 04 00 00: je 0x588c5ab1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 3
        ; Exact mapped bytes 0F 84 97 FD FF FF: je 0x588c5398
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 4
        ; Exact mapped bytes 0F 84 4A FB FF FF: je 0x588c5154
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 5
        ; Exact mapped bytes 0F 85 C9 04 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 460h
        ; Exact mapped bytes E8 CD 64 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x64
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 06 F7 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf7
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 AD 04 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        cmp eax, 1
        ; Exact mapped bytes 75 2B: jne 0x588c5662
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [edi + 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 0D EC FF: call 0x58786440
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 0dch]
        mov ecx, dword ptr [eax + 174h]
        ; Exact mapped bytes E8 03 7B F6 FF: call 0x5882d160
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x7b
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 7A 04 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 72 04 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edi + 0ch]
        cmp edi, 1
        ; Exact mapped bytes 0F 84 8C F7 FF FF: je 0x588c4e02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 2
        ; Exact mapped bytes 0F 84 32 04 00 00: je 0x588c5ab1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 3
        ; Exact mapped bytes 75 19: jne 0x588c569d
        __asm _emit 0x75
        __asm _emit 0x19
        push eax
        push eax
        push eax
        push 46ch
        ; Exact mapped bytes E8 5F 64 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x64
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 98 F6 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf6
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 3F 04 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 4
        ; Exact mapped bytes 0F 85 64 FF FF FF: jne 0x588c560a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 46dh
        ; Exact mapped bytes E8 3A 64 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x64
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 73 F6 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf6
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 1A 04 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        cmp eax, 1
        ; Exact mapped bytes 75 2D: jne 0x588c56f7
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 83 3D A4 B4 A0 58 00: cmp dword ptr [0x58a0b4a4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x00
        mov edi, dword ptr [edi + 0ch]
        push edi
        ; Exact mapped bytes 0F 86 A3 00 00 00: jbe 0x588c577e
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0dch]
        mov ecx, dword ptr [edx + 164h]
        ; Exact mapped bytes E8 1E 40 F7 FF: call 0x58839710
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x40
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 E5 03 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 DD 03 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edi + 0ch]
        cmp edi, 1
        ; Exact mapped bytes 75 1C: jne 0x588c5723
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 46eh
        ; Exact mapped bytes E8 D9 63 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x63
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 12 F6 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf6
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 B9 03 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 2
        ; Exact mapped bytes 0F 84 E7 FE FF FF: je 0x588c5613
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 3
        ; Exact mapped bytes 75 1C: jne 0x588c574d
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 495h
        ; Exact mapped bytes E8 AF 63 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x63
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E8 F5 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 8F 03 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 4
        ; Exact mapped bytes 0F 85 86 03 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 496h
        ; Exact mapped bytes E8 8A 63 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x63
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C3 F5 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf5
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 6A 03 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        cmp eax, 1
        ; Exact mapped bytes 75 1F: jne 0x588c5799
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, dword ptr [edi + 0ch]
        push edx
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0dch]
        mov ecx, dword ptr [ecx + 160h]
        ; Exact mapped bytes E8 6C E8 F6 FF: call 0x58834000
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E9 43 03 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 3B 03 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edi + 0ch]
        cmp edi, 1
        ; Exact mapped bytes 0F 84 5A FF FF FF: je 0x588c5707
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 2
        ; Exact mapped bytes 75 19: jne 0x588c57cb
        __asm _emit 0x75
        __asm _emit 0x19
        push eax
        push eax
        push eax
        push 475h
        ; Exact mapped bytes E8 31 63 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x63
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6A F5 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf5
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 11 03 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 3
        ; Exact mapped bytes 75 1C: jne 0x588c57ec
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 46fh
        ; Exact mapped bytes E8 10 63 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x63
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 49 F5 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf5
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 F0 02 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 4
        ; Exact mapped bytes 0F 84 F4 F7 FF FF: je 0x588c4fe9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 5
        ; Exact mapped bytes 0F 85 DE 02 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 492h
        ; Exact mapped bytes E8 E2 62 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x62
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1B F5 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf5
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 C2 02 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        cmp eax, 1
        ; Exact mapped bytes 75 11: jne 0x588c5833
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        ; Exact mapped bytes E8 32 B3 F1 FF: call 0x587e0b60
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xb3
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes E9 A9 02 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 A1 02 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edi + 0ch]
        cmp edi, 1
        ; Exact mapped bytes 0F 84 BB F5 FF FF: je 0x588c4e02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 2
        ; Exact mapped bytes 75 19: jne 0x588c5865
        __asm _emit 0x75
        __asm _emit 0x19
        push eax
        push eax
        push eax
        push 470h
        ; Exact mapped bytes E8 97 62 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x62
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D0 F4 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xf4
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 77 02 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 3
        ; Exact mapped bytes 0F 84 2A FB FF FF: je 0x588c5398
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 4
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x588c591c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 5
        ; Exact mapped bytes 75 1C: jne 0x588c5898
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 472h
        ; Exact mapped bytes E8 64 62 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x62
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9D F4 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf4
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 44 02 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 6
        ; Exact mapped bytes E9 6D FD FF FF: jmp 0x588c560d
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 8]
        cmp eax, 1
        ; Exact mapped bytes 75 30: jne 0x588c58d8
        __asm _emit 0x75
        __asm _emit 0x30
        mov esi, dword ptr [esi]
        movzx edx, word ptr [edi + 0ch]
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push -1
        push esi
        push 0
        push 0
        push edx
        ; Exact mapped bytes E8 CD A7 F1 FF: call 0x587e0090
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xa7
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0dach]
        ; Exact mapped bytes E8 CD 75 02 00: call 0x588ecea0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x75
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 04 02 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 FC 01 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edi + 0ch]
        cmp edi, 1
        ; Exact mapped bytes 0F 84 16 F5 FF FF: je 0x588c4e02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 2
        ; Exact mapped bytes 75 19: jne 0x588c590a
        __asm _emit 0x75
        __asm _emit 0x19
        push eax
        push eax
        push eax
        push 473h
        ; Exact mapped bytes E8 F2 61 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x61
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2B F4 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xf4
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 D2 01 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 3
        ; Exact mapped bytes 0F 84 85 FA FF FF: je 0x588c5398
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 4
        ; Exact mapped bytes 0F 85 C0 01 00 00: jne 0x588c5adc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 471h
        ; Exact mapped bytes E8 C4 61 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x61
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FD F3 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf3
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes E9 A4 01 00 00: jmp 0x588c5adc
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        mov ecx, dword ptr [edi + 0ch]
        xor edx, edx
        mov byte ptr [esp + 10h], 1
        mov byte ptr [esp + 11h], 0
        ; Exact mapped bytes 66 89 54 24 12: mov word ptr [esp + 0x12], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x12
        cmp eax, 1
        ; Exact mapped bytes 75 26: jne 0x588c597a
        __asm _emit 0x75
        __asm _emit 0x26
        mov eax, dword ptr [esp + 10h]
        push edx
        push -1
        push eax
        push edx
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 A7 F1 FF: call 0x587e0090
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xa7
        __asm _emit 0xf1
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 47ah
        ; Exact mapped bytes E9 F2 00 00 00: jmp 0x588c5a6c
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 29: jne 0x588c59a8
        __asm _emit 0x75
        __asm _emit 0x29
        mov edx, dword ptr [esp + 10h]
        push 0
        push -1
        push edx
        push 0
        push 0
        push ecx
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 A6 F1 FF: call 0x587e0090
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa6
        __asm _emit 0xf1
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 47bh
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x588c5a6c
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0bh
        ; Exact mapped bytes 75 29: jne 0x588c59d6
        __asm _emit 0x75
        __asm _emit 0x29
        mov eax, dword ptr [esp + 10h]
        push 0
        push -1
        push eax
        push 0
        push 0
        push ecx
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA A6 F1 FF: call 0x587e0090
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xa6
        __asm _emit 0xf1
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 49ch
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x588c5a6c
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0ch
        ; Exact mapped bytes 75 26: jne 0x588c5a01
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, dword ptr [esp + 10h]
        push 0
        push -1
        push edx
        push 0
        push 0
        push ecx
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C A6 F1 FF: call 0x587e0090
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xa6
        __asm _emit 0xf1
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 49dh
        ; Exact mapped bytes EB 6B: jmp 0x588c5a6c
        __asm _emit 0xeb
        __asm _emit 0x6b
        cmp eax, 16h
        ; Exact mapped bytes 75 26: jne 0x588c5a2c
        __asm _emit 0x75
        __asm _emit 0x26
        mov eax, dword ptr [esp + 10h]
        push 0
        push -1
        push eax
        push 0
        push 0
        push ecx
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 A6 F1 FF: call 0x587e0090
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xa6
        __asm _emit 0xf1
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 49eh
        ; Exact mapped bytes EB 40: jmp 0x588c5a6c
        __asm _emit 0xeb
        __asm _emit 0x40
        cmp eax, 20h
        ; Exact mapped bytes 75 47: jne 0x588c5a78
        __asm _emit 0x75
        __asm _emit 0x47
        mov byte ptr [esp + 15h], dl
        xor edx, edx
        push edx
        push -1
        ; Exact mapped bytes 66 89 54 24 1E: mov word ptr [esp + 0x1e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1e
        mov byte ptr [esp + 1ch], 1
        mov eax, dword ptr [esp + 1ch]
        push eax
        push edx
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 A6 F1 FF: call 0x587e0090
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xa6
        __asm _emit 0xf1
        __asm _emit 0xff
        push 0
        push 0
        push 5898f8e8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        push 28h
        ; Exact mapped bytes E8 7F 60 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x60
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B8 F2 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf2
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [edi + 8]
        cmp eax, 1
        ; Exact mapped bytes 75 13: jne 0x588c5a93
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 0dch]
        ; Exact mapped bytes E8 5F CF F7 FF: call 0x588429f0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xcf
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 49: jmp 0x588c5adc
        __asm _emit 0xeb
        __asm _emit 0x49
        test eax, eax
        ; Exact mapped bytes 75 45: jne 0x588c5adc
        __asm _emit 0x75
        __asm _emit 0x45
        mov edi, dword ptr [edi + 0ch]
        cmp edi, 1
        ; Exact mapped bytes 0F 84 5F F3 FF FF: je 0x588c4e02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 2
        ; Exact mapped bytes 0F 84 3D F5 FF FF: je 0x588c4fe9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 3
        ; Exact mapped bytes 75 2B: jne 0x588c5adc
        __asm _emit 0x75
        __asm _emit 0x2b
        push 0
        push 0
        push 0
        push 464h
        ; Exact mapped bytes E8 2F 60 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x60
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 68 F2 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf2
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x588c5adc
        __asm _emit 0xeb
        __asm _emit 0x12
        cmp dword ptr [edi + 10h], 0
        ; Exact mapped bytes 76 0C: jbe 0x588c5adc
        __asm _emit 0x76
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        ; Exact mapped bytes E8 F4 10 F1 FF: call 0x587d6bd0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x10
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 264h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        mov eax, 1
        ; Exact mapped bytes E8 E7 70 0B 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x70
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 258h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
