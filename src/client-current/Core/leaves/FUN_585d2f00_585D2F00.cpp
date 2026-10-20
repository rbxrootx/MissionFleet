// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D2F00 .. +0x36A bytes.
extern "C" __declspec(naked) void FUN_585d2f00_585D2F00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 80h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 54h], ecx
        push 32h
        push 0
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 ED 9E 27 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x9e
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 1C E7 EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xe7
        __asm _emit 0xef
        __asm _emit 0xff
        add eax, 6
        push eax
        push 32h
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 3D 12 1E 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x12
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 38h]
        test eax, eax
        ; Exact mapped bytes 0F 84 FE 02 00 00: je 0x585d324f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 32h
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 F4 E9 28 00: call 0x58861950
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 8
        push 588aba30h
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x585d2fab
        __asm _emit 0x74
        __asm _emit 0x39
        push 588aba34h
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x585d2fab
        __asm _emit 0x74
        __asm _emit 0x26
        push 588aba3ch
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x585d2fab
        __asm _emit 0x74
        __asm _emit 0x13
        push 588aba44h
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x585d2fc0
        __asm _emit 0x75
        __asm _emit 0x15
        push 0
        push 2
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 D4 F9 FF: call 0x585704b0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xd4
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8F 02 00 00: jmp 0x585d324f
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 588aba48h
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x585d301f
        __asm _emit 0x74
        __asm _emit 0x4c
        push 588aba4ch
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x585d301f
        __asm _emit 0x74
        __asm _emit 0x39
        push 588aba5ch
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x585d301f
        __asm _emit 0x74
        __asm _emit 0x26
        push 588aba64h
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x585d301f
        __asm _emit 0x74
        __asm _emit 0x13
        push 588aba70h
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x585d3034
        __asm _emit 0x75
        __asm _emit 0x15
        push 0
        push 4
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 D4 F9 FF: call 0x585704b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd4
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1B 02 00 00: jmp 0x585d324f
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 588aba78h
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x585d3080
        __asm _emit 0x74
        __asm _emit 0x39
        push 588aba7ch
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x585d3080
        __asm _emit 0x74
        __asm _emit 0x26
        push 588aba88h
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x585d3080
        __asm _emit 0x74
        __asm _emit 0x13
        push 588aba90h
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x585d3095
        __asm _emit 0x75
        __asm _emit 0x15
        push 0
        push 3
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 D4 F9 FF: call 0x585704b0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xd4
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 BA 01 00 00: jmp 0x585d324f
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], 1
        mov dword ptr [ebp - 58h], 6
        mov dword ptr [ebp - 64h], 0
        mov dword ptr [ebp - 60h], 0
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x585d314b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 84 E5 EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        cmp eax, 20h
        ; Exact mapped bytes 74 19: je 0x585d30f1
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 6A E5 EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe5
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x585d30f5
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes EB 58: jmp 0x585d314b
        __asm _emit 0xeb
        __asm _emit 0x58
        ; Exact mapped bytes EB 51: jmp 0x585d3146
        __asm _emit 0xeb
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 4D E5 EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe5
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        cmp eax, 30h
        ; Exact mapped bytes 7C 2E: jl 0x585d313d
        __asm _emit 0x7c
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 33 E5 EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xe5
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        cmp eax, 39h
        ; Exact mapped bytes 7F 14: jg 0x585d313d
        __asm _emit 0x7f
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 58h]
        add ecx, 1
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 64h]
        add edx, 1
        mov dword ptr [ebp - 64h], edx
        ; Exact mapped bytes EB 09: jmp 0x585d3146
        __asm _emit 0xeb
        __asm _emit 0x09
        mov dword ptr [ebp - 68h], 0
        ; Exact mapped bytes EB 05: jmp 0x585d314b
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 66 FF FF FF: jmp 0x585d30b1
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x585d3221
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585d3167
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 5ch]
        add eax, 1
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        cmp ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes 7D 6E: jge 0x585d31dd
        __asm _emit 0x7d
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 D3 E4 EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe4
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 0F BE 54 08 06: movsx edx, byte ptr [eax + ecx + 6]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x06
        sub edx, 30h
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        mov eax, dword ptr [ebp - 64h]
        sub eax, dword ptr [ebp - 5ch]
        sub eax, 1
        push eax
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 0D D0 50 89 58: movsd xmm1, qword ptr [0x588950d0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 0C 24: movsd qword ptr [esp], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x0c
        __asm _emit 0x24
        ; Exact mapped bytes F2 0F 11 45 88: movsd qword ptr [ebp - 0x78], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x88
        ; Exact mapped bytes E8 80 E7 EB FF: call 0x58491930
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xe7
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes DD 5D 80: fstp qword ptr [ebp - 0x80]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0x80
        ; Exact mapped bytes F2 0F 10 45 88: movsd xmm0, qword ptr [ebp - 0x78]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x88
        ; Exact mapped bytes F2 0F 59 45 80: mulsd xmm0, qword ptr [ebp - 0x80]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0x80
        ; Exact mapped bytes F2 0F 2A 4D A0: cvtsi2sd xmm1, dword ptr [ebp - 0x60]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0xa0
        ; Exact mapped bytes F2 0F 58 C8: addsd xmm1, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 2C C9: cvttsd2si ecx, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc9
        mov dword ptr [ebp - 60h], ecx
        cmp dword ptr [ebp - 60h], 0ffffh
        ; Exact mapped bytes 7E 02: jle 0x585d31db
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x585d31dd
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 81: jmp 0x585d315e
        __asm _emit 0xeb
        __asm _emit 0x81
        cmp dword ptr [ebp - 60h], 0ffffh
        ; Exact mapped bytes 7F 39: jg 0x585d321f
        __asm _emit 0x7f
        __asm _emit 0x39
        push 18h
        push 0
        lea edx, [ebp - 50h]
        push edx
        ; Exact mapped bytes E8 1D 9C 27 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x9c
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 60h]
        push eax
        push 588aba94h
        push 18h
        lea ecx, [ebp - 50h]
        push ecx
        ; Exact mapped bytes E8 E6 DB ED FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xdb
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 10h
        lea edx, [ebp - 50h]
        push edx
        push 5
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 D2 F9 FF: call 0x585704b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xd2
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2E: jmp 0x585d324f
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 70h], ecx
        push 588aba98h
        ; Exact mapped bytes E8 B9 ED F4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xed
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 82 22 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x22
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 A3 D2 EF FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xd2
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 E8 DD 25 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x25
        __asm _emit 0x00
        mov esp, ebp
    }
}
