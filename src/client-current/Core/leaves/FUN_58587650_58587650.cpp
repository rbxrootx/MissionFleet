// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58587650 .. +0xEBF bytes.
extern "C" __declspec(naked) void FUN_58587650_58587650() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58883f2bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 214h
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
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D4 AB EF FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xab
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588aac74h
        mov dword ptr [ebp - 14h], 7530h
        push 198h
        ; Exact mapped bytes E8 47 99 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x99
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 16: je 0x585876e3
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588aac5ch
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D2 8C 1F 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x8c
        __asm _emit 0x1f
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x585876ea
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0bch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0bch]
        mov dword ptr [edx + 60h], eax
        push 54h
        ; Exact mapped bytes E8 FA 98 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x98
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 44: je 0x5858775e
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0c0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 ED D3 EF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xd3
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 C7 AB EF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xab
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58587765
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 0c8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0c8h]
        mov dword ptr [edx + ecx + 64h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 64h]
        mov dword ptr [ebp - 0cch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 04 DE 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xde
        __asm _emit 0x22
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 50 98 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x98
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 44: je 0x58587808
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0d0h], eax
        push 1
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 43 D3 EF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xd3
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 1D AB EF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xab
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858780f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0d8h]
        mov dword ptr [edx + ecx + 64h], eax
        push 54h
        ; Exact mapped bytes E8 CC 97 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x97
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 44: je 0x5858788c
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0dch], edx
        push 2
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 BF D2 EF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xd2
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0e0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 99 AA EF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xaa
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x58587893
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0e4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0e4h]
        mov dword ptr [edx + ecx + 6ch], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 6ch]
        mov dword ptr [ebp - 0e8h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 D6 DC 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xdc
        __asm _emit 0x22
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 22 97 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x97
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 44: je 0x58587936
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0ech], eax
        push 3
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 15 D2 EF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xd2
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0f0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 EF A9 EF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xa9
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858793d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0f4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0f4h]
        mov dword ptr [edx + ecx + 6ch], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 6ch]
        mov dword ptr [ebp - 0f8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 2C DC 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xdc
        __asm _emit 0x22
        __asm _emit 0x00
        nop
        push 70h
        ; Exact mapped bytes E8 78 96 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x96
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 3F: je 0x585879db
        __asm _emit 0x74
        __asm _emit 0x3f
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 6dh
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0dh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 10h
        push ecx
        ; Exact mapped bytes 8B 15 24 20 96 58: mov edx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 DA A9 EF FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa9
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x585879e2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0fch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0fch]
        mov dword ptr [edx + 74h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 100h], edx
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 69 E4 EF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe4
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 104h], edx
        push 6
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 50 23 F3 FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x23
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        push 100h
        ; Exact mapped bytes E8 C9 95 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x95
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 58: je 0x58587aa3
        __asm _emit 0x74
        __asm _emit 0x58
        push 9d9h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 D0 EF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xd0
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 D0 EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd0
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 22h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 15h
        push ecx
        push 0ch
        mov edx, dword ptr [ebp - 108h]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 22 1F 00 00: call 0x585899c0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x58587aaa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 110h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 110h]
        mov dword ptr [eax + 78h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 114h], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 A1 E3 EF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe3
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 118h], eax
        push 0
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 98 36 23 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x36
        __asm _emit 0x23
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 11ch], edx
        push 0bebc200h
        push 0
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 1A F3 F2 FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf3
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], 16h
        push 0ach
        ; Exact mapped bytes E8 DD 94 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x94
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 74: je 0x58587bab
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 120h], ecx
        push 0
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 80 CF EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xcf
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 128h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 12ch], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        imul edx, dword ptr [ebp - 18h], 3
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 36h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 13h
        push edx
        mov eax, dword ptr [ebp - 124h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 128h]
        push edx
        mov eax, dword ptr [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 3A 41 F4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x41
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x58587bb2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 130h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 130h]
        mov dword ptr [edx + 7ch], eax
        push 0ach
        ; Exact mapped bytes E8 2F 94 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x94
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 73: je 0x58587c58
        __asm _emit 0x74
        __asm _emit 0x73
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 134h], edx
        push 1
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 D2 CE EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xce
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 140h], ecx
        movzx edx, word ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax*2 + 36h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 13h
        push eax
        mov ecx, dword ptr [ebp - 138h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 140h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 8D 40 F4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x40
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x58587c5f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 144h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 144h]
        mov dword ptr [eax + 80h], ecx
        push 0ach
        ; Exact mapped bytes E8 7F 93 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x93
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 78: je 0x58587d0d
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 148h], eax
        push 2
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 22 CE EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xce
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 150h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 154h], edx
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx*2 + 36h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 13h]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 150h]
        push eax
        mov ecx, dword ptr [ebp - 154h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 D8 3F F4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x3f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x58587d14
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 158h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 158h]
        mov dword ptr [eax + 84h], ecx
        push 0ach
        ; Exact mapped bytes E8 CA 92 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x92
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 78: je 0x58587dc2
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 15ch], eax
        push 3
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 6D CD EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xcd
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 164h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 168h], edx
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx*2 + 36h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx*2 + 13h]
        push eax
        mov ecx, dword ptr [ebp - 160h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 164h]
        push eax
        mov ecx, dword ptr [ebp - 168h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 23 3F F4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x3f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x58587dc9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 16ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 16ch]
        mov dword ptr [eax + 88h], ecx
        push 0ach
        ; Exact mapped bytes E8 15 92 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x92
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 74: je 0x58587e73
        __asm _emit 0x74
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 170h], eax
        push 4
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 B8 CC EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xcc
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 178h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 17ch], edx
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 36h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 13h
        push ecx
        mov edx, dword ptr [ebp - 174h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 178h]
        push ecx
        mov edx, dword ptr [ebp - 17ch]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 72 3E F4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x3e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x58587e7a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 180h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 180h]
        mov dword ptr [ecx + 8ch], edx
        push 0ach
        ; Exact mapped bytes E8 64 91 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x91
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 77: je 0x58587f27
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 184h], ecx
        push 5
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 07 CC EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xcc
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 18ch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 190h], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 36h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 13h]
        push ecx
        mov edx, dword ptr [ebp - 188h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18ch]
        push ecx
        mov edx, dword ptr [ebp - 190h]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 BE 3D F4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x58587f2e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 194h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 194h]
        mov dword ptr [ecx + 90h], edx
        push 0ach
        ; Exact mapped bytes E8 B0 90 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x90
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 7D: je 0x58587fe7
        __asm _emit 0x74
        __asm _emit 0x7d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 198h], ecx
        push 6
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 4D CB EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xcb
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a0h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a4h], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 36h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx*2 + 13h]
        push ecx
        mov edx, dword ptr [ebp - 19ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1a0h]
        push ecx
        mov edx, dword ptr [ebp - 1a4h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 01 3D F4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58587ff1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 1a8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1a8h]
        mov dword ptr [ecx + 94h], edx
        push 0ach
        ; Exact mapped bytes E8 EA 8F 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x8f
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 75: je 0x585880a5
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 1ach], ecx
        push 7
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 87 CA EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xca
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1b0h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b4h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b8h], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 36h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 13h
        push eax
        mov ecx, dword ptr [ebp - 1b0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1b4h]
        push eax
        mov ecx, dword ptr [ebp - 1b8h]
        push ecx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 43 3C F4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x3c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585880af
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov edx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 1bch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1bch]
        mov dword ptr [eax + 98h], ecx
        push 0ach
        ; Exact mapped bytes E8 2C 8F 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x8f
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 7A: je 0x58588168
        __asm _emit 0x74
        __asm _emit 0x7a
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 1c0h], eax
        push 8
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 C9 C9 EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xc9
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1c8h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1cch], edx
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 36h
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 13h]
        push ecx
        mov edx, dword ptr [ebp - 1c4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1c8h]
        push ecx
        mov edx, dword ptr [ebp - 1cch]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 80 3B F4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x3b
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58588172
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 1d0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1d0h]
        mov dword ptr [ecx + 9ch], edx
        push 0ach
        ; Exact mapped bytes E8 69 8E 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x8e
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 79: je 0x5858822a
        __asm _emit 0x74
        __asm _emit 0x79
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 1d4h], ecx
        push 9
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 06 C9 EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xc9
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1dch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1e0h], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 36h
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax*2 + 13h]
        push edx
        mov eax, dword ptr [ebp - 1d8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 1dch]
        push edx
        mov eax, dword ptr [ebp - 1e0h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 BE 3A F4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x3a
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58588234
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov ecx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 1e4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1e4h]
        mov dword ptr [edx + 0a0h], eax
        push 0ach
        ; Exact mapped bytes E8 A7 8D 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x8d
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 7E: je 0x585882f1
        __asm _emit 0x74
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 1e8h], edx
        push 0bh
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 44 C8 EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xc8
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1f0h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1f4h], ecx
        movzx edx, word ptr [ebp - 14h]
        push edx
        imul eax, dword ptr [ebp - 18h], 3
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 36h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax*2 + 13h]
        push edx
        mov eax, dword ptr [ebp - 1ech]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 1f0h]
        push edx
        mov eax, dword ptr [ebp - 1f4h]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 F7 39 F4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x39
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585882fb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 1f8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1f8h]
        mov dword ptr [edx + 0a4h], eax
        push 0ach
        ; Exact mapped bytes E8 E0 8C 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 7A: je 0x585883b4
        __asm _emit 0x74
        __asm _emit 0x7a
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 1fch], edx
        push 0ah
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 7D C7 EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xc7
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 200h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 204h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 208h], ecx
        movzx edx, word ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 36h
        push eax
        imul ecx, dword ptr [ebp - 18h], 3
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 13h]
        push eax
        mov ecx, dword ptr [ebp - 200h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        push ecx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 34 39 F4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x39
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585883be
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov edx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 20ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 20ch]
        mov dword ptr [eax + 0a8h], ecx
        push 0ach
        ; Exact mapped bytes E8 1D 8C 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 7F: je 0x5858847c
        __asm _emit 0x74
        __asm _emit 0x7f
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 210h], eax
        push 0ch
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 BA C6 EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xc6
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 218h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 21ch], edx
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx*2 + 36h]
        push eax
        imul ecx, dword ptr [ebp - 18h], 3
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 13h]
        push eax
        mov ecx, dword ptr [ebp - 214h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 218h]
        push eax
        mov ecx, dword ptr [ebp - 21ch]
        push ecx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 6C 38 F4 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x38
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58588486
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov edx, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 220h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 220h]
        mov dword ptr [eax + 0ach], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0b0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0b8h], 0bebc200h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BA DA EF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xda
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
