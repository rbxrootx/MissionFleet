// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5869D530 .. +0x87F bytes.
extern "C" __declspec(naked) void FUN_5869d530_5869D530() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888aaf7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 110h
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
        ; Exact mapped bytes E8 F4 4C DE FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x4c
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b05a8h
        push 54h
        ; Exact mapped bytes E8 71 3A 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x3a
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 32: je 0x5869d5d5
        __asm _emit 0x74
        __asm _emit 0x32
        push 6
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 75 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        push 2710h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 50 4D DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5869d5dc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 74h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [eax + 60h], ecx
        push 54h
        ; Exact mapped bytes E8 0E 3A 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x3a
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 32: je 0x5869d638
        __asm _emit 0x74
        __asm _emit 0x32
        push 7
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 75 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x75
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        push 2710h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 ED 4C DE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x4c
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5869d63f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [ecx + 64h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 80h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 48 7F 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x7f
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 84h], eax
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 BF 87 DE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x87
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 7B 39 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x39
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 38: je 0x5869d6d1
        __asm _emit 0x74
        __asm _emit 0x38
        push 23h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A 74 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x74
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        push 2710h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 44 91 DE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x91
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5869d6d8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 8ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [eax + 68h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 90h], eax
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 46 1E E0 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x1e
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 94h], edx
        push 101h
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 8A 7E 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x7e
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 D3 38 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x38
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 68: je 0x5869d7a9
        __asm _emit 0x74
        __asm _emit 0x68
        push 25h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 73 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x73
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0a0h], ecx
        push 2711h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0f8h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 82h
        push eax
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 3C E5 E2 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xe5
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x5869d7b0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0a4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [eax + 6ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 0a8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 CB 7D 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x7d
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 14 38 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x38
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 69: je 0x5869d869
        __asm _emit 0x74
        __asm _emit 0x69
        push 24h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 72 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x72
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b0h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b4h], edx
        push 2711h
        mov eax, dword ptr [ebp + 10h]
        add eax, 0f8h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0b4h
        push ecx
        mov edx, dword ptr [ebp - 0ach]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 7C E4 E2 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xe4
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5869d870
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0b8h]
        mov dword ptr [ecx + 70h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 0bch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 0B 7D 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x7d
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 54 37 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x37
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 69: je 0x5869d929
        __asm _emit 0x74
        __asm _emit 0x69
        push 2fh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 72 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x72
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0c4h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0c8h], eax
        push 2711h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0f8h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0e6h
        push edx
        mov eax, dword ptr [ebp - 0c0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 BC E3 E2 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe3
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5869d930
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0cch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0cch]
        mov dword ptr [edx + 74h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 0d0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 4B 7C 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x7c
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        push 10ch
        ; Exact mapped bytes E8 94 36 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x36
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 4C: je 0x5869d9cc
        __asm _emit 0x74
        __asm _emit 0x4c
        push 646464h
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 0dch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 140h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0c8h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0f0h
        push eax
        ; Exact mapped bytes 8B 0D 30 20 96 58: mov ecx, dword ptr [0x58962030]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 C9 23 E3 FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x23
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5869d9d3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0d4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0d4h]
        mov dword ptr [ecx + 100h], edx
        mov dword ptr [ebp - 0d8h], 0eh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 100h]
        mov dword ptr [ebp - 0dch], ecx
        mov edx, dword ptr [ebp - 0d8h]
        push edx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 D6 E6 E0 FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xe6
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 100h]
        mov dword ptr [ebp - 0e0h], ecx
        push 271ah
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 47 84 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 C0 35 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x35
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 3D: je 0x5869da91
        __asm _emit 0x74
        __asm _emit 0x3d
        push 0
        ; Exact mapped bytes 8B 0D 88 07 96 58: mov ecx, dword ptr [0x58960788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F 70 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x70
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 23h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0fah
        push eax
        push 7
        mov ecx, dword ptr [ebp - 0e4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 E4 CE 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xce
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5869da98
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0e8h]
        mov dword ptr [ecx + 78h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 0ech], ecx
        push 2711h
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 B3 83 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x83
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 0f0h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 C7 7A 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x7a
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5869dafc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0bh
        ; Exact mapped bytes 0F 8D 66 02 00 00: jge 0x5869dd6c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 F7 34 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x34
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 43: je 0x5869db60
        __asm _emit 0x74
        __asm _emit 0x43
        push 6
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 6F DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x6f
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        push 2711h
        imul edx, dword ptr [ebp - 14h], 0eh
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 4eh]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 14h
        push edx
        mov eax, dword ptr [ebp - 0f4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 B5 8C DE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x8c
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5869db67
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0f8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0f8h]
        mov dword ptr [ecx + eax*4 + 0d4h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0d4h]
        mov dword ptr [ebp - 0fch], edx
        push 0
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 A9 19 E0 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x19
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 52 34 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x34
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 40: je 0x5869dc02
        __asm _emit 0x74
        __asm _emit 0x40
        push 0
        ; Exact mapped bytes 8B 0D 88 07 96 58: mov ecx, dword ptr [0x58960788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 6F DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x6f
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        imul eax, dword ptr [ebp - 14h], 0eh
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 4eh]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 6eh
        push eax
        push 4
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 73 CD 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xcd
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x5869dc09
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 104h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 104h]
        mov dword ptr [eax + edx], ecx
        push 0fch
        ; Exact mapped bytes E8 C9 33 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x33
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 40: je 0x5869dc8b
        __asm _emit 0x74
        __asm _emit 0x40
        push 0
        ; Exact mapped bytes 8B 0D 88 07 96 58: mov ecx, dword ptr [0x58960788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 6E DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x6e
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        imul edx, dword ptr [ebp - 14h], 0eh
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 4eh]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1eh
        push edx
        push 3
        mov eax, dword ptr [ebp - 108h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 EA CC 11 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xcc
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5869dc92
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 10ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 7ch]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [edx + eax], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 7ch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 110h], ecx
        push 2711h
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 9B 81 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x81
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 7ch]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 114h], eax
        push 2711h
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 70 81 DE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x81
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 118h], eax
        push 101h
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 75 78 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x78
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 11ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 4A 78 11 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x78
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 87 FD FF FF: jmp 0x5869daf3
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1A 82 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x82
        __asm _emit 0xde
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
