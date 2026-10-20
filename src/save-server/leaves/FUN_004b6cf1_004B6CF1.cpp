// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B6CF1 .. +0x799 bytes.
extern "C" __declspec(naked) void FUN_004b6cf1_004B6CF1() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e34ch
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
        ; Exact mapped bytes 74 28: je 0x4b6d52
        __asm _emit 0x74
        __asm _emit 0x28
        cmp dword ptr [ebp - 10h], 0a0h
        ; Exact mapped bytes 74 1F: je 0x4b6d52
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [ebp - 10h], 202h
        ; Exact mapped bytes 74 16: je 0x4b6d52
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [ebp - 10h], 205h
        ; Exact mapped bytes 74 0D: je 0x4b6d52
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebp - 10h], 208h
        ; Exact mapped bytes 0F 85 D0 05 00 00: jne 0x4b7322
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes FF 15 FC BE 68 00: call dword ptr [0x68befc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        test edx, edx
        ; Exact mapped bytes 0F 8C BD 05 00 00: jl 0x4b7322
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbd
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes FF 15 FC BE 68 00: call dword ptr [0x68befc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        test eax, eax
        ; Exact mapped bytes 0F 8C AA 05 00 00: jl 0x4b7322
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xaa
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        ; Exact mapped bytes FF 15 FC BE 68 00: call dword ptr [0x68befc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 0F 8C 97 05 00 00: jl 0x4b7322
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x97
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 19 8B 01 00: call 0x4cf8af
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 1D: je 0x4b6dbc
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 24h]
        and edx, 401h
        test edx, edx
        ; Exact mapped bytes 75 0D: jne 0x4b6dbc
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 E2 5C 07 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x5c
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB DD: jmp 0x4b6d99
        __asm _emit 0xeb
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 44h]
        cmp eax, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 74 3B: je 0x4b6e02
        __asm _emit 0x74
        __asm _emit 0x3b
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 75 30: jne 0x4b6dfd
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, 686d24h
        ; Exact mapped bytes E8 59 68 08 00: call 0x53d630
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [ecx + 0d0h], 0
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [edx + 0d4h], 0ffffffffh
        ; Exact mapped bytes E9 75 06 00 00: jmp 0x4b7477
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 686d24h
        ; Exact mapped bytes E8 24 68 08 00: call 0x53d630
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 0cch]
        mov dword ptr [ebp - 4ch], ecx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 D3 BD 01 00: call 0x4d2bf9
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 72: je 0x4b6ea4
        __asm _emit 0x74
        __asm _emit 0x72
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 9A 47 07 00: call 0x52b5d4
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x47
        __asm _emit 0x07
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 88h]
        ; Exact mapped bytes 74 62: je 0x4b6ea4
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
        ; Exact mapped bytes 74 1B: je 0x4b6e86
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
        ; Exact mapped bytes EB 0A: jmp 0x4b6e90
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [eax + 0cch], 0
        mov dword ptr [ebp - 4ch], 0
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 0F 85 DA 00 00 00: jne 0x4b6f88
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 186h
        push 677e8ch
        push 58h
        ; Exact mapped bytes E8 40 52 01 00: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ach], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 13: je 0x4b6ee8
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 60 F1 FF FF: call 0x4b6040
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x4b6ef2
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
        ; Exact mapped bytes E8 7A F1 FF FF: call 0x4b6099
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 48: jne 0x4b6f6b
        __asm _emit 0x75
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0b4h], ecx
        mov edx, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 0b0h], edx
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 1B: je 0x4b6f5c
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
        ; Exact mapped bytes EB 0A: jmp 0x4b6f66
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes E9 0C 05 00 00: jmp 0x4b7477
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 401h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 BD 46 07 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x46
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [eax + 0cch], ecx
        push 190h
        push 677e8ch
        mov edx, dword ptr [ebp - 4ch]
        push edx
        ; Exact mapped bytes E8 C5 32 02 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4b6fc0
        __asm _emit 0x75
        __asm _emit 0x14
        push 191h
        push 677e8ch
        ; Exact mapped bytes E8 85 1D 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b6fc0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4b6f9b
        __asm _emit 0x75
        __asm _emit 0xd5
        push 2ch
        push 0
        lea eax, [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 ED E8 FA FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe8
        __asm _emit 0xfa
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
        ; Exact mapped bytes E8 2A 46 07 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x46
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x4b70b8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 1
        ; Exact mapped bytes 74 14: je 0x4b7031
        __asm _emit 0x74
        __asm _emit 0x14
        push 19bh
        push 677e8ch
        ; Exact mapped bytes E8 14 1D 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x1d
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b7031
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4b7017
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ebp - 34h]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 74 14: je 0x4b7059
        __asm _emit 0x74
        __asm _emit 0x14
        push 19ch
        push 677e8ch
        ; Exact mapped bytes E8 EC 1C 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b7059
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4b7037
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ebp - 30h]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 74 14: je 0x4b7081
        __asm _emit 0x74
        __asm _emit 0x14
        push 19dh
        push 677e8ch
        ; Exact mapped bytes E8 C4 1C 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b7081
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4b705f
        __asm _emit 0x75
        __asm _emit 0xd8
        lea ecx, [ebp - 3ch]
        push ecx
        push 0
        push 404h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 9F 45 07 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x45
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4b70b2
        __asm _emit 0x75
        __asm _emit 0x14
        push 19eh
        push 677e8ch
        ; Exact mapped bytes E8 93 1C 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b70b2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x4b7087
        __asm _emit 0x75
        __asm _emit 0xcf
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        mov edx, dword ptr [eax + 14h]
        push edx
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 B2 AD 07 00: call 0x531e7d
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xad
        __asm _emit 0x07
        __asm _emit 0x00
        lea eax, [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 9C BE 68 00: call dword ptr [0x68be9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push 2ch
        push 0
        lea eax, [ebp - 78h]
        push eax
        ; Exact mapped bytes E8 D4 E7 FA FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xe7
        __asm _emit 0xfa
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
        ; Exact mapped bytes 75 15: jne 0x4b714f
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 0d0h]
        cmp ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes 0F 84 54 01 00 00: je 0x4b72a3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 48h], -1
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x4b7230
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
        ; Exact mapped bytes 74 09: je 0x4b718e
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
        ; Exact mapped bytes E8 98 44 07 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4b71b9
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b3h
        push 677e8ch
        ; Exact mapped bytes E8 8C 1B 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x1b
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b71b9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x4b718e
        __asm _emit 0x75
        __asm _emit 0xcf
        mov edx, dword ptr [ebp - 74h]
        and edx, 40000000h
        test edx, edx
        ; Exact mapped bytes 75 0F: jne 0x4b71db
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 94 BA 01 00: call 0x4d2c6b
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x4b722e
        __asm _emit 0x74
        __asm _emit 0x53
        push 0
        push 1
        push 401h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 4D 44 07 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 400h
        test ecx, ecx
        ; Exact mapped bytes 74 13: je 0x4b7212
        __asm _emit 0x74
        __asm _emit 0x13
        lea edx, [ebp - 3ch]
        push edx
        push 1
        push 411h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 27 44 07 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x44
        __asm _emit 0x07
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
        ; Exact mapped bytes FF 15 54 BF 68 00: call dword ptr [0x68bf54]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x4b7241
        __asm _emit 0xeb
        __asm _emit 0x11
        push 0
        push 0
        push 401h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 F8 43 07 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x43
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 FE F9 FF FF: call 0x4b6c4c
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        cmp dword ptr [ecx + 0d8h], 28h
        ; Exact mapped bytes 72 19: jb 0x4b7273
        __asm _emit 0x72
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 40h]
        add edx, 0d8h
        push edx
        push 0
        push 405h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 C6 43 07 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x07
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
        ; Exact mapped bytes EB 62: jmp 0x4b7305
        __asm _emit 0xeb
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx + 24h]
        and edx, 400h
        test edx, edx
        ; Exact mapped bytes 74 3C: je 0x4b72f2
        __asm _emit 0x74
        __asm _emit 0x3c
        lea eax, [ebp - 94h]
        push eax
        ; Exact mapped bytes FF 15 2C BD 68 00: call dword ptr [0x68bd2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xbd
        __asm _emit 0x68
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
        ; Exact mapped bytes E8 49 43 07 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x43
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x4b7305
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp dword ptr [ebp - 48h], -1
        ; Exact mapped bytes 74 0D: je 0x4b7305
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes E8 47 F9 FF FF: call 0x4b6c4c
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 54h], -1
        ; Exact mapped bytes 74 12: je 0x4b731d
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 75 0C: jne 0x4b731d
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 54h]
        push edx
        ; Exact mapped bytes E8 06 00 FB FF: call 0x467320
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E9 55 01 00 00: jmp 0x4b7477
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 401h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 3E 01 00 00: je 0x4b7477
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 6B 85 01 00: call 0x4cf8af
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 98h], eax
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 33: je 0x4b7386
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 98h]
        cmp ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 74 25: je 0x4b7386
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx + 24h]
        and eax, 401h
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x4b7386
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 1B 57 07 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x57
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB C4: jmp 0x4b734a
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov ecx, dword ptr [ebp - 98h]
        cmp ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 74 05: je 0x4b7399
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x4b7477
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 100h
        ; Exact mapped bytes 72 09: jb 0x4b73ab
        __asm _emit 0x72
        __asm _emit 0x09
        cmp dword ptr [ebp - 10h], 108h
        ; Exact mapped bytes 76 1E: jbe 0x4b73c9
        __asm _emit 0x76
        __asm _emit 0x1e
        cmp dword ptr [ebp - 10h], 104h
        ; Exact mapped bytes 72 09: jb 0x4b73bd
        __asm _emit 0x72
        __asm _emit 0x09
        cmp dword ptr [ebp - 10h], 107h
        ; Exact mapped bytes 76 0C: jbe 0x4b73c9
        __asm _emit 0x76
        __asm _emit 0x0c
        mov dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes EB 0A: jmp 0x4b73d3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 1
        mov edx, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 400h
        test ecx, ecx
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x4b7477
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 75 6C: jne 0x4b746b
        __asm _emit 0x75
        __asm _emit 0x6c
        cmp dword ptr [ebp - 10h], 201h
        ; Exact mapped bytes 74 63: je 0x4b746b
        __asm _emit 0x74
        __asm _emit 0x63
        cmp dword ptr [ebp - 10h], 203h
        ; Exact mapped bytes 74 5A: je 0x4b746b
        __asm _emit 0x74
        __asm _emit 0x5a
        cmp dword ptr [ebp - 10h], 204h
        ; Exact mapped bytes 74 51: je 0x4b746b
        __asm _emit 0x74
        __asm _emit 0x51
        cmp dword ptr [ebp - 10h], 206h
        ; Exact mapped bytes 74 48: je 0x4b746b
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp - 10h], 207h
        ; Exact mapped bytes 74 3F: je 0x4b746b
        __asm _emit 0x74
        __asm _emit 0x3f
        cmp dword ptr [ebp - 10h], 209h
        ; Exact mapped bytes 74 36: je 0x4b746b
        __asm _emit 0x74
        __asm _emit 0x36
        cmp dword ptr [ebp - 10h], 0a1h
        ; Exact mapped bytes 74 2D: je 0x4b746b
        __asm _emit 0x74
        __asm _emit 0x2d
        cmp dword ptr [ebp - 10h], 0a3h
        ; Exact mapped bytes 74 24: je 0x4b746b
        __asm _emit 0x74
        __asm _emit 0x24
        cmp dword ptr [ebp - 10h], 0a4h
        ; Exact mapped bytes 74 1B: je 0x4b746b
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp dword ptr [ebp - 10h], 0a6h
        ; Exact mapped bytes 74 12: je 0x4b746b
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 10h], 0a7h
        ; Exact mapped bytes 74 09: je 0x4b746b
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 10h], 0a9h
        ; Exact mapped bytes 75 0C: jne 0x4b7477
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 9ch]
        push edx
        ; Exact mapped bytes E8 76 9A 01 00: call 0x4d0eed
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x9a
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
