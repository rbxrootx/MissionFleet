// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EFFE0 .. +0x6F3 bytes.
extern "C" __declspec(naked) void FUN_586effe0_586EFFE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888cd29h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 104h
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
        ; Exact mapped bytes E8 4B 22 D9 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x22
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b31f8h
        push 54h
        ; Exact mapped bytes E8 C8 0F 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x0f
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 32: je 0x586f007e
        __asm _emit 0x74
        __asm _emit 0x32
        push 407h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 4A D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x4a
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A7 22 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x22
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x586f0085
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 60h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [eax + 60h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 64h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 02 55 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x55
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 68h], edx
        push 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 7F 5D D9 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x5d
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 3B 0F 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x0f
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 32: je 0x586f010b
        __asm _emit 0x74
        __asm _emit 0x32
        push 406h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 4A D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x4a
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1A 22 D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x22
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x586f0112
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 70h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [edx + 64h], eax
        push 406h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB 49 D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x49
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        lea ecx, [ebp - 110h]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 29 0B 00 00: call 0x586f0c70
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 80 F4 E0 FF: call 0x584ff5d0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf4
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 A9 0E 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x0e
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 38: je 0x586f01a3
        __asm _emit 0x74
        __asm _emit 0x38
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 49 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x49
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 31h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 68h
        push eax
        push 7
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D2 A7 0C 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xa7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x586f01aa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [ecx + 68h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 80h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 DD 53 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x53
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 84h], eax
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 54 5C D9 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x5c
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 0D 0E 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x0e
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 3E: je 0x586f0245
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
        ; Exact mapped bytes E8 B9 48 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x48
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 3dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 68h
        push edx
        push 7
        mov eax, dword ptr [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 30 A7 0C 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xa7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x586f024c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 8ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [eax + 6ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 90h], eax
        push 101h
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 2F 53 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x53
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 94h], edx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 A6 5B D9 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x5b
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 5F 0D 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 60: je 0x586f0315
        __asm _emit 0x74
        __asm _emit 0x60
        push 25h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 48 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x48
        __asm _emit 0xd9
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
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 4dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 50h
        push eax
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D0 B9 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xb9
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x586f031c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0a4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [eax + 80h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 0a8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 59 52 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x52
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 0ach], edx
        push 0
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 CD 5A D9 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x5a
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 86 0C 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 60: je 0x586f03ee
        __asm _emit 0x74
        __asm _emit 0x60
        push 24h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 47 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x47
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b8h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 4dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 7bh
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 F7 B8 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xb8
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x586f03f5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0bch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0bch]
        mov dword ptr [eax + 84h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 0c0h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 80 51 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x51
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 0c4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 F4 59 D9 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x59
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 AD 0B 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x0b
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 3B: je 0x586f04a2
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
        ; Exact mapped bytes E8 5C 46 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x46
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 1eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 60h
        push ecx
        push 4
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 D3 A4 0C 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x586f04a9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0cch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0cch]
        mov dword ptr [edx + 70h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 0d0h], edx
        push 0ah
        push 1
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 53 69 DC FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x69
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 0d4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 B7 50 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x50
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 0d8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 2E 59 D9 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x59
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 E7 0A 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x0a
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 64: je 0x586f0591
        __asm _emit 0x74
        __asm _emit 0x64
        push 1eh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 45 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x45
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e0h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e4h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 16h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 80h
        push ecx
        mov edx, dword ptr [ebp - 0dch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        push ecx
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 54 B7 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x586f0598
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0e8h]
        mov dword ptr [ecx + 74h], edx
        push 0ach
        ; Exact mapped bytes E8 49 0A 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x0a
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 62: je 0x586f062d
        __asm _emit 0x74
        __asm _emit 0x62
        push 1fh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 44 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x44
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0f4h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 20h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 80h
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0f0h]
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 B8 B6 DD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x586f0634
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 0f8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f8h]
        mov dword ptr [eax + 78h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 0fch], eax
        push 101h
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 47 4F 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x4f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 100h], edx
        push 101h
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 2B 4F 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x4f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 104h], ecx
        push 0
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 A2 57 D9 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x57
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 108h], eax
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 89 57 D9 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0xd9
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
