// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587880A0 .. +0x8AE bytes.
extern "C" __declspec(naked) void FUN_587880a0_587880A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58890d12h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 108h
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
        ; Exact mapped bytes E8 24 EF FF FF: call 0x58787010
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b6834h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0c0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0c8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0cch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0d0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0d4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0d8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0dch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0e0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0e4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0e8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ech], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0f0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0f4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0f8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0fch], 0
        push 0fch
        ; Exact mapped bytes E8 3B 8E 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x8e
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 5C: je 0x58788235
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        add edx, 42h
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 26h
        mov dword ptr [ebp - 88h], ecx
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 C8 CF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xc8
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov edx, dword ptr [ebp - 84h]
        push edx
        mov eax, dword ptr [ebp - 88h]
        push eax
        push 3
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 40 27 03 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x27
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878823c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 90h]
        mov dword ptr [ecx + 0c0h], edx
        push 54h
        ; Exact mapped bytes E8 A5 8D 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x8d
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 23: je 0x58788292
        __asm _emit 0x74
        __asm _emit 0x23
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 0fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 3
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 93 A0 CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa0
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58788299
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ecx + 0d4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d4h]
        mov dword ptr [ebp - 98h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 DC D2 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 9ch], eax
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 50 DB CF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xdb
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 0C 8D 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x8d
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 23: je 0x5878832b
        __asm _emit 0x74
        __asm _emit 0x23
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0fh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 3
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 FA 9F CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x9f
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58788332
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 0a0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0a0h]
        mov dword ptr [edx + 0d8h], eax
        push 58h
        ; Exact mapped bytes E8 AF 8C 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 23: je 0x58788388
        __asm _emit 0x74
        __asm _emit 0x23
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 5
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8D E4 CF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878838f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0a4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0a4h]
        mov dword ptr [edx + 0cch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 0a8h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 E6 D1 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0cch]
        mov dword ptr [ebp - 0ach], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 5A DA CF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xda
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0cch]
        mov dword ptr [ebp - 0b0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 4E 71 D1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 FA 8B 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x8b
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 23: je 0x5878843d
        __asm _emit 0x74
        __asm _emit 0x23
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 5
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D8 E3 CF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xe3
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x58788444
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0b4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0b4h]
        mov dword ptr [edx + 0d0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 0b8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 D4 70 D1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x70
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 80 8B 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x8b
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 35: je 0x587884c9
        __asm _emit 0x74
        __asm _emit 0x35
        push 3dh
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F C6 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc6
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        push 3bh
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0bch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 5C 9E CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x9e
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x587884d0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0c0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [edx + 0e4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0e4h]
        mov dword ptr [ebp - 0c4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 48 70 D1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x70
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 F4 8A 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x8a
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 23: je 0x58788543
        __asm _emit 0x74
        __asm _emit 0x23
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 0fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 3
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 E2 9D CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x9d
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878854a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0c8h]
        mov dword ptr [ecx + 0dch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0dch]
        mov dword ptr [ebp - 0cch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 2B D0 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 0d0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 9F D8 CF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd8
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 5B 8A 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x8a
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 23: je 0x587885dc
        __asm _emit 0x74
        __asm _emit 0x23
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0fh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 3
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 49 9D CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x9d
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x587885e3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 0d4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [edx + 0e0h], eax
        push 54h
        ; Exact mapped bytes E8 FE 89 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x89
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 3B: je 0x58788651
        __asm _emit 0x74
        __asm _emit 0x3b
        push 1fh
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD C4 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc4
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 3ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 2
        push edx
        mov eax, dword ptr [ebp - 0d8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 D4 9C CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x9c
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x58788658
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 0dch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0dch]
        mov dword ptr [eax + 0f8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 0e0h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 1D CF 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 0e4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 91 D7 CF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xd7
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 4D 89 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 3B: je 0x58788702
        __asm _emit 0x74
        __asm _emit 0x3b
        push 1eh
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C C4 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc4
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 3ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2
        push ecx
        mov edx, dword ptr [ebp - 0e8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 23 9C CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x9c
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x58788709
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 0ech], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ech]
        mov dword ptr [edx + 0fch], eax
        push 54h
        ; Exact mapped bytes E8 D8 88 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 38: je 0x58788774
        __asm _emit 0x74
        __asm _emit 0x38
        push 3dh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 C3 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xc3
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 6
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0f0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 B1 9B CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x9b
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878877b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 0f4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f4h]
        mov dword ptr [eax + 0ech], ecx
        push 54h
        ; Exact mapped bytes E8 66 88 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 38: je 0x587887e6
        __asm _emit 0x74
        __asm _emit 0x38
        push 3ch
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 C3 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xc3
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        sub edx, 6
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0f8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 3F 9B CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x9b
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x587887ed
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0fch]
        mov dword ptr [ecx + 0e8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 100h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 88 CD 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 D4 87 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x87
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 3B: je 0x5878887b
        __asm _emit 0x74
        __asm _emit 0x3b
        push 3fh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 C2 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xc2
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        sub edx, 6
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 104h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 AA 9A CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x9a
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x58788882
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 108h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 108h]
        mov dword ptr [ecx + 0f4h], edx
        push 54h
        ; Exact mapped bytes E8 5F 87 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x87
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 3B: je 0x587888f0
        __asm _emit 0x74
        __asm _emit 0x3b
        push 3eh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E C2 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc2
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        sub eax, 6
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 35 9A CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x9a
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x587888f7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 110h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 110h]
        mov dword ptr [edx + 0f0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0f0h]
        mov dword ptr [ebp - 114h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 7E CC 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xcc
        __asm _emit 0x02
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
