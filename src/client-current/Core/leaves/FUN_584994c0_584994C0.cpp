// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584994C0 .. +0x49E bytes.
extern "C" __declspec(naked) void FUN_584994c0_584994C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        push esi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B C1 FF FF: call 0x58495670
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        cdq
        mov ecx, 19h
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 74 04 00 00: jne 0x58499959
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4c8h], 0
        ; Exact mapped bytes 0F 85 E5 02 00 00: jne 0x584997da
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4c4h], 4
        ; Exact mapped bytes 75 18: jne 0x58499520
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 2c8h]
        cmp edx, 2
        ; Exact mapped bytes 7D 07: jge 0x5849951e
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 07: jmp 0x58499527
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 A4 02 00 00: je 0x584997d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 2c8h]
        cmp ecx, 1
        ; Exact mapped bytes 75 1A: jne 0x5849955a
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4d8h], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4d4h], 0
        mov ecx, dword ptr [ebp - 4]
        movzx eax, word ptr [ecx + 2deh]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 29 FF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x58499587
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AC 2B FF FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 44 02 00 00: je 0x584997d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B7 80 03 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 2C 02 00 00: jne 0x584997d0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6D 3B FF FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 35: jne 0x584995ed
        __asm _emit 0x75
        __asm _emit 0x35
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D 29 FF FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 21 92 05 00: call 0x584f2800
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x92
        __asm _emit 0x05
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 07: jne 0x584995eb
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 1
        ; Exact mapped bytes EB 20: jmp 0x5849960d
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BB 39 FF FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 AE 39 FF FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 07: je 0x5849960d
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 74 0B: je 0x58499621
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 20h], 1
        ; Exact mapped bytes 74 05: je 0x58499621
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 AF 01 00 00: jmp 0x584997d0
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58499633
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 0F 8D 93 01 00 00: jge 0x584997d0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B7 26 FF FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 90 28 FF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 73 01 00 00: je 0x584997cb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9C 26 FF FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 55 D3 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 0B: jmp 0x5849967b
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 38 2A FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 46 01 00 00: je 0x584997cb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 53 28 FF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 18 3B FF FF: call 0x5848d1b0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 26 01 00 00: jne 0x584997c6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 18 D3 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4]
        sub ecx, eax
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 22 BF FF FF: call 0x584955f0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        sub esi, eax
        imul eax, esi, 0c8h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 50h]
        imul edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [ebp - 4ch]
        imul eax, dword ptr [ebp - 4ch]
        add edx, eax
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 1E 79 3B 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x79
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 86 7B 39 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x7b
        __asm _emit 0x39
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        cmp ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8D AD 00 00 00: jge 0x584997c6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 460h], 0
        ; Exact mapped bytes 0F 85 9D 00 00 00: jne 0x584997c6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4c4h], 64h
        ; Exact mapped bytes 75 30: jne 0x5849976b
        __asm _emit 0x75
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4d4h], 0
        ; Exact mapped bytes 74 24: je 0x5849976b
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4d4h]
        mov dword ptr [eax + 4dch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4d8h]
        mov dword ptr [eax + 4e0h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 4d4h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 61 25 FF FF: call 0x5848bce0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        shl eax, 10h
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A3 29 FF FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 38h]
        or edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4d8h], edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4c4h], 2
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4c8h], 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 318h], 0
        ; Exact mapped bytes E9 A5 FE FF FF: jmp 0x58499670
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 5A FE FF FF: jmp 0x5849962a
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A7 FD FF FF: jmp 0x5849957c
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 7F 01 00 00: jmp 0x58499959
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9E B3 FF FF: call 0x58494b80
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 24h], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x584998aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C2 D1 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov esi, eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CC BD FF FF: call 0x584955f0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        sub esi, eax
        imul eax, esi, 0c8h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 54h], eax
        mov edx, dword ptr [ebp - 58h]
        imul edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [ebp - 54h]
        imul eax, dword ptr [ebp - 54h]
        add edx, eax
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 C8 77 3B 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x77
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 30 7A 39 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x7a
        __asm _emit 0x39
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 2deh]
        cmp dword ptr [ebp - 40h], edx
        ; Exact mapped bytes 7E 36: jle 0x584998a8
        __asm _emit 0x7e
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 76 BD FF FF: call 0x584955f0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3B D1 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 B4 13 00: call 0x585d4d30
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0x13
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x584998a1
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 07: jmp 0x584998a8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes EB 07: jmp 0x584998b1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 1
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x58499959
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4c4h], 4
        ; Exact mapped bytes 75 05: jne 0x584998cc
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x58499959
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4dch], 0
        ; Exact mapped bytes 74 4D: je 0x58499925
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4dch]
        mov dword ptr [ecx + 4d4h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4e0h]
        mov dword ptr [ecx + 4d8h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4dch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4c4h], 64h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4c8h], 0
        ; Exact mapped bytes EB 34: jmp 0x58499959
        __asm _emit 0xeb
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4d4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4d8h], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4c4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4c8h], 0
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
