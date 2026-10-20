// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B1C50 .. +0x7B1 bytes.
extern "C" __declspec(naked) void FUN_586b1c50_586B1C50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888b663h
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
        ; Exact mapped bytes E8 64 9A EB FF: call 0x5856b700
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x9a
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b0bcch
        push 198h
        ; Exact mapped bytes E8 4E F3 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf3
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 16: je 0x586b1cdc
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588b0ba0h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D9 E6 0C 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe6
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b1ce3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 5ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [edx + 84h], eax
        push 54h
        ; Exact mapped bytes E8 04 F3 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf3
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3B: je 0x586b1d4b
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 60h], edx
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 FA 2D DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x2d
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 DA 05 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b1d52
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 68h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [edx + ecx + 88h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 88h]
        mov dword ptr [ebp - 6ch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 1D 38 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x38
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 70h], edx
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 8E 40 DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x40
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 4A F2 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xf2
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 3B: je 0x586b1e05
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 74h], ecx
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 40 2D DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x2d
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 20 05 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b1e0c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 7ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [eax + edx + 88h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 88h]
        mov dword ptr [ebp - 80h], ecx
        push 0c8h
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 F3 36 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x36
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 88h]
        mov dword ptr [ebp - 84h], ecx
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 2E 3F DD FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x3f
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 8A F1 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf1
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 47: je 0x586b1ed1
        __asm _emit 0x74
        __asm _emit 0x47
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 88h], eax
        push 2
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 7A 2C DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x2c
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 54 04 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b1ed8
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
        mov dword ptr [eax + edx + 90h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 90h]
        mov dword ptr [ebp - 94h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 8B 36 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x36
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 90h]
        mov dword ptr [ebp - 98h], eax
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 F6 3E DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x3e
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 B2 F0 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf0
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 47: je 0x586b1fa9
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 9ch], edx
        push 3
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 A2 2B DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x2b
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 7C 03 DD FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b1fb0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0a4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ecx + eax + 90h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 90h]
        mov dword ptr [ebp - 0a8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 46 3E DD FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x3e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 90h]
        mov dword ptr [ebp - 0ach], edx
        push 0ffh
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 1E 35 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 D7 EF 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xef
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 77: je 0x586b20b4
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 0b0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 77 2A DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x2a
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b8h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0bch], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1efh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 23ah
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0b8h]
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 31 9C E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x9c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b20bb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0c0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0c0h]
        mov dword ptr [eax + 98h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 0c4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 BA 34 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x34
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 0c8h], edx
        push 0ffh
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 2B 34 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x34
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 E4 EE 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xee
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 68: je 0x586b2198
        __asm _emit 0x74
        __asm _emit 0x68
        push 1eh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 29 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x29
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d4h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a0h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 277h
        push ecx
        mov edx, dword ptr [ebp - 0cch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        push ecx
        mov edx, dword ptr [ebp - 0d4h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 4D 9B E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x9b
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b219f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0d8h]
        mov dword ptr [ecx + 9ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 0dch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 D6 33 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x33
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 0e0h], eax
        push 0ffh
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 47 33 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x33
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 00 EE 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xee
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 6A: je 0x586b227e
        __asm _emit 0x74
        __asm _emit 0x6a
        push 1fh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF 28 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x28
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e8h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ech], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1c9h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 277h
        push edx
        mov eax, dword ptr [ebp - 0e4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0e8h]
        push edx
        mov eax, dword ptr [ebp - 0ech]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 67 9A E1 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x9a
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b2285
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 0f0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0f0h]
        mov dword ptr [edx + 0a0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 0f4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 F0 32 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x32
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 0f8h], ecx
        push 0ffh
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 61 32 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x32
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        push 10ch
        ; Exact mapped bytes E8 1A ED 17 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xed
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 58: je 0x586b2352
        __asm _emit 0x74
        __asm _emit 0x58
        push 0
        push 0
        push 0ffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 1d9h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 265h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0ach
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0adh
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 90h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 43 DA E1 FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xda
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b2359
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 0fch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0fch]
        mov dword ptr [edx + 0ach], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 100h], edx
        push 47h
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 CF A3 E3 FF: call 0x584ec760
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xa3
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 104h], ecx
        push 0
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 33 3A DD FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x3a
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 108h], eax
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 77 31 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x31
        __asm _emit 0x10
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BD 3B DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x3b
        __asm _emit 0xdd
        __asm _emit 0xff
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 83 39 DD FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0B 0F 00 00: call 0x586b32f0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x0f
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
