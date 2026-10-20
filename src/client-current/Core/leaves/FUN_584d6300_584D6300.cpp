// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D6300 .. +0x51A bytes.
extern "C" __declspec(naked) void FUN_584d6300_584D6300() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 FF 04 00 00: jne 0x584d6812
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 90h]
        ; Exact mapped bytes 74 31: je 0x584d635b
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 90h]
        ; Exact mapped bytes 74 1A: je 0x584d635b
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 90h]
        ; Exact mapped bytes 0F 85 B7 04 00 00: jne 0x584d6812
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 0F 87 A4 04 00 00: ja 0x584d6812
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 85 1C 68 4D 58: jmp dword ptr [eax*4 + 0x584d681c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x68
        __asm _emit 0x4d
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 1
        ; Exact mapped bytes 75 26: jne 0x584d63aa
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 10 06 96 58: cmp edx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 13: jne 0x584d63a5
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes A1 10 06 96 58: mov eax, dword ptr [0x58960610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 B9 02 00 00: jmp 0x584d6663
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 191h
        ; Exact mapped bytes 75 18: jne 0x584d63d1
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C E6 FA FF: call 0x58484a20
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xe6
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F5 D1 00 00: call 0x584e35c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 92 02 00 00: jmp 0x584d6663
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 19bh
        ; Exact mapped bytes 75 1F: jne 0x584d63ff
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 0D 00 00: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5E 0D 00 00: call 0x584d7150
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 57 70 1C 00: call 0x5869d450
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x70
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 64 02 00 00: jmp 0x584d6663
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 320h
        ; Exact mapped bytes 74 4B: je 0x584d6459
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 321h
        ; Exact mapped bytes 74 3C: je 0x584d6459
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 322h
        ; Exact mapped bytes 74 2D: je 0x584d6459
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 323h
        ; Exact mapped bytes 74 1E: je 0x584d6459
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 324h
        ; Exact mapped bytes 74 0F: je 0x584d6459
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 325h
        ; Exact mapped bytes 75 72: jne 0x584d64cb
        __asm _emit 0x75
        __asm _emit 0x72
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 30 FE FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 5E: je 0x584d64c6
        __asm _emit 0x74
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D 30 FE FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E6 2D FE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x2d
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 44: jne 0x584d64c6
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 E5 FA FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe5
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 30 FE FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 64h
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a8h], 1
        ; Exact mapped bytes E9 98 01 00 00: jmp 0x584d6663
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 326h
        ; Exact mapped bytes 75 26: jne 0x584d6500
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 8B 15 3C 06 96 58: mov edx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 24h], ecx
        push 1
        push 0ef10h
        push 0
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        nop
        ; Exact mapped bytes E9 63 01 00 00: jmp 0x584d6663
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 3b6h
        ; Exact mapped bytes 75 49: jne 0x584d6558
        __asm _emit 0x75
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 E5 FA FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xe5
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB 2F FE FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 0
        push 64h
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a8h], 1
        ; Exact mapped bytes E9 0B 01 00 00: jmp 0x584d6663
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 3b8h
        ; Exact mapped bytes 75 44: jne 0x584d65ab
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE E4 FA FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe4
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 34h], ecx
        ; Exact mapped bytes 8B 15 00 06 96 58: mov edx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 30h], edx
        push 1
        push 64h
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a8h], 1
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x584d6663
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 12h
        ; Exact mapped bytes 75 59: jne 0x584d6610
        __asm _emit 0x75
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 9ch], 0
        ; Exact mapped bytes 74 4B: je 0x584d660e
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 8F E3 FA FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xe3
        __asm _emit 0xfa
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 36: je 0x584d660e
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D E4 FA FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe4
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 38h], edx
        push 0
        push 64h
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 C4: call dword ptr [ebp - 0x3c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc4
        nop
        ; Exact mapped bytes EB 53: jmp 0x584d6663
        __asm _emit 0xeb
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 131h
        ; Exact mapped bytes 75 44: jne 0x584d6663
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 DA 02 00: call 0x585040f0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 04 06 96 58: cmp edx, dword ptr [0x58960604]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 0E: jne 0x584d6647
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C 1B 05 00: call 0x585281c0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x1b
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x584d665a
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        push -1
        ; Exact mapped bytes FF 15 68 44 89 58: call dword ptr [0x58894468]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 9C 01 00 00: jmp 0x584d6812
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 90h]
        ; Exact mapped bytes 75 43: jne 0x584d66de
        __asm _emit 0x75
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FD 10 00 00: call 0x584d77a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 131h
        ; Exact mapped bytes 74 0F: je 0x584d66c2
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 132h
        ; Exact mapped bytes 75 1A: jne 0x584d66dc
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 09 00 00: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7C 09 00 00: call 0x584d7050
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E5 A6 15 00: call 0x58630dc0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa6
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 20: jmp 0x584d66fe
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 90h]
        ; Exact mapped bytes 75 09: jne 0x584d66fe
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F3 0B 00 00: call 0x584d72f0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 0F 01 00 00: jmp 0x584d6812
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 90h]
        ; Exact mapped bytes 75 0B: jne 0x584d6733
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 70 10 00 00: call 0x584d77a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 20: jmp 0x584d6753
        __asm _emit 0xeb
        __asm _emit 0x20
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 90h]
        ; Exact mapped bytes 75 09: jne 0x584d6753
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9E 0B 00 00: call 0x584d72f0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x584d6812
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 90h]
        ; Exact mapped bytes 75 0B: jne 0x584d6788
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B 10 00 00: call 0x584d77a0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 41: jmp 0x584d67c9
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 90h]
        ; Exact mapped bytes 75 0B: jne 0x584d67aa
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 49 0B 00 00: call 0x584d72f0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1F: jmp 0x584d67c9
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 90h]
        ; Exact mapped bytes 75 09: jne 0x584d67c9
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A8 0F 00 00: call 0x584d7770
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 47: jmp 0x584d6812
        __asm _emit 0xeb
        __asm _emit 0x47
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 90h]
        ; Exact mapped bytes 75 0B: jne 0x584d67ed
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B6 0F 00 00: call 0x584d77a0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 25: jmp 0x584d6812
        __asm _emit 0xeb
        __asm _emit 0x25
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 90h]
        ; Exact mapped bytes 75 0E: jne 0x584d6812
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
