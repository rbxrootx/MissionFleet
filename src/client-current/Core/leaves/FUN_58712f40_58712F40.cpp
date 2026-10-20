// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58712F40 .. +0x7BD bytes.
extern "C" __declspec(naked) void FUN_58712f40_58712F40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888dd23h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0fch
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
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EB F2 D6 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf2
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b3f3ch
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 01 2E D7 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x2e
        __asm _emit 0xd7
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 97 2E D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x2e
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 53 E0 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xe0
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 32: je 0x58712ff3
        __asm _emit 0x74
        __asm _emit 0x32
        push 96h
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 1B D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x1b
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 32 F3 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58712ffa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 7ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [eax + 70h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 80h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 8D 25 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x25
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 D9 DF 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xdf
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 38: je 0x58713073
        __asm _emit 0x74
        __asm _emit 0x38
        push 92h
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 1A D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x1a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B2 F2 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf2
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5871307a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 88h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [eax + 68h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 8ch], eax
        push 0e6h
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 91 24 0A 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 4D DF 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xdf
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 38: je 0x587130ff
        __asm _emit 0x74
        __asm _emit 0x38
        push 92h
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 49 1A D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x1a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 26 F2 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf2
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58713106
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 94h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [eax + 64h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 98h], eax
        push 0e6h
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 05 24 0A 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x24
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        push 58h
        ; Exact mapped bytes E8 C1 DE 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xde
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 23: je 0x58713176
        __asm _emit 0x74
        __asm _emit 0x23
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 37h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 28h
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 9F 36 D7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x36
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x5871317d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 9ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 9ch]
        mov dword ptr [edx + 0c4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 0a0h], edx
        push 0dch
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 88 23 0A 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x23
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 44 DE 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xde
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 38: je 0x58713208
        __asm _emit 0x74
        __asm _emit 0x38
        push 91h
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 19 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x19
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0a4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 1D F1 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xf1
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5871320f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0a8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [edx + 60h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0ach], edx
        push 101h
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 6C 23 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x23
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 B8 DD 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xdd
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 38: je 0x58713294
        __asm _emit 0x74
        __asm _emit 0x38
        push 95h
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 18 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x18
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0b0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 91 F0 D6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf0
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5871329b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0b4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0b4h]
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 0b8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 E0 22 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 29 DD 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xdd
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 3E: je 0x58713329
        __asm _emit 0x74
        __asm _emit 0x3e
        push 26h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 17 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x17
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 0bh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 102h
        push ecx
        push 3
        mov edx, dword ptr [ebp - 0bch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 4C 76 0A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x76
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58713330
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0c0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [edx + 74h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 0c4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 4B 22 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 94 DC 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xdc
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 3E: je 0x587133be
        __asm _emit 0x74
        __asm _emit 0x3e
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 17 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x17
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 26h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 3ch
        push ecx
        push 8
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 B7 75 0A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x75
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x587133c5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0cch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0cch]
        mov dword ptr [edx + 78h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 0d0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 B6 21 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x21
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 FF DB 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xdb
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 41: je 0x58713456
        __asm _emit 0x74
        __asm _emit 0x41
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB 16 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x16
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 71h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 96h
        push ecx
        push 6
        mov edx, dword ptr [ebp - 0d4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 1F 75 0A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x75
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5871345d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0d8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0d8h]
        mov dword ptr [edx + 7ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 0dch], edx
        push 101h
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 1E 21 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x21
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 67 DB 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xdb
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 41: je 0x587134ee
        __asm _emit 0x74
        __asm _emit 0x41
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 16 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x16
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 71h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0e6h
        push ecx
        push 6
        mov edx, dword ptr [ebp - 0e0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 87 74 0A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x587134f5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 0e4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0e4h]
        mov dword ptr [edx + 80h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 0e8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 80 20 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58713543
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 0F 8D 95 01 00 00: jge 0x587136e2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 AD DA 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xda
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 43: je 0x587135aa
        __asm _emit 0x74
        __asm _emit 0x43
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C 15 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x15
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 8eh
        push ecx
        imul edx, dword ptr [ebp - 14h], 1bh
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 42h]
        push ecx
        push 4
        mov edx, dword ptr [ebp - 0ech]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 CB 73 0A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x73
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587135b1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 0f0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [eax + edx*4 + 84h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 84h]
        mov dword ptr [ebp - 0f4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 BC 1F 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x1f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 84h]
        mov dword ptr [ebp - 0f8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 7C 29 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x29
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 E5 D9 11 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xd9
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 43: je 0x58713672
        __asm _emit 0x74
        __asm _emit 0x43
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 14 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x14
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 9eh
        push edx
        imul eax, dword ptr [ebp - 14h], 1bh
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 42h]
        push edx
        push 4
        mov eax, dword ptr [ebp - 0fch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 03 73 0A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x73
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x58713679
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 100h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [ecx + eax*4 + 0a4h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0a4h]
        mov dword ptr [ebp - 104h], edx
        push 101h
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 F4 1E 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x1e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0a4h]
        mov dword ptr [ebp - 108h], edx
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 B4 28 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x28
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 58 FE FF FF: jmp 0x5871353a
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
