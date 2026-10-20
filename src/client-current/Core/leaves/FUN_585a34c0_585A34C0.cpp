// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585A34C0 .. +0x1D20 bytes.
extern "C" __declspec(naked) void FUN_585a34c0_585A34C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58884ff0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 38ch
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
        mov dword ptr [eax], 588aba08h
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x585a3506
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 0F 8D 95 00 00 00: jge 0x585a35a5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585a3522
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 78: jge 0x585a35a0
        __asm _emit 0x7d
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 0ddch]
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 5D: je 0x585a359b
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 0ddch]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 20: je 0x585a357a
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 148h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 95 B8 FE FF FF: call dword ptr [ebp - 0x148]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3584
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 0ddch]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + eax*4], 0
        ; Exact mapped bytes E9 79 FF FF FF: jmp 0x585a3519
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 58 FF FF FF: jmp 0x585a34fd
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x585a35b7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 74 63: je 0x585a3620
        __asm _emit 0x74
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx*4 + 90h], 0
        ; Exact mapped bytes 74 51: je 0x585a361e
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 90h]
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 20: je 0x585a3603
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 150h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 95 B0 FE FF FF: call dword ptr [ebp - 0x150]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a360d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 154h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4 + 90h], 0
        ; Exact mapped bytes EB 8E: jmp 0x585a35ae
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov dword ptr [ebp - 14h], 1ch
        ; Exact mapped bytes EB 09: jmp 0x585a3632
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 0F 8D C7 00 00 00: jge 0x585a3703
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + ecx*4 + 578h], 0
        ; Exact mapped bytes 74 51: je 0x585a369d
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 578h]
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 20: je 0x585a3682
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 158h], edx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 95 A8 FE FF FF: call dword ptr [ebp - 0x158]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a368c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 15ch], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 578h], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx*4 + 568h], 0
        ; Exact mapped bytes 74 51: je 0x585a36fe
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 568h]
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 20: je 0x585a36e3
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 160h], eax
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 95 A0 FE FF FF: call dword ptr [ebp - 0x160]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a36ed
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 164h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4 + 568h], 0
        ; Exact mapped bytes E9 26 FF FF FF: jmp 0x585a3629
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 6ch], 0
        ; Exact mapped bytes 74 43: je 0x585a374f
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 34h], edx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 20: je 0x585a373b
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 168h], edx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 95 98 FE FF FF: call dword ptr [ebp - 0x168]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3745
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 16ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 6ch], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1028h], 0
        ; Exact mapped bytes 74 30: je 0x585a378b
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1028h]
        mov dword ptr [ebp - 170h], eax
        push 3c8h
        mov ecx, dword ptr [ebp - 170h]
        push ecx
        ; Exact mapped bytes E8 B9 D8 28 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xd8
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1028h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 46ch], 0
        ; Exact mapped bytes 74 49: je 0x585a37e0
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 46ch]
        mov dword ptr [ebp - 38h], edx
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 20: je 0x585a37c9
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 174h], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 95 8C FE FF FF: call dword ptr [ebp - 0x174]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a37d3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 178h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 46ch], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 468h], 0
        ; Exact mapped bytes 74 49: je 0x585a3835
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 468h]
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 20: je 0x585a381e
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 17ch], eax
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 95 84 FE FF FF: call dword ptr [ebp - 0x17c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3828
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 180h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 468h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 464h], 0
        ; Exact mapped bytes 74 49: je 0x585a388a
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 464h]
        mov dword ptr [ebp - 40h], ecx
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 20: je 0x585a3873
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 184h], ecx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 95 7C FE FF FF: call dword ptr [ebp - 0x184]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a387d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 188h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 464h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 460h], 0
        ; Exact mapped bytes 74 49: je 0x585a38df
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 460h]
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 20: je 0x585a38c8
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 18ch], edx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 95 74 FE FF FF: call dword ptr [ebp - 0x18c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a38d2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 190h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 460h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 45ch], 0
        ; Exact mapped bytes 74 49: je 0x585a3934
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 45ch]
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 20: je 0x585a391d
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 194h], eax
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 95 6C FE FF FF: call dword ptr [ebp - 0x194]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3927
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 198h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 45ch], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx + 354h], 0
        ; Exact mapped bytes 74 5B: je 0x585a39a4
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 354h]
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 20: je 0x585a3984
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 19ch], eax
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 95 64 FE FF FF: call dword ptr [ebp - 0x19c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a398e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a0h], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 354h], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + ecx + 354h], 0
        ; Exact mapped bytes 74 5B: je 0x585a3a14
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 354h]
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 20: je 0x585a39f4
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1a4h], eax
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 95 5C FE FF FF: call dword ptr [ebp - 0x1a4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a39fe
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a8h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 354h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0c0h], 0
        ; Exact mapped bytes 74 49: je 0x585a3a69
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 20: je 0x585a3a52
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1ach], eax
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 95 54 FE FF FF: call dword ptr [ebp - 0x1ac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3a5c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0c0h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 5f8h], 0
        ; Exact mapped bytes 74 49: je 0x585a3abe
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5f8h]
        mov dword ptr [ebp - 58h], ecx
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 20: je 0x585a3aa7
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1b4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 95 4C FE FF FF: call dword ptr [ebp - 0x1b4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3ab1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 5f8h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 59ch], 0
        ; Exact mapped bytes 74 49: je 0x585a3b13
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 59ch]
        mov dword ptr [ebp - 5ch], edx
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 20: je 0x585a3afc
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1bch], edx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 95 44 FE FF FF: call dword ptr [ebp - 0x1bc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3b06
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 59ch], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 5cch], 0
        ; Exact mapped bytes 74 49: je 0x585a3b68
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5cch]
        mov dword ptr [ebp - 60h], eax
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 20: je 0x585a3b51
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1c4h], eax
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 95 3C FE FF FF: call dword ptr [ebp - 0x1c4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3b5b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 5cch], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 5c8h], 0
        ; Exact mapped bytes 74 49: je 0x585a3bbd
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5c8h]
        mov dword ptr [ebp - 64h], ecx
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 20: je 0x585a3ba6
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1cch], ecx
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 95 34 FE FF FF: call dword ptr [ebp - 0x1cc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3bb0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 5c8h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 5d0h], 0
        ; Exact mapped bytes 74 49: je 0x585a3c12
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5d0h]
        mov dword ptr [ebp - 68h], edx
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 20: je 0x585a3bfb
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1d4h], edx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes FF 95 2C FE FF FF: call dword ptr [ebp - 0x1d4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3c05
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5d0h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0dd4h], 0
        ; Exact mapped bytes 74 49: je 0x585a3c67
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0dd4h]
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 20: je 0x585a3c50
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1dch], eax
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 95 24 FE FF FF: call dword ptr [ebp - 0x1dc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3c5a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0dd4h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0dcch], 0
        ; Exact mapped bytes 74 49: je 0x585a3cbc
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0dcch]
        mov dword ptr [ebp - 70h], ecx
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 20: je 0x585a3ca5
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1e4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes FF 95 1C FE FF FF: call dword ptr [ebp - 0x1e4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3caf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0dcch], 0
        ; Exact mapped bytes 83 3D AC 06 96 58 00: cmp dword ptr [0x589606ac], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 42: je 0x585a3d07
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 AC 06 96 58: mov eax, dword ptr [0x589606ac]
        __asm _emit 0xa1
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 74h], eax
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 20: je 0x585a3cf3
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1ech], eax
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes FF 95 14 FE FF FF: call dword ptr [ebp - 0x1ec]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3cfd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f0h], 0
        ; Exact mapped bytes C7 05 AC 06 96 58 00 00 00 00: mov dword ptr [0x589606ac], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 74 07 96 58 00: cmp dword ptr [0x58960774], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x585a3d53
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 78h], ecx
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 20: je 0x585a3d3f
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1f4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes FF 95 0C FE FF FF: call dword ptr [ebp - 0x1f4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3d49
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f8h], 0
        ; Exact mapped bytes C7 05 74 07 96 58 00 00 00 00: mov dword ptr [0x58960774], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A8 06 96 58 00: cmp dword ptr [0x589606a8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x585a3d9f
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 A8 06 96 58: mov edx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 7ch], edx
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 20: je 0x585a3d8b
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1fch], edx
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes FF 95 04 FE FF FF: call dword ptr [ebp - 0x1fc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 200h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3d95
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 200h], 0
        ; Exact mapped bytes C7 05 A8 06 96 58 00 00 00 00: mov dword ptr [0x589606a8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 70h], 0
        ; Exact mapped bytes 74 43: je 0x585a3deb
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 80h], edx
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 20: je 0x585a3dd7
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 204h], edx
        push 1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes FF 95 FC FD FF FF: call dword ptr [ebp - 0x204]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 208h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3de1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 208h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 70h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 74 4F: je 0x585a3e43
        __asm _emit 0x74
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 84h], eax
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 26: je 0x585a3e2f
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 84h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 20ch], eax
        push 1
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 95 F4 FD FF FF: call dword ptr [ebp - 0x20c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3e39
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 210h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 74h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 74 4F: je 0x585a3e9b
        __asm _emit 0x74
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 88h], ecx
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 26: je 0x585a3e87
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 214h], ecx
        push 1
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes FF 95 EC FD FF FF: call dword ptr [ebp - 0x214]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3e91
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 218h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 78h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 74 4F: je 0x585a3ef3
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 8ch], edx
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 26: je 0x585a3edf
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 21ch], edx
        push 1
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes FF 95 E4 FD FF FF: call dword ptr [ebp - 0x21c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3ee9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 220h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 7ch], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 74 55: je 0x585a3f54
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 90h], eax
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 26: je 0x585a3f3d
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 224h], eax
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes FF 95 DC FD FF FF: call dword ptr [ebp - 0x224]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 228h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3f47
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 228h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 80h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 84h], 0
        ; Exact mapped bytes 74 55: je 0x585a3fb5
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 94h], ecx
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 26: je 0x585a3f9e
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 22ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes FF 95 D4 FD FF FF: call dword ptr [ebp - 0x22c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a3fa8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 230h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 84h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 74 55: je 0x585a4016
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 98h], edx
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 26: je 0x585a3fff
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 98h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 234h], edx
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes FF 95 CC FD FF FF: call dword ptr [ebp - 0x234]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4009
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 238h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 88h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 8ch], 0
        ; Exact mapped bytes 74 55: je 0x585a4077
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 9ch], eax
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 26: je 0x585a4060
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 23ch], eax
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes FF 95 C4 FD FF FF: call dword ptr [ebp - 0x23c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 240h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a406a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 240h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8ch], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D1 83 00 00: call 0x585ac450
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 5d4h], 0
        ; Exact mapped bytes 74 55: je 0x585a40e1
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5d4h]
        mov dword ptr [ebp - 0a0h], ecx
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 26: je 0x585a40ca
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 244h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes FF 95 BC FD FF FF: call dword ptr [ebp - 0x244]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 248h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a40d4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 248h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 5d4h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 5fch], 0
        ; Exact mapped bytes 74 55: je 0x585a4142
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5fch]
        mov dword ptr [ebp - 0a4h], edx
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 26: je 0x585a412b
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0a4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 24ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes FF 95 B4 FD FF FF: call dword ptr [ebp - 0x24c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4135
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 250h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5fch], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx + 0b8h], 0
        ; Exact mapped bytes 74 67: je 0x585a41be
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0b8h]
        mov dword ptr [ebp - 0a8h], ecx
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 26: je 0x585a419e
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 254h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes FF 95 AC FD FF FF: call dword ptr [ebp - 0x254]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 258h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a41a8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 258h], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 0b8h], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx + 0b8h], 0
        ; Exact mapped bytes 74 67: je 0x585a423a
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 0ach], eax
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 26: je 0x585a421a
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0ach]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 25ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes FF 95 A4 FD FF FF: call dword ptr [ebp - 0x25c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4224
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 260h], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 0b8h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 594h], 0
        ; Exact mapped bytes 74 55: je 0x585a429b
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 594h]
        mov dword ptr [ebp - 0b0h], edx
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 26: je 0x585a4284
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0b0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 264h], edx
        push 1
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes FF 95 9C FD FF FF: call dword ptr [ebp - 0x264]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a428e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 268h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 594h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 590h], 0
        ; Exact mapped bytes 74 55: je 0x585a42fc
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 590h]
        mov dword ptr [ebp - 0b4h], eax
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 26: je 0x585a42e5
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0b4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 26ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes FF 95 94 FD FF FF: call dword ptr [ebp - 0x26c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 270h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a42ef
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 270h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 590h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 58ch], 0
        ; Exact mapped bytes 74 55: je 0x585a435d
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 58ch]
        mov dword ptr [ebp - 0b8h], ecx
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 26: je 0x585a4346
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 274h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes FF 95 8C FD FF FF: call dword ptr [ebp - 0x274]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 278h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4350
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 278h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 58ch], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 598h], 0
        ; Exact mapped bytes 74 55: je 0x585a43be
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 598h]
        mov dword ptr [ebp - 0bch], edx
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 26: je 0x585a43a7
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 27ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 95 84 FD FF FF: call dword ptr [ebp - 0x27c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 280h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a43b1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 280h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 598h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 5a4h], 0
        ; Exact mapped bytes 74 55: je 0x585a441f
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5a4h]
        mov dword ptr [ebp - 0c0h], eax
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 26: je 0x585a4408
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0c0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 284h], eax
        push 1
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes FF 95 7C FD FF FF: call dword ptr [ebp - 0x284]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 288h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4412
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 288h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 5a4h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 5a0h], 0
        ; Exact mapped bytes 74 55: je 0x585a4480
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5a0h]
        mov dword ptr [ebp - 0c4h], ecx
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 26: je 0x585a4469
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0c4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 28ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes FF 95 74 FD FF FF: call dword ptr [ebp - 0x28c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4473
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 290h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 5a0h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 5ach], 0
        ; Exact mapped bytes 74 55: je 0x585a44e1
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5ach]
        mov dword ptr [ebp - 0c8h], edx
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 26: je 0x585a44ca
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0c8h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 294h], edx
        push 1
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes FF 95 6C FD FF FF: call dword ptr [ebp - 0x294]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 298h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a44d4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 298h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5ach], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 5a8h], 0
        ; Exact mapped bytes 74 55: je 0x585a4542
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5a8h]
        mov dword ptr [ebp - 0cch], eax
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 26: je 0x585a452b
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0cch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 29ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes FF 95 64 FD FF FF: call dword ptr [ebp - 0x29c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4535
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2a0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 5a8h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 5b0h], 0
        ; Exact mapped bytes 74 55: je 0x585a45a3
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5b0h]
        mov dword ptr [ebp - 0d0h], ecx
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 26: je 0x585a458c
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2a4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes FF 95 5C FD FF FF: call dword ptr [ebp - 0x2a4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4596
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2a8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 5b0h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 5b4h], 0
        ; Exact mapped bytes 74 55: je 0x585a4604
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5b4h]
        mov dword ptr [ebp - 0d4h], edx
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 26: je 0x585a45ed
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2ach], edx
        push 1
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes FF 95 54 FD FF FF: call dword ptr [ebp - 0x2ac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a45f7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2b0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5b4h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 5b8h], 0
        ; Exact mapped bytes 74 55: je 0x585a4665
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5b8h]
        mov dword ptr [ebp - 0d8h], eax
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 26: je 0x585a464e
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0d8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2b4h], eax
        push 1
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes FF 95 4C FD FF FF: call dword ptr [ebp - 0x2b4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4658
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2b8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 5b8h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 5bch], 0
        ; Exact mapped bytes 74 55: je 0x585a46c6
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5bch]
        mov dword ptr [ebp - 0dch], ecx
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 26: je 0x585a46af
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2bch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes FF 95 44 FD FF FF: call dword ptr [ebp - 0x2bc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a46b9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2c0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 5bch], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 5c0h], 0
        ; Exact mapped bytes 74 55: je 0x585a4727
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5c0h]
        mov dword ptr [ebp - 0e0h], edx
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 26: je 0x585a4710
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0e0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2c4h], edx
        push 1
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes FF 95 3C FD FF FF: call dword ptr [ebp - 0x2c4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a471a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2c8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5c0h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 5c4h], 0
        ; Exact mapped bytes 74 55: je 0x585a4788
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5c4h]
        mov dword ptr [ebp - 0e4h], eax
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 26: je 0x585a4771
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0e4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2cch], eax
        push 1
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes FF 95 34 FD FF FF: call dword ptr [ebp - 0x2cc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a477b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2d0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 5c4h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 4d8h], 0
        ; Exact mapped bytes 74 55: je 0x585a47e9
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4d8h]
        mov dword ptr [ebp - 0e8h], ecx
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 26: je 0x585a47d2
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2d4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes FF 95 2C FD FF FF: call dword ptr [ebp - 0x2d4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a47dc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2d8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4d8h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 4dch], 0
        ; Exact mapped bytes 74 55: je 0x585a484a
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4dch]
        mov dword ptr [ebp - 0ech], edx
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 26: je 0x585a4833
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0ech]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2dch], edx
        push 1
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes FF 95 24 FD FF FF: call dword ptr [ebp - 0x2dc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a483d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2e0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4dch], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4e0h], 0
        ; Exact mapped bytes 74 55: je 0x585a48ab
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4e0h]
        mov dword ptr [ebp - 0f0h], eax
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 26: je 0x585a4894
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0f0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2e4h], eax
        push 1
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes FF 95 1C FD FF FF: call dword ptr [ebp - 0x2e4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a489e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2e8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4e0h], 0
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x585a48bd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 5
        ; Exact mapped bytes 7D 6F: jge 0x585a4932
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + eax*4 + 4e4h], 0
        ; Exact mapped bytes 74 5D: je 0x585a4930
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 4e4h]
        mov dword ptr [ebp - 0f4h], ecx
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 26: je 0x585a4915
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0f4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2ech], ecx
        push 1
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes FF 95 14 FD FF FF: call dword ptr [ebp - 0x2ec]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a491f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2f0h], 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 4e4h], 0
        ; Exact mapped bytes EB 82: jmp 0x585a48b4
        __asm _emit 0xeb
        __asm _emit 0x82
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0da8h], 0
        ; Exact mapped bytes 74 55: je 0x585a4993
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0da8h]
        mov dword ptr [ebp - 0f8h], eax
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 26: je 0x585a497c
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0f8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2f4h], eax
        push 1
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes FF 95 0C FD FF FF: call dword ptr [ebp - 0x2f4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4986
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2f8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0da8h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0dc8h], 0
        ; Exact mapped bytes 74 55: je 0x585a49f4
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0dc8h]
        mov dword ptr [ebp - 0fch], ecx
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 26: je 0x585a49dd
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0fch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2fch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes FF 95 04 FD FF FF: call dword ptr [ebp - 0x2fc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 300h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a49e7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 300h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0dc8h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0dach], 0
        ; Exact mapped bytes 74 55: je 0x585a4a55
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0dach]
        mov dword ptr [ebp - 100h], edx
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 26: je 0x585a4a3e
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 304h], edx
        push 1
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes FF 95 FC FC FF FF: call dword ptr [ebp - 0x304]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 308h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4a48
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 308h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0dach], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0dbch], 0
        ; Exact mapped bytes 74 55: je 0x585a4ab6
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0dbch]
        mov dword ptr [ebp - 104h], eax
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 74 26: je 0x585a4a9f
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 104h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 30ch], eax
        push 1
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes FF 95 F4 FC FF FF: call dword ptr [ebp - 0x30c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 310h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4aa9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 310h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0dbch], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0db0h], 0
        ; Exact mapped bytes 74 55: je 0x585a4b17
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0db0h]
        mov dword ptr [ebp - 108h], ecx
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 26: je 0x585a4b00
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 314h], ecx
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes FF 95 EC FC FF FF: call dword ptr [ebp - 0x314]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 318h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4b0a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 318h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0db0h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0db8h], 0
        ; Exact mapped bytes 74 55: je 0x585a4b78
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0db8h]
        mov dword ptr [ebp - 10ch], edx
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 26: je 0x585a4b61
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 31ch], edx
        push 1
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes FF 95 E4 FC FF FF: call dword ptr [ebp - 0x31c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 320h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4b6b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 320h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0db8h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0db4h], 0
        ; Exact mapped bytes 74 55: je 0x585a4bd9
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0db4h]
        mov dword ptr [ebp - 110h], eax
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 26: je 0x585a4bc2
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 324h], eax
        push 1
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes FF 95 DC FC FF FF: call dword ptr [ebp - 0x324]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 328h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4bcc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 328h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0db4h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0dd0h], 0
        ; Exact mapped bytes 74 55: je 0x585a4c3a
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0dd0h]
        mov dword ptr [ebp - 114h], ecx
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 26: je 0x585a4c23
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 32ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes FF 95 D4 FC FF FF: call dword ptr [ebp - 0x32c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 330h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4c2d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 330h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0dd0h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0dc0h], 0
        ; Exact mapped bytes 74 55: je 0x585a4c9b
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0dc0h]
        mov dword ptr [ebp - 118h], edx
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 26: je 0x585a4c84
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 118h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 334h], edx
        push 1
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes FF 95 CC FC FF FF: call dword ptr [ebp - 0x334]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 338h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4c8e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 338h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0dc0h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 47ch], 0
        ; Exact mapped bytes 74 55: je 0x585a4cfc
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 47ch]
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 26: je 0x585a4ce5
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 11ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 33ch], eax
        push 1
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes FF 95 C4 FC FF FF: call dword ptr [ebp - 0x33c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 340h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4cef
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 340h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 47ch], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0a4h], 0
        ; Exact mapped bytes 74 55: je 0x585a4d5d
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 120h], ecx
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 26: je 0x585a4d46
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 120h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 344h], ecx
        push 1
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes FF 95 BC FC FF FF: call dword ptr [ebp - 0x344]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 348h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4d50
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 348h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0a4h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 4f8h], 0
        ; Exact mapped bytes 74 55: je 0x585a4dbe
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4f8h]
        mov dword ptr [ebp - 124h], edx
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 26: je 0x585a4da7
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 34ch], edx
        push 1
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes FF 95 B4 FC FF FF: call dword ptr [ebp - 0x34c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 350h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4db1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 350h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4f8h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4fch], 0
        ; Exact mapped bytes 74 55: je 0x585a4e1f
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4fch]
        mov dword ptr [ebp - 128h], eax
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 26: je 0x585a4e08
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 354h], eax
        push 1
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes FF 95 AC FC FF FF: call dword ptr [ebp - 0x354]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 358h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4e12
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 358h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4fch], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 500h], 0
        ; Exact mapped bytes 74 55: je 0x585a4e80
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 12ch], ecx
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 74 26: je 0x585a4e69
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 35ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes FF 95 A4 FC FF FF: call dword ptr [ebp - 0x35c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 360h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4e73
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 360h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 500h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 1030h], 0
        ; Exact mapped bytes 74 55: je 0x585a4ee1
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1030h]
        mov dword ptr [ebp - 130h], edx
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 26: je 0x585a4eca
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 130h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 364h], edx
        push 1
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes FF 95 9C FC FF FF: call dword ptr [ebp - 0x364]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 368h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4ed4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 368h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1030h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1034h], 0
        ; Exact mapped bytes 74 55: je 0x585a4f42
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1034h]
        mov dword ptr [ebp - 134h], eax
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 74 26: je 0x585a4f2b
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 134h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 36ch], eax
        push 1
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes FF 95 94 FC FF FF: call dword ptr [ebp - 0x36c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 370h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4f35
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 370h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1034h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 1038h], 0
        ; Exact mapped bytes 74 55: je 0x585a4fa3
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1038h]
        mov dword ptr [ebp - 138h], ecx
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 26: je 0x585a4f8c
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 138h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 374h], ecx
        push 1
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes FF 95 8C FC FF FF: call dword ptr [ebp - 0x374]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 378h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4f96
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 378h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1038h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0ach], 0
        ; Exact mapped bytes 74 55: je 0x585a5004
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 13ch], edx
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 74 26: je 0x585a4fed
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 37ch], edx
        push 1
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes FF 95 84 FC FF FF: call dword ptr [ebp - 0x37c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 380h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a4ff7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 380h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ach], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 474h], 0
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x585a50e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x585a5026
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 470h]
        cmp dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 7D 78: jge 0x585a50ad
        __asm _emit 0x7d
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 474h]
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 61: je 0x585a50a8
        __asm _emit 0x74
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 474h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 140h], edx
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 26: je 0x585a508b
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 140h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 384h], edx
        push 1
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes FF 95 7C FC FF FF: call dword ptr [ebp - 0x384]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 388h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a5095
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 388h], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 474h]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes E9 70 FF FF FF: jmp 0x585a501d
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 474h], 0
        ; Exact mapped bytes 74 2D: je 0x585a50e6
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 474h]
        mov dword ptr [ebp - 38ch], edx
        push 4
        mov eax, dword ptr [ebp - 38ch]
        push eax
        ; Exact mapped bytes E8 5E BF 28 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xbf
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 474h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 478h], 0
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x585a51c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x585a5108
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, byte ptr [ecx + 471h]
        cmp dword ptr [ebp - 18h], edx
        ; Exact mapped bytes 7D 78: jge 0x585a518f
        __asm _emit 0x7d
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 478h]
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 61: je 0x585a518a
        __asm _emit 0x74
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 478h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 144h], eax
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 74 26: je 0x585a516d
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 144h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 390h], eax
        push 1
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes FF 95 70 FC FF FF: call dword ptr [ebp - 0x390]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 394h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585a5177
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 394h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 478h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + eax*4], 0
        ; Exact mapped bytes E9 70 FF FF FF: jmp 0x585a50ff
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 478h], 0
        ; Exact mapped bytes 74 2D: je 0x585a51c8
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 478h]
        mov dword ptr [ebp - 398h], eax
        push 4
        mov ecx, dword ptr [ebp - 398h]
        push ecx
        ; Exact mapped bytes E8 7C BE 28 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xbe
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 478h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E0 06 21 00: call 0x587b58b0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x06
        __asm _emit 0x21
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
