// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585AD260 .. +0x290C bytes.
extern "C" __declspec(naked) void FUN_585ad260_585AD260() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588852a1h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 4a4h
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
        mov ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes E8 27 75 F3 FF: call 0x584e47c0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x75
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a8h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A6 C4 F7 FF: call 0x58529750
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xc4
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx edx, ax
        test edx, edx
        ; Exact mapped bytes 0F 85 E2 11 00 00: jne 0x585ae497
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 474h], 0
        ; Exact mapped bytes 0F 84 C6 00 00 00: je 0x585ad38b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585ad2d7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 470h]
        cmp dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 7D 6C: jge 0x585ad352
        __asm _emit 0x7d
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 474h]
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 55: je 0x585ad34d
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 474h]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 48h], ecx
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 20: je 0x585ad330
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 16ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 95 94 FE FF FF: call dword ptr [ebp - 0x16c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ad33a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 170h], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 474h]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes E9 7C FF FF FF: jmp 0x585ad2ce
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 474h], 0
        ; Exact mapped bytes 74 2D: je 0x585ad38b
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 474h]
        mov dword ptr [ebp - 174h], ecx
        push 4
        mov edx, dword ptr [ebp - 174h]
        push edx
        ; Exact mapped bytes E8 B9 3C 28 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x3c
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 474h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 478h], 0
        ; Exact mapped bytes 0F 84 C6 00 00 00: je 0x585ad461
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585ad3ad
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 471h]
        cmp dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes 7D 6C: jge 0x585ad428
        __asm _emit 0x7d
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 478h]
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 55: je 0x585ad423
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 478h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 4ch], edx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 20: je 0x585ad406
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 178h], edx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 95 88 FE FF FF: call dword ptr [ebp - 0x178]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ad410
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 17ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 478h]
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes E9 7C FF FF FF: jmp 0x585ad3a4
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 478h], 0
        ; Exact mapped bytes 74 2D: je 0x585ad461
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 478h]
        mov dword ptr [ebp - 180h], edx
        push 4
        mov eax, dword ptr [ebp - 180h]
        push eax
        ; Exact mapped bytes E8 E3 3B 28 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x3b
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 478h], 0
        push 84h
        ; Exact mapped bytes E8 99 3B 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x3b
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 42: je 0x585ad4c0
        __asm _emit 0x74
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 184h], eax
        push 1
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 86 76 ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x76
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 188h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 10h
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 95 A3 F3 FF: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xa3
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585ad4c7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 18ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18ch]
        mov dword ptr [eax + edx + 0b0h], ecx
        push 84h
        ; Exact mapped bytes E8 0B 3B 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x3b
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 45: je 0x585ad551
        __asm _emit 0x74
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 190h], eax
        push 0
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 F8 75 ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x75
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        push 108h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 194h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 10h
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 04 A3 F3 FF: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xa3
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x585ad558
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 198h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 198h]
        mov dword ptr [edx + ecx + 0b0h], eax
        push 84h
        ; Exact mapped bytes E8 7A 3A 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x3a
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 42: je 0x585ad5df
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 19ch], edx
        push 1
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 67 75 ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x75
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp - 1a0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 0ch
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 76 A2 F3 FF: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xa2
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585ad5e6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 1a4h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1a4h]
        mov dword ptr [edx + ecx + 34ch], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 34ch]
        mov dword ptr [ebp - 1a8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 5D 89 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x89
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        push 84h
        ; Exact mapped bytes E8 C6 39 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x39
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 42: je 0x585ad693
        __asm _emit 0x74
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 1ach], eax
        push 0
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 B3 74 ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x74
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 1b0h], eax
        push 54h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1b0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 0ch
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 C2 A1 F3 FF: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xa1
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x585ad69a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 1b4h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1b4h]
        mov dword ptr [edx + ecx + 34ch], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 34ch]
        mov dword ptr [ebp - 1b8h], eax
        push 0
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 A9 88 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x88
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 34ch]
        mov dword ptr [ebp - 1bch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 460h]
        push edx
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 5C 16 F0 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x16
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 34ch]
        mov dword ptr [ebp - 1c0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 464h]
        push ecx
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 2F 16 F0 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x16
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 34ch]
        mov dword ptr [ebp - 1c4h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 468h]
        push eax
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 02 16 F0 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x16
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 34ch]
        mov dword ptr [ebp - 1c8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 46ch]
        push edx
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 D5 15 F0 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 460h]
        mov dword ptr [ebp - 1d0h], ecx
        push 2bh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 73 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x73
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 1cch], eax
        mov edx, dword ptr [ebp - 1cch]
        push edx
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 91 94 ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 464h]
        mov dword ptr [ebp - 1d8h], ecx
        push 2
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 72 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x72
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        mov edx, dword ptr [ebp - 1d4h]
        push edx
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 5D 94 ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x94
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 468h]
        mov dword ptr [ebp - 1e0h], ecx
        push 0
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 72 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x72
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 1dch], eax
        mov edx, dword ptr [ebp - 1dch]
        push edx
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 29 94 ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x94
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 46ch]
        mov dword ptr [ebp - 1e8h], ecx
        push 2ch
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D 72 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x72
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 1e4h], eax
        mov edx, dword ptr [ebp - 1e4h]
        push edx
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 F5 93 ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x93
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5c8h]
        mov dword ptr [ebp - 1f0h], ecx
        push 13h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 99 72 ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x72
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        mov edx, dword ptr [ebp - 1ech]
        push edx
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 91 86 ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x86
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5cch]
        mov dword ptr [ebp - 1f8h], ecx
        push 0ch
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 72 ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x72
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        mov edx, dword ptr [ebp - 1f4h]
        push edx
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 5D 86 ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x86
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5d0h]
        mov dword ptr [ebp - 200h], ecx
        push 115h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E 72 ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x72
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 1fch], eax
        mov edx, dword ptr [ebp - 1fch]
        push edx
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 26 86 ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x86
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 58ch]
        mov dword ptr [ebp - 208h], ecx
        push 2bh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA 71 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x71
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 204h], eax
        mov edx, dword ptr [ebp - 204h]
        push edx
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 22 93 ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x93
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 590h]
        mov dword ptr [ebp - 210h], ecx
        push 2
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 71 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x71
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 20ch], eax
        mov edx, dword ptr [ebp - 20ch]
        push edx
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 EE 92 ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x92
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 594h]
        mov dword ptr [ebp - 218h], ecx
        push 0
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 71 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x71
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        mov edx, dword ptr [ebp - 214h]
        push edx
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 BA 92 ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x92
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 598h]
        mov dword ptr [ebp - 220h], ecx
        push 2ch
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 71 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x71
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], eax
        mov edx, dword ptr [ebp - 21ch]
        push edx
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 86 92 ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x92
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 58ch]
        mov dword ptr [ebp - 224h], ecx
        push 1fbh
        push 23bh
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 22 7C 20 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x7c
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 590h]
        mov dword ptr [ebp - 228h], eax
        push 194h
        push 27dh
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 FE 7B 20 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x7b
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 594h]
        mov dword ptr [ebp - 22ch], edx
        push 20ch
        push 13fh
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 DA 7B 20 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x7b
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 58ch]
        mov dword ptr [ebp - 230h], ecx
        push 0
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 4E 7B 20 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x7b
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 590h]
        mov dword ptr [ebp - 234h], eax
        push 0
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 32 7B 20 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x7b
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 594h]
        mov dword ptr [ebp - 238h], edx
        push 0
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 16 7B 20 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x7b
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 594h]
        mov dword ptr [ebp - 240h], ecx
        push 1
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 70 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x70
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 23ch], eax
        push 7
        mov edx, dword ptr [ebp - 23ch]
        push edx
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 50 ED F1 FF: call 0x584cc820
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xed
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 590h]
        mov dword ptr [ebp - 248h], ecx
        push 3
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 6F ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x6f
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], eax
        push 7
        mov edx, dword ptr [ebp - 244h]
        push edx
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 1A ED F1 FF: call 0x584cc820
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xed
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 58ch]
        mov dword ptr [ebp - 24ch], ecx
        push 121h
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 5B 83 ED FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 590h]
        mov dword ptr [ebp - 250h], eax
        push 121h
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 3C 83 ED FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 594h]
        mov dword ptr [ebp - 254h], edx
        push 121h
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 1D 83 ED FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 59ch]
        mov dword ptr [ebp - 258h], ecx
        push 0
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 11 84 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 7D 34 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x34
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov dword ptr [ebp - 4], 4
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 40: je 0x585adbda
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 25ch], eax
        push 0ah
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 6A 6F ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x6f
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        push 42h
        push 54h
        push 70h
        mov ecx, dword ptr [ebp - 260h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 4B 47 ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x47
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585adbe1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 264h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 264h]
        mov dword ptr [ecx + 480h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 480h]
        mov dword ptr [ebp - 268h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 91 79 20 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x79
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 480h]
        mov dword ptr [ebp - 26ch], eax
        push 0
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 05 82 ED FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x82
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 480h]
        mov dword ptr [ebp - 270h], edx
        push 0
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 89 82 ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 A5 33 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x33
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov dword ptr [ebp - 4], 5
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 43: je 0x585adcb5
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 274h], ecx
        push 0bh
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 92 6E ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x6e
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 278h], eax
        push 41h
        push 54h
        push 70h
        mov edx, dword ptr [ebp - 278h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 73 46 ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x46
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585adcbf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 27ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 27ch]
        mov dword ptr [edx + 484h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 484h]
        mov dword ptr [ebp - 280h], edx
        push 0
        mov ecx, dword ptr [ebp - 280h]
        ; Exact mapped bytes E8 E3 81 ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x81
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        push 0cch
        ; Exact mapped bytes E8 FC 32 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x32
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov dword ptr [ebp - 4], 6
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 21: je 0x585add42
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 66 6D F3 FF: call 0x584e4aa0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x6d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585add4c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 284h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 284h]
        mov dword ptr [edx + 0d84h], eax
        push 54h
        ; Exact mapped bytes E8 8F 32 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x32
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov dword ptr [ebp - 4], 7
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 6A: je 0x585addf8
        __asm _emit 0x74
        __asm _emit 0x6a
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx + 0b0h]
        ; Exact mapped bytes E8 6B 79 EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x79
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        add eax, 1eh
        ; Exact mapped bytes 66 89 45 E0: mov word ptr [ebp - 0x20], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 288h], edx
        push 5
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 55 6D ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x6d
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 28ch], eax
        movzx eax, word ptr [ebp - 20h]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 28ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 30 45 ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ade02
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 290h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 290h]
        mov dword ptr [ecx + 0d88h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d88h]
        mov dword ptr [ebp - 294h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 6D 77 20 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x77
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d88h]
        mov dword ptr [ebp - 298h], eax
        push 0
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 E1 7F ED FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x7f
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 9D 31 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x31
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov dword ptr [ebp - 4], 8
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 6A: je 0x585adeea
        __asm _emit 0x74
        __asm _emit 0x6a
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0b8h]
        ; Exact mapped bytes E8 79 78 EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        sub ecx, 5
        ; Exact mapped bytes 66 89 4D DE: mov word ptr [ebp - 0x22], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xde
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 29ch], eax
        push 2
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 63 6C ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x6c
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 2a0h], eax
        movzx ecx, word ptr [ebp - 22h]
        push ecx
        push 0
        push 0
        mov edx, dword ptr [ebp - 2a0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 3E 44 ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x44
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585adef4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov ecx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 2a4h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2a4h]
        mov dword ptr [edx + 0d8ch], eax
        push 54h
        ; Exact mapped bytes E8 E7 30 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x30
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov dword ptr [ebp - 4], 9
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 6A: je 0x585adfa0
        __asm _emit 0x74
        __asm _emit 0x6a
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx + 0b0h]
        ; Exact mapped bytes E8 C3 77 EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x77
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        add eax, 0fh
        ; Exact mapped bytes 66 89 45 DC: mov word ptr [ebp - 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 2a8h], edx
        push 3
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 AD 6B ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 2ach], eax
        movzx eax, word ptr [ebp - 24h]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 2ach]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 88 43 ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x43
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585adfaa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov eax, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 2b0h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2b0h]
        mov dword ptr [ecx + 0d90h], edx
        push 54h
        ; Exact mapped bytes E8 31 30 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x30
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov dword ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 6A: je 0x585ae056
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + eax + 0b0h]
        ; Exact mapped bytes E8 0D 77 EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x77
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        add edx, 14h
        ; Exact mapped bytes 66 89 55 DA: mov word ptr [ebp - 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 2b4h], ecx
        push 4
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 F7 6A ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x6a
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 2b8h], eax
        movzx edx, word ptr [ebp - 26h]
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 2b8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 D2 42 ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x42
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ae060
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov edx, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 2bch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2bch]
        mov dword ptr [eax + 0d94h], ecx
        push 54h
        ; Exact mapped bytes E8 7B 2F 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x2f
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov dword ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 61: je 0x585ae103
        __asm _emit 0x74
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 0d90h]
        ; Exact mapped bytes E8 60 76 EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x76
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        add eax, 0fh
        ; Exact mapped bytes 66 89 45 D8: mov word ptr [ebp - 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 2c0h], edx
        push 6
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 4A 6A ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x6a
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 2c4h], eax
        movzx eax, word ptr [ebp - 28h]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 2c4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 25 42 ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x42
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ae10d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov eax, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 2c8h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2c8h]
        mov dword ptr [ecx + 0d98h], edx
        push 54h
        ; Exact mapped bytes E8 CE 2E 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x2e
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov dword ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 61: je 0x585ae1b0
        __asm _emit 0x74
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d90h]
        ; Exact mapped bytes E8 B3 75 EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x75
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        sub ecx, 5
        ; Exact mapped bytes 66 89 4D D6: mov word ptr [ebp - 0x2a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd6
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 2cch], eax
        push 7
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 9D 69 ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x69
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 2d0h], eax
        movzx ecx, word ptr [ebp - 2ah]
        push ecx
        push 0
        push 0
        mov edx, dword ptr [ebp - 2d0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 78 41 ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x41
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ae1ba
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov ecx, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 2d4h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2d4h]
        mov dword ptr [edx + 0d9ch], eax
        push 58h
        ; Exact mapped bytes E8 21 2E 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x2e
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov dword ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 61: je 0x585ae25d
        __asm _emit 0x74
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 0d90h]
        ; Exact mapped bytes E8 06 75 EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x75
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        add edx, 0dh
        ; Exact mapped bytes 66 89 55 D4: mov word ptr [ebp - 0x2c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 2d8h], ecx
        push 8
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 F0 68 ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x68
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 2dch], eax
        movzx edx, word ptr [ebp - 2ch]
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 2dch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 3B 60 F5 FF: call 0x58504290
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x60
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ae267
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov edx, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 2e0h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2e0h]
        mov dword ptr [eax + 0da4h], ecx
        push 58h
        ; Exact mapped bytes E8 74 2D 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x2d
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov dword ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 3A: je 0x585ae2e3
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 0d9ch]
        ; Exact mapped bytes E8 59 74 EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x74
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 66 89 45 D2: mov word ptr [ebp - 0x2e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd2
        movzx ecx, word ptr [ebp - 2eh]
        push ecx
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 35 85 ED FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ae2ed
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov eax, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 2e4h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2e4h]
        mov dword ptr [ecx + 0da0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d84h]
        mov dword ptr [ebp - 2e8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0da0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0da4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d9ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d98h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d94h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d90h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d8ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d88h]
        push edx
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 E7 74 F3 FF: call 0x584e5860
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x74
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d84h]
        ; Exact mapped bytes E8 D9 72 F3 FF: call 0x584e5660
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x72
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d84h]
        mov dword ptr [ebp - 2ech], edx
        push 0a0h
        push 52h
        push 13h
        push 71h
        push 7fh
        push -1
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 B0 73 F3 FF: call 0x584e5760
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x73
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 488h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 48ch], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7C A1 00 00: call 0x585b8550
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 75 4E: jne 0x585ae42c
        __asm _emit 0x75
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 DA ED FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xda
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x585ae42c
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 18 F0 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x18
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x585ae40f
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 89 18 F0 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x18
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 11: jmp 0x585ae420
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 85 ED FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0d0h]
        mov dword ptr [eax + 60h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 85 29 00 00: call 0x585b0dc0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0d4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0d4h]
        mov dword ptr [ecx + 0e10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [eax + 60h], ecx
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 75 1D: jne 0x585ae482
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 2f0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 5F 7A ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x7a
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CF 89 00 00: call 0x585b6e60
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C6 16 00 00: jmp 0x585afb5d
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        push 84h
        ; Exact mapped bytes E8 63 2B 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x2b
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov dword ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 48: je 0x585ae502
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 2f4h], edx
        push 1
        mov ecx, dword ptr [ebp - 2f4h]
        ; Exact mapped bytes E8 4A 66 ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x66
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 2f8h], eax
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp - 2f8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 10h
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 56 93 F3 FF: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x93
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ae50c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 2fch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2fch]
        mov dword ptr [edx + ecx + 0b0h], eax
        push 84h
        ; Exact mapped bytes E8 C3 2A 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x2a
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov dword ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 4B: je 0x585ae5a5
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 300h], edx
        push 0
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 AA 65 ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x65
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 304h], eax
        push 108h
        push 0
        push 0
        mov eax, dword ptr [ebp - 304h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 10h
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 B3 92 F3 FF: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x92
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ae5af
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov edx, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 308h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 308h]
        mov dword ptr [ecx + eax + 0b0h], edx
        push 84h
        ; Exact mapped bytes E8 20 2A 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x2a
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov dword ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 48: je 0x585ae645
        __asm _emit 0x74
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 30ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 07 65 ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x65
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 310h], eax
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp - 310h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 0ch
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 13 92 F3 FF: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x92
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ae64f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov ecx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 314h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + eax + 34ch], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 34ch]
        mov dword ptr [ebp - 318h], eax
        push 0
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 F1 78 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        push 84h
        ; Exact mapped bytes E8 5A 29 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x29
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov dword ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 48: je 0x585ae70b
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 31ch], edx
        push 0
        mov ecx, dword ptr [ebp - 31ch]
        ; Exact mapped bytes E8 41 64 ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 320h], eax
        push 54h
        push 0
        push 0
        mov eax, dword ptr [ebp - 320h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 0ch
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 4D 91 F3 FF: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x91
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ae715
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov edx, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 324h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 324h]
        mov dword ptr [ecx + eax + 34ch], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 34ch]
        mov dword ptr [ebp - 328h], edx
        push 0
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 2B 78 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 460h]
        mov dword ptr [ebp - 330h], ecx
        push 9
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 63 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x63
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 32ch], eax
        mov edx, dword ptr [ebp - 32ch]
        push edx
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 C7 84 ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 464h]
        mov dword ptr [ebp - 338h], ecx
        push 9
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 63 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x63
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 334h], eax
        mov edx, dword ptr [ebp - 334h]
        push edx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 93 84 ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 468h]
        mov dword ptr [ebp - 340h], ecx
        push 9
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 62 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x62
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 33ch], eax
        mov edx, dword ptr [ebp - 33ch]
        push edx
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 5F 84 ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 46ch]
        mov dword ptr [ebp - 348h], ecx
        push 9
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 62 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x62
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 344h], eax
        mov edx, dword ptr [ebp - 344h]
        push edx
        mov ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes E8 2B 84 ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5c8h]
        mov dword ptr [ebp - 350h], ecx
        push 1eh
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF 62 ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x62
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 34ch], eax
        mov edx, dword ptr [ebp - 34ch]
        push edx
        mov ecx, dword ptr [ebp - 350h]
        ; Exact mapped bytes E8 C7 76 ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x76
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5cch]
        mov dword ptr [ebp - 358h], ecx
        push 1eh
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B 62 ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x62
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 354h], eax
        mov edx, dword ptr [ebp - 354h]
        push edx
        mov ecx, dword ptr [ebp - 358h]
        ; Exact mapped bytes E8 93 76 ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x76
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5d0h]
        mov dword ptr [ebp - 360h], ecx
        push 1eh
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 62 ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x62
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 35ch], eax
        mov edx, dword ptr [ebp - 35ch]
        push edx
        mov ecx, dword ptr [ebp - 360h]
        ; Exact mapped bytes E8 5F 76 ED FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x76
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 58ch]
        mov dword ptr [ebp - 368h], ecx
        push 5
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 61 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x61
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 364h], eax
        mov edx, dword ptr [ebp - 364h]
        push edx
        mov ecx, dword ptr [ebp - 368h]
        ; Exact mapped bytes E8 5B 83 ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 590h]
        mov dword ptr [ebp - 370h], ecx
        push 3
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF 61 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x61
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 36ch], eax
        mov edx, dword ptr [ebp - 36ch]
        push edx
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes E8 27 83 ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 594h]
        mov dword ptr [ebp - 378h], ecx
        push 3
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B 61 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x61
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 374h], eax
        mov edx, dword ptr [ebp - 374h]
        push edx
        mov ecx, dword ptr [ebp - 378h]
        ; Exact mapped bytes E8 F3 82 ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x82
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 598h]
        mov dword ptr [ebp - 380h], ecx
        push 9
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 61 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x61
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 37ch], eax
        mov edx, dword ptr [ebp - 37ch]
        push edx
        mov ecx, dword ptr [ebp - 380h]
        ; Exact mapped bytes E8 BF 82 ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 58ch]
        mov dword ptr [ebp - 384h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 384h]
        ; Exact mapped bytes E8 F0 6B 20 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x6b
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 590h]
        mov dword ptr [ebp - 388h], eax
        push 101h
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 D1 6B 20 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x6b
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 594h]
        mov dword ptr [ebp - 38ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 38ch]
        ; Exact mapped bytes E8 B2 6B 20 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x6b
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 58ch]
        mov dword ptr [ebp - 390h], ecx
        push 134h
        push 40h
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 01 6C 20 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 590h]
        mov dword ptr [ebp - 394h], eax
        push 0e7h
        push 9dh
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 DD 6B 20 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x6b
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 594h]
        mov dword ptr [ebp - 398h], edx
        push 54h
        push 9dh
        mov ecx, dword ptr [ebp - 398h]
        ; Exact mapped bytes E8 BC 6B 20 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x6b
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 594h]
        mov dword ptr [ebp - 3a0h], ecx
        push 9
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 60 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x60
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 39ch], eax
        push 1
        mov edx, dword ptr [ebp - 39ch]
        push edx
        mov ecx, dword ptr [ebp - 3a0h]
        ; Exact mapped bytes E8 86 DD F1 FF: call 0x584cc820
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xdd
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 590h]
        mov dword ptr [ebp - 3a8h], ecx
        push 9
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 60 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x60
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 3a4h], eax
        push 1
        mov edx, dword ptr [ebp - 3a4h]
        push edx
        mov ecx, dword ptr [ebp - 3a8h]
        ; Exact mapped bytes E8 50 DD F1 FF: call 0x584cc820
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xdd
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 58ch]
        mov dword ptr [ebp - 3ach], ecx
        push 427h
        mov ecx, dword ptr [ebp - 3ach]
        ; Exact mapped bytes E8 91 73 ED FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x73
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 590h]
        mov dword ptr [ebp - 3b0h], eax
        push 427h
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 72 73 ED FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x73
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 594h]
        mov dword ptr [ebp - 3b4h], edx
        push 427h
        mov ecx, dword ptr [ebp - 3b4h]
        ; Exact mapped bytes E8 53 73 ED FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x73
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 59ch]
        mov dword ptr [ebp - 3b8h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 3b8h]
        ; Exact mapped bytes E8 47 74 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x74
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 B3 24 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov dword ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 46: je 0x585aebb0
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 3bch], eax
        push 0ah
        mov ecx, dword ptr [ebp - 3bch]
        ; Exact mapped bytes E8 9A 5F ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x5f
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 3c0h], eax
        push 42h
        push 54h
        push 70h
        mov ecx, dword ptr [ebp - 3c0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 78 37 ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x37
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585aebba
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov eax, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 3c4h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3c4h]
        mov dword ptr [ecx + 480h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 480h]
        mov dword ptr [ebp - 3c8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3c8h]
        ; Exact mapped bytes E8 B5 69 20 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x69
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 480h]
        mov dword ptr [ebp - 3cch], eax
        push 0
        mov ecx, dword ptr [ebp - 3cch]
        ; Exact mapped bytes E8 29 72 ED FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x72
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 480h]
        mov dword ptr [ebp - 3d0h], edx
        push 0
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes E8 AD 72 ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x72
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 C9 23 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x23
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov dword ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 46: je 0x585aec9a
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 3d4h], ecx
        push 0bh
        mov ecx, dword ptr [ebp - 3d4h]
        ; Exact mapped bytes E8 B0 5E ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x5e
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 3d8h], eax
        push 41h
        push 54h
        push 70h
        mov edx, dword ptr [ebp - 3d8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 8E 36 ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x36
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585aeca4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov ecx, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 3dch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3dch]
        mov dword ptr [edx + 484h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 484h]
        mov dword ptr [ebp - 3e0h], edx
        push 0
        mov ecx, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes E8 FE 71 ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x71
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        push 0cch
        ; Exact mapped bytes E8 17 23 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x23
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov dword ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 21: je 0x585aed27
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 81 5D F3 FF: call 0x584e4aa0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x5d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585aed31
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 3e4h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3e4h]
        mov dword ptr [edx + 0d84h], eax
        push 54h
        ; Exact mapped bytes E8 AA 22 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x22
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov dword ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 6A: je 0x585aeddd
        __asm _emit 0x74
        __asm _emit 0x6a
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx + 0b0h]
        ; Exact mapped bytes E8 86 69 EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x69
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        add eax, 1eh
        ; Exact mapped bytes 66 89 45 D0: mov word ptr [ebp - 0x30], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 3e8h], edx
        push 5
        mov ecx, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes E8 70 5D ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x5d
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 3ech], eax
        movzx eax, word ptr [ebp - 30h]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 3ech]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 4B 35 ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x35
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585aede7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 3f0h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3f0h]
        mov dword ptr [ecx + 0d88h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d88h]
        mov dword ptr [ebp - 3f4h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 3f4h]
        ; Exact mapped bytes E8 88 67 20 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x67
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d88h]
        mov dword ptr [ebp - 3f8h], eax
        push 0
        mov ecx, dword ptr [ebp - 3f8h]
        ; Exact mapped bytes E8 FC 6F ED FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x6f
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 B8 21 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x21
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov dword ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 6A: je 0x585aeecf
        __asm _emit 0x74
        __asm _emit 0x6a
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0b8h]
        ; Exact mapped bytes E8 94 68 EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x68
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        sub ecx, 5
        ; Exact mapped bytes 66 89 4D CE: mov word ptr [ebp - 0x32], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xce
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 3fch], eax
        push 2
        mov ecx, dword ptr [ebp - 3fch]
        ; Exact mapped bytes E8 7E 5C ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x5c
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 400h], eax
        movzx ecx, word ptr [ebp - 32h]
        push ecx
        push 0
        push 0
        mov edx, dword ptr [ebp - 400h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 59 34 ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x34
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585aeed9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov ecx, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 404h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 404h]
        mov dword ptr [edx + 0d8ch], eax
        push 54h
        ; Exact mapped bytes E8 02 21 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x21
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov dword ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 6A: je 0x585aef85
        __asm _emit 0x74
        __asm _emit 0x6a
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx + 0b0h]
        ; Exact mapped bytes E8 DE 67 EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        add eax, 0fh
        ; Exact mapped bytes 66 89 45 CC: mov word ptr [ebp - 0x34], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 408h], edx
        push 3
        mov ecx, dword ptr [ebp - 408h]
        ; Exact mapped bytes E8 C8 5B ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x5b
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 40ch], eax
        movzx eax, word ptr [ebp - 34h]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 40ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 A3 33 ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x33
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585aef8f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 410h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 410h]
        mov dword ptr [ecx + 0d90h], edx
        push 54h
        ; Exact mapped bytes E8 4C 20 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x20
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov dword ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 6A: je 0x585af03b
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + eax + 0b0h]
        ; Exact mapped bytes E8 28 67 EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x67
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        add edx, 14h
        ; Exact mapped bytes 66 89 55 CA: mov word ptr [ebp - 0x36], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 414h], ecx
        push 4
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 12 5B ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x5b
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 418h], eax
        movzx edx, word ptr [ebp - 36h]
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 418h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 ED 32 ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x32
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585af045
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 41ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 41ch]
        mov dword ptr [eax + 0d94h], ecx
        push 54h
        ; Exact mapped bytes E8 96 1F 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x1f
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov dword ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 61: je 0x585af0e8
        __asm _emit 0x74
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 0d90h]
        ; Exact mapped bytes E8 7B 66 EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x66
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        add eax, 0fh
        ; Exact mapped bytes 66 89 45 C8: mov word ptr [ebp - 0x38], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc8
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 420h], edx
        push 6
        mov ecx, dword ptr [ebp - 420h]
        ; Exact mapped bytes E8 65 5A ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x5a
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 424h], eax
        movzx eax, word ptr [ebp - 38h]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 424h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 40 32 ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x32
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585af0f2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov eax, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 428h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 428h]
        mov dword ptr [ecx + 0d98h], edx
        push 54h
        ; Exact mapped bytes E8 E9 1E 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov dword ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 61: je 0x585af195
        __asm _emit 0x74
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d90h]
        ; Exact mapped bytes E8 CE 65 EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x65
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        sub ecx, 5
        ; Exact mapped bytes 66 89 4D C6: mov word ptr [ebp - 0x3a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc6
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 42ch], eax
        push 7
        mov ecx, dword ptr [ebp - 42ch]
        ; Exact mapped bytes E8 B8 59 ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x59
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 430h], eax
        movzx ecx, word ptr [ebp - 3ah]
        push ecx
        push 0
        push 0
        mov edx, dword ptr [ebp - 430h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 93 31 ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x31
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585af19f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov ecx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 434h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 434h]
        mov dword ptr [edx + 0d9ch], eax
        push 58h
        ; Exact mapped bytes E8 3C 1E 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x1e
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov dword ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 61: je 0x585af242
        __asm _emit 0x74
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 0d90h]
        ; Exact mapped bytes E8 21 65 EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x65
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        add edx, 0dh
        ; Exact mapped bytes 66 89 55 C4: mov word ptr [ebp - 0x3c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xc4
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 438h], ecx
        push 8
        mov ecx, dword ptr [ebp - 438h]
        ; Exact mapped bytes E8 0B 59 ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x59
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 43ch], eax
        movzx edx, word ptr [ebp - 3ch]
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 43ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 56 50 F5 FF: call 0x58504290
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x50
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585af24c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov edx, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 440h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 440h]
        mov dword ptr [eax + 0da4h], ecx
        push 58h
        ; Exact mapped bytes E8 8F 1D 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x1d
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov dword ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 3A: je 0x585af2c8
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 0d9ch]
        ; Exact mapped bytes E8 74 64 EE FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x64
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 66 89 45 C2: mov word ptr [ebp - 0x3e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc2
        movzx ecx, word ptr [ebp - 3eh]
        push ecx
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 50 75 ED FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x75
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585af2d2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov eax, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 444h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 444h]
        mov dword ptr [ecx + 0da0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d84h]
        mov dword ptr [ebp - 448h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0da0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0da4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d9ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d98h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d94h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d90h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d8ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d88h]
        push edx
        mov ecx, dword ptr [ebp - 448h]
        ; Exact mapped bytes E8 02 65 F3 FF: call 0x584e5860
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x65
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d84h]
        ; Exact mapped bytes E8 F4 62 F3 FF: call 0x584e5660
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x62
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d84h]
        mov dword ptr [ebp - 44ch], edx
        push 0a0h
        push 52h
        push 13h
        push 71h
        push 7fh
        push -1
        mov ecx, dword ptr [ebp - 44ch]
        ; Exact mapped bytes E8 CB 63 F3 FF: call 0x584e5760
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x63
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B3 A3 F7 FF: call 0x58529750
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xa3
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx eax, ax
        and eax, 0ff00h
        sar eax, 8
        mov byte ptr [ebp - 1dh], al
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9D A3 F7 FF: call 0x58529750
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xa3
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx ecx, ax
        and ecx, 0ffh
        mov byte ptr [ebp - 1eh], cl
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x585af3d1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 9
        ; Exact mapped bytes 7D 40: jge 0x585af417
        __asm _emit 0x7d
        __asm _emit 0x40
        imul eax, dword ptr [ebp - 18h], 0e84h
        cmp dword ptr [eax + 588f4f74h], 0
        ; Exact mapped bytes 74 2E: je 0x585af415
        __asm _emit 0x74
        __asm _emit 0x2e
        imul ecx, dword ptr [ebp - 18h], 0e84h
        movzx edx, byte ptr [ecx + 588f4f92h]
        movzx eax, byte ptr [ebp - 1dh]
        cmp edx, eax
        ; Exact mapped bytes 75 18: jne 0x585af415
        __asm _emit 0x75
        __asm _emit 0x18
        imul ecx, dword ptr [ebp - 18h], 0e84h
        movzx edx, byte ptr [ecx + 588f4f93h]
        movzx eax, byte ptr [ebp - 1eh]
        cmp edx, eax
        ; Exact mapped bytes 75 02: jne 0x585af415
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x585af417
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B1: jmp 0x585af3c8
        __asm _emit 0xeb
        __asm _emit 0xb1
        cmp dword ptr [ebp - 18h], 9
        ; Exact mapped bytes 0F 84 5A 06 00 00: je 0x585afa7b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 8B 15 5C 8C 94 58: mov edx, dword ptr [0x58948c5c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        mov eax, dword ptr [edx + ecx*4]
        mov dword ptr [ebp - 158h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 474h], 0
        ; Exact mapped bytes 0F 84 C9 00 00 00: je 0x585af50c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 11h], 0
        ; Exact mapped bytes EB 09: jmp 0x585af452
        __asm _emit 0xeb
        __asm _emit 0x09
        mov dl, byte ptr [ebp - 11h]
        add dl, 1
        mov byte ptr [ebp - 11h], dl
        movzx eax, byte ptr [ebp - 11h]
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, byte ptr [ecx + 470h]
        cmp eax, edx
        ; Exact mapped bytes 7D 6F: jge 0x585af4d3
        __asm _emit 0x7d
        __asm _emit 0x6f
        movzx eax, byte ptr [ebp - 11h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 474h]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 57: je 0x585af4ce
        __asm _emit 0x74
        __asm _emit 0x57
        movzx eax, byte ptr [ebp - 11h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 474h]
        mov eax, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 20: je 0x585af4b0
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 450h], eax
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 95 B0 FB FF FF: call dword ptr [ebp - 0x450]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 454h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585af4ba
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 454h], 0
        movzx ecx, byte ptr [ebp - 11h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 474h]
        mov dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes E9 76 FF FF FF: jmp 0x585af449
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 474h], 0
        ; Exact mapped bytes 74 2D: je 0x585af50c
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 474h]
        mov dword ptr [ebp - 458h], eax
        push 4
        mov ecx, dword ptr [ebp - 458h]
        push ecx
        ; Exact mapped bytes E8 38 1B 28 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x1b
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 474h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 478h], 0
        ; Exact mapped bytes 0F 84 C9 00 00 00: je 0x585af5e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 11h], 0
        ; Exact mapped bytes EB 09: jmp 0x585af52b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov cl, byte ptr [ebp - 11h]
        add cl, 1
        mov byte ptr [ebp - 11h], cl
        movzx edx, byte ptr [ebp - 11h]
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 471h]
        cmp edx, ecx
        ; Exact mapped bytes 7D 6F: jge 0x585af5ac
        __asm _emit 0x7d
        __asm _emit 0x6f
        movzx edx, byte ptr [ebp - 11h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 478h]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 57: je 0x585af5a7
        __asm _emit 0x74
        __asm _emit 0x57
        movzx edx, byte ptr [ebp - 11h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 478h]
        mov edx, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 54h], edx
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 20: je 0x585af589
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 45ch], edx
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 95 A4 FB FF FF: call dword ptr [ebp - 0x45c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 460h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585af593
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 460h], 0
        movzx eax, byte ptr [ebp - 11h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 478h]
        mov dword ptr [edx + eax*4], 0
        ; Exact mapped bytes E9 76 FF FF FF: jmp 0x585af522
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 478h], 0
        ; Exact mapped bytes 74 2D: je 0x585af5e5
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 478h]
        mov dword ptr [ebp - 464h], edx
        push 4
        mov eax, dword ptr [ebp - 464h]
        push eax
        ; Exact mapped bytes E8 5F 1A 28 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x1a
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 478h], 0
        imul edx, dword ptr [ebp - 18h], 0e84h
        mov eax, dword ptr [ebp - 10h]
        mov cl, byte ptr [edx + 588f5224h]
        mov byte ptr [eax + 470h], cl
        imul edx, dword ptr [ebp - 18h], 0e84h
        mov eax, dword ptr [ebp - 10h]
        mov cl, byte ptr [edx + 588f5728h]
        mov byte ptr [eax + 471h], cl
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 470h]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 12 1A 28 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x1a
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 468h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 468h]
        mov dword ptr [eax + 474h], ecx
        mov byte ptr [ebp - 11h], 0
        ; Exact mapped bytes EB 09: jmp 0x585af657
        __asm _emit 0xeb
        __asm _emit 0x09
        mov dl, byte ptr [ebp - 11h]
        add dl, 1
        mov byte ptr [ebp - 11h], dl
        movzx eax, byte ptr [ebp - 11h]
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, byte ptr [ecx + 470h]
        cmp eax, edx
        ; Exact mapped bytes 0F 8D D9 01 00 00: jge 0x585af846
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 90 19 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x19
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 150h], eax
        mov dword ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 150h], 0
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x585af72e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 18h], 0e84h
        movzx ecx, byte ptr [ebp - 11h]
        ; Exact mapped bytes 66 8B 94 48 A8 54 8F 58: mov dx, word ptr [eax + ecx*2 + 0x588f54a8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x48
        __asm _emit 0xa8
        __asm _emit 0x54
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 55 C0: mov word ptr [ebp - 0x40], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xc0
        imul eax, dword ptr [ebp - 18h], 0e84h
        movzx ecx, byte ptr [ebp - 11h]
        mov edx, dword ptr [eax + ecx*8 + 588f52ach]
        mov dword ptr [ebp - 46ch], edx
        movzx eax, byte ptr [ebp - 11h]
        imul ecx, dword ptr [ebp - 18h], 0e84h
        mov edx, dword ptr [ecx + eax*8 + 588f52a8h]
        mov dword ptr [ebp - 470h], edx
        movzx eax, byte ptr [ebp - 11h]
        imul ecx, dword ptr [ebp - 18h], 0e84h
        movzx edx, word ptr [ecx + eax*2 + 588f5226h]
        push edx
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 D9 53 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x53
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 474h], eax
        movzx eax, word ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 46ch]
        push ecx
        mov edx, dword ptr [ebp - 470h]
        push edx
        mov eax, dword ptr [ebp - 474h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 EA 70 ED FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x70
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585af738
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 154h], 0
        mov edx, dword ptr [ebp - 154h]
        mov dword ptr [ebp - 478h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        movzx eax, byte ptr [ebp - 11h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 474h]
        mov ecx, dword ptr [ebp - 478h]
        mov dword ptr [edx + eax*4], ecx
        imul edx, dword ptr [ebp - 18h], 0e84h
        movzx eax, byte ptr [ebp - 11h]
        cmp dword ptr [edx + eax*4 + 588f5528h], 0fffffe0ch
        ; Exact mapped bytes 74 58: je 0x585af7d1
        __asm _emit 0x74
        __asm _emit 0x58
        movzx ecx, byte ptr [ebp - 11h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 474h]
        mov ecx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 47ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 47ch]
        ; Exact mapped bytes E8 04 66 ED FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x66
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, byte ptr [ebp - 11h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 474h]
        mov edx, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 480h], edx
        imul eax, dword ptr [ebp - 18h], 0e84h
        movzx ecx, byte ptr [ebp - 11h]
        mov edx, dword ptr [eax + ecx*4 + 588f5528h]
        push edx
        mov ecx, dword ptr [ebp - 480h]
        ; Exact mapped bytes E8 70 5D 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x5d
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        imul eax, dword ptr [ebp - 18h], 0e84h
        movzx ecx, byte ptr [ebp - 11h]
        cmp dword ptr [eax + ecx*4 + 588f5628h], 0fffffe0ch
        ; Exact mapped bytes 74 58: je 0x585af841
        __asm _emit 0x74
        __asm _emit 0x58
        movzx edx, byte ptr [ebp - 11h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 474h]
        mov edx, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 484h], edx
        push 0
        mov ecx, dword ptr [ebp - 484h]
        ; Exact mapped bytes E8 34 66 ED FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x66
        __asm _emit 0xed
        __asm _emit 0xff
        movzx eax, byte ptr [ebp - 11h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 474h]
        mov eax, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 488h], eax
        imul ecx, dword ptr [ebp - 18h], 0e84h
        movzx edx, byte ptr [ebp - 11h]
        mov eax, dword ptr [ecx + edx*4 + 588f5628h]
        push eax
        mov ecx, dword ptr [ebp - 488h]
        ; Exact mapped bytes E8 70 5D 20 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x5d
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 08 FE FF FF: jmp 0x585af64e
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [ecx + 471h]
        mov edx, 4
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 DD 17 28 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x17
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 48ch]
        mov dword ptr [edx + 478h], eax
        mov byte ptr [ebp - 11h], 0
        ; Exact mapped bytes EB 09: jmp 0x585af88c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov cl, byte ptr [ebp - 11h]
        add cl, 1
        mov byte ptr [ebp - 11h], cl
        movzx edx, byte ptr [ebp - 11h]
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 471h]
        cmp edx, ecx
        ; Exact mapped bytes 0F 8D D9 01 00 00: jge 0x585afa7b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 5B 17 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x17
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 15ch], eax
        mov dword ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 15ch], 0
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x585af963
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 18h], 0e84h
        movzx eax, byte ptr [ebp - 11h]
        ; Exact mapped bytes 66 8B 8C 42 AC 59 8F 58: mov cx, word ptr [edx + eax*2 + 0x588f59ac]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x42
        __asm _emit 0xac
        __asm _emit 0x59
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 4D BE: mov word ptr [ebp - 0x42], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xbe
        imul edx, dword ptr [ebp - 18h], 0e84h
        movzx eax, byte ptr [ebp - 11h]
        mov ecx, dword ptr [edx + eax*8 + 588f57b0h]
        mov dword ptr [ebp - 490h], ecx
        movzx edx, byte ptr [ebp - 11h]
        imul eax, dword ptr [ebp - 18h], 0e84h
        mov ecx, dword ptr [eax + edx*8 + 588f57ach]
        mov dword ptr [ebp - 494h], ecx
        movzx edx, byte ptr [ebp - 11h]
        imul eax, dword ptr [ebp - 18h], 0e84h
        movzx ecx, word ptr [eax + edx*2 + 588f572ah]
        push ecx
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 F4 51 ED FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x51
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 498h], eax
        movzx edx, word ptr [ebp - 42h]
        push edx
        mov eax, dword ptr [ebp - 490h]
        push eax
        mov ecx, dword ptr [ebp - 494h]
        push ecx
        mov edx, dword ptr [ebp - 498h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 C5 29 ED FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x29
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585af96d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 160h], 0
        mov ecx, dword ptr [ebp - 160h]
        mov dword ptr [ebp - 49ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        movzx edx, byte ptr [ebp - 11h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 478h]
        mov eax, dword ptr [ebp - 49ch]
        mov dword ptr [ecx + edx*4], eax
        imul ecx, dword ptr [ebp - 18h], 0e84h
        movzx edx, byte ptr [ebp - 11h]
        cmp dword ptr [ecx + edx*4 + 588f5a2ch], 0fffffe0ch
        ; Exact mapped bytes 74 58: je 0x585afa06
        __asm _emit 0x74
        __asm _emit 0x58
        movzx eax, byte ptr [ebp - 11h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 474h]
        mov eax, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 4a0h], eax
        push 0
        mov ecx, dword ptr [ebp - 4a0h]
        ; Exact mapped bytes E8 CF 63 ED FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x63
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, byte ptr [ebp - 11h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 478h]
        mov ecx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 4a4h], ecx
        imul edx, dword ptr [ebp - 18h], 0e84h
        movzx eax, byte ptr [ebp - 11h]
        mov ecx, dword ptr [edx + eax*4 + 588f5a2ch]
        push ecx
        mov ecx, dword ptr [ebp - 4a4h]
        ; Exact mapped bytes E8 3B 5B 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x5b
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        imul edx, dword ptr [ebp - 18h], 0e84h
        movzx eax, byte ptr [ebp - 11h]
        cmp dword ptr [edx + eax*4 + 588f5b2ch], 0fffffe0ch
        ; Exact mapped bytes 74 58: je 0x585afa76
        __asm _emit 0x74
        __asm _emit 0x58
        movzx ecx, byte ptr [ebp - 11h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 478h]
        mov ecx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 4a8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 4a8h]
        ; Exact mapped bytes E8 FF 63 ED FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x63
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, byte ptr [ebp - 11h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 478h]
        mov edx, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 4ach], edx
        imul eax, dword ptr [ebp - 18h], 0e84h
        movzx ecx, byte ptr [ebp - 11h]
        mov edx, dword ptr [eax + ecx*4 + 588f5b2ch]
        push edx
        mov ecx, dword ptr [ebp - 4ach]
        ; Exact mapped bytes E8 3B 5B 20 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x5b
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 08 FE FF FF: jmp 0x585af883
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 488h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 48ch], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B1 8A 00 00: call 0x585b8550
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 75 4E: jne 0x585afaf7
        __asm _emit 0x75
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C C4 ED FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc4
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x585afaf7
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 01 F0 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x585afada
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE 01 F0 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        ; Exact mapped bytes EB 11: jmp 0x585afaeb
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 6E ED FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x6e
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 164h]
        mov dword ptr [eax + 60h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BA 12 00 00: call 0x585b0dc0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 168h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 168h]
        mov dword ptr [ecx + 0e10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 168h]
        mov dword ptr [eax + 60h], ecx
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 75 1D: jne 0x585afb4d
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 4b0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 4b0h]
        ; Exact mapped bytes E8 94 63 ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x63
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 04 73 00 00: call 0x585b6e60
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x73
        __asm _emit 0x00
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
