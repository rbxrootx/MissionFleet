// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58714E40 .. +0x608 bytes.
extern "C" __declspec(naked) void FUN_58714e40_58714E40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888deb5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0b8h
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
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E4 D3 D6 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xd3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b3fd0h
        push 198h
        ; Exact mapped bytes E8 5E C1 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc1
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 16: je 0x58714ecc
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588b3fb8h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E9 B4 06 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58714ed3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 68h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [edx + 60h], eax
        push 54h
        ; Exact mapped bytes E8 17 C1 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc1
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 35: je 0x58714f32
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 6ch], edx
        push 0ah
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 10 FC D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        push 40h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F3 D3 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xd3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58714f39
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 74h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [edx + 6ch], eax
        push 54h
        ; Exact mapped bytes E8 B1 C0 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xc0
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 35: je 0x58714f98
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 78h], edx
        push 9
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 AA FB D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfb
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        push 40h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 8D D3 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58714f9f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 80h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [edx + 68h], eax
        push 54h
        ; Exact mapped bytes E8 4B C0 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xc0
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 41: je 0x5871500a
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 84h], edx
        push 8
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 3E FB D6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfb
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        push 40h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 1B D3 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xd3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58715011
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 8ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [edx + 64h], eax
        push 58h
        ; Exact mapped bytes E8 D3 BF 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xbf
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 41: je 0x58715082
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 90h], edx
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 76 FA D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xfa
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        push 40h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 94h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 93 17 D7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x17
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58715089
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 98h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [edx + 70h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 9ch], edx
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 95 A4 D8 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 3E BF 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xbf
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 3B: je 0x58715111
        __asm _emit 0x74
        __asm _emit 0x3b
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED F9 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf9
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        mov eax, dword ptr [ebp + 14h]
        add eax, 72h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1eh
        push ecx
        push 3
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 64 58 0A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x58715118
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0a4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ecx + eax + 74h], edx
        push 0fch
        ; Exact mapped bytes E8 C0 BE 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xbe
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 3B: je 0x5871518f
        __asm _emit 0x74
        __asm _emit 0x3b
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F F9 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xf9
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        mov eax, dword ptr [ebp + 14h]
        add eax, 72h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 3bh
        push ecx
        push 3
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 E6 57 0A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x57
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58715196
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0ach], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ach]
        mov dword ptr [eax + edx + 74h], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x587151ca
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 7
        ; Exact mapped bytes 0F 8D BA 01 00 00: jge 0x5871538e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 26 BE 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xbe
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 40: je 0x5871522e
        __asm _emit 0x74
        __asm _emit 0x40
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 F8 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf8
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        imul eax, dword ptr [ebp - 14h], 0ch
        mov ecx, dword ptr [ebp + 14h]
        lea edx, [ecx + eax + 1dh]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1eh
        push eax
        push 3
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 47 57 0A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x57
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x58715235
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 0b4h]
        mov dword ptr [eax + edx], ecx
        push 0fch
        ; Exact mapped bytes E8 9D BD 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xbd
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 40: je 0x587152b7
        __asm _emit 0x74
        __asm _emit 0x40
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C F8 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf8
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        imul edx, dword ptr [ebp - 14h], 0ch
        mov eax, dword ptr [ebp + 14h]
        lea ecx, [eax + edx + 1dh]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 3bh
        push edx
        push 3
        mov eax, dword ptr [ebp - 0b8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 BE 56 0A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x56
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587152be
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0bch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 7ch]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 0bch]
        mov dword ptr [edx + eax], ecx
        push 0fch
        ; Exact mapped bytes E8 14 BD 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xbd
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 40: je 0x58715340
        __asm _emit 0x74
        __asm _emit 0x40
        push 2dh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 F7 D6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf7
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        imul edx, dword ptr [ebp - 14h], 0ch
        mov eax, dword ptr [ebp + 14h]
        lea ecx, [eax + edx + 1dh]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1eh
        push edx
        push 3
        mov eax, dword ptr [ebp - 0c0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 35 56 0A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x56
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x58715347
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 0c4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0c4h]
        mov dword ptr [ecx + eax*4 + 0b4h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 0e8h], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 104h], 0
        ; Exact mapped bytes E9 33 FE FF FF: jmp 0x587151c1
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F8 0B D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x0b
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0d0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0d4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0d8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0e4h], 0
        mov edx, 1
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 E0 00 00 00: mov word ptr [eax + 0xe0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 120h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 124h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 128h], 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 24 10 00 00: call 0x58716450
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
