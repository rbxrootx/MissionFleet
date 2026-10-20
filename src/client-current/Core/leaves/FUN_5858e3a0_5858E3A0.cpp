// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858E3A0 .. +0x44E bytes.
extern "C" __declspec(naked) void FUN_5858e3a0_5858E3A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588842a8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 90h
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
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5858e3dd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 84 FF 00 00 00: je 0x5858e4e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + ecx*4 + 48h], 0
        ; Exact mapped bytes 0F 85 9F 00 00 00: jne 0x5858e497
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 05 2C 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 64: je 0x5858e476
        __asm _emit 0x74
        __asm _emit 0x64
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 DC EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xdc
        __asm _emit 0xef
        __asm _emit 0xff
        add eax, 64h
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 85 EF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0xff
        add eax, 0fah
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 14h]
        add eax, 4bh
        push eax
        ; Exact mapped bytes 8B 0D D4 06 96 58: mov ecx, dword ptr [0x589606d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 66 EF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x66
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 48h], ecx
        push 2710h
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AF 3E EF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x3e
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5858e47d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [edx + ecx*4 + 48h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 48h]
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 09: jne 0x5858e4b3
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0fffffeffh
        ; Exact mapped bytes EB 07: jmp 0x5858e4ba
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 101h
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 EA 70 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x70
        __asm _emit 0x22
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 48h]
        mov dword ptr [ebp - 54h], ecx
        movzx edx, byte ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 00 7A EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x7a
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EE FE FF FF: jmp 0x5858e3d4
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 0F 85 D9 00 00 00: jne 0x5858e5cc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 07 2B 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x2b
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 75: je 0x5858e585
        __asm _emit 0x74
        __asm _emit 0x75
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 48h]
        ; Exact mapped bytes E8 8C DB EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xdb
        __asm _emit 0xef
        __asm _emit 0xff
        add eax, 11h
        mov dword ptr [ebp - 58h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 48h]
        ; Exact mapped bytes E8 82 84 EF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0xff
        add eax, 5ah
        mov dword ptr [ebp - 5ch], eax
        push 26h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 65 EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 48h]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov eax, dword ptr [ebp - 5ch]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F0 C3 22 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xc3
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858e58c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 68h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 6ch], ecx
        push 2710h
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 C8 78 EF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x78
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 70h], eax
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 75 78 EF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x78
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 74h], edx
        movzx eax, byte ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 FE 78 EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x78
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1A: je 0x5858e603
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 0dh]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 8E CB 22 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xcb
        __asm _emit 0x22
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5858e615
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 84 BE 01 00 00: je 0x5858e7dd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + eax*4 + 54h], 0
        ; Exact mapped bytes 0F 85 0F 01 00 00: jne 0x5858e73f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 CA 29 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x29
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x5858e6da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + eax + 48h]
        ; Exact mapped bytes E8 4B DA EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xda
        __asm _emit 0xef
        __asm _emit 0xff
        add eax, 11h
        mov dword ptr [ebp - 7ch], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + eax + 48h]
        ; Exact mapped bytes E8 41 83 EF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0xff
        imul edx, dword ptr [ebp - 14h], 3ch
        lea eax, [eax + edx + 0f0h]
        mov dword ptr [ebp - 80h], eax
        push 26h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 64 EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x64
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 48h]
        mov dword ptr [ebp - 88h], ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp - 80h]
        push eax
        push 2
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 9B C2 22 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xc2
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858e6e1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 8ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [edx + ecx*4 + 54h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 54h]
        mov dword ptr [ebp - 90h], eax
        push 2710h
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 5F 77 EF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x77
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 54h]
        mov dword ptr [ebp - 94h], eax
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 02 77 EF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x77
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 54h]
        mov dword ptr [ebp - 98h], eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 81 77 EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x77
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 72: je 0x5858e7d8
        __asm _emit 0x74
        __asm _emit 0x72
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 54h]
        mov dword ptr [ebp - 9ch], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 1C: jne 0x5858e798
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 0dh]
        sub eax, 1
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        movzx ecx, byte ptr [eax + ecx]
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes EB 30: jmp 0x5858e7c8
        __asm _emit 0xeb
        __asm _emit 0x30
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 75 1D: jne 0x5858e7bb
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 0dh]
        sub eax, 1
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        movzx ecx, byte ptr [eax + ecx + 1]
        mov dword ptr [ebp - 34h], ecx
        ; Exact mapped bytes EB 07: jmp 0x5858e7c2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 B9 C9 22 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc9
        __asm _emit 0x22
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 2F FE FF FF: jmp 0x5858e60c
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
