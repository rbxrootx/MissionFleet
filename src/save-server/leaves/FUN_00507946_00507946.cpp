// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00507946 .. +0x973 bytes.
extern "C" __declspec(naked) void FUN_00507946_00507946() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e62dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 164h
        push esi
        mov dword ptr [ebp - 0c8h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 01 50 FC FF: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 44h], 0
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 E5 66 03 00: call 0x53e072
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov dword ptr [ebp - 24h], 4
        push 6780ech
        push 7
        lea ecx, [ebp - 58h]
        push ecx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 9F 97 F9 FF: call 0x4a114a
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x97
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        mov edx, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 0d0h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        ; Exact mapped bytes E8 3B D6 01 00: call 0x525008
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 54h], al
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 10 4F FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x4f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 54h]
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 55: je 0x507a3e
        __asm _emit 0x74
        __asm _emit 0x55
        mov dword ptr [ebp - 24h], 1
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 68 D3 01 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        sub eax, 7
        push eax
        lea edx, [ebp - 5ch]
        push edx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 83 96 F9 FF: call 0x4a108b
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 0d8h]
        push ecx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 B9 50 FC FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 B3 4E FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 72 01 00 00: jmp 0x507bb0
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 6780f4h
        push 8
        lea edx, [ebp - 64h]
        push edx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 F9 96 F9 FF: call 0x4a114a
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x96
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        mov eax, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 0e0h]
        push ecx
        ; Exact mapped bytes E8 95 D5 01 00: call 0x525008
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 60h], al
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 6A 4E FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 60h]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 55: je 0x507ae4
        __asm _emit 0x74
        __asm _emit 0x55
        mov dword ptr [ebp - 24h], 2
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 C2 D2 01 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        sub eax, 8
        push eax
        lea eax, [ebp - 68h]
        push eax
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 DD 95 F9 FF: call 0x4a108b
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        mov ecx, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 0e8h], ecx
        mov byte ptr [ebp - 4], 5
        mov edx, dword ptr [ebp - 0e8h]
        push edx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 13 50 FC FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 0D 4E FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x507bb0
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 678100h
        push 0ah
        lea eax, [ebp - 70h]
        push eax
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 53 96 F9 FF: call 0x4a114a
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x96
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        mov ecx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 0f0h], ecx
        mov byte ptr [ebp - 4], 6
        mov edx, dword ptr [ebp - 0f0h]
        push edx
        ; Exact mapped bytes E8 EF D4 01 00: call 0x525008
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 6ch], al
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 C4 4D FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 6ch]
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x507b86
        __asm _emit 0x74
        __asm _emit 0x52
        mov dword ptr [ebp - 24h], 3
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 1D D2 01 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        sub eax, 0ah
        push eax
        lea ecx, [ebp - 74h]
        push ecx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 38 95 F9 FF: call 0x4a108b
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        mov edx, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 0f8h], edx
        mov byte ptr [ebp - 4], 7
        mov eax, dword ptr [ebp - 0f8h]
        push eax
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 6E 4F FC FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x4f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 68 4D FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 2A: jmp 0x507bb0
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov dword ptr [ebp - 78h], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 85 65 03 00: call 0x53e11e
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 44 4D FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 78h]
        ; Exact mapped bytes E9 F8 06 00 00: jmp 0x5082a8
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 22h
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 6B 58 FC FF: call 0x4cd425
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x58
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], -1
        ; Exact mapped bytes 75 2A: jne 0x507bed
        __asm _emit 0x75
        __asm _emit 0x2a
        mov dword ptr [ebp - 7ch], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 48 65 03 00: call 0x53e11e
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 07 4D FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E9 BB 06 00 00: jmp 0x5082a8
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        lea edx, [ebp - 80h]
        push edx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 4D 95 F9 FF: call 0x4a114a
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        mov eax, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 100h], eax
        mov byte ptr [ebp - 4], 8
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 C4 4E FC FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 BE 4C FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0xfc
        __asm _emit 0xff
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 2A D1 01 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 3ch]
        push eax
        lea edx, [ebp - 84h]
        push edx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 42 94 F9 FF: call 0x4a108b
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x94
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 108h], eax
        mov byte ptr [ebp - 4], 9
        mov ecx, dword ptr [ebp - 108h]
        push ecx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 78 4E FC FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 6F 4C FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x4c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 38h], 1
        ; Exact mapped bytes E8 E0 9D 02 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 74 25: je 0x507cbe
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes E8 D2 9D 02 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes E8 CB 9D 02 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0b0h]
        mov dword ptr [eax + 78h], edx
        ; Exact mapped bytes E8 BD 9D 02 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 34h]
        mov dword ptr [eax + 0b0h], ecx
        ; Exact mapped bytes EB 0E: jmp 0x507ccc
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes E8 AD 9D 02 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 24h], 1
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x507d77
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 95 9D 02 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes E8 8A 9D 02 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 50h], ecx
        cmp dword ptr [ebp - 50h], -1
        ; Exact mapped bytes 74 06: je 0x507cf8
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 50h], 1
        ; Exact mapped bytes 75 1C: jne 0x507d14
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 16 3C 02 00: call 0x52b916
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x507d0d
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 50h], 9
        ; Exact mapped bytes EB 07: jmp 0x507d14
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 5
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 9F EA FC FF: call 0x4d67bf
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xea
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp - 50h], 6
        ; Exact mapped bytes 74 08: je 0x507d2e
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 6A 51 02 00: call 0x52ce98
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 74 D0 01 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 34 9D 02 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], eax
        mov eax, dword ptr [ebp - 10ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes FF 92 84 00 00 00: call dword ptr [edx + 0x84]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 78 2E 01 00: call 0x51abd3
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x507d66
        __asm _emit 0x75
        __asm _emit 0x07
        push 1
        ; Exact mapped bytes E8 09 2E 01 00: call 0x51ab6f
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 05 9D 02 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [eax + 78h], 0ffffffffh
        ; Exact mapped bytes E9 F9 04 00 00: jmp 0x508270
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 3
        ; Exact mapped bytes 0F 85 46 04 00 00: jne 0x5081c7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 67810ch
        push 3
        lea eax, [ebp - 8ch]
        push eax
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 B3 93 F9 FF: call 0x4a114a
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x93
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        mov ecx, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 114h], ecx
        mov byte ptr [ebp - 4], 0ah
        mov edx, dword ptr [ebp - 114h]
        push edx
        ; Exact mapped bytes E8 9D D2 01 00: call 0x525056
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 88h], al
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 8ch]
        ; Exact mapped bytes E8 1E 4B FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x4b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 88h]
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x507de9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes E9 87 04 00 00: jmp 0x508270
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 6F CF 01 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        sub eax, 3
        push eax
        lea ecx, [ebp - 90h]
        push ecx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 87 92 F9 FF: call 0x4a108b
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x92
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        mov edx, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 11ch], edx
        mov byte ptr [ebp - 4], 0bh
        mov eax, dword ptr [ebp - 11ch]
        push eax
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 BD 4C FC FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x4c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 B4 4A FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        push 22h
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 E3 55 FC FF: call 0x4cd425
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x55
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], -1
        ; Exact mapped bytes 75 0C: jne 0x507e57
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes E9 19 04 00 00: jmp 0x508270
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        lea edx, [ebp - 94h]
        push edx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 E0 92 F9 FF: call 0x4a114a
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x92
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        mov eax, dword ptr [ebp - 120h]
        mov dword ptr [ebp - 124h], eax
        mov byte ptr [ebp - 4], 0ch
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 57 4C FC FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x4c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 94h]
        ; Exact mapped bytes E8 4E 4A FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 BA CE 01 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 3ch]
        push eax
        lea edx, [ebp - 98h]
        push edx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 D2 91 F9 FF: call 0x4a108b
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x91
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        mov eax, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 12ch], eax
        mov byte ptr [ebp - 4], 0dh
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 08 4C FC FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x4c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 98h]
        ; Exact mapped bytes E8 FF 49 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x49
        __asm _emit 0xfc
        __asm _emit 0xff
        push 678110h
        push 3
        lea edx, [ebp - 0a0h]
        push edx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 47 92 F9 FF: call 0x4a114a
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x92
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        mov eax, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 134h], eax
        mov byte ptr [ebp - 4], 0eh
        mov ecx, dword ptr [ebp - 134h]
        push ecx
        ; Exact mapped bytes E8 31 D1 01 00: call 0x525056
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 9ch], al
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0a0h]
        ; Exact mapped bytes E8 B2 49 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x49
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 9ch]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x507f56
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes E9 1A 03 00 00: jmp 0x508270
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 02 CE 01 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        sub eax, 3
        push eax
        lea eax, [ebp - 0a4h]
        push eax
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 1A 91 F9 FF: call 0x4a108b
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x91
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        mov ecx, dword ptr [ebp - 138h]
        mov dword ptr [ebp - 13ch], ecx
        mov byte ptr [ebp - 4], 0fh
        mov edx, dword ptr [ebp - 13ch]
        push edx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 50 4B FC FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x4b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0a4h]
        ; Exact mapped bytes E8 47 49 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x49
        __asm _emit 0xfc
        __asm _emit 0xff
        push 22h
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 76 54 FC FF: call 0x4cd425
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], -1
        ; Exact mapped bytes 75 0C: jne 0x507fc4
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes E9 AC 02 00 00: jmp 0x508270
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3ch]
        push eax
        lea ecx, [ebp - 0a8h]
        push ecx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 73 91 F9 FF: call 0x4a114a
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x91
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        mov edx, dword ptr [ebp - 140h]
        mov dword ptr [ebp - 144h], edx
        mov byte ptr [ebp - 4], 10h
        mov eax, dword ptr [ebp - 144h]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 EA 4A FC FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 E1 48 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 4D CD 01 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 3ch]
        push eax
        lea ecx, [ebp - 0ach]
        push ecx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 65 90 F9 FF: call 0x4a108b
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x90
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        mov edx, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 14ch], edx
        mov byte ptr [ebp - 4], 11h
        mov eax, dword ptr [ebp - 14ch]
        push eax
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 9B 4A FC FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0ach]
        ; Exact mapped bytes E8 92 48 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        push 678114h
        push 3
        lea ecx, [ebp - 0b4h]
        push ecx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 DA 90 F9 FF: call 0x4a114a
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x90
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        mov edx, dword ptr [ebp - 150h]
        mov dword ptr [ebp - 154h], edx
        mov byte ptr [ebp - 4], 12h
        mov eax, dword ptr [ebp - 154h]
        push eax
        ; Exact mapped bytes E8 C4 CF 01 00: call 0x525056
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 0b0h], al
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 45 48 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0b0h]
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x5080c3
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes E9 AD 01 00 00: jmp 0x508270
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 95 CC 01 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        sub eax, 3
        push eax
        lea edx, [ebp - 0b8h]
        push edx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 AD 8F F9 FF: call 0x4a108b
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x8f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        mov eax, dword ptr [ebp - 158h]
        mov dword ptr [ebp - 15ch], eax
        mov byte ptr [ebp - 4], 13h
        mov ecx, dword ptr [ebp - 15ch]
        push ecx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 E3 49 FC FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x49
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0b8h]
        ; Exact mapped bytes E8 DA 47 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x47
        __asm _emit 0xfc
        __asm _emit 0xff
        push 22h
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 09 53 FC FF: call 0x4cd425
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], -1
        ; Exact mapped bytes 75 0C: jne 0x508131
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes E9 3F 01 00 00: jmp 0x508270
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3ch]
        push edx
        lea eax, [ebp - 0bch]
        push eax
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 06 90 F9 FF: call 0x4a114a
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x90
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        mov ecx, dword ptr [ebp - 160h]
        mov dword ptr [ebp - 164h], ecx
        mov byte ptr [ebp - 4], 14h
        mov edx, dword ptr [ebp - 164h]
        push edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 7D 49 FC FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x49
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0bch]
        ; Exact mapped bytes E8 74 47 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x47
        __asm _emit 0xfc
        __asm _emit 0xff
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 E0 CB 01 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 3ch]
        push eax
        lea eax, [ebp - 0c0h]
        push eax
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 F8 8E F9 FF: call 0x4a108b
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x8e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        mov ecx, dword ptr [ebp - 168h]
        mov dword ptr [ebp - 16ch], ecx
        mov byte ptr [ebp - 4], 15h
        mov edx, dword ptr [ebp - 16ch]
        push edx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 2E 49 FC FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x49
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0c0h]
        ; Exact mapped bytes E8 25 47 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x47
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 05 F7 FF FF: call 0x5078d7
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 CD CB 01 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 8D 98 02 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 170h], eax
        mov eax, dword ptr [ebp - 170h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes FF 92 84 00 00 00: call dword ptr [edx + 0x84]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes E8 6B 98 02 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 34h]
        mov dword ptr [eax + 0b0h], ecx
        push 0
        push 0e108h
        push 111h
        ; Exact mapped bytes E8 51 98 02 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes E8 12 34 02 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 44 98 02 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [eax + 0b0h], 0
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 96 F6 FF FF: call 0x5078d7
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 48h]
        ; Exact mapped bytes 7E 0E: jle 0x508254
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 90 84 00 00 00: call dword ptr [eax + 0x84]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 7A 29 01 00: call 0x51abd3
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x508270
        __asm _emit 0x75
        __asm _emit 0x13
        push 0
        push 0
        push 10h
        ; Exact mapped bytes E8 08 98 02 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes E8 1D 34 02 00: call 0x52b68d
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 FB 97 02 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b0h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0c4h], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 8B 5E 03 00: call 0x53e11e
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 4A 46 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x46
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0c4h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
