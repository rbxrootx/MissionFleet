// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586931D0 .. +0x1814 bytes.
extern "C" __declspec(naked) void FUN_586931d0_586931D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888a756h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 2e4h
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
        ; Exact mapped bytes E8 E4 84 ED FF: call 0x5856b700
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b0434h
        push 54h
        ; Exact mapped bytes E8 D1 DD 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xdd
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 38: je 0x5869327b
        __asm _emit 0x74
        __asm _emit 0x38
        push 158h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 18 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x18
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 AA F0 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf0
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58693282
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 108h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 108h]
        mov dword ptr [eax + 88h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 10ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 F3 22 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x22
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 110h], edx
        push 0
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 67 2B DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x2b
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 23 DD 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xdd
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 38: je 0x58693329
        __asm _emit 0x74
        __asm _emit 0x38
        push 157h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F 18 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x18
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 114h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 FC EF DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xef
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x58693330
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 118h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 118h]
        mov dword ptr [edx + 84h], eax
        push 54h
        ; Exact mapped bytes E8 B1 DC 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xdc
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 26: je 0x58693389
        __asm _emit 0x74
        __asm _emit 0x26
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 9ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 5ch
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 9C EF DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xef
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x58693390
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 11ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 11ch]
        mov dword ptr [edx + 8ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 120h], edx
        push 101h
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 E5 21 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x21
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 124h], ecx
        push 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 59 2A DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x2a
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 15 DC 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 26: je 0x58693425
        __asm _emit 0x74
        __asm _emit 0x26
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 147h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 6ah
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 00 EF DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xef
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x5869342c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 128h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 128h]
        mov dword ptr [eax + 94h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 12ch], eax
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 DC 29 DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x29
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 130h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 2D 21 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x21
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 79 DB 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xdb
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 25: je 0x586934c0
        __asm _emit 0x74
        __asm _emit 0x25
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 147h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 6ah
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 65 EE DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xee
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x586934c7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 134h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 134h]
        mov dword ptr [ecx + 90h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 138h], ecx
        push 0
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 41 29 DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x29
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 13ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 92 20 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x20
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 DB DA 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xda
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 44: je 0x5869357d
        __asm _emit 0x74
        __asm _emit 0x44
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 15 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x15
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 15bh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 271h
        push edx
        push 8
        mov eax, dword ptr [ebp - 140h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 F8 73 12 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x73
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x58693584
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 144h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 144h]
        mov dword ptr [eax + 5bch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5bch]
        mov dword ptr [ebp - 148h], eax
        push 101h
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 F1 1F 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x1f
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5bch]
        mov dword ptr [ebp - 14ch], edx
        push 0
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 65 28 DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x28
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 1E DA 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xda
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 43: je 0x58693639
        __asm _emit 0x74
        __asm _emit 0x43
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA 14 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x14
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 16ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 271h
        push ecx
        push 8
        mov edx, dword ptr [ebp - 150h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 3C 73 12 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x73
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x58693640
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 154h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 154h]
        mov dword ptr [edx + 5b8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5b8h]
        mov dword ptr [ebp - 158h], edx
        push 101h
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 35 1F 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x1f
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5b8h]
        mov dword ptr [ebp - 15ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 A9 27 DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x27
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 62 D9 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd9
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 7A: je 0x5869372c
        __asm _emit 0x74
        __asm _emit 0x7a
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 3e8h
        ; Exact mapped bytes 66 89 45 EA: mov word ptr [ebp - 0x16], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xea
        push 1ah
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 14 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x14
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
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
        movzx eax, word ptr [ebp - 16h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1ech
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 200h
        push edx
        mov eax, dword ptr [ebp - 160h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 164h]
        push edx
        mov eax, dword ptr [ebp - 168h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 B9 85 E3 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x58693733
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 16ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 16ch]
        mov dword ptr [edx + 98h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 170h], edx
        push 101h
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 42 1E 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x1e
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 174h], ecx
        push 0
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 B6 26 DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x26
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 6F D8 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xd8
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 66: je 0x5869380b
        __asm _emit 0x74
        __asm _emit 0x66
        push 1bh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 13 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x13
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 17ch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 180h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1ech
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 261h
        push edx
        mov eax, dword ptr [ebp - 178h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 17ch]
        push edx
        mov eax, dword ptr [ebp - 180h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 DA 84 E3 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x58693812
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 184h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 184h]
        mov dword ptr [edx + 9ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 188h], edx
        push 101h
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 63 1D 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x1d
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 18ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 D7 25 DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x25
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5869387c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0bh
        ; Exact mapped bytes 0F 8D 97 03 00 00: jge 0x58693c1d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 77 D7 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xd7
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 2D: je 0x586938ca
        __asm _emit 0x74
        __asm _emit 0x2d
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 16fh
        push eax
        imul ecx, dword ptr [ebp - 14h], 1fh
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 0b6h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 5B EA DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xea
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x586938d1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 190h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 190h]
        mov dword ptr [ecx + eax*4 + 130h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 130h]
        mov dword ptr [ebp - 194h], edx
        push 101h
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 9C 1C 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x1c
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 130h]
        mov dword ptr [ebp - 198h], edx
        push 0
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 0C 25 DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x25
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 130h]
        mov dword ptr [ebp - 19ch], edx
        push 3e8h
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 29 25 DF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x25
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 A2 D6 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xd6
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 45: je 0x586939b7
        __asm _emit 0x74
        __asm _emit 0x45
        push 1eh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 11 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x11
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 16fh
        push eax
        imul ecx, dword ptr [ebp - 14h], 1fh
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 0beh]
        push eax
        push 2
        mov ecx, dword ptr [ebp - 1a0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 BE 6F 12 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x6f
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x586939be
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 1a4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1a4h]
        mov dword ptr [edx + ecx*4 + 104h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 104h]
        mov dword ptr [ebp - 1a8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 AF 1B 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x1b
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 104h]
        mov dword ptr [ebp - 1ach], eax
        push 0
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 1F 24 DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x24
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 104h]
        mov dword ptr [ebp - 1b0h], eax
        push 3e8h
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 3C 24 DF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x24
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 B8 D5 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xd5
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 2E: je 0x58693a8a
        __asm _emit 0x74
        __asm _emit 0x2e
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 184h
        push ecx
        imul edx, dword ptr [ebp - 14h], 1fh
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 0b6h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 9B E8 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x58693a91
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 1b4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1b4h]
        mov dword ptr [edx + ecx*4 + 0d8h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0d8h]
        mov dword ptr [ebp - 1b8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 DC 1A 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x1a
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0d8h]
        mov dword ptr [ebp - 1bch], eax
        push 0
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 4C 23 DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x23
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0d8h]
        mov dword ptr [ebp - 1c0h], eax
        push 3e8h
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 69 23 DF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x23
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 E2 D4 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xd4
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 4C: je 0x58693b84
        __asm _emit 0x74
        __asm _emit 0x4c
        push 1eh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B 0F DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x0f
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 184h
        push ecx
        imul edx, dword ptr [ebp - 14h], 1fh
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 0beh]
        push ecx
        push 2
        mov edx, dword ptr [ebp - 1c4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 F4 6D 12 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x6d
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58693b8e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 1c8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1c8h]
        mov dword ptr [eax + edx*4 + 0ach], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 1cch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 DC 19 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x19
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 1d0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 4C 22 DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x22
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 1d4h], ecx
        push 3e8h
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 69 22 DF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x22
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 56 FC FF FF: jmp 0x58693873
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 69 23 DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x23
        __asm _emit 0xdf
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
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 7c8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 7cch], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58693c71
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 1eh
        ; Exact mapped bytes 0F 8F CD 07 00 00: jg 0x58694448
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xcd
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 82 D3 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd3
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 36: je 0x58693cce
        __asm _emit 0x74
        __asm _emit 0x36
        push 40h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        add eax, 102h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        imul eax, dword ptr [ebp - 14h], 60h
        lea ecx, [edx + eax + 7bh]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 4A 2B DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x2b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58693cd8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 1d8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1d8h]
        mov dword ptr [edx + ecx*4 + 254h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 254h]
        mov dword ptr [ebp - 1dch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 92 18 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x18
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 254h]
        mov dword ptr [ebp - 1e0h], eax
        push 0
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 02 21 DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x21
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 BE D2 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xd2
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x58693dea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx*4 + 254h]
        ; Exact mapped bytes E8 3E 83 DF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x83
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 1e4h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + eax*4 + 254h]
        ; Exact mapped bytes E8 36 2C DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x2c
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        push 9ch
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 0D DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x0d
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 254h]
        mov dword ptr [ebp - 1f0h], ecx
        push 40h
        mov edx, dword ptr [ebp - 1e4h]
        push edx
        mov eax, dword ptr [ebp - 1e8h]
        push eax
        mov ecx, dword ptr [ebp - 1ech]
        push ecx
        mov edx, dword ptr [ebp - 1f0h]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 3E E5 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xe5
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58693df4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 1f4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1f4h]
        mov dword ptr [edx + ecx*4 + 4c0h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 4c0h]
        mov dword ptr [ebp - 1f8h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 76 17 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x17
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 4c0h]
        mov dword ptr [ebp - 1fch], eax
        push 0
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 E6 1F DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x1f
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 A2 D1 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xd1
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x58693f03
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx*4 + 254h]
        ; Exact mapped bytes E8 22 82 DF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x82
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 200h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + eax*4 + 254h]
        ; Exact mapped bytes E8 1A 2B DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x2b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 204h], eax
        push 0
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 0C DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x0c
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 208h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 254h]
        mov dword ptr [ebp - 20ch], ecx
        push 40h
        mov edx, dword ptr [ebp - 200h]
        push edx
        mov eax, dword ptr [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        push ecx
        mov edx, dword ptr [ebp - 20ch]
        push edx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 15 29 DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x29
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58693f0d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov eax, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 210h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 210h]
        mov dword ptr [edx + ecx*4 + 53ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 53ch]
        mov dword ptr [ebp - 214h], eax
        push 0
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 00 B6 E0 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xb6
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 AC D0 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd0
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 6F: je 0x58693fdd
        __asm _emit 0x74
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx*4 + 254h]
        ; Exact mapped bytes E8 30 81 DF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x81
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + eax*4 + 254h]
        ; Exact mapped bytes E8 28 2A DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x2a
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 254h]
        mov dword ptr [ebp - 220h], ecx
        push 40h
        mov edx, dword ptr [ebp - 218h]
        push edx
        mov eax, dword ptr [ebp - 21ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 220h]
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 4B E3 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe3
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58693fe7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 224h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 224h]
        mov dword ptr [ecx + eax*4 + 34ch], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 34ch]
        mov dword ptr [ebp - 228h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 83 15 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x15
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 34ch]
        mov dword ptr [ebp - 22ch], edx
        push 0
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 F3 1D DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x1d
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 AF CF 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xcf
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 6F: je 0x586940da
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + eax*4 + 254h]
        ; Exact mapped bytes E8 33 80 DF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x80
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 254h]
        ; Exact mapped bytes E8 2B 29 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x29
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 254h]
        mov dword ptr [ebp - 238h], eax
        push 40h
        mov ecx, dword ptr [ebp - 230h]
        push ecx
        mov edx, dword ptr [ebp - 234h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 238h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 4E E2 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xe2
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586940e4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov ecx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 23ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 23ch]
        mov dword ptr [eax + edx*4 + 2d0h], ecx
        push 58h
        ; Exact mapped bytes E8 F6 CE 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xce
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 6F: je 0x58694193
        __asm _emit 0x74
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 254h]
        ; Exact mapped bytes E8 7A 7F DF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x7f
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 240h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx*4 + 254h]
        ; Exact mapped bytes E8 72 28 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x28
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 254h]
        mov dword ptr [ebp - 248h], edx
        push 40h
        mov eax, dword ptr [ebp - 240h]
        push eax
        mov ecx, dword ptr [ebp - 244h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 248h]
        push edx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 85 26 DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869419d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov eax, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 24ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 24ch]
        mov dword ptr [edx + ecx*4 + 1d8h], eax
        push 54h
        ; Exact mapped bytes E8 3D CE 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xce
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 6F: je 0x5869424c
        __asm _emit 0x74
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx*4 + 254h]
        ; Exact mapped bytes E8 C1 7E DF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x7e
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + eax*4 + 254h]
        ; Exact mapped bytes E8 B9 27 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x27
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 254h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 254h]
        mov dword ptr [ebp - 258h], ecx
        push 40h
        mov edx, dword ptr [ebp - 250h]
        push edx
        mov eax, dword ptr [ebp - 254h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 258h]
        push ecx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 DC E0 DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe0
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58694256
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov edx, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 25ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 25ch]
        mov dword ptr [ecx + eax*4 + 444h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 444h]
        mov dword ptr [ebp - 260h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 14 13 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x13
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 444h]
        mov dword ptr [ebp - 264h], edx
        push 0
        mov ecx, dword ptr [ebp - 264h]
        ; Exact mapped bytes E8 84 1B DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 40 CD 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xcd
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 6F: je 0x58694349
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + eax*4 + 254h]
        ; Exact mapped bytes E8 C4 7D DF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x7d
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 254h]
        ; Exact mapped bytes E8 BC 26 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x26
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 26ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 254h]
        mov dword ptr [ebp - 270h], eax
        push 40h
        mov ecx, dword ptr [ebp - 268h]
        push ecx
        mov edx, dword ptr [ebp - 26ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 270h]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 DF DF DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xdf
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58694353
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov ecx, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 274h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 274h]
        mov dword ptr [eax + edx*4 + 3c8h], ecx
        push 54h
        ; Exact mapped bytes E8 87 CC 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xcc
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 5F: je 0x586943f2
        __asm _emit 0x74
        __asm _emit 0x5f
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 254h]
        ; Exact mapped bytes E8 0B 7D DF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x7d
        __asm _emit 0xdf
        __asm _emit 0xff
        sub eax, 40h
        mov dword ptr [ebp - 278h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx*4 + 254h]
        ; Exact mapped bytes E8 00 26 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x26
        __asm _emit 0xdf
        __asm _emit 0xff
        add eax, 1fh
        mov dword ptr [ebp - 27ch], eax
        push 40h
        mov eax, dword ptr [ebp - 278h]
        push eax
        mov ecx, dword ptr [ebp - 27ch]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 36 DF DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xdf
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586943fc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov eax, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 280h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 280h]
        mov dword ptr [edx + ecx*4 + 15ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 15ch]
        mov dword ptr [ebp - 284h], eax
        push 101h
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 6E 11 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x11
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 20 F8 FF FF: jmp 0x58693c68
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5869445a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 0F 8D 8E 01 00 00: jge 0x586945f2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 6bh
        mov dword ptr [ebp - 20h], 6eh
        cmp dword ptr [ebp - 14h], 1dh
        ; Exact mapped bytes 0F 8D 97 00 00 00: jge 0x58694513
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 81 CB 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xcb
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 4B: je 0x586944e4
        __asm _emit 0x74
        __asm _emit 0x4b
        mov edx, dword ptr [ebp - 14h]
        add edx, 3c1h
        push edx
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 06 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x06
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 288h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 148h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 288h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 44 DE DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xde
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586944ee
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov ecx, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 28ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 28ch]
        mov dword ptr [eax + edx*4 + 5c4h], ecx
        ; Exact mapped bytes EB 76: jmp 0x58694589
        __asm _emit 0xeb
        __asm _emit 0x76
        push 54h
        ; Exact mapped bytes E8 EA CA 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xca
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 2C: je 0x5869455c
        __asm _emit 0x74
        __asm _emit 0x2c
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 148h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 20h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 CC DD DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xdd
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58694566
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov edx, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 290h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 290h]
        mov dword ptr [ecx + eax*4 + 5c4h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 5c4h]
        mov dword ptr [ebp - 294h], edx
        push 0
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 97 18 DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x18
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 5c4h]
        mov dword ptr [ebp - 298h], edx
        push 101h
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 E4 0F 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 5c4h]
        mov dword ptr [ebp - 29ch], edx
        push 0
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 A4 19 DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x19
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5F FE FF FF: jmp 0x58694451
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 1fh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 5c4h]
        mov dword ptr [ebp - 2a4h], eax
        push 40bh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 05 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 2a0h], eax
        mov ecx, dword ptr [ebp - 2a0h]
        push ecx
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 FE 18 DF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x18
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 CA C9 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc9
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 2E: je 0x5869467e
        __asm _emit 0x74
        __asm _emit 0x2e
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 144h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 82h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 AA DC DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xdc
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58694688
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov edx, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 2a8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2a8h]
        mov dword ptr [eax + 5c0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5c0h]
        mov dword ptr [ebp - 2ach], eax
        push 101h
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 EA 0E 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0e
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 33 C9 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xc9
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 73: je 0x5869475a
        __asm _emit 0x74
        __asm _emit 0x73
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 0ah
        ; Exact mapped bytes 66 89 55 E8: mov word ptr [ebp - 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe8
        push 1ch
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE 03 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 2b0h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2b4h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2b8h], ecx
        movzx edx, word ptr [ebp - 18h]
        push edx
        push 258h
        push 320h
        mov eax, dword ptr [ebp - 2b0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 2b4h]
        push edx
        mov eax, dword ptr [ebp - 2b8h]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 8E 75 E3 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x75
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58694764
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 2bch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2bch]
        mov dword ptr [edx + 0a0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 2c0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 0E 0E 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x0e
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 2c4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 82 16 DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x16
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 3E C8 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xc8
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 63: je 0x5869483f
        __asm _emit 0x74
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 0ah
        ; Exact mapped bytes 66 89 45 E6: mov word ptr [ebp - 0x1a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe6
        push 155h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 03 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x03
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 2c8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 2cch], edx
        movzx eax, word ptr [ebp - 1ah]
        push eax
        push 258h
        push 320h
        mov ecx, dword ptr [ebp - 2c8h]
        push ecx
        mov edx, dword ptr [ebp - 2cch]
        push edx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 E9 DA DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58694849
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov eax, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 2d0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2d0h]
        mov dword ptr [ecx + 0a4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 2d4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 29 0D 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x0d
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 2d8h], eax
        push 0
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 9D 15 DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x15
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 59 C7 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc7
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 63: je 0x58694924
        __asm _emit 0x74
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 0ah
        ; Exact mapped bytes 66 89 55 E4: mov word ptr [ebp - 0x1c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe4
        push 3ffh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 02 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 2dch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 2e0h], ecx
        movzx edx, word ptr [ebp - 1ch]
        push edx
        push 258h
        push 320h
        mov eax, dword ptr [ebp - 2dch]
        push eax
        mov ecx, dword ptr [ebp - 2e0h]
        push ecx
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 04 DA DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xda
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5869492e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 2e4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2e4h]
        mov dword ptr [eax + 0a8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 2e8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 44 0C 12 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x0c
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 2ech], edx
        push 0
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 B8 14 DF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x14
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 2f0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 EC 15 DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x15
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1f44h], 0ffffffffh
        push 180h
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 648h
        push eax
        ; Exact mapped bytes E8 4A 84 1B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 0ch
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
