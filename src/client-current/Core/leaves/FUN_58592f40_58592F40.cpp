// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58592F40 .. +0x138E bytes.
extern "C" __declspec(naked) void FUN_58592f40_58592F40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588845b0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 20ch
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
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588ab104h
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x58593005
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 160h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 52: je 0x58592fee
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx - 4], 0
        ; Exact mapped bytes 74 20: je 0x58592fc5
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0c4h], edx
        push 3
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 95 3C FF FF FF: call dword ptr [ebp - 0xc4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 1B: jmp 0x58592fe0
        __asm _emit 0xeb
        __asm _emit 0x1b
        push 4
        mov eax, dword ptr [ebp - 2ch]
        sub eax, 4
        push eax
        ; Exact mapped bytes E8 B1 EB 29 00: call 0x58831b84
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xeb
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 0c0h], 0
        mov ecx, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 0c8h], ecx
        ; Exact mapped bytes EB 0A: jmp 0x58592ff8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 160h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0c8h], 0
        ; Exact mapped bytes 74 2B: je 0x5859303c
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 0cch], edx
        mov eax, dword ptr [ebp - 0cch]
        push eax
        ; Exact mapped bytes E8 1F E0 29 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe0
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0c8h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0c4h], 0
        ; Exact mapped bytes 74 2B: je 0x58593073
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 0d0h], ecx
        mov edx, dword ptr [ebp - 0d0h]
        push edx
        ; Exact mapped bytes E8 E8 DF 29 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0c4h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0b0h], 0
        ; Exact mapped bytes 74 2B: je 0x585930aa
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 0d4h], eax
        mov ecx, dword ptr [ebp - 0d4h]
        push ecx
        ; Exact mapped bytes E8 B1 DF 29 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xdf
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0b0h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 130h], 0
        ; Exact mapped bytes 74 49: je 0x585930ff
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 130h]
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 20: je 0x585930e8
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0d8h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 95 28 FF FF FF: call dword ptr [ebp - 0xd8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585930f2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 130h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0a00h], 0
        ; Exact mapped bytes 74 49: je 0x58593154
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a00h]
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 20: je 0x5859313d
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0e0h], eax
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 95 20 FF FF FF: call dword ptr [ebp - 0xe0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58593147
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a00h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 50ch], 0
        ; Exact mapped bytes 74 49: je 0x585931a9
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50ch]
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 20: je 0x58593192
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0e8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 95 18 FF FF FF: call dword ptr [ebp - 0xe8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859319c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 50ch], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 508h], 0
        ; Exact mapped bytes 74 49: je 0x585931fe
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 508h]
        mov dword ptr [ebp - 3ch], edx
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 20: je 0x585931e7
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0f0h], edx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 95 10 FF FF FF: call dword ptr [ebp - 0xf0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585931f1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 508h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 504h], 0
        ; Exact mapped bytes 74 49: je 0x58593253
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 504h]
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 20: je 0x5859323c
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0f8h], eax
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 95 08 FF FF FF: call dword ptr [ebp - 0xf8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58593246
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 504h], 0
        ; Exact mapped bytes 83 3D F8 1F 96 58 00: cmp dword ptr [0x58961ff8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1D: je 0x58593279
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 15 F8 1F 96 58: mov edx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D F8 1F 96 58: mov ecx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes C7 05 F8 1F 96 58 00 00 00 00: mov dword ptr [0x58961ff8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 74 14: je 0x58593296
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 60h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 74 43: je 0x585932e2
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 20: je 0x585932ce
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 100h], eax
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 95 00 FF FF FF: call dword ptr [ebp - 0x100]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585932d8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 9f4h], 0
        ; Exact mapped bytes 74 49: je 0x58593337
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 9f4h]
        mov dword ptr [ebp - 48h], ecx
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 20: je 0x58593320
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 108h], ecx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 95 F8 FE FF FF: call dword ptr [ebp - 0x108]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859332a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 9f4h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 9f8h], 0
        ; Exact mapped bytes 74 49: je 0x5859338c
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 9f8h]
        mov dword ptr [ebp - 4ch], edx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 20: je 0x58593375
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 110h], edx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 95 F0 FE FF FF: call dword ptr [ebp - 0x110]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859337f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 9f8h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859339e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 19h
        ; Exact mapped bytes 0F 8D 86 01 00 00: jge 0x5859352e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585933ba
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 78: jge 0x58593438
        __asm _emit 0x7d
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 22ch]
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 5D: je 0x58593433
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 22ch]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 50h], edx
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 20: je 0x58593412
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 118h], edx
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 95 E8 FE FF FF: call dword ptr [ebp - 0x118]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859341c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 22ch]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + eax*4], 0
        ; Exact mapped bytes E9 79 FF FF FF: jmp 0x585933b1
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859344a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 7D 78: jge 0x585934c8
        __asm _emit 0x7d
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 2f4h]
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 5D: je 0x585934c3
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 2f4h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 54h], ecx
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 20: je 0x585934a2
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 120h], ecx
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 95 E0 FE FF FF: call dword ptr [ebp - 0x120]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585934ac
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 2f4h]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes E9 79 FF FF FF: jmp 0x58593441
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + eax*4 + 3bch], 0
        ; Exact mapped bytes 74 51: je 0x58593529
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 3bch]
        mov dword ptr [ebp - 58h], ecx
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 20: je 0x5859350e
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 128h], ecx
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 95 D8 FE FF FF: call dword ptr [ebp - 0x128]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58593518
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 3bch], 0
        ; Exact mapped bytes E9 67 FE FF FF: jmp 0x58593395
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58593540
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 19h
        ; Exact mapped bytes 0F 8D 09 01 00 00: jge 0x58593653
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 164h]
        mov edx, 4
        imul eax, edx, 0
        cmp dword ptr [ecx + eax], 0
        ; Exact mapped bytes 74 67: je 0x585935cc
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 164h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 20: je 0x585935a6
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 130h], eax
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 95 D0 FE FF FF: call dword ptr [ebp - 0x130]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585935b0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 164h]
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [eax + edx], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 164h]
        mov eax, 4
        shl eax, 0
        cmp dword ptr [edx + eax], 0
        ; Exact mapped bytes 74 67: je 0x5859364e
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 164h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 60h], edx
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 20: je 0x58593628
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 138h], edx
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 95 C8 FE FF FF: call dword ptr [ebp - 0x138]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58593632
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 164h]
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax], 0
        ; Exact mapped bytes E9 E4 FE FF FF: jmp 0x58593537
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58593665
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 63: jge 0x585936ce
        __asm _emit 0x7d
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx*4 + 420h], 0
        ; Exact mapped bytes 74 51: je 0x585936cc
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 420h]
        mov dword ptr [ebp - 64h], eax
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 20: je 0x585936b1
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 140h], eax
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 95 C0 FE FF FF: call dword ptr [ebp - 0x140]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585936bb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4 + 420h], 0
        ; Exact mapped bytes EB 8E: jmp 0x5859365c
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x585936e0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ecx + 9e8h]
        ; Exact mapped bytes 7D 63: jge 0x58593751
        __asm _emit 0x7d
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + eax*4 + 810h], 0
        ; Exact mapped bytes 74 51: je 0x5859374f
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 810h]
        mov dword ptr [ebp - 68h], ecx
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 20: je 0x58593734
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 148h], ecx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes FF 95 B8 FE FF FF: call dword ptr [ebp - 0x148]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859373e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 810h], 0
        ; Exact mapped bytes EB 86: jmp 0x585936d7
        __asm _emit 0xeb
        __asm _emit 0x86
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A7 3A 00 00: call 0x58597200
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 770h], 0
        ; Exact mapped bytes 74 49: je 0x585937af
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 770h]
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 20: je 0x58593798
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 150h], eax
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 95 B0 FE FF FF: call dword ptr [ebp - 0x150]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585937a2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 154h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 770h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 778h], 0
        ; Exact mapped bytes 74 49: je 0x58593804
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 778h]
        mov dword ptr [ebp - 70h], ecx
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 20: je 0x585937ed
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 158h], ecx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes FF 95 A8 FE FF FF: call dword ptr [ebp - 0x158]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585937f7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 15ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 778h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 77ch], 0
        ; Exact mapped bytes 74 49: je 0x58593859
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 77ch]
        mov dword ptr [ebp - 74h], edx
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 20: je 0x58593842
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 160h], edx
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes FF 95 A0 FE FF FF: call dword ptr [ebp - 0x160]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859384c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 164h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 77ch], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 11ch], 0
        ; Exact mapped bytes 74 49: je 0x585938ae
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 11ch]
        mov dword ptr [ebp - 78h], eax
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 20: je 0x58593897
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 168h], eax
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes FF 95 98 FE FF FF: call dword ptr [ebp - 0x168]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585938a1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 16ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 11ch], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 118h], 0
        ; Exact mapped bytes 74 49: je 0x58593903
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 118h]
        mov dword ptr [ebp - 7ch], ecx
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 20: je 0x585938ec
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 170h], ecx
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes FF 95 90 FE FF FF: call dword ptr [ebp - 0x170]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585938f6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 174h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 118h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 124h], 0
        ; Exact mapped bytes 74 49: je 0x58593958
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 124h]
        mov dword ptr [ebp - 80h], edx
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 20: je 0x58593941
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 178h], edx
        push 1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes FF 95 88 FE FF FF: call dword ptr [ebp - 0x178]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859394b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 17ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 124h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 120h], 0
        ; Exact mapped bytes 74 55: je 0x585939b9
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 84h], eax
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 26: je 0x585939a2
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 84h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 180h], eax
        push 1
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 95 80 FE FF FF: call dword ptr [ebp - 0x180]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585939ac
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 184h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 120h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 12ch], 0
        ; Exact mapped bytes 74 55: je 0x58593a1a
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12ch]
        mov dword ptr [ebp - 88h], ecx
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 26: je 0x58593a03
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 188h], ecx
        push 1
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes FF 95 78 FE FF FF: call dword ptr [ebp - 0x188]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58593a0d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 18ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 12ch], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 128h], 0
        ; Exact mapped bytes 74 55: je 0x58593a7b
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 128h]
        mov dword ptr [ebp - 8ch], edx
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 26: je 0x58593a64
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 190h], edx
        push 1
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes FF 95 70 FE FF FF: call dword ptr [ebp - 0x190]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58593a6e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 194h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 128h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58593a8d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 4C 01 00 00: jge 0x58593be3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx*4 + 78ch], 0
        ; Exact mapped bytes 74 5D: je 0x58593b04
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 78ch]
        mov dword ptr [ebp - 90h], eax
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 26: je 0x58593ae9
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 198h], eax
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes FF 95 68 FE FF FF: call dword ptr [ebp - 0x198]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58593af3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 19ch], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4 + 78ch], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + eax*4 + 580h], 0
        ; Exact mapped bytes 74 5D: je 0x58593b71
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 580h]
        mov dword ptr [ebp - 94h], ecx
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 26: je 0x58593b56
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1a0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes FF 95 60 FE FF FF: call dword ptr [ebp - 0x1a0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58593b60
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a4h], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 580h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + ecx*4 + 798h], 0
        ; Exact mapped bytes 74 5D: je 0x58593bde
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 798h]
        mov dword ptr [ebp - 98h], edx
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 26: je 0x58593bc3
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 98h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1a8h], edx
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes FF 95 58 FE FF FF: call dword ptr [ebp - 0x1a8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x58593bcd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ach], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 798h], 0
        ; Exact mapped bytes E9 A1 FE FF FF: jmp 0x58593a84
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 7a0h], 0
        ; Exact mapped bytes 74 55: je 0x58593c44
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 7a0h]
        mov dword ptr [ebp - 9ch], ecx
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 26: je 0x58593c2d
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1b0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes FF 95 50 FE FF FF: call dword ptr [ebp - 0x1b0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58593c37
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 7a0h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58593c56
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 9
        ; Exact mapped bytes 0F 8D 66 04 00 00: jge 0x585940c6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 14h], 0e84h
        cmp dword ptr [ecx + 588f4f74h], 0
        ; Exact mapped bytes 0F 84 8B 03 00 00: je 0x58593fff
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7f4h]
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 61: je 0x58593ce7
        __asm _emit 0x74
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7f4h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0a0h], edx
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 26: je 0x58593cca
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1b8h], edx
        push 1
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes FF 95 48 FE FF FF: call dword ptr [ebp - 0x1b8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58593cd4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1bch], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 7f4h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + edx*4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 7f8h]
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 61: je 0x58593d5a
        __asm _emit 0x74
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 7f8h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0a4h], eax
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 26: je 0x58593d3d
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0a4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1c0h], eax
        push 1
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes FF 95 40 FE FF FF: call dword ptr [ebp - 0x1c0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58593d47
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7f8h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + eax*4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7fch]
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 61: je 0x58593dcd
        __asm _emit 0x74
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7fch]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0a8h], ecx
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 26: je 0x58593db0
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1c8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes FF 95 38 FE FF FF: call dword ptr [ebp - 0x1c8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58593dba
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1cch], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7fch]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + ecx*4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 800h]
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 61: je 0x58593e40
        __asm _emit 0x74
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 800h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0ach], edx
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 26: je 0x58593e23
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0ach]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1d0h], edx
        push 1
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes FF 95 30 FE FF FF: call dword ptr [ebp - 0x1d0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58593e2d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 800h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + edx*4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 808h]
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 61: je 0x58593eb3
        __asm _emit 0x74
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 808h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0b0h], eax
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 26: je 0x58593e96
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0b0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1d8h], eax
        push 1
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes FF 95 28 FE FF FF: call dword ptr [ebp - 0x1d8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58593ea0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1dch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 808h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + eax*4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 80ch]
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 61: je 0x58593f26
        __asm _emit 0x74
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 80ch]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0b4h], ecx
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 26: je 0x58593f09
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0b4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1e0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes FF 95 20 FE FF FF: call dword ptr [ebp - 0x1e0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58593f13
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 80ch]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + ecx*4], 0
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58593f38
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 4
        ; Exact mapped bytes 0F 8D BD 00 00 00: jge 0x58593fff
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x58593f54
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 0F 8D 9C 00 00 00: jge 0x58593ffa
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 804h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 79: je 0x58593ff5
        __asm _emit 0x74
        __asm _emit 0x79
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 804h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + eax*4]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0b8h], eax
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 26: je 0x58593fcc
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1e8h], eax
        push 1
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes FF 95 18 FE FF FF: call dword ptr [ebp - 0x1e8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x58593fd6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ech], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 804h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes E9 51 FF FF FF: jmp 0x58593f4b
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 30 FF FF FF: jmp 0x58593f2f
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58594011
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 4
        ; Exact mapped bytes 7D 5F: jge 0x58594076
        __asm _emit 0x7d
        __asm _emit 0x5f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 804h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 45: je 0x58594074
        __asm _emit 0x74
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 804h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 1f0h], ecx
        push 4
        mov edx, dword ptr [ebp - 1f0h]
        push edx
        ; Exact mapped bytes E8 DC CF 29 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xcf
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 804h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes EB 92: jmp 0x58594008
        __asm _emit 0xeb
        __asm _emit 0x92
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 804h]
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 39: je 0x585940c1
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 804h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 1f4h], edx
        push 4
        mov eax, dword ptr [ebp - 1f4h]
        push eax
        ; Exact mapped bytes E8 89 CF 29 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xcf
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 804h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + eax*4], 0
        ; Exact mapped bytes E9 87 FB FF FF: jmp 0x58593c4d
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 7f4h], 0
        ; Exact mapped bytes 74 2D: je 0x585940ff
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7f4h]
        mov dword ptr [ebp - 1f8h], eax
        push 4
        mov ecx, dword ptr [ebp - 1f8h]
        push ecx
        ; Exact mapped bytes E8 45 CF 29 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xcf
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 7f4h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 7f8h], 0
        ; Exact mapped bytes 74 2D: je 0x58594138
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7f8h]
        mov dword ptr [ebp - 1fch], edx
        push 4
        mov eax, dword ptr [ebp - 1fch]
        push eax
        ; Exact mapped bytes E8 0C CF 29 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xcf
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 7f8h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 7fch], 0
        ; Exact mapped bytes 74 2D: je 0x58594171
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 7fch]
        mov dword ptr [ebp - 200h], ecx
        push 4
        mov edx, dword ptr [ebp - 200h]
        push edx
        ; Exact mapped bytes E8 D3 CE 29 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xce
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 7fch], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 800h], 0
        ; Exact mapped bytes 74 2D: je 0x585941aa
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 800h]
        mov dword ptr [ebp - 204h], eax
        push 4
        mov ecx, dword ptr [ebp - 204h]
        push ecx
        ; Exact mapped bytes E8 9A CE 29 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xce
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 800h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 808h], 0
        ; Exact mapped bytes 74 2D: je 0x585941e3
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 808h]
        mov dword ptr [ebp - 208h], edx
        push 4
        mov eax, dword ptr [ebp - 208h]
        push eax
        ; Exact mapped bytes E8 61 CE 29 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xce
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 808h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 80ch], 0
        ; Exact mapped bytes 74 2D: je 0x5859421c
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 80ch]
        mov dword ptr [ebp - 20ch], ecx
        push 4
        mov edx, dword ptr [ebp - 20ch]
        push edx
        ; Exact mapped bytes E8 28 CE 29 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xce
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 80ch], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 804h], 0
        ; Exact mapped bytes 74 2D: je 0x58594255
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 804h]
        mov dword ptr [ebp - 210h], eax
        push 4
        mov ecx, dword ptr [ebp - 210h]
        push ecx
        ; Exact mapped bytes E8 EF CD 29 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xcd
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 804h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0adch], 0
        ; Exact mapped bytes 74 55: je 0x585942b6
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0adch]
        mov dword ptr [ebp - 0bch], edx
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 26: je 0x5859429f
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 214h], edx
        push 1
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 95 EC FD FF FF: call dword ptr [ebp - 0x214]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585942a9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 218h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0adch], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F2 15 22 00: call 0x587b58b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x15
        __asm _emit 0x22
        __asm _emit 0x00
        nop
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
        ret
    }
}
