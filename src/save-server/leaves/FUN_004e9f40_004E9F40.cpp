// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E9F40 .. +0x456 bytes.
extern "C" __declspec(naked) void FUN_004e9f40_004E9F40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        push 1e6h
        push 674180h
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 FE 02 FF FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x4e9f6f
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 1E 04 00 00: jmp 0x4ea38d
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4e9f89
        __asm _emit 0x75
        __asm _emit 0x14
        push 1ebh
        push 674180h
        ; Exact mapped bytes E8 BC ED 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xed
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e9f89
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4e9f6f
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C8 94 FB FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x94
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e9fb6
        __asm _emit 0x75
        __asm _emit 0x14
        push 1ech
        push 674180h
        ; Exact mapped bytes E8 8F ED 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xed
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e9fb6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x4e9f8f
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 1D: jne 0x4e9fe2
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 75 14: jne 0x4e9fe2
        __asm _emit 0x75
        __asm _emit 0x14
        push 1edh
        push 674180h
        ; Exact mapped bytes E8 63 ED 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xed
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e9fe2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x4e9fbc
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 1D: jne 0x4ea00e
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 75 14: jne 0x4ea00e
        __asm _emit 0x75
        __asm _emit 0x14
        push 1eeh
        push 674180h
        ; Exact mapped bytes E8 37 ED 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xed
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea00e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x4e9fe8
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 33: je 0x4ea050
        __asm _emit 0x74
        __asm _emit 0x33
        push 0
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + 28h]
        sub eax, dword ptr [edx + 2ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 2ch]
        push edx
        ; Exact mapped bytes E8 2E 94 FB FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x94
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ea050
        __asm _emit 0x75
        __asm _emit 0x14
        push 1f0h
        push 674180h
        ; Exact mapped bytes E8 F5 EC 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xec
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea050
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 BE: jne 0x4ea014
        __asm _emit 0x75
        __asm _emit 0xbe
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 74 33: je 0x4ea092
        __asm _emit 0x74
        __asm _emit 0x33
        push 0
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [edx + 28h]
        sub ecx, dword ptr [eax + 24h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 24h]
        push eax
        ; Exact mapped bytes E8 EC 93 FB FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x93
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ea092
        __asm _emit 0x75
        __asm _emit 0x14
        push 1f2h
        push 674180h
        ; Exact mapped bytes E8 B3 EC 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xec
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea092
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 BE: jne 0x4ea056
        __asm _emit 0x75
        __asm _emit 0xbe
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 25 B6 03 00: call 0x5256c5
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xb6
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ea0b8
        __asm _emit 0x75
        __asm _emit 0x14
        push 1f3h
        push 674180h
        ; Exact mapped bytes E8 8D EC 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea0b8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4ea098
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + 28h]
        sub eax, dword ptr [edx + 24h]
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 73 08: jae 0x4ea0dd
        __asm _emit 0x73
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x4ea0ec
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [edx + 28h]
        sub ecx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 24h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 FA B1 F7 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xb1
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 24h]
        add edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 24h], edx
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp - 4]
        sub edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 53 02 00 00: je 0x4ea387
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax + 24h]
        cmp edx, dword ptr [ecx + 28h]
        ; Exact mapped bytes 74 14: je 0x4ea156
        __asm _emit 0x74
        __asm _emit 0x14
        push 1ffh
        push 674180h
        ; Exact mapped bytes E8 EF EB 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea156
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4ea134
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 4]
        xor edx, edx
        div dword ptr [ecx + 1ch]
        mov eax, dword ptr [ebp - 4]
        sub eax, edx
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ecx + 20h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 3C: call dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x3c
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 14h]
        sub edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 76 06: jbe 0x4ea1bf
        __asm _emit 0x76
        __asm _emit 0x06
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 77 BD: ja 0x4ea17c
        __asm _emit 0x77
        __asm _emit 0xbd
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 85 B3 01 00 00: jne 0x4ea387
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [edx + 24h]
        cmp ecx, dword ptr [eax + 28h]
        ; Exact mapped bytes 74 14: je 0x4ea1f6
        __asm _emit 0x74
        __asm _emit 0x14
        push 215h
        push 674180h
        ; Exact mapped bytes E8 4F EB 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea1f6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4ea1d4
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 72 14: jb 0x4ea21b
        __asm _emit 0x72
        __asm _emit 0x14
        push 216h
        push 674180h
        ; Exact mapped bytes E8 2A EB 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea21b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x4ea1fc
        __asm _emit 0x75
        __asm _emit 0xdb
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x4ea2c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 76 08: jbe 0x4ea241
        __asm _emit 0x76
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 09: jmp 0x4ea24a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 2ch]
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        mov ecx, dword ptr [edx + 20h]
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax + 20h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 3C: call dword ptr [eax + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x3c
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 20h]
        sub eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 76 0E: jbe 0x4ea2ab
        __asm _emit 0x76
        __asm _emit 0x0e
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 76 08: jbe 0x4ea2ab
        __asm _emit 0x76
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 72 B5: jb 0x4ea260
        __asm _emit 0x72
        __asm _emit 0xb5
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 2ch]
        mov dword ptr [edx + 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 2ch]
        add eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 28h], eax
        ; Exact mapped bytes EB 62: jmp 0x4ea32a
        __asm _emit 0xeb
        __asm _emit 0x62
        mov edx, dword ptr [ebp - 24h]
        add edx, 28h
        push edx
        mov eax, dword ptr [ebp - 24h]
        add eax, 2ch
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 2ch]
        cmp dword ptr [ebp - 10h], edx
        ; Exact mapped bytes 74 14: je 0x4ea318
        __asm _emit 0x74
        __asm _emit 0x14
        push 22fh
        push 674180h
        ; Exact mapped bytes E8 2D EA 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xea
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea318
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4ea2f3
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 2ch]
        mov dword ptr [ecx + 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + 28h]
        sub eax, dword ptr [edx + 24h]
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 73 08: jae 0x4ea343
        __asm _emit 0x73
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x4ea352
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [edx + 28h]
        sub ecx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 24h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 94 AF F7 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xaf
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 24h]
        add edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 24h], edx
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
