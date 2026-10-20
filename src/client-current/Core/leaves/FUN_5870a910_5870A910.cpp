// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5870A910 .. +0x1019 bytes.
extern "C" __declspec(naked) void FUN_5870a910_5870A910() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888dc30h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1a4h
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
        ; Exact mapped bytes E8 14 79 D7 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x79
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b3f1ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1e70h], 70h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1e74h], 5dh
        push 54h
        ; Exact mapped bytes E8 77 66 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x66
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 23: je 0x5870a9c0
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 65 79 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x79
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5870a9c7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0b8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0b8h]
        mov dword ptr [edx + 60h], eax
        push 54h
        ; Exact mapped bytes E8 1D 66 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x66
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 23: je 0x5870aa1a
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 5
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 0B 79 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x79
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5870aa21
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 0bch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0bch]
        mov dword ptr [eax + 64h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 0c0h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 5A AB 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xab
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 0c4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 D1 B3 D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb3
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 8D 65 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x65
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 35: je 0x5870aabc
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ecx + 1e74h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [eax + 1e70h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 69 78 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x78
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5870aac3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0c8h]
        mov dword ptr [ecx + 68h], edx
        push 54h
        ; Exact mapped bytes E8 21 65 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x65
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 38: je 0x5870ab2b
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0fh
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ecx + 1e74h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [eax + 1e70h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 FA 77 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x77
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x5870ab32
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0cch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0cch]
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 0d0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 49 AA 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xaa
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 0d4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 C0 B2 D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xb2
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 0d8h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 14 AA 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xaa
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 0dch], edx
        push 0
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 8B B2 D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb2
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 44 64 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x64
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 41: je 0x5870ac11
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 3e8h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1eeh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 20ch
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 D4 10 DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x10
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5870ac18
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0e0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0e0h]
        mov dword ptr [edx + 74h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 0e4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 63 A9 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xa9
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 0e8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 DA B1 D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xb1
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 93 63 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x63
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 42: je 0x5870acc3
        __asm _emit 0x74
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 3e8h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1eeh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 266h
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 22 10 DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x10
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5870acca
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0ech], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ech]
        mov dword ptr [ecx + 78h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 0f0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 B1 A8 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 0f4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 28 B1 D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xb1
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 E1 62 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x62
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 41: je 0x5870ad74
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 3e8h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1f2h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 124h
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 71 0F DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x0f
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5870ad7b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0f8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f8h]
        mov dword ptr [eax + 7ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 0fch], eax
        push 101h
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 00 A8 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xa8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 100h], edx
        push 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 77 B0 D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xb0
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 30 62 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x62
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 41: je 0x5870ae25
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 3e8h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1f2h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1feh
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 C0 0E DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x0e
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5870ae2c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 104h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [edx + 80h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 108h], edx
        push 101h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 49 A7 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xa7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 10ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 BD AF D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xaf
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 79 61 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x61
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 34: je 0x5870aecf
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 3e8h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1f2h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 124h
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 56 74 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x74
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5870aed6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 110h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 110h]
        mov dword ptr [edx + 84h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 114h], edx
        push 101h
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 9F A6 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 118h], ecx
        push 0
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 13 AF D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xaf
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 11ch], eax
        push 0
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 07 4D DF FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x4d
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5870af5c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 0F 8D BD 01 00 00: jge 0x5870b123
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 97 60 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x60
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 36: je 0x5870afb3
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 44ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 74h
        push ecx
        imul edx, dword ptr [ebp - 14h], 1dh
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 1e5h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 72 73 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x73
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x5870afba
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 2430h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 120h]
        mov dword ptr [eax + edx], ecx
        push 54h
        ; Exact mapped bytes E8 18 60 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x60
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 36: je 0x5870b032
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 44ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 74h
        push ecx
        imul edx, dword ptr [ebp - 14h], 1dh
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 1e5h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 F3 72 D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x72
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5870b039
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 124h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 2430h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [eax + ecx], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 2430h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 128h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 1E A5 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xa5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 2430h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 12ch], eax
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 83 AD D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xad
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 130h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 2430h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        push edx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 F3 9B 0A 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x9b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 134h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 2430h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        push eax
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 C3 9B 0A 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x9b
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 30 FE FF FF: jmp 0x5870af53
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 D7 5E 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x5e
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 3F: je 0x5870b17c
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 4b0h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 6fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1e1h
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 69 0B DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x0b
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x5870b183
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 138h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 138h]
        mov dword ptr [eax + 2470h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2470h]
        mov dword ptr [ebp - 13ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 F2 A3 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xa3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2470h]
        mov dword ptr [ebp - 140h], edx
        push 0
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 66 AC D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xac
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 144h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 E8 9A 0A 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 148h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        push ecx
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 CA 9A 0A 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x9a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 14ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7ch]
        push edx
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 AC 9A 0A 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x9a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 150h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 80h]
        push eax
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 8B 9A 0A 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x9a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 154h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 2470h]
        push ecx
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 6A 9A 0A 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x9a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 158h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        push edx
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 49 9A 0A 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x9a
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EF AC D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xac
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 230h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 22ch], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 72 1B 00 00: call 0x5870ce50
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5870b2f1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 64h
        ; Exact mapped bytes 0F 8D 68 01 00 00: jge 0x5870b463
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 02 5D 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x5d
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 2B: je 0x5870b33d
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 3e8h
        push ecx
        push 258h
        push 320h
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 D8 B4 D7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xb4
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5870b344
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 15ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 15ch]
        mov dword ptr [edx + ecx*4 + 20f8h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 20f8h]
        mov dword ptr [ebp - 160h], eax
        push 0
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 CC 41 D9 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x41
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 20f8h]
        mov dword ptr [ebp - 164h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 9A 44 D9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x44
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 56 5C 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x5c
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 2F: je 0x5870b3ed
        __asm _emit 0x74
        __asm _emit 0x2f
        push 3e7h
        push 258h
        push 320h
        push 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 20f8h]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 3B 6F D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x6f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5870b3f7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 168h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 168h]
        mov dword ptr [ecx + eax*4 + 2288h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 2288h]
        mov dword ptr [ebp - 16ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 73 A1 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xa1
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 2288h]
        mov dword ptr [ebp - 170h], edx
        push 0
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 E3 A9 D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xa9
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 85 FE FF FF: jmp 0x5870b2e8
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5870b475
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 8D 96 01 00 00: jge 0x5870b615
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 7E 5B 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x5b
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 58: je 0x5870b4f4
        __asm _emit 0x74
        __asm _emit 0x58
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 3e8h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [edx + 1e74h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        add eax, dword ptr [edx + ecx*8 + 23ch]
        push eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [eax + 1e70h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        add ecx, dword ptr [eax + edx*8 + 238h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 34 6E D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x6e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5870b4fe
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 174h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 174h]
        mov dword ptr [ecx + eax*4 + 2418h], edx
        push 54h
        ; Exact mapped bytes E8 DC 5A 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x5a
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 61: je 0x5870b59f
        __asm _emit 0x74
        __asm _emit 0x61
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 3e7h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ecx + 1e74h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        add edx, dword ptr [ecx + eax*8 + 23ch]
        push edx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [edx + 1e70h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        add eax, dword ptr [edx + ecx*8 + 238h]
        push eax
        push 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 2418h]
        push edx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 89 6D D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x6d
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5870b5a9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 178h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 178h]
        mov dword ptr [edx + ecx*4 + 2424h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 2424h]
        mov dword ptr [ebp - 17ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 C1 9F 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x9f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 2424h]
        mov dword ptr [ebp - 180h], eax
        push 0
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 31 A8 D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xa8
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 57 FE FF FF: jmp 0x5870b46c
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5870b627
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 0F 8D C3 00 00 00: jge 0x5870b6f4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 CC 59 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x59
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 30: je 0x5870b67e
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 44ch
        push eax
        push 258h
        push 320h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 AA 6C D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x6c
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5870b688
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 184h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 184h]
        mov dword ptr [ecx + eax*4 + 8ch], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 8ch]
        mov dword ptr [ebp - 188h], edx
        push 101h
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 E2 9E 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x9e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 8ch]
        mov dword ptr [ebp - 18ch], edx
        push 0
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 52 A7 D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xa7
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2A FF FF FF: jmp 0x5870b61e
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 09 59 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 31: je 0x5870b742
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 44ch
        push ecx
        push 258h
        push 320h
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 E6 6B D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x6b
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5870b74c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov eax, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 190h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 190h]
        mov dword ptr [ecx + 88h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 194h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 26 9E 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x9e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 198h], eax
        push 0
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 9A A6 D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa6
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 53 58 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 3F: je 0x5870b806
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 4b0h
        push edx
        push 258h
        push 320h
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 E2 04 DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x04
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x5870b810
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov eax, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 19ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 19ch]
        mov dword ptr [ecx + 70h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 1a0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 68 9D 0A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x9d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 1a4h], eax
        push 0
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 DF A5 D7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xa5
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        push 0c8h
        ; Exact mapped bytes E8 98 57 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 1B: je 0x5870b89d
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 AB 76 00 00: call 0x58712f40
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5870b8a7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov edx, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 1a8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1a8h]
        mov dword ptr [eax + 2478h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2478h]
        mov dword ptr [ebp - 1ach], eax
        push 0
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 AE A6 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xa6
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2478h]
        mov dword ptr [ebp - 1b0h], edx
        push 7d00h
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 7F A5 D7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa5
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2474h], 0
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
