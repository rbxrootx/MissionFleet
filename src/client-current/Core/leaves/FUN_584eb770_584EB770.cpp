// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EB770 .. +0x666 bytes.
extern "C" __declspec(naked) void FUN_584eb770_584EB770() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f8a7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0d8h
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
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B4 6A F9 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x6a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a2240h
        push 54h
        ; Exact mapped bytes E8 31 58 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x58
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 2F: je 0x584eb812
        __asm _emit 0x74
        __asm _emit 0x2f
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 33 93 F9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x93
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        movzx ecx, word ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 13 6B F9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x6b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x584eb819
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [eax + edx + 60h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 60h]
        mov dword ptr [ebp - 60h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 5C 9D 2C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x9d
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 A8 57 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x57
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 2F: je 0x584eb89b
        __asm _emit 0x74
        __asm _emit 0x2f
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AA 92 F9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x92
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 8A 6A F9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x6a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x584eb8a2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 68h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ecx + eax + 60h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 60h]
        mov dword ptr [ebp - 6ch], edx
        push 0dch
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 63 9C 2C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x9c
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        push 90h
        ; Exact mapped bytes E8 1C 57 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 2B: je 0x584eb923
        __asm _emit 0x74
        __asm _emit 0x2b
        push 2
        push 0
        push 0
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp + 14h]
        add eax, 19h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 19h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 92 11 08 00: call 0x5856cab0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x11
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x584eb92a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ecx + 68h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 74h], ecx
        movzx edx, word ptr [ebp + 20h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 2D A5 F9 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xa5
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], 190h
        push 10ch
        ; Exact mapped bytes E8 A0 56 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x56
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 47: je 0x584eb9bb
        __asm _emit 0x74
        __asm _emit 0x47
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp + 14h]
        lea edx, [ecx + eax + 19h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 181h
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 19h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 19h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 1A F0 FB FF: call 0x584aa9d0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x584eb9c2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [ecx + 6ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 7ch], ecx
        movzx edx, word ptr [ebp + 20h]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 95 A4 F9 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 80h], ecx
        push 3ah
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 62 0D 00 00: call 0x584ec760
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 84h], eax
        push 400h
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 D6 06 FC FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x06
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 88h], edx
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 AD A3 F9 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa3
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 8ch], ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 B2 0B 00 00: call 0x584ec600
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 90h], ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, 90h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 187h
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 19h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 19h
        push edx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 4A 0D 00 00: call 0x584ec7d0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 73 55 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x55
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 66: je 0x584ebb07
        __asm _emit 0x74
        __asm _emit 0x66
        push 1fh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 90 F9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x90
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 9ch], ecx
        movzx edx, word ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        add eax, 19h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 18dh
        push ecx
        mov edx, dword ptr [ebp - 94h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        mov edx, dword ptr [ebp - 9ch]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 DE 01 FE FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584ebb0e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ecx + 70h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 0a4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 6D 9A 2C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x9a
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 B6 54 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x54
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 68: je 0x584ebbc6
        __asm _emit 0x74
        __asm _emit 0x68
        push 20h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 8F F9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x8f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ach], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b0h], eax
        movzx ecx, word ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, 84h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 18dh
        push eax
        mov ecx, dword ptr [ebp - 0a8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 1F 01 FE FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ebbcd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0b4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0b4h]
        mov dword ptr [eax + 74h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 0b8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 AE 99 2C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x99
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 F7 53 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x53
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 64: je 0x584ebc81
        __asm _emit 0x74
        __asm _emit 0x64
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A9 8E F9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x8e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0c0h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0c4h], edx
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 7
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 189h
        push edx
        mov eax, dword ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0c0h]
        push edx
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 64 00 FE FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584ebc88
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0c8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0c8h]
        mov dword ptr [edx + 78h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 0cch], edx
        push 101h
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 F3 98 2C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x98
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 3C 53 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x53
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 66: je 0x584ebd3e
        __asm _emit 0x74
        __asm _emit 0x66
        push 3
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB 8D F9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x8d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d8h], ecx
        movzx edx, word ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        add eax, 79h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0b1h
        push ecx
        mov edx, dword ptr [ebp - 0d0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        push ecx
        mov edx, dword ptr [ebp - 0d8h]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 A7 FF FD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ebd45
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0dch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [ecx + 7ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 0e0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 36 98 2C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x98
        __asm _emit 0x2c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 0e4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 FD A1 F9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xa1
        __asm _emit 0xf9
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F3 A1 F9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xa1
        __asm _emit 0xf9
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
