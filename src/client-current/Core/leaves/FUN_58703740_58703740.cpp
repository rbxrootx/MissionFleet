// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58703740 .. +0x65F bytes.
extern "C" __declspec(naked) void FUN_58703740_58703740() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888d719h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0f0h
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
        ; Exact mapped bytes E8 EB EA D7 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xea
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b3b20h
        push 54h
        ; Exact mapped bytes E8 68 D8 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xd8
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 32: je 0x587037de
        __asm _emit 0x74
        __asm _emit 0x32
        push 405h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 13 D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x13
        __asm _emit 0xd8
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
        ; Exact mapped bytes E8 47 EB D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xeb
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x587037e5
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
        ; Exact mapped bytes E8 A2 1D 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x1d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 68h], edx
        push 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 1F 26 D8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x26
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 DB D7 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd7
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 32: je 0x5870386b
        __asm _emit 0x74
        __asm _emit 0x32
        push 404h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 12 D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x12
        __asm _emit 0xd8
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
        ; Exact mapped bytes E8 BA EA D7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xea
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58703872
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 70h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [edx + 64h], eax
        push 404h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B 12 D8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x12
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        lea ecx, [ebp - 0fch]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 C9 D3 FE FF: call 0x586f0c70
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 20 BD DF FF: call 0x584ff5d0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xbd
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 49 D7 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xd7
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 35: je 0x58703900
        __asm _emit 0x74
        __asm _emit 0x35
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 11 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x11
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 14h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 5dh
        push eax
        push 4
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 75 70 0B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x70
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58703907
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
        ; Exact mapped bytes E8 80 1C 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x1c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 84h], eax
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 F7 24 D8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x24
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 B0 D6 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xd6
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 61: je 0x587039c5
        __asm _emit 0x74
        __asm _emit 0x61
        push 1fh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F 11 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x11
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 8ch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 90h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 0fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 78h
        push ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        mov edx, dword ptr [ebp - 90h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 20 83 DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x83
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x587039cc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ecx + 6ch], edx
        push 0ach
        ; Exact mapped bytes E8 15 D6 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xd6
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 60: je 0x58703a5f
        __asm _emit 0x74
        __asm _emit 0x60
        push 20h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 10 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x10
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
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
        add edx, 1ah
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 78h
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
        ; Exact mapped bytes E8 86 82 DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x82
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x58703a66
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0a4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [eax + 70h], ecx
        push 0fch
        ; Exact mapped bytes E8 7B D5 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xd5
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 3E: je 0x58703ad7
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
        ; Exact mapped bytes E8 27 10 D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x10
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 2fh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 56h
        push eax
        push 8
        mov ecx, dword ptr [ebp - 0a8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 9E 6E 0B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x6e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x58703ade
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ach]
        mov dword ptr [ecx + 74h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 0b0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 9D 1A 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x1a
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 0b4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 14 23 D8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x23
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 CD D4 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xd4
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 3E: je 0x58703b85
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
        ; Exact mapped bytes E8 79 0F D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x0f
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 3bh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 56h
        push edx
        push 8
        mov eax, dword ptr [ebp - 0b8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 F0 6D 0B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x6d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x58703b8c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0bch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0bch]
        mov dword ptr [eax + 78h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 0c0h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 EF 19 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x19
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 0c4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 66 22 D8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x22
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 1F D4 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xd4
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 60: je 0x58703c55
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
        ; Exact mapped bytes E8 CE 0E D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x0e
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d0h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 4dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 50h
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0cch]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 90 80 DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x58703c5c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 0d4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [eax + 7ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 0d8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 1F 19 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x19
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 0dch], edx
        push 0
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 96 21 D8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x21
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 4F D3 12 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xd3
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 60: je 0x58703d25
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
        ; Exact mapped bytes E8 FE 0D D8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e8h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 4dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 7bh
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0e4h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 C0 7F DC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x7f
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x58703d2c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 0ech], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ech]
        mov dword ptr [eax + 80h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 0f0h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 49 18 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x18
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 0f4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 BD 20 D8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x20
        __asm _emit 0xd8
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
