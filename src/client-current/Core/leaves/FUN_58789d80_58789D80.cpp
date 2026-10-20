// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58789D80 .. +0x89B bytes.
extern "C" __declspec(naked) void FUN_58789d80_58789D80() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58890e16h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0f8h
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
        ; Exact mapped bytes E8 A4 84 CF FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b68d8h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 64h], 0
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 68h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 69h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 6ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 70h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 74h], 0
        push 14ch
        ; Exact mapped bytes E8 DE 71 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x71
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 2E: je 0x58789e64
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 258h
        push edx
        push 1eeh
        push 13bh
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 91 E0 F9 FF: call 0x58727ef0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xe0
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58789e6b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 80h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [eax + 9ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 84h], eax
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 F3 C0 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xc0
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        push 33ch
        ; Exact mapped bytes E8 5C 71 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x71
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 2A: je 0x58789ee2
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 258h
        push ecx
        push 140h
        push 0aah
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 13 53 F1 FF: call 0x5869f1f0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x53
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58789ee9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 98h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 8ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 6F C0 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc0
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 DB 70 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x70
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 3E: je 0x58789f77
        __asm _emit 0x74
        __asm _emit 0x3e
        push 18h
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA AB CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xab
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 258h
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 90h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 AE 83 CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x83
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58789f7e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 94h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ecx + eax + 0c0h], edx
        push 54h
        ; Exact mapped bytes E8 5A 70 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x70
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 3D: je 0x58789ff7
        __asm _emit 0x74
        __asm _emit 0x3d
        push 17h
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 AB CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xab
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 258h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 2E 83 CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x83
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58789ffe
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 9ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [ecx + eax + 0c0h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0c0h]
        mov dword ptr [ebp - 0a0h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 65 B5 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 B1 6F 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x6f
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 3D: je 0x5878a0a0
        __asm _emit 0x74
        __asm _emit 0x3d
        push 19h
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 AA CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xaa
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 24eh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 85 82 CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5878a0a7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0a8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [ecx + eax + 0c0h], edx
        push 54h
        ; Exact mapped bytes E8 32 6F 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x6f
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 3D: je 0x5878a11f
        __asm _emit 0x74
        __asm _emit 0x3d
        push 15h
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 AA CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xaa
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 258h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 06 82 CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x82
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878a126
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0b0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0b0h]
        mov dword ptr [edx + ecx + 0b4h], eax
        push 54h
        ; Exact mapped bytes E8 B2 6E 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 3E: je 0x5878a1a0
        __asm _emit 0x74
        __asm _emit 0x3e
        push 14h
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 A9 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa9
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 258h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 85 81 CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5878a1a7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0b8h]
        mov dword ptr [edx + ecx + 0b4h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0b4h]
        mov dword ptr [ebp - 0bch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 BC B3 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 08 6E 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 3E: je 0x5878a24a
        __asm _emit 0x74
        __asm _emit 0x3e
        push 16h
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 A9 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xa9
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 24eh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 DB 80 CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x80
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878a251
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0c4h]
        mov dword ptr [edx + ecx + 0b4h], eax
        push 54h
        ; Exact mapped bytes E8 88 6D 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x6d
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 3E: je 0x5878a2ca
        __asm _emit 0x74
        __asm _emit 0x3e
        push 15h
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 A8 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xa8
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 258h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 5B 80 CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x80
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5878a2d1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0cch]
        mov dword ptr [eax + edx + 0a8h], ecx
        push 54h
        ; Exact mapped bytes E8 07 6D 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x6d
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 3E: je 0x5878a34b
        __asm _emit 0x74
        __asm _emit 0x3e
        push 14h
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 A8 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xa8
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 258h
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0d0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 DA 7F CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x7f
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878a352
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 0d4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [eax + edx + 0a8h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0a8h]
        mov dword ptr [ebp - 0d8h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 11 B2 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 5D 6C 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x6c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 3E: je 0x5878a3f5
        __asm _emit 0x74
        __asm _emit 0x3e
        push 16h
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C A7 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa7
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 24eh
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0dch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 30 7F CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x7f
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5878a3fc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 0e0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0e0h]
        mov dword ptr [eax + edx + 0a8h], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5878a432
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 7D 63: jge 0x5878a49b
        __asm _emit 0x7d
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0b4h]
        mov dword ptr [ebp - 0e4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 38 BB CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xbb
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0a8h]
        mov dword ptr [ebp - 0e8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 18 BB CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xbb
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0c0h]
        mov dword ptr [ebp - 0ech], edx
        push 0
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 F8 BA CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xba
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 8E: jmp 0x5878a429
        __asm _emit 0xeb
        __asm _emit 0x8e
        push 70h
        ; Exact mapped bytes E8 62 6B 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x6b
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 36: je 0x5878a4e8
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        push 0
        push 0ffffffh
        push 10eh
        push 3ffh
        push 0ffh
        push 320h
        ; Exact mapped bytes A1 24 20 96 58: mov eax, dword ptr [0x58962024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 CD 7E CF FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x7e
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878a4ef
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 0f0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [eax + 0a0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 2bch
        push ecx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 50 B9 CF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb9
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 0f8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 44 BA CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xba
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 B0 6A 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x6a
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 37: je 0x5878a59b
        __asm _emit 0x74
        __asm _emit 0x37
        push 0
        push 0
        push 0ffffffh
        push 10eh
        push 3ffh
        push 0ffh
        push 320h
        ; Exact mapped bytes 8B 0D 24 20 96 58: mov ecx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 1A 7E CF FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x7e
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5878a5a2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0fch]
        mov dword ptr [ecx + 0a4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 100h], ecx
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 2bch
        push edx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 9D B8 CF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xb8
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 104h], ecx
        push 0
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 91 B9 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb9
        __asm _emit 0xcf
        __asm _emit 0xff
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
