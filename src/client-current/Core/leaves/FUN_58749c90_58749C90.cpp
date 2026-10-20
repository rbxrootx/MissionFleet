// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58749C90 .. +0x70B bytes.
extern "C" __declspec(naked) void FUN_58749c90_58749C90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 180h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 108h], ecx
        mov eax, dword ptr [ebp - 108h]
        cmp dword ptr [eax + 1dch], 0
        ; Exact mapped bytes 0F 84 CD 06 00 00: je 0x5874a38a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 22 D4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x22
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 11: jmp 0x58749ce1
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 55 24 D4 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x24
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 0F 84 9C 06 00 00: je 0x5874a38a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 47 83 01 00: call 0x58762040
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 84 06 00 00: je 0x5874a385
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 124h], 0
        mov dword ptr [ebp - 134h], 0
        mov dword ptr [ebp - 114h], 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 BB D4 FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xbb
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 37: jne 0x58749d65
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 BD D4 FF: call 0x58495a50
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xbd
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x58749d65
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 BB D4 FF: call 0x58495910
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xbb
        __asm _emit 0xd4
        __asm _emit 0xff
        and eax, 1
        ; Exact mapped bytes 74 0C: je 0x58749d59
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 114h], 1
        ; Exact mapped bytes EB 0A: jmp 0x58749d63
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0ah
        ; Exact mapped bytes EB 0A: jmp 0x58749d6f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 1
        mov dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x58749d8a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 11ch]
        add ecx, 1
        mov dword ptr [ebp - 11ch], ecx
        cmp dword ptr [ebp - 11ch], 8
        ; Exact mapped bytes 0F 8D 15 05 00 00: jge 0x5874a2ac
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x15
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 11ch]
        push edx
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 57 1F D4 FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1f
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 26 21 D4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x21
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 E5 04 00 00: je 0x5874a2a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 F3 CB D3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xcb
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 11: jmp 0x58749de6
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 D0 22 D4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x22
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 0F 84 B4 04 00 00: je 0x5874a2a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 E2 20 D4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x20
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 71 BC D4 FF: call 0x58495a80
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xbc
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 8B 04 00 00: je 0x5874a2a2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 1dch]
        shl ecx, 1
        mov dword ptr [ebp - 120h], ecx
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 90h]
        cdq
        mov ecx, 190h
        idiv ecx
        mov esi, eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 04 22 D4 FF: call 0x5848c050
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0xd4
        __asm _emit 0xff
        sub esi, eax
        push esi
        ; Exact mapped bytes E8 BC 74 D4 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x74
        __asm _emit 0xd4
        __asm _emit 0xff
        add esp, 4
        cmp eax, dword ptr [ebp - 120h]
        ; Exact mapped bytes 0F 8D 3F 04 00 00: jge 0x5874a2a2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B 05 64 77 94 58 64: imul eax, dword ptr [0x58947764], 0x64
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x64
        cdq
        mov ecx, 64h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 88h]
        cdq
        idiv ecx
        mov esi, eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 30 CB D3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xcb
        __asm _emit 0xd3
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 13ch], esi
        ; Exact mapped bytes 6B 05 64 77 94 58 75: imul eax, dword ptr [0x58947764], 0x75
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x75
        cdq
        mov ecx, 64h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 8ch]
        cdq
        idiv ecx
        mov esi, eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 2B B7 D4 FF: call 0x584955f0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xb7
        __asm _emit 0xd4
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 138h], esi
        mov eax, dword ptr [ebp - 13ch]
        imul eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ebp - 138h]
        imul ecx, dword ptr [ebp - 138h]
        add eax, ecx
        mov dword ptr [ebp - 12ch], eax
        mov edx, dword ptr [ebp - 120h]
        imul edx, dword ptr [ebp - 120h]
        cmp edx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes 0F 8E 9A 03 00 00: jle 0x5874a2a2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 9D 21 D4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x21
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        ; Exact mapped bytes F2 0F 2A 85 D4 FE FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x12c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 F2 70 10 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x70
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 5A 73 0E 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x73
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 140h], eax
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 1c0h]
        xor ecx, 55h
        imul eax, ecx, 7
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 144h], eax
        mov edx, dword ptr [ebp - 140h]
        push edx
        mov eax, dword ptr [ebp - 120h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        push ecx
        ; Exact mapped bytes E8 69 A4 D9 FF: call 0x584e43e0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xa4
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 14ch], eax
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 150h], ecx
        mov edx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [edx + 23ch]
        ; Exact mapped bytes E8 0E 30 D4 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x30
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        mov eax, dword ptr [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        push ecx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes FF 95 B0 FE FF FF: call dword ptr [ebp - 0x150]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 CE 02 00 00: je 0x5874a298
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB B6 D4 FF: call 0x584956b0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xb6
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx edx, al
        and edx, 80h
        ; Exact mapped bytes 0F 84 9D 02 00 00: je 0x5874a281
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 108h]
        cmp dword ptr [eax + 23ch], 0
        ; Exact mapped bytes 0F 84 8A 02 00 00: je 0x5874a281
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [ecx + 23ch]
        ; Exact mapped bytes E8 A8 2F D4 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x2f
        __asm _emit 0xd4
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 3B B8 D4 FF: call 0x58495850
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb8
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 94 2F D4 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x2f
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 84 5D 02 00 00: je 0x5874a281
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 21 B8 D4 FF: call 0x58495850
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb8
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 30 B9 D4 FF: call 0x58495970
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb9
        __asm _emit 0xd4
        __asm _emit 0xff
        imul edx, dword ptr [eax + 70h], 64h
        mov dword ptr [ebp - 154h], edx
        mov eax, dword ptr [ebp - 154h]
        push eax
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 24 F8 01 00: call 0x58769880
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 0F B6 0D 9E 75 94 58: movzx ecx, byte ptr [0x5894759e]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0x9e
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 4E: je 0x5874a0b6
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 DD B7 D4 FF: call 0x58495850
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xb7
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 36 2F D4 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x2f
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 75 37: jne 0x5874a0b6
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 C9 D3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xc9
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 108h]
        cmp dword ptr [edx + 23ch], eax
        ; Exact mapped bytes 75 1E: jne 0x5874a0b6
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D B8 D4 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 74 0E: je 0x5874a0b6
        __asm _emit 0x74
        __asm _emit 0x0e
        push 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B 53 D5 FF: call 0x5849f410
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x53
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F B8 D4 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xb8
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 74 3D: je 0x5874a103
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F B8 D4 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xb8
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x5874a103
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 B8 D4 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb8
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 8
        ; Exact mapped bytes 74 1E: je 0x5874a103
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 B8 D4 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xb8
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 9
        ; Exact mapped bytes 74 0E: je 0x5874a103
        __asm _emit 0x74
        __asm _emit 0x0e
        push 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 4D 00 00: call 0x5874ee10
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 23ch]
        mov dword ptr [ebp - 160h], ecx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 50 B8 D4 FF: call 0x58495970
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb8
        __asm _emit 0xd4
        __asm _emit 0xff
        imul eax, dword ptr [eax + 70h], 46h
        xor edx, edx
        div dword ptr [ebp - 114h]
        mov dword ptr [ebp - 15ch], eax
        mov edx, dword ptr [ebp - 15ch]
        push edx
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 DC 3B 01 00: call 0x5875dd20
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 21 B8 D4 FF: call 0x58495970
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb8
        __asm _emit 0xd4
        __asm _emit 0xff
        imul eax, dword ptr [eax + 70h], 0c8h
        xor edx, edx
        div dword ptr [ebp - 114h]
        mov dword ptr [ebp - 130h], eax
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 23ch]
        mov dword ptr [ebp - 164h], ecx
        mov edx, dword ptr [ebp - 130h]
        push edx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 78 49 D5 FF: call 0x5849eb00
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x49
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 23ch]
        mov dword ptr [ebp - 168h], ecx
        mov edx, dword ptr [ebp - 130h]
        push edx
        push 2
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 82 3C 01 00: call 0x5875de30
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 B6 D4 FF: call 0x58495830
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xb6
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 0eh
        ; Exact mapped bytes 74 4A: je 0x5874a209
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 B6 D4 FF: call 0x58495830
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb6
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 13h
        ; Exact mapped bytes 74 3A: je 0x5874a209
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 B7 D4 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xb7
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 74 2A: je 0x5874a209
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 23ch]
        mov dword ptr [ebp - 16ch], ecx
        mov edx, dword ptr [ebp - 11ch]
        push edx
        push 80h
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 28 63 02 00: call 0x58770530
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC C7 D3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc7
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        cmp dword ptr [ecx + 23ch], eax
        ; Exact mapped bytes 75 5F: jne 0x5874a281
        __asm _emit 0x75
        __asm _emit 0x5f
        mov edx, dword ptr [ebp - 124h]
        add edx, 1
        mov dword ptr [ebp - 124h], edx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 34 B7 D4 FF: call 0x58495970
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb7
        __asm _emit 0xd4
        __asm _emit 0xff
        imul eax, dword ptr [eax + 70h], 46h
        xor edx, edx
        div dword ptr [ebp - 114h]
        mov dword ptr [ebp - 134h], eax
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 23ch]
        ; Exact mapped bytes E8 D1 B3 D4 FF: call 0x58495630
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb3
        __asm _emit 0xd4
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 170h], eax
        mov edx, dword ptr [ebp - 170h]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 B3 E9 FF: call 0x585e55e0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xb3
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 174h]
        mov dword ptr [ebp - 110h], eax
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 75 02: jne 0x5874a298
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 0F: jmp 0x5874a2a7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, 1
        ; Exact mapped bytes E9 EA 00 00 00: jmp 0x5874a38c
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 2E FB FF FF: jmp 0x58749dd5
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CF FA FF FF: jmp 0x58749d7b
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 C7 D3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xc7
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        cmp eax, dword ptr [ecx + 23ch]
        ; Exact mapped bytes 0F 85 BC 00 00 00: jne 0x5874a385
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x5874a385
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
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
        ; Exact mapped bytes E8 FF 1A F3 FF: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x1a
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x5874a385
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 134h]
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        mov edx, dword ptr [ebp - 124h]
        push edx
        push 588b4e50h
        ; Exact mapped bytes E8 E7 7C DD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x7c
        __asm _emit 0xdd
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 1A F3 FF: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x1a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        push 588b4e74h
        ; Exact mapped bytes E8 B8 7C DD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x7c
        __asm _emit 0xdd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 178h], eax
        push 9fh
        push 0
        mov ecx, dword ptr [ebp - 178h]
        push ecx
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 A6 45 DB FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x45
        __asm _emit 0xdb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B 1A F3 FF: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x1a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        push 10101h
        push 1
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 7C 45 DB FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x45
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 46 F9 FF FF: jmp 0x58749cd0
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 B9 6C 0E 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x6c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
