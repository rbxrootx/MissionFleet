// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EC810 .. +0x98F bytes.
extern "C" __declspec(naked) void FUN_584ec810_584EC810() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f9a0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 120h
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
        ; Exact mapped bytes E8 14 5A F9 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x5a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a24a0h
        push 54h
        ; Exact mapped bytes E8 91 47 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x47
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 35: je 0x584ec8b8
        __asm _emit 0x74
        __asm _emit 0x35
        push 2
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 93 82 F9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x82
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        movzx ecx, word ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 6D 5A F9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x5a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ec8bf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [eax + edx + 60h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 60h]
        mov dword ptr [ebp - 94h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 AA 8C 2C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x8c
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 F6 46 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x46
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 35: je 0x584ec953
        __asm _emit 0x74
        __asm _emit 0x35
        push 3
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F8 81 F9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D2 59 F9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x59
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ec95a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 9ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [ecx + eax + 60h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 60h]
        mov dword ptr [ebp - 0a0h], edx
        push 0dch
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 9F 8B 2C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], 19h
        mov dword ptr [ebp - 18h], 19h
        mov dword ptr [ebp - 1ch], 11h
        mov dword ptr [ebp - 28h], 1eh
        mov dword ptr [ebp - 24h], 17ch
        mov dword ptr [ebp - 5ch], 17ch
        mov dword ptr [ebp - 20h], 1c2h
        mov dword ptr [ebp - 14h], 3
        push 10ch
        ; Exact mapped bytes E8 21 46 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 48: je 0x584eca3b
        __asm _emit 0x74
        __asm _emit 0x48
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 14h]
        add eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 1ch]
        imul ecx, dword ptr [ebp - 14h]
        add eax, ecx
        push eax
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        add eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 70h]
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 9A DF FB FF: call 0x584aa9d0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xdf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x584eca42
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0a4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0a4h]
        mov dword ptr [edx + 68h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 0a8h], edx
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 09 94 F9 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x94
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 0ach], edx
        push 48h
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 D0 FC FF FF: call 0x584ec760
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 0b0h], ecx
        push 100h
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 44 F6 FB FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 0b4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 1B 93 F9 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x93
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        push 10ch
        ; Exact mapped bytes E8 2C 45 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x45
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 5B: je 0x584ecb43
        __asm _emit 0x74
        __asm _emit 0x5b
        push 0
        push 0
        push 0ff00h
        mov edx, dword ptr [ebp + 14h]
        add edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        imul eax, dword ptr [ebp - 1ch]
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 14h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        sub edx, 1
        imul edx, dword ptr [ebp - 1ch]
        add ecx, edx
        push ecx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 92 DE FB FF: call 0x584aa9d0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xde
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ecb4a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0b8h]
        mov dword ptr [ecx + 6ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 0bch], ecx
        movzx edx, word ptr [ebp + 20h]
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 01 93 F9 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x93
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 0c0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 48 92 F9 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x92
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 0c4h], eax
        push 41h
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 AF FB FF FF: call 0x584ec760
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 0c8h], edx
        push 100h
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 23 F5 FB FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf5
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        push 10ch
        ; Exact mapped bytes E8 2C 44 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x44
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 53: je 0x584ecc3b
        __asm _emit 0x74
        __asm _emit 0x53
        push 0
        push 0
        push 0ffffh
        mov eax, dword ptr [ebp + 14h]
        add eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        imul ecx, dword ptr [ebp - 1ch]
        add eax, ecx
        push eax
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        add eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 1ch]
        imul ecx, dword ptr [ebp - 14h]
        add eax, ecx
        push eax
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 5ch]
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
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 9A DD FB FF: call 0x584aa9d0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xdd
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ecc42
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 0cch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0cch]
        mov dword ptr [eax + 70h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 0d0h], eax
        movzx ecx, word ptr [ebp + 20h]
        push ecx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 09 92 F9 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x92
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 0d4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 50 91 F9 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x91
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        push 10ch
        ; Exact mapped bytes E8 61 43 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x43
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 54: je 0x584ecd07
        __asm _emit 0x74
        __asm _emit 0x54
        push 0
        push 0
        push 0ff00h
        mov edx, dword ptr [ebp + 14h]
        add edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 1ch]
        imul eax, dword ptr [ebp - 14h]
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        sub eax, 1
        imul eax, dword ptr [ebp - 1ch]
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 CE DC FB FF: call 0x584aa9d0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xdc
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ecd0e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 0d8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0d8h]
        mov dword ptr [edx + 74h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 0dch], edx
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 3D 91 F9 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x91
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 0e0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 84 90 F9 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        push 10ch
        ; Exact mapped bytes E8 9D 42 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x42
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 53: je 0x584ecdca
        __asm _emit 0x74
        __asm _emit 0x53
        push 0
        push 0
        push 0ffffh
        mov eax, dword ptr [ebp + 14h]
        add eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 1ch]
        imul ecx, dword ptr [ebp - 14h]
        add eax, ecx
        push eax
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        add eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, 1
        imul ecx, dword ptr [ebp - 1ch]
        add eax, ecx
        push eax
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 5ch]
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
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 0B DC FB FF: call 0x584aa9d0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xdc
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ecdd1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 0e4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0e4h]
        mov dword ptr [eax + 78h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 0e8h], eax
        movzx ecx, word ptr [ebp + 20h]
        push ecx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 7A 90 F9 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x90
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 0ech], eax
        push 0
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 C1 8F F9 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x8f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        push 10ch
        ; Exact mapped bytes E8 D2 41 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x41
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 54: je 0x584ece96
        __asm _emit 0x74
        __asm _emit 0x54
        push 0
        push 0
        push 0ff00h
        mov edx, dword ptr [ebp + 14h]
        add edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 1ch]
        imul eax, dword ptr [ebp - 14h]
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        sub eax, 1
        imul eax, dword ptr [ebp - 1ch]
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 3F DB FB FF: call 0x584aa9d0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xdb
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584ece9d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 0f0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0f0h]
        mov dword ptr [edx + 7ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 0f4h], edx
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 AE 8F F9 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x8f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 0f8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 F5 8E F9 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x8e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        add eax, 2
        mov dword ptr [ebp - 14h], eax
        push 10ch
        ; Exact mapped bytes E8 06 41 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x41
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 54: je 0x584ecf62
        __asm _emit 0x74
        __asm _emit 0x54
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 14h]
        add ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 1ch]
        imul edx, dword ptr [ebp - 14h]
        add ecx, edx
        push ecx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        sub edx, 1
        imul edx, dword ptr [ebp - 1ch]
        add ecx, edx
        push ecx
        mov eax, dword ptr [ebp + 10h]
        add eax, dword ptr [ebp - 70h]
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 73 DA FB FF: call 0x584aa9d0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xda
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ecf69
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0fch]
        mov dword ptr [ecx + 80h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 100h], ecx
        movzx edx, word ptr [ebp + 20h]
        push edx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 DC 8E F9 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x8e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 104h], ecx
        push 0
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 20 8E F9 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x8e
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 39 40 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x40
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 66: je 0x584ed041
        __asm _emit 0x74
        __asm _emit 0x66
        push 9
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 7A F9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 10ch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 110h], eax
        movzx ecx, word ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, 0afh
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 7dh
        push eax
        mov ecx, dword ptr [ebp - 108h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 A4 EC FD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ed048
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 114h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [eax + 84h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 118h], eax
        push 101h
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 2D 85 2C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 76 3F 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x3f
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 70: je 0x584ed114
        __asm _emit 0x74
        __asm _emit 0x70
        push 0bh
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F 7A F9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x7a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 120h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 124h], edx
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 0afh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 113h
        push edx
        mov eax, dword ptr [ebp - 11ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 120h]
        push edx
        mov eax, dword ptr [ebp - 124h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 D4 EB FD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584ed11e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 128h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 128h]
        mov dword ptr [edx + 88h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 12ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 54 84 2C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2A 8E F9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x8e
        __asm _emit 0xf9
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
