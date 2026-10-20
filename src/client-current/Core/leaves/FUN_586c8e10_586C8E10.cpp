// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C8E10 .. +0xEBC bytes.
extern "C" __declspec(naked) void FUN_586c8e10_586C8E10() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888bef1h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 200h
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
        ; Exact mapped bytes E8 14 94 DB FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x94
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b1f24h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 20h]
        mov dword ptr [ecx + 60h], edx
        push 54h
        ; Exact mapped bytes E8 88 81 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 44: je 0x586c8ed0
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 9ch], ecx
        push 41h
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 7B BC DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xbc
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 55 94 DB FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x94
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x586c8ed7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0a4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0a4h]
        mov dword ptr [edx + 64h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 0a8h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 A4 C6 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc6
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 F0 80 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x80
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 44: je 0x586c8f68
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0ach], ecx
        push 42h
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 E3 BB DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xbb
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0b0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 BD 93 DB FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x93
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x586c8f6f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 0b4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0b4h]
        mov dword ptr [edx + 68h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 0b8h], edx
        push 0c8h
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 9C C5 0E 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xc5
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 58 80 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x80
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 20: je 0x586c8fdc
        __asm _emit 0x74
        __asm _emit 0x20
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 49 93 DB FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x93
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x586c8fe3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0bch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0bch]
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 0c0h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 98 C5 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xc5
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 E4 7F 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x7f
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 20: je 0x586c9050
        __asm _emit 0x74
        __asm _emit 0x20
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D5 92 DB FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x92
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x586c9057
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0c4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0c4h]
        mov dword ptr [edx + 70h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 0c8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 24 C5 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc5
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 70 7F 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x7f
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 4A: je 0x586c90ee
        __asm _emit 0x74
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0cch], ecx
        push 47h
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 63 BA DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xba
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 10h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 6ah
        push ecx
        mov edx, dword ptr [ebp - 0d0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 37 92 DB FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x92
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x586c90f5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0d4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [edx + 74h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 0d8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 86 C4 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 11h
        push 0ach
        ; Exact mapped bytes E8 C9 7E 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x7e
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 6F: je 0x586c91ba
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0dch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 6C B9 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xb9
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e4h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e8h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 10h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 6ah
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0e4h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 2B 2B E0 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x2b
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x586c91c1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0ech], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ech]
        mov dword ptr [eax + 78h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 0f0h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 BA C3 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xc3
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 03 7E 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x7e
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 73: je 0x586c9284
        __asm _emit 0x74
        __asm _emit 0x73
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0f4h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 A6 B8 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xb8
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 100h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 6ah
        push eax
        mov ecx, dword ptr [ebp - 0f8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0fch]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 61 2A E0 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x2a
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x586c928b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 104h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 104h]
        mov dword ptr [eax + 7ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 108h], eax
        push 101h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 F0 C2 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xc2
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 39 7D 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x7d
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 73: je 0x586c934e
        __asm _emit 0x74
        __asm _emit 0x73
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 10ch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 DC B7 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xb7
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 118h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax*2 + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 6ah
        push eax
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 97 29 E0 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x29
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x586c9355
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 11ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 11ch]
        mov dword ptr [eax + 80h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 120h], eax
        push 101h
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 20 C2 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xc2
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 69 7C 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 74: je 0x586c941f
        __asm _emit 0x74
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 124h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 0C B7 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xb7
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 130h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        imul eax, dword ptr [ebp - 18h], 3
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 6ah
        push eax
        mov ecx, dword ptr [ebp - 128h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 C6 28 E0 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x28
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x586c9426
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 134h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [eax + 84h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 138h], eax
        push 101h
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 4F C1 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xc1
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 98 7B 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x7b
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 73: je 0x586c94ef
        __asm _emit 0x74
        __asm _emit 0x73
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 13ch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 3B B6 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb6
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 148h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax*4 + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 6ah
        push eax
        mov ecx, dword ptr [ebp - 140h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 144h]
        push eax
        mov ecx, dword ptr [ebp - 148h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 F6 27 E0 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x27
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x586c94f6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 14ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14ch]
        mov dword ptr [eax + 88h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 150h], eax
        push 101h
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 7F C0 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc0
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 C8 7A 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x7a
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 74: je 0x586c95c0
        __asm _emit 0x74
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 154h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 6B B5 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb5
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 160h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        imul eax, dword ptr [ebp - 18h], 5
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 6ah
        push eax
        mov ecx, dword ptr [ebp - 158h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 15ch]
        push eax
        mov ecx, dword ptr [ebp - 160h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 25 27 E0 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x27
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x586c95c7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 164h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 164h]
        mov dword ptr [eax + 8ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 168h], eax
        push 101h
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 AE BF 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xbf
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 F7 79 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x79
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 74: je 0x586c9691
        __asm _emit 0x74
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 16ch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 9A B4 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xb4
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 174h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 178h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        imul eax, dword ptr [ebp - 18h], 6
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 6ah
        push eax
        mov ecx, dword ptr [ebp - 170h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 174h]
        push eax
        mov ecx, dword ptr [ebp - 178h]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 54 26 E0 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x26
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x586c9698
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 17ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 17ch]
        mov dword ptr [eax + 90h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 180h], eax
        push 101h
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 DD BE 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xbe
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 26 79 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x79
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 73: je 0x586c9761
        __asm _emit 0x74
        __asm _emit 0x73
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 184h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 C9 B3 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb3
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 18ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 190h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax*8 + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 6ah
        push eax
        mov ecx, dword ptr [ebp - 188h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 18ch]
        push eax
        mov ecx, dword ptr [ebp - 190h]
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 84 25 E0 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x586c9768
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 194h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 194h]
        mov dword ptr [eax + 98h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 198h], eax
        push 101h
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 0D BE 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xbe
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 56 78 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x78
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 7A: je 0x586c983e
        __asm _emit 0x74
        __asm _emit 0x7a
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 19ch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 F3 B2 DB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xb2
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a8h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        imul eax, dword ptr [ebp - 18h], 7
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 6ah
        push eax
        mov ecx, dword ptr [ebp - 1a0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1a4h]
        push eax
        mov ecx, dword ptr [ebp - 1a8h]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 AA 24 E0 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x24
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586c9848
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 1ach], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ach]
        mov dword ptr [eax + 94h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 1b0h], eax
        push 101h
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 2A BD 0E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xbd
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586c9899
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x586c9943
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 5A 77 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x77
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 51: je 0x586c9911
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 14h]
        add edx, 6ah
        push edx
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E B2 DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xb2
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 1b4h], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        imul ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 13h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 74h
        push ecx
        mov edx, dword ptr [ebp - 1b4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 17 8A DB FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x8a
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586c991b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 1b8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1b8h]
        mov dword ptr [eax + edx*4 + 9ch], ecx
        ; Exact mapped bytes E9 4D FF FF FF: jmp 0x586c9890
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586c9955
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 9
        ; Exact mapped bytes 0F 84 ED 00 00 00: je 0x586c9a4c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 9E 76 16 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x76
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 5A: je 0x586c99d6
        __asm _emit 0x74
        __asm _emit 0x5a
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp - 18h]
        imul eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 1eh]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0bdh
        push eax
        mov ecx, dword ptr [ebp - 18h]
        imul ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 12h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 85h
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
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 E2 89 DB FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x89
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586c99e0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov ecx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 1bch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1bch]
        mov dword ptr [eax + edx*4 + 0bch], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0bch]
        mov dword ptr [ebp - 1c0h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 5A C4 DB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xc4
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0bch]
        mov dword ptr [ebp - 1c4h], edx
        push 6
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 3A 03 DF FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x03
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 00 FF FF FF: jmp 0x586c994c
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0bch]
        mov dword ptr [ebp - 1cch], eax
        push 588b1db0h
        ; Exact mapped bytes E8 82 85 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1c8h], eax
        mov ecx, dword ptr [ebp - 1c8h]
        push ecx
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 17 C6 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc6
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0bch]
        mov dword ptr [ebp - 1d4h], ecx
        push 588b1dd0h
        ; Exact mapped bytes E8 45 85 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1d0h], eax
        mov edx, dword ptr [ebp - 1d0h]
        push edx
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 DA C5 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc5
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0bch]
        mov dword ptr [ebp - 1dch], edx
        push 588b1df0h
        ; Exact mapped bytes E8 09 85 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1d8h], eax
        mov eax, dword ptr [ebp - 1d8h]
        push eax
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 9E C5 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc5
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0bch]
        mov dword ptr [ebp - 1e4h], ecx
        push 588b1e10h
        ; Exact mapped bytes E8 CC 84 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1e0h], eax
        mov edx, dword ptr [ebp - 1e0h]
        push edx
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 61 C5 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xc5
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0bch]
        mov dword ptr [ebp - 1ech], edx
        push 588b1e30h
        ; Exact mapped bytes E8 8F 84 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1e8h], eax
        mov eax, dword ptr [ebp - 1e8h]
        push eax
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 24 C5 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc5
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0bch]
        mov dword ptr [ebp - 1f4h], ecx
        push 588b1e54h
        ; Exact mapped bytes E8 52 84 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1f0h], eax
        mov edx, dword ptr [ebp - 1f0h]
        push edx
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 E7 C4 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xc4
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 6
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0bch]
        mov dword ptr [ebp - 1fch], eax
        push 588b1e78h
        ; Exact mapped bytes E8 15 84 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1f8h], eax
        mov ecx, dword ptr [ebp - 1f8h]
        push ecx
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 AA C4 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xc4
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 7
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0bch]
        mov dword ptr [ebp - 204h], edx
        push 588b1e9ch
        ; Exact mapped bytes E8 D8 83 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x83
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 200h], eax
        mov eax, dword ptr [ebp - 200h]
        push eax
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 6D C4 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc4
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 3
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0bch]
        mov dword ptr [ebp - 20ch], eax
        push 588b1ec0h
        ; Exact mapped bytes E8 9B 83 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x83
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 208h], eax
        mov ecx, dword ptr [ebp - 208h]
        push ecx
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 30 C4 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xc4
        __asm _emit 0xdb
        __asm _emit 0xff
        xor edx, edx
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
        mov dword ptr [ecx + 0e4h], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FD C2 DB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc2
        __asm _emit 0xdb
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
