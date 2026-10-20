// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052C764 .. +0x2C0 bytes.
extern "C" __declspec(naked) void FUN_0052c764_0052C764() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 40h], ecx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 B1 A7 FD FF: call 0x506f2d
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 05: je 0x52c787
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 94 02 00 00: jmp 0x52ca1b
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 40h]
        cmp dword ptr [edx + 68h], 0
        ; Exact mapped bytes 74 26: je 0x52c7b6
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 68h]
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x52c7b6
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 65 02 00 00: jmp 0x52ca1b
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x52c7d0
        __asm _emit 0x75
        __asm _emit 0x14
        push 522h
        push 5c8fcch
        ; Exact mapped bytes E8 35 82 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52c7d0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x52c7b6
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 A0 BF FC FF: call 0x4f877e
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 14: je 0x52c7fe
        __asm _emit 0x74
        __asm _emit 0x14
        push 527h
        push 5c8fcch
        ; Exact mapped bytes E8 07 82 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52c7fe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x52c7e4
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 14: je 0x52c81e
        __asm _emit 0x74
        __asm _emit 0x14
        push 528h
        push 5c8fcch
        ; Exact mapped bytes E8 E7 81 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52c81e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x52c804
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E8 2C 87 01 00: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 54h]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 0B: jne 0x52c83f
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x52c8c9
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B4 27 5E 00: call dword ptr [0x5e27b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 74: je 0x52c8c9
        __asm _emit 0x74
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 B1 83 FC FF: call 0x4f4c0e
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x83
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 63: je 0x52c8c9
        __asm _emit 0x74
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B4 27 5E 00: call dword ptr [0x5e27b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 4D: je 0x52c8c9
        __asm _emit 0x74
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 15 00 28 5E 00: call dword ptr [0x5e2800]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x52c89b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 38h]
        add eax, 1
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        cmp ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 7D 26: jge 0x52c8c9
        __asm _emit 0x7d
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes FF 15 EC 27 5E 00: call dword ptr [0x5e27ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 0E: jne 0x52c8c7
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 97 ED FC FF: call 0x4fb659
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xed
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 02: jmp 0x52c8c9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C9: jmp 0x52c892
        __asm _emit 0xeb
        __asm _emit 0xc9
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 EA 00 00: call 0x53b349
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x52c8e6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 83 29 01 00 00: jae 0x52ca1b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 94 EA 00 00: call 0x53b392
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 02: jne 0x52c909
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB D4: jmp 0x52c8dd
        __asm _emit 0xeb
        __asm _emit 0xd4
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 14: je 0x52c923
        __asm _emit 0x74
        __asm _emit 0x14
        push 54bh
        push 5c8fcch
        ; Exact mapped bytes E8 E2 80 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52c923
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x52c909
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x52c943
        __asm _emit 0x75
        __asm _emit 0x14
        push 54ch
        push 5c8fcch
        ; Exact mapped bytes E8 C2 80 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52c943
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x52c929
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 24h], -1
        ; Exact mapped bytes 75 43: jne 0x52c992
        __asm _emit 0x75
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 34 EC 00 00: call 0x53b58f
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 19: je 0x52c97d
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 24 EA 00 00: call 0x53b392
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 06: je 0x52c97d
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 24h], -1
        ; Exact mapped bytes 75 05: jne 0x52c982
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 5B FF FF FF: jmp 0x52c8dd
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp - 40h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 F4 C1 FC FF: call 0x4f8b84
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 39: jmp 0x52c9cb
        __asm _emit 0xeb
        __asm _emit 0x39
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 40h]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 12: je 0x52c9b4
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 24h], 0f000h
        ; Exact mapped bytes 73 09: jae 0x52c9b4
        __asm _emit 0x73
        __asm _emit 0x09
        mov dword ptr [ebp - 44h], 1
        ; Exact mapped bytes EB 07: jmp 0x52c9bb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 B9 C1 FC FF: call 0x4f8b84
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 76 E9 00 00: call 0x53b349
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 32: jae 0x52ca10
        __asm _emit 0x73
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp - 20h]
        sub eax, edx
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 73 1C: jae 0x52ca10
        __asm _emit 0x73
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 92 E9 00 00: call 0x53b392
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 75 0B: jne 0x52ca10
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB DC: jmp 0x52c9ec
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E9 C2 FE FF FF: jmp 0x52c8dd
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
