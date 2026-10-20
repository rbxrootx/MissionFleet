// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E1371 .. +0x799 bytes.
extern "C" __declspec(naked) void FUN_004e1371_004E1371() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e86ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0bch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0b8h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 200h
        ; Exact mapped bytes 74 28: je 0x4e13d2
        __asm _emit 0x74
        __asm _emit 0x28
        cmp dword ptr [ebp - 10h], 0a0h
        ; Exact mapped bytes 74 1F: je 0x4e13d2
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [ebp - 10h], 202h
        ; Exact mapped bytes 74 16: je 0x4e13d2
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [ebp - 10h], 205h
        ; Exact mapped bytes 74 0D: je 0x4e13d2
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebp - 10h], 208h
        ; Exact mapped bytes 0F 85 D0 05 00 00: jne 0x4e19a2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes FF 15 BC 25 5E 00: call dword ptr [0x5e25bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        test edx, edx
        ; Exact mapped bytes 0F 8C BD 05 00 00: jl 0x4e19a2
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbd
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes FF 15 BC 25 5E 00: call dword ptr [0x5e25bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        test eax, eax
        ; Exact mapped bytes 0F 8C AA 05 00 00: jl 0x4e19a2
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xaa
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        ; Exact mapped bytes FF 15 BC 25 5E 00: call dword ptr [0x5e25bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 0F 8C 97 05 00 00: jl 0x4e19a2
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x97
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 69 05 01 00: call 0x4f197f
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 1D: je 0x4e143c
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 24h]
        and edx, 401h
        test edx, edx
        ; Exact mapped bytes 75 0D: jne 0x4e143c
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 02 BC 05 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB DD: jmp 0x4e1419
        __asm _emit 0xeb
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 44h]
        cmp eax, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 74 3B: je 0x4e1482
        __asm _emit 0x74
        __asm _emit 0x3b
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 75 30: jne 0x4e147d
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, 5de7b4h
        ; Exact mapped bytes E8 E9 0F 06 00: call 0x542440
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [ecx + 0d0h], 0
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [edx + 0d4h], 0ffffffffh
        ; Exact mapped bytes E9 75 06 00 00: jmp 0x4e1af7
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 5de7b4h
        ; Exact mapped bytes E8 B4 0F 06 00: call 0x542440
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 0cch]
        mov dword ptr [ebp - 4ch], ecx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 23 38 01 00: call 0x4f4cc9
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 72: je 0x4e1524
        __asm _emit 0x74
        __asm _emit 0x72
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 BA A6 05 00: call 0x53bb74
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa6
        __asm _emit 0x05
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 88h]
        ; Exact mapped bytes 74 62: je 0x4e1524
        __asm _emit 0x74
        __asm _emit 0x62
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 50 60: call dword ptr [eax + 0x60]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0a4h], ecx
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 0a0h], edx
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 1B: je 0x4e1506
        __asm _emit 0x74
        __asm _emit 0x1b
        push 1
        mov eax, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x4e1510
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [eax + 0cch], 0
        mov dword ptr [ebp - 4ch], 0
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 0F 85 DA 00 00 00: jne 0x4e1608
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 186h
        push 5cb6b4h
        push 58h
        ; Exact mapped bytes E8 20 BB 00 00: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ach], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 13: je 0x4e1568
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 60 F1 FF FF: call 0x4e06c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x4e1572
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov ecx, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 0a8h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 4ch], edx
        push 1
        mov eax, dword ptr [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 7A F1 FF FF: call 0x4e0719
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 48: jne 0x4e15eb
        __asm _emit 0x75
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0b4h], ecx
        mov edx, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 0b0h], edx
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 1B: je 0x4e15dc
        __asm _emit 0x74
        __asm _emit 0x1b
        push 1
        mov eax, dword ptr [ebp - 0b0h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x4e15e6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes E9 0C 05 00 00: jmp 0x4e1af7
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 401h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 DD A5 05 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xa5
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [eax + 0cch], ecx
        push 190h
        push 5cb6b4h
        mov edx, dword ptr [ebp - 4ch]
        push edx
        ; Exact mapped bytes E8 45 9B 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e1640
        __asm _emit 0x75
        __asm _emit 0x14
        push 191h
        push 5cb6b4h
        ; Exact mapped bytes E8 C5 33 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x33
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e1640
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4e161b
        __asm _emit 0x75
        __asm _emit 0xd5
        push 2ch
        push 0
        lea eax, [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 1D 7D FC FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x7d
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 3ch], 28h
        mov dword ptr [ebp - 38h], 1
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 30h], ecx
        lea edx, [ebp - 3ch]
        push edx
        push 0
        push 408h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 4A A5 05 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa5
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x4e1738
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 1
        ; Exact mapped bytes 74 14: je 0x4e16b1
        __asm _emit 0x74
        __asm _emit 0x14
        push 19bh
        push 5cb6b4h
        ; Exact mapped bytes E8 54 33 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x33
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e16b1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4e1697
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ebp - 34h]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 74 14: je 0x4e16d9
        __asm _emit 0x74
        __asm _emit 0x14
        push 19ch
        push 5cb6b4h
        ; Exact mapped bytes E8 2C 33 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x33
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e16d9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4e16b7
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ebp - 30h]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 74 14: je 0x4e1701
        __asm _emit 0x74
        __asm _emit 0x14
        push 19dh
        push 5cb6b4h
        ; Exact mapped bytes E8 04 33 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x33
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e1701
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4e16df
        __asm _emit 0x75
        __asm _emit 0xd8
        lea ecx, [ebp - 3ch]
        push ecx
        push 0
        push 404h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 BF A4 05 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e1732
        __asm _emit 0x75
        __asm _emit 0x14
        push 19eh
        push 5cb6b4h
        ; Exact mapped bytes E8 D3 32 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e1732
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x4e1707
        __asm _emit 0x75
        __asm _emit 0xcf
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        mov edx, dword ptr [eax + 14h]
        push edx
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 3F 42 05 00: call 0x53598a
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        lea eax, [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 78 27 5E 00: call dword ptr [0x5e2778]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push 2ch
        push 0
        lea eax, [ebp - 78h]
        push eax
        ; Exact mapped bytes E8 04 7C FC FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 78h], 28h
        lea ecx, [ebp - 78h]
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        sub eax, -1
        neg eax
        sbb eax, eax
        and eax, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 0d4h]
        cmp edx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 75 15: jne 0x4e17cf
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 0d0h]
        cmp ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes 0F 84 54 01 00 00: je 0x4e1923
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 48h], -1
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x4e18b0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0bh
        lea esi, [ebp - 78h]
        lea edi, [ebp - 3ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 38h]
        and edx, 3fffffffh
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 400h
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x4e180e
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 38h]
        or edx, 20h
        mov dword ptr [ebp - 38h], edx
        lea eax, [ebp - 3ch]
        push eax
        push 0
        push 404h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 B8 A3 05 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xa3
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e1839
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b3h
        push 5cb6b4h
        ; Exact mapped bytes E8 CC 31 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x31
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e1839
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x4e180e
        __asm _emit 0x75
        __asm _emit 0xcf
        mov edx, dword ptr [ebp - 74h]
        and edx, 40000000h
        test edx, edx
        ; Exact mapped bytes 75 0F: jne 0x4e185b
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 E4 34 01 00: call 0x4f4d3b
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x4e18ae
        __asm _emit 0x74
        __asm _emit 0x53
        push 0
        push 1
        push 401h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 6D A3 05 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa3
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 400h
        test ecx, ecx
        ; Exact mapped bytes 74 13: je 0x4e1892
        __asm _emit 0x74
        __asm _emit 0x13
        lea edx, [ebp - 3ch]
        push edx
        push 1
        push 411h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 47 A3 05 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa3
        __asm _emit 0x05
        __asm _emit 0x00
        push 213h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 14 26 5E 00: call dword ptr [0x5e2614]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x4e18c1
        __asm _emit 0xeb
        __asm _emit 0x11
        push 0
        push 0
        push 401h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 18 A3 05 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xa3
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 FE F9 FF FF: call 0x4e12cc
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        cmp dword ptr [ecx + 0d8h], 28h
        ; Exact mapped bytes 72 19: jb 0x4e18f3
        __asm _emit 0x72
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 40h]
        add edx, 0d8h
        push edx
        push 0
        push 405h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 E6 A2 05 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [eax + 0d0h], ecx
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [edx + 0d4h], eax
        mov edi, dword ptr [ebp - 40h]
        add edi, 0d8h
        mov ecx, 0bh
        lea esi, [ebp - 78h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes EB 62: jmp 0x4e1985
        __asm _emit 0xeb
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx + 24h]
        and edx, 400h
        test edx, edx
        ; Exact mapped bytes 74 3C: je 0x4e1972
        __asm _emit 0x74
        __asm _emit 0x3c
        lea eax, [ebp - 94h]
        push eax
        ; Exact mapped bytes FF 15 74 25 5E 00: call dword ptr [0x5e2574]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 94h]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp - 90h]
        and edx, 0ffffh
        shl edx, 10h
        or ecx, edx
        push ecx
        push 0
        push 412h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 69 A2 05 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x4e1985
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp dword ptr [ebp - 48h], -1
        ; Exact mapped bytes 74 0D: je 0x4e1985
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes E8 47 F9 FF FF: call 0x4e12cc
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 54h], -1
        ; Exact mapped bytes 74 12: je 0x4e199d
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 75 0C: jne 0x4e199d
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 54h]
        push edx
        ; Exact mapped bytes E8 E6 92 FC FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E9 55 01 00 00: jmp 0x4e1af7
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 401h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 3E 01 00 00: je 0x4e1af7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 BB FF 00 00: call 0x4f197f
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 98h], eax
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 33: je 0x4e1a06
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 98h]
        cmp ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 74 25: je 0x4e1a06
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx + 24h]
        and eax, 401h
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x4e1a06
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 3B B6 05 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB C4: jmp 0x4e19ca
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov ecx, dword ptr [ebp - 98h]
        cmp ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 74 05: je 0x4e1a19
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x4e1af7
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 100h
        ; Exact mapped bytes 72 09: jb 0x4e1a2b
        __asm _emit 0x72
        __asm _emit 0x09
        cmp dword ptr [ebp - 10h], 108h
        ; Exact mapped bytes 76 1E: jbe 0x4e1a49
        __asm _emit 0x76
        __asm _emit 0x1e
        cmp dword ptr [ebp - 10h], 104h
        ; Exact mapped bytes 72 09: jb 0x4e1a3d
        __asm _emit 0x72
        __asm _emit 0x09
        cmp dword ptr [ebp - 10h], 107h
        ; Exact mapped bytes 76 0C: jbe 0x4e1a49
        __asm _emit 0x76
        __asm _emit 0x0c
        mov dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes EB 0A: jmp 0x4e1a53
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 1
        mov edx, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 400h
        test ecx, ecx
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x4e1af7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 75 6C: jne 0x4e1aeb
        __asm _emit 0x75
        __asm _emit 0x6c
        cmp dword ptr [ebp - 10h], 201h
        ; Exact mapped bytes 74 63: je 0x4e1aeb
        __asm _emit 0x74
        __asm _emit 0x63
        cmp dword ptr [ebp - 10h], 203h
        ; Exact mapped bytes 74 5A: je 0x4e1aeb
        __asm _emit 0x74
        __asm _emit 0x5a
        cmp dword ptr [ebp - 10h], 204h
        ; Exact mapped bytes 74 51: je 0x4e1aeb
        __asm _emit 0x74
        __asm _emit 0x51
        cmp dword ptr [ebp - 10h], 206h
        ; Exact mapped bytes 74 48: je 0x4e1aeb
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp - 10h], 207h
        ; Exact mapped bytes 74 3F: je 0x4e1aeb
        __asm _emit 0x74
        __asm _emit 0x3f
        cmp dword ptr [ebp - 10h], 209h
        ; Exact mapped bytes 74 36: je 0x4e1aeb
        __asm _emit 0x74
        __asm _emit 0x36
        cmp dword ptr [ebp - 10h], 0a1h
        ; Exact mapped bytes 74 2D: je 0x4e1aeb
        __asm _emit 0x74
        __asm _emit 0x2d
        cmp dword ptr [ebp - 10h], 0a3h
        ; Exact mapped bytes 74 24: je 0x4e1aeb
        __asm _emit 0x74
        __asm _emit 0x24
        cmp dword ptr [ebp - 10h], 0a4h
        ; Exact mapped bytes 74 1B: je 0x4e1aeb
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp dword ptr [ebp - 10h], 0a6h
        ; Exact mapped bytes 74 12: je 0x4e1aeb
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 10h], 0a7h
        ; Exact mapped bytes 74 09: je 0x4e1aeb
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 10h], 0a9h
        ; Exact mapped bytes 75 0C: jne 0x4e1af7
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 9ch]
        push edx
        ; Exact mapped bytes E8 C6 14 01 00: call 0x4f2fbd
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
