// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5866E110 .. +0xE7D bytes.
extern "C" __declspec(naked) void FUN_5866e110_5866E110() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58889850h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1f0h
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
        ; Exact mapped bytes E8 74 41 E1 FF: call 0x584822d0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x41
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588afdd4h
        push 198h
        ; Exact mapped bytes E8 8E 2E 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x2e
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 16: je 0x5866e19c
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588afd84h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 19 22 11 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x22
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866e1a3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0b4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0b4h]
        mov dword ptr [edx + 50h], eax
        push 5ch
        ; Exact mapped bytes E8 41 2E 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x2e
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 1B: je 0x5866e1ee
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 87 57 E5 FF: call 0x584c3970
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x57
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866e1f5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 0b8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0b8h]
        mov dword ptr [eax + 54h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 0bch], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 47 58 E5 FF: call 0x584c3a70
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x58
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5866e23c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 92 00 00 00: jge 0x5866e2d8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 B7 2D 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x2d
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 52: je 0x5866e2af
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 0c0h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 A8 68 E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x68
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 0c8h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        push ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 76 40 E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x40
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866e2b6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0cch]
        mov dword ptr [edx + ecx*4 + 58h], eax
        ; Exact mapped bytes E9 5B FF FF FF: jmp 0x5866e233
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 22 2D 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x2d
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 75: je 0x5866e367
        __asm _emit 0x74
        __asm _emit 0x75
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 0d0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 C5 67 E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x67
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 0d8h], ecx
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0dch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e0h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0d4h]
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        push ecx
        mov edx, dword ptr [ebp - 0dch]
        push edx
        mov eax, dword ptr [ebp - 0e0h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 7E D9 E5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xd9
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866e36e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0e4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0e4h]
        mov dword ptr [edx + 60h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 58h]
        mov dword ptr [ebp - 0e8h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 04 72 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x72
        __asm _emit 0x14
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0ech], eax
        push 101h
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 E8 71 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        push 5ch
        ; Exact mapped bytes E8 34 2C 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x2c
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 1F: je 0x5866e3ff
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 76 55 E5 FF: call 0x584c3970
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x55
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866e406
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0f0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0f0h]
        mov dword ptr [edx + 64h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 0f4h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 36 56 E5 FF: call 0x584c3a70
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x56
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5866e44d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 95 00 00 00: jge 0x5866e4ec
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 A6 2B 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x2b
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 55: je 0x5866e4c3
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 0f8h], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2
        push ecx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 94 66 E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x66
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 100h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0fch]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 62 3E E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x3e
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866e4ca
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 104h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 104h]
        mov dword ptr [ecx + eax*4 + 68h], edx
        ; Exact mapped bytes E9 58 FF FF FF: jmp 0x5866e444
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 68h]
        mov dword ptr [ebp - 108h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 9F 70 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        push 94h
        ; Exact mapped bytes E8 E8 2A 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 46: je 0x5866e572
        __asm _emit 0x74
        __asm _emit 0x46
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0cah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 8eh
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 47h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2ch
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 63 1D 15 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x1d
        __asm _emit 0x15
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866e579
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 10ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [eax + 70h], ecx
        push 94h
        ; Exact mapped bytes E8 68 2A 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x2a
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 44: je 0x5866e5f0
        __asm _emit 0x74
        __asm _emit 0x44
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 0d8h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 8eh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 55h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 2ch
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 E5 1C 15 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x1c
        __asm _emit 0x15
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866e5f7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 110h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 110h]
        mov dword ptr [ecx + 74h], edx
        push 94h
        ; Exact mapped bytes E8 EA 29 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x29
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 47: je 0x5866e671
        __asm _emit 0x74
        __asm _emit 0x47
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 0cbh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0b8h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 48h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 95h
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 64 1C 15 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x1c
        __asm _emit 0x15
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866e678
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 114h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [edx + 78h], eax
        push 94h
        ; Exact mapped bytes E8 69 29 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x29
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 49: je 0x5866e6f4
        __asm _emit 0x74
        __asm _emit 0x49
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0d8h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0b8h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 55h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 95h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 E1 1B 15 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x1b
        __asm _emit 0x15
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866e6fb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 118h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 118h]
        mov dword ptr [eax + 7ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 11ch], eax
        push 1eh
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 C3 0C E3 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x0c
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 120h], edx
        push 1eh
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 AA 0C E3 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x0c
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 124h], ecx
        push 1eh
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 91 0C E3 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x0c
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 128h], eax
        push 1eh
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 78 0C E3 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5866e78b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 0F 8D 22 02 00 00: jge 0x5866e9b7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 68 28 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 5B: je 0x5866e807
        __asm _emit 0x74
        __asm _emit 0x5b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 12ch], eax
        push 19h
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 5B 63 E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x63
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 134h], edx
        push 40h
        imul eax, dword ptr [ebp - 14h], 1eh
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 45h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 29h
        push eax
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        mov edx, dword ptr [ebp - 134h]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 1E 3B E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x3b
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866e80e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 138h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 138h]
        mov dword ptr [edx + ecx*4 + 80h], eax
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5866e840
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 0F 8D F6 00 00 00: jge 0x5866e940
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 B3 27 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x27
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 60: je 0x5866e8c1
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 13ch], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 5
        push ecx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 51 62 E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x62
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 144h], eax
        push 40h
        imul ecx, dword ptr [ebp - 14h], 1eh
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 4ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 18h
        push ecx
        mov edx, dword ptr [ebp - 140h]
        push edx
        mov eax, dword ptr [ebp - 144h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 54 7F E1 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x7f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866e8c8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 148h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 94h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 148h]
        mov dword ptr [ecx + edx*4], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 94h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 14ch], edx
        push 0
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 3C 0C E3 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x0c
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 94h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 150h], ecx
        push 0
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 06 0F E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x0f
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F7 FE FF FF: jmp 0x5866e837
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 80h]
        mov dword ptr [ebp - 154h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 4D 6C 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6c
        __asm _emit 0x14
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 94h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 158h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 1F 6C 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x6c
        __asm _emit 0x14
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 80h]
        mov dword ptr [ebp - 15ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 2F 75 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x75
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 CB FD FF FF: jmp 0x5866e782
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 43 26 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x26
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 7E: je 0x5866ea4f
        __asm _emit 0x74
        __asm _emit 0x7e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 160h], eax
        push 1
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 E6 60 E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x60
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 168h], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 16ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 170h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0e6h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 18h
        push eax
        mov ecx, dword ptr [ebp - 164h]
        push ecx
        mov edx, dword ptr [ebp - 168h]
        push edx
        mov eax, dword ptr [ebp - 16ch]
        push eax
        mov ecx, dword ptr [ebp - 170h]
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 96 D2 E5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xd2
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866ea56
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 174h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 174h]
        mov dword ptr [eax + 0bch], ecx
        push 0ach
        ; Exact mapped bytes E8 88 25 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x25
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x5866eb1a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 178h], eax
        push 2
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 21 60 E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x60
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 180h], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 184h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 188h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0e6h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 43h
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        push ecx
        mov edx, dword ptr [ebp - 180h]
        push edx
        mov eax, dword ptr [ebp - 184h]
        push eax
        mov ecx, dword ptr [ebp - 188h]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 CE D1 E5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd1
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5866eb24
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 18ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18ch]
        mov dword ptr [eax + 0c0h], ecx
        push 0ach
        ; Exact mapped bytes E8 B7 24 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x5866ebeb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 190h], eax
        push 3
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 50 5F E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x5f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 198h], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 19ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a0h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0e6h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 6eh
        push eax
        mov ecx, dword ptr [ebp - 194h]
        push ecx
        mov edx, dword ptr [ebp - 198h]
        push edx
        mov eax, dword ptr [ebp - 19ch]
        push eax
        mov ecx, dword ptr [ebp - 1a0h]
        push ecx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 FD D0 E5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xd0
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5866ebf5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov edx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 1a4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1a4h]
        mov dword ptr [eax + 0c4h], ecx
        push 0ach
        ; Exact mapped bytes E8 E6 23 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x23
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x5866ecbe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 1a8h], eax
        push 4
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 7F 5E E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x5e
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 1b0h], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b4h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1b8h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0e6h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 99h
        push eax
        mov ecx, dword ptr [ebp - 1ach]
        push ecx
        mov edx, dword ptr [ebp - 1b0h]
        push edx
        mov eax, dword ptr [ebp - 1b4h]
        push eax
        mov ecx, dword ptr [ebp - 1b8h]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 2A D0 E5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xd0
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5866ecc8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov edx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 1bch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1bch]
        mov dword ptr [eax + 0c8h], ecx
        push 0ach
        ; Exact mapped bytes E8 13 23 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x23
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x5866ed8f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 1c0h], eax
        push 7
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 AC 5D E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x5d
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 1c8h], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1cch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1d0h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 100h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 70h
        push eax
        mov ecx, dword ptr [ebp - 1c4h]
        push ecx
        mov edx, dword ptr [ebp - 1c8h]
        push edx
        mov eax, dword ptr [ebp - 1cch]
        push eax
        mov ecx, dword ptr [ebp - 1d0h]
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 59 CF E5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xcf
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5866ed99
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 1d4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1d4h]
        mov dword ptr [eax + 0cch], ecx
        push 0ach
        ; Exact mapped bytes E8 42 22 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x22
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x5866ee62
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 1d8h], eax
        push 8
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 DB 5C E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 1dch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 1e0h], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1e4h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1e8h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 100h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 9bh
        push eax
        mov ecx, dword ptr [ebp - 1dch]
        push ecx
        mov edx, dword ptr [ebp - 1e0h]
        push edx
        mov eax, dword ptr [ebp - 1e4h]
        push eax
        mov ecx, dword ptr [ebp - 1e8h]
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 86 CE E5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xce
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5866ee6c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 1ech], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ech]
        mov dword ptr [eax + 0d0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0cch]
        mov dword ptr [ebp - 1f0h], eax
        push 0
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 99 09 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x09
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 1f4h], edx
        push 0
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 7D 09 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x09
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        push 6ch
        ; Exact mapped bytes E8 39 21 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x21
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 24: je 0x5866ef05
        __asm _emit 0x74
        __asm _emit 0x24
        push 40h
        push 0
        push 0
        push 62h
        push 107h
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 33 F6 03 00: call 0x586ae530
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5866ef0f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov ecx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 1f8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1f8h]
        mov dword ptr [edx + 0e0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0e0h]
        mov dword ptr [ebp - 1fch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50h]
        push ecx
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 41 05 04 00: call 0x586af490
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0dch], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0e4h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0F 16 00 00: call 0x58670580
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x16
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
