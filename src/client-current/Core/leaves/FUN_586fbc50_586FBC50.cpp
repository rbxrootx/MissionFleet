// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586FBC50 .. +0x4AE bytes.
extern "C" __declspec(naked) void FUN_586fbc50_586FBC50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 2E 04 00 00: jne 0x586fc091
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0f0h]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 08 04 00 00: je 0x586fc081
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 D9 DB FF: call 0x584b9610
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd9
        __asm _emit 0xdb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 F1 03 00 00: je 0x586fc081
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes 0F 85 27 01 00 00: jne 0x586fbdc9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 46 D1 F4 FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd1
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        test edx, edx
        ; Exact mapped bytes 0F 84 D1 00 00 00: je 0x586fbd86
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C3 D5 DB FF: call 0x584b9280
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd5
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 4C: jne 0x586fbd12
        __asm _emit 0x75
        __asm _emit 0x4c
        push 0
        push 0
        push 0
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 D5 DB FF: call 0x584b92c0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 64h
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 93 A1 D8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1C: je 0x586fbd10
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5E 56 F2 FF: call 0x58621360
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x56
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 67: jmp 0x586fbd79
        __asm _emit 0xeb
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 46 D5 DB FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd5
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 5
        ; Exact mapped bytes 75 10: jne 0x586fbd32
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 47: jmp 0x586fbd79
        __asm _emit 0xeb
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 56 9B D9 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x9b
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x586fbd4e
        __asm _emit 0x74
        __asm _emit 0x0d
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 15 6A F2 FF: call 0x58622760
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x6a
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2B: jmp 0x586fbd79
        __asm _emit 0xeb
        __asm _emit 0x2b
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 08 6A F2 FF: call 0x58622760
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x6a
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC D7 DB FF: call 0x584b9520
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd7
        __asm _emit 0xdb
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 10: je 0x586fbd79
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 D2 DB FF: call 0x584b8fb0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xd2
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 0fh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0D A2 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xa2
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3E: jmp 0x586fbdc4
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 82 45 DB FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x45
        __asm _emit 0xdb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x586fbdc4
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 45 DB FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x45
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 27 43 F2 FF: call 0x586200d0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x43
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CF D4 DB FF: call 0x584b9280
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd4
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED D1 DB FF: call 0x584b8fb0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xd1
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9A 02 00 00: jmp 0x586fc063
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0b0h]
        ; Exact mapped bytes 75 30: jne 0x586fbe07
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 D7 DB FF: call 0x584b95c0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xd7
        __asm _emit 0xdb
        __asm _emit 0xff
        cwde
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F5 D6 DB FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xd6
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F 15 E8 FF: call 0x5857d360
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5C 02 00 00: jmp 0x586fc063
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0b4h]
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x586fbea9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CF CF F4 FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xcf
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x586fbe2a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 7A: jmp 0x586fbea4
        __asm _emit 0xeb
        __asm _emit 0x7a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BE CF F4 FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xcf
        __asm _emit 0xf4
        __asm _emit 0xff
        cwde
        cmp eax, 2
        ; Exact mapped bytes 75 02: jne 0x586fbe3a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 6A: jmp 0x586fbea4
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE CF F4 FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xcf
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        cmp ecx, 6
        ; Exact mapped bytes 75 02: jne 0x586fbe4c
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 58: jmp 0x586fbea4
        __asm _emit 0xeb
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C D6 DB FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xd6
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E B3 DD FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xb3
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx edx, word ptr [eax + 84h]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 9B D9 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x9b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 9B D9 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x9b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 24 E8 FF: call 0x5857e380
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 BA 01 00 00: jmp 0x586fc063
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0b8h]
        ; Exact mapped bytes 75 61: jne 0x586fbf18
        __asm _emit 0x75
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 CF F4 FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xcf
        __asm _emit 0xf4
        __asm _emit 0xff
        cwde
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x586fbec6
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 4D: jmp 0x586fbf13
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 22 CF F4 FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xcf
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        cmp ecx, 2
        ; Exact mapped bytes 74 10: je 0x586fbee6
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 12 CF F4 FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xcf
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        cmp edx, 3
        ; Exact mapped bytes 75 02: jne 0x586fbee8
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 2B: jmp 0x586fbf13
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 00 CF F4 FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xcf
        __asm _emit 0xf4
        __asm _emit 0xff
        cwde
        cmp eax, 6
        ; Exact mapped bytes 75 02: jne 0x586fbef8
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 1B: jmp 0x586fbf13
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E0 D5 DB FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd5
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE 1B E8 FF: call 0x5857db00
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x1b
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4B 01 00 00: jmp 0x586fc063
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0bch]
        ; Exact mapped bytes 75 20: jne 0x586fbf46
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B2 D5 DB FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xd5
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 0D E8 FF: call 0x5857ccf0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1D 01 00 00: jmp 0x586fc063
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0c0h]
        ; Exact mapped bytes 75 46: jne 0x586fbf9a
        __asm _emit 0x75
        __asm _emit 0x46
        ; Exact mapped bytes E8 97 B2 DD FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb2
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C D5 DB FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xd5
        __asm _emit 0xdb
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 16 52 15 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x52
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 68 D5 DB FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xd5
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        push 12ch
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 2C 58 DE FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x58
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x586fc063
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0c4h]
        ; Exact mapped bytes 75 75: jne 0x586fc01d
        __asm _emit 0x75
        __asm _emit 0x75
        ; Exact mapped bytes 0F BF 05 38 05 96 58: movsx eax, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 68: jne 0x586fc01b
        __asm _emit 0x75
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B5 92 ED FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x92
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 48 08: movsx ecx, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x08
        cmp ecx, 3
        ; Exact mapped bytes 75 57: jne 0x586fc01b
        __asm _emit 0x75
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A4 92 ED FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x92
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 44h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 92 ED FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x92
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 0F E8 FF: call 0x5857cf10
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x0f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 50h], edx
        push 0
        push 0f230h
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 55 B0: call dword ptr [ebp - 0x50]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb0
        nop
        ; Exact mapped bytes EB 46: jmp 0x586fc063
        __asm _emit 0xeb
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0c8h]
        ; Exact mapped bytes 75 38: jne 0x586fc063
        __asm _emit 0x75
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0cch]
        mov dword ptr [ebp - 54h], ecx
        push 190h
        push 1f4h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 D7 95 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x95
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0cch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0cch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0c8h]
        ; Exact mapped bytes 74 0E: je 0x586fc07f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586fc08f
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 65: jmp 0x586fc0f6
        __asm _emit 0xeb
        __asm _emit 0x65
        cmp dword ptr [ebp + 0ch], 0f230h
        ; Exact mapped bytes 75 5C: jne 0x586fc0f6
        __asm _emit 0x75
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0cch]
        ; Exact mapped bytes E8 B8 4C F3 FF: call 0x58630d60
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x4c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0f0h]
        ; Exact mapped bytes E8 B7 91 ED FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x91
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 11 E8 FF: call 0x5857d230
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x11
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0cch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0cch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
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
