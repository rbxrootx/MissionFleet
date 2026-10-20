// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5852FCD0 .. +0x119E bytes.
extern "C" __declspec(naked) void FUN_5852fcd0_5852FCD0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588828aah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1c4h
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
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes E8 C0 0B FD FF: call 0x585008c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 DD 0E FD FF: call 0x58500bf0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x0e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x5852fd23
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 8C 5E 96 58 00 00 00 00: mov dword ptr [0x58965e8c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x5852fd2d
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 8C 5E 96 58 01 00 00 00: mov dword ptr [0x58965e8c], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FB 43 00 00: call 0x58534130
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 83 9A FF FF: call 0x585297c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 1211ch], 0
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x5852fde1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 84h
        ; Exact mapped bytes E8 AC 12 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x12
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 50: je 0x5852fdbb
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 3e8h
        ; Exact mapped bytes 66 89 55 C4: mov word ptr [ebp - 0x3c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xc4
        push 18fh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 4D F5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x4d
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        movzx eax, word ptr [ebp - 3ch]
        push eax
        push 132h
        push 0c9h
        mov ecx, dword ptr [ebp - 0a0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 20h
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 9A 7A FB FF: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x7a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5852fdc2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0a4h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ecx + 1211ch], edx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 12120h], 0
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x5852fe84
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 84h
        ; Exact mapped bytes E8 09 12 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x12
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 50: je 0x5852fe5e
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 384h
        ; Exact mapped bytes 66 89 55 D2: mov word ptr [ebp - 0x2e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd2
        push 1c9h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 4C F5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x4c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        movzx eax, word ptr [ebp - 2eh]
        push eax
        push 132h
        push 0c9h
        mov ecx, dword ptr [ebp - 0a8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 20h
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 F7 79 FB FF: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x79
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5852fe65
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0ach], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ach]
        mov dword ptr [ecx + 12120h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12120h]
        mov dword ptr [ebp - 0b0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 A0 5F F5 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x5f
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12120h]
        mov dword ptr [ebp - 0b4h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 F1 56 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x56
        __asm _emit 0x28
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12120h]
        mov dword ptr [ebp - 0b8h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 32 4C F9 FF: call 0x584c4b10
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12120h]
        ; Exact mapped bytes E8 F4 6F FB FF: call 0x584e6ee0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x6f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12120h]
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 12120h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1211ch]
        mov dword ptr [ebp - 0bch], edx
        push 101h
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 8C 56 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x56
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1211ch]
        mov dword ptr [ebp - 0c0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 CD 4B F9 FF: call 0x584c4b10
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x4b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 1211ch]
        ; Exact mapped bytes E8 8F 6F FB FF: call 0x584e6ee0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x6f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1211ch]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 1211ch]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 12124h], 0
        ; Exact mapped bytes 0F 85 B3 00 00 00: jne 0x5853002e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 7F 10 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x10
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 70: je 0x58530008
        __asm _emit 0x74
        __asm _emit 0x70
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 3e8h
        ; Exact mapped bytes 66 89 55 D0: mov word ptr [ebp - 0x30], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd0
        push 35h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 4B F5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x4b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0cch], ecx
        movzx edx, word ptr [ebp - 30h]
        push edx
        push 249h
        push 271h
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        mov eax, dword ptr [ebp - 0cch]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 DD BC F9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xbc
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x5853000f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 0d0h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0d0h]
        mov dword ptr [edx + 12124h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12124h]
        mov dword ptr [ebp - 0d4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 63 55 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x55
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12124h]
        mov dword ptr [ebp - 0d8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 D7 54 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x54
        __asm _emit 0x28
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12124h]
        mov dword ptr [ebp - 0dch], eax
        push 100h
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 88 EC F8 FF: call 0x584bed10
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12124h]
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 12124h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 12128h], 0
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x58530144
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 84h
        ; Exact mapped bytes E8 48 0F 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x0f
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 4F: je 0x5853011e
        __asm _emit 0x74
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 384h
        ; Exact mapped bytes 66 89 45 CE: mov word ptr [ebp - 0x32], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xce
        push 1cah
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 4A F5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x4a
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        movzx ecx, word ptr [ebp - 32h]
        push ecx
        push 249h
        push 271h
        mov edx, dword ptr [ebp - 0e0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 10h
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 37 77 FB FF: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x77
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58530125
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 0e4h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0e4h]
        mov dword ptr [edx + 12128h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12128h]
        mov dword ptr [ebp - 0e8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 E0 5C F5 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x5c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12128h]
        mov dword ptr [ebp - 0ech], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 31 54 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x54
        __asm _emit 0x28
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12128h]
        mov dword ptr [ebp - 0f0h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 72 49 F9 FF: call 0x584c4b10
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x49
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 12128h]
        ; Exact mapped bytes E8 34 6D FB FF: call 0x584e6ee0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x6d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12128h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 12128h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1212ch], 0
        ; Exact mapped bytes 75 6F: jne 0x58530241
        __asm _emit 0x75
        __asm _emit 0x6f
        push 90h
        ; Exact mapped bytes E8 28 0E 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x0e
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov dword ptr [ebp - 4], 4
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 2C: je 0x5853021b
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 384h
        push eax
        push 249h
        push 26ch
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 20h
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 FA 6E FB FF: call 0x584e7110
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x6e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x58530222
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 0f4h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f4h]
        mov dword ptr [eax + 1212ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1212ch]
        mov dword ptr [ebp - 0f8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 50 53 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x53
        __asm _emit 0x28
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1212ch]
        mov dword ptr [ebp - 0fch], edx
        push 101h
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 91 EA F8 FF: call 0x584bed10
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xea
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1212ch]
        mov dword ptr [ebp - 100h], ecx
        push 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 A5 5B F5 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x5b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1212ch]
        mov dword ptr [ebp - 104h], eax
        push 0
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 89 52 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x52
        __asm _emit 0x28
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1212ch]
        mov dword ptr [ebp - 108h], edx
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 8D 1D 00 00: call 0x58532060
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1212ch]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 1212ch]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 140h], 0
        ; Exact mapped bytes 0F 85 B6 00 00 00: jne 0x585303b3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 FD 0C 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x0c
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov dword ptr [ebp - 4], 5
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 73: je 0x5853038d
        __asm _emit 0x74
        __asm _emit 0x73
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 3e8h
        ; Exact mapped bytes 66 89 55 CC: mov word ptr [ebp - 0x34], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xcc
        push 0e1h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 47 F5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x47
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 114h], ecx
        movzx edx, word ptr [ebp - 34h]
        push edx
        push 249h
        push 2a8h
        mov eax, dword ptr [ebp - 10ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 110h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 58 B9 F9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xb9
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58530394
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 118h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 118h]
        mov dword ptr [edx + 140h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 140h]
        mov dword ptr [ebp - 11ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 DE 51 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x51
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 140h]
        mov dword ptr [ebp - 120h], ecx
        push 0
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 52 51 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x51
        __asm _emit 0x28
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 140h]
        mov dword ptr [ebp - 124h], eax
        push 100h
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 03 E9 F8 FF: call 0x584bed10
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 140h]
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 140h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 13ch], 0
        ; Exact mapped bytes 0F 85 9B 00 00 00: jne 0x585304d2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 84h
        ; Exact mapped bytes E8 C3 0B 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x0b
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov dword ptr [ebp - 4], 6
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 52: je 0x585304a6
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 384h
        ; Exact mapped bytes 66 89 45 CA: mov word ptr [ebp - 0x36], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xca
        push 1cah
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 46 F5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x46
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        movzx ecx, word ptr [ebp - 36h]
        push ecx
        push 249h
        push 2a8h
        mov edx, dword ptr [ebp - 128h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 10h
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 B2 73 FB FF: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x73
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585304b0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 12ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [edx + 13ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 13ch]
        mov dword ptr [ebp - 130h], edx
        push 0
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 52 59 F5 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x59
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 13ch]
        mov dword ptr [ebp - 134h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 A3 50 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x28
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 13ch]
        mov dword ptr [ebp - 138h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 E4 45 F9 FF: call 0x584c4b10
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 13ch]
        ; Exact mapped bytes E8 A6 69 FB FF: call 0x584e6ee0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x69
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 13ch]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 13ch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12134h]
        mov dword ptr [ebp - 13ch], edx
        push 1
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 71 58 F5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x58
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12134h]
        mov dword ptr [ebp - 140h], ecx
        push 1
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 55 59 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x59
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12138h]
        mov dword ptr [ebp - 144h], eax
        push 1
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 39 59 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x59
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12150h]
        mov dword ptr [ebp - 148h], edx
        push 1
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 1D 59 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x59
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        add eax, 148h
        push eax
        push 588a6f40h
        ; Exact mapped bytes FF 15 1C 41 89 58: call dword ptr [0x5889411c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 66: jne 0x58530642
        __asm _emit 0x75
        __asm _emit 0x66
        mov ecx, 100h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 256h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 148h
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 8C 08 56 82 00 00: mov cx, word ptr [eax + ecx + 0x8256]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x56
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8A 48 02 00 00: mov word ptr [edx + 0x248], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 38 D2 8F 58 00 00 00 00: mov dword ptr [0x588fd238], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + eax + 1195ch]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 9958h], edx
        xor ecx, ecx
        ; Exact mapped bytes 74 0A: je 0x58530650
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 38 D2 8F 58 00 00 00 00: mov dword ptr [0x588fd238], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 6eh
        mov dword ptr [ebp - 48h], 26fh
        mov dword ptr [ebp - 44h], 64h
        mov dword ptr [ebp - 1cch], 0
        mov dword ptr [ebp - 1d0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 250h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, 2
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 0ah
        ; Exact mapped bytes 77 4A: ja 0x585306de
        __asm _emit 0x77
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 28h]
        movzx eax, byte ptr [edx + 58530e88h]
        ; Exact mapped bytes FF 24 85 70 0E 53 58: jmp dword ptr [eax*4 + 0x58530e70]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x0e
        __asm _emit 0x53
        __asm _emit 0x58
        mov dword ptr [ebp - 1ch], 18ah
        mov dword ptr [ebp - 44h], 0a0h
        ; Exact mapped bytes EB 29: jmp 0x585306de
        __asm _emit 0xeb
        __asm _emit 0x29
        mov dword ptr [ebp - 1ch], 163h
        ; Exact mapped bytes EB 20: jmp 0x585306de
        __asm _emit 0xeb
        __asm _emit 0x20
        mov dword ptr [ebp - 1ch], 12ah
        ; Exact mapped bytes EB 17: jmp 0x585306de
        __asm _emit 0xeb
        __asm _emit 0x17
        mov dword ptr [ebp - 1ch], 0f1h
        ; Exact mapped bytes EB 0E: jmp 0x585306de
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov dword ptr [ebp - 1ch], 6eh
        mov dword ptr [ebp - 44h], 5fh
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x585306f7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [edx + 250h]
        ; Exact mapped bytes 0F 8D 19 04 00 00: jge 0x58530b22
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + ecx*4 + 11a68h], 0
        ; Exact mapped bytes 74 51: je 0x5853076a
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 11a68h]
        mov dword ptr [ebp - 40h], edx
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 20: je 0x5853074f
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14ch], edx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 95 B4 FE FF FF: call dword ptr [ebp - 0x14c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58530759
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 150h], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 11a68h], 0
        push 0ach
        ; Exact mapped bytes E8 90 08 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x08
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov dword ptr [ebp - 4], 7
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 45: je 0x585307d2
        __asm _emit 0x74
        __asm _emit 0x45
        push 40h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 2ch]
        imul eax, dword ptr [ebp - 44h]
        add edx, eax
        push edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 16 B5 F9 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xb5
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585307dc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 154h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 154h]
        mov dword ptr [eax + edx*4 + 11a68h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 11a68h]
        mov dword ptr [ebp - 15ch], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 8458h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 42 F5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x42
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        mov edx, dword ptr [ebp - 158h]
        push edx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 1A 64 F5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x64
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 11f1ch]
        mov dword ptr [ebp - 164h], edx
        push 0b8h
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 42 F5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x42
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        mov eax, dword ptr [ebp - 160h]
        push eax
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 AF 56 F5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x56
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 11f1ch]
        mov dword ptr [ebp - 16ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx*4 + 11a68h]
        ; Exact mapped bytes E8 5A 41 F5 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x41
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        mov eax, dword ptr [ebp - 168h]
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 72 EB F6 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xeb
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 11f1ch]
        mov dword ptr [ebp - 170h], eax
        push 1
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 02 56 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x56
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 11a68h]
        mov dword ptr [ebp - 174h], eax
        push 101h
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 AF 4C 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x4c
        __asm _emit 0x28
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 11a68h]
        mov dword ptr [ebp - 178h], eax
        push 0
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 1F 55 F5 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x55
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 11a68h]
        mov dword ptr [ebp - 17ch], eax
        push 0
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 FF 4B 28 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x4b
        __asm _emit 0x28
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 11a68h]
        mov dword ptr [ebp - 180h], eax
        push 100h
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 AC E3 F8 FF: call 0x584bed10
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 11a68h]
        mov dword ptr [ebp - 184h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 91 4D F6 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x4d
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 4D C8: mov word ptr [ebp - 0x38], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc8
        movzx edx, word ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 EA 54 F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x54
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 11a68h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [ecx + eax*4 + 11a68h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes 0F B6 0D 20 D2 8F 58: movzx ecx, byte ptr [0x588fd220]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 2B: je 0x585309ee
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 0F B6 15 3C 73 94 58: movzx edx, byte ptr [0x5894733c]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        test edx, edx
        ; Exact mapped bytes 74 20: je 0x585309ee
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 24ch], 0
        ; Exact mapped bytes 7D 14: jge 0x585309ee
        __asm _emit 0x7d
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 24ch], 0
        ; Exact mapped bytes C6 05 20 D2 8F 58 00: mov byte ptr [0x588fd220], 0
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + edx*2 + 8356h]
        test ecx, ecx
        ; Exact mapped bytes 75 41: jne 0x58530a41
        __asm _emit 0x75
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 11a68h]
        mov dword ptr [ebp - 188h], ecx
        push 0
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 20 EE F6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xee
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 11a68h]
        mov dword ptr [ebp - 18ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 A0 53 F5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x53
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 24ch]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 7B: jne 0x58530aca
        __asm _emit 0x75
        __asm _emit 0x7b
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 11a68h]
        mov dword ptr [ebp - 190h], eax
        push 5
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 D1 ED F6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xed
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 11f1ch]
        mov dword ptr [ebp - 194h], eax
        push 0
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 51 54 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x54
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 8758h]
        push eax
        push 588a6f50h
        ; Exact mapped bytes 8B 0D EC 1F 96 58: mov ecx, dword ptr [0x58961fec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 97 F7 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x97
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 1
        ; Exact mapped bytes 8B 0D EC 1F 96 58: mov ecx, dword ptr [0x58961fec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 54 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x54
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 21: jmp 0x58530aeb
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 11f1ch]
        mov dword ptr [ebp - 198h], eax
        push 1
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 F6 53 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x53
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        and ecx, 80000007h
        ; Exact mapped bytes 79 05: jns 0x58530afe
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffff8h
        inc ecx
        test ecx, ecx
        ; Exact mapped bytes 75 12: jne 0x58530b14
        __asm _emit 0x75
        __asm _emit 0x12
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 48h]
        add edx, 19h
        mov dword ptr [ebp - 48h], edx
        ; Exact mapped bytes EB 09: jmp 0x58530b1d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 2ch]
        add eax, 1
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes E9 CC FB FF FF: jmp 0x585306ee
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 250h], 0
        ; Exact mapped bytes 0F 8E FF 01 00 00: jle 0x58530d31
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58530b44
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 0F 8D 92 01 00 00: jge 0x58530ce0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + eax*4 + 11a60h], 0
        ; Exact mapped bytes 74 51: je 0x58530baf
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 11a60h]
        mov dword ptr [ebp - 4ch], ecx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 20: je 0x58530b94
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 19ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 95 64 FE FF FF: call dword ptr [ebp - 0x19c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58530b9e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a0h], 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 11a60h], 0
        ; Exact mapped bytes 8A 0D 3D 73 94 58: mov cl, byte ptr [0x5894733d]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x3d
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 88 0D 3C 73 94 58: mov byte ptr [0x5894733c], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        push 54h
        ; Exact mapped bytes E8 42 04 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov dword ptr [ebp - 4], 8
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 7A: je 0x58530c55
        __asm _emit 0x74
        __asm _emit 0x7a
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        add eax, 253h
        mov dword ptr [ebp - 1a4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 54h
        mov dword ptr [ebp - 1a8h], edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 0c1h
        push eax
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 3F F5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x3f
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1211ch]
        mov dword ptr [ebp - 1b0h], edx
        push 40h
        mov eax, dword ptr [ebp - 1a4h]
        push eax
        mov ecx, dword ptr [ebp - 1a8h]
        push ecx
        mov edx, dword ptr [ebp - 1ach]
        push edx
        mov eax, dword ptr [ebp - 1b0h]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 D3 16 F5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x16
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58530c5f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 1b4h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1b4h]
        mov dword ptr [eax + edx*4 + 11a60h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 11a60h]
        mov dword ptr [ebp - 1b8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 9B 51 F5 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x51
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 11a60h]
        mov dword ptr [ebp - 1bch], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 50 4A F6 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x4a
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        sub edx, 0ah
        ; Exact mapped bytes 66 89 55 C6: mov word ptr [ebp - 0x3a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xc6
        movzx eax, word ptr [ebp - 3ah]
        push eax
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 A6 51 F5 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x51
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5B FE FF FF: jmp 0x58530b3b
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 11a60h]
        mov dword ptr [ebp - 1c0h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 A8 48 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x48
        __asm _emit 0x28
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 11a60h]
        mov dword ptr [ebp - 1c4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 80 48 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x48
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 12148h], 11h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1214ch], 13h
        mov dword ptr [ebp - 98h], 4
        lea ecx, [ebp - 24h]
        push ecx
        push 0f003fh
        push 0
        push 588a6f54h
        push 80000002h
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 D3 00 00 00: jne 0x58530e4b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 98h], 4
        lea edx, [ebp - 98h]
        push edx
        lea eax, [ebp - 20h]
        push eax
        lea ecx, [ebp - 1c8h]
        push ecx
        push 0
        push 588a6f7ch
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x58530df5
        __asm _emit 0x74
        __asm _emit 0x45
        lea eax, [ebp - 1c8h]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        push 0
        push 0f003fh
        push 0
        push 588a6f80h
        push 0
        push 588a6f84h
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 4
        lea edx, [ebp - 20h]
        push edx
        push 4
        push 0
        push 588a6fach
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp - 20h], 20060413h
        ; Exact mapped bytes 74 42: je 0x58530e40
        __asm _emit 0x74
        __asm _emit 0x42
        push 0
        push 588a6fb0h
        push 588a44c0h
        ; Exact mapped bytes FF 15 2C 41 89 58: call dword ptr [0x5889412c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x58530e40
        __asm _emit 0x74
        __asm _emit 0x2c
        push 588a44dch
        ; Exact mapped bytes FF 15 04 43 89 58: call dword ptr [0x58894304]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 20h], 20060413h
        push 4
        lea ecx, [ebp - 20h]
        push ecx
        push 4
        push 0
        push 588a44f8h
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes 8B 0D 50 06 96 58: mov ecx, dword ptr [0x58960650]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A 44 05 00: call 0x585852f0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 42 FF F6 FF: call 0x584a0da0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xf6
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
        mov esp, ebp
        pop ebp
        ret
    }
}
