// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00504F8A .. +0x456 bytes.
extern "C" __declspec(naked) void FUN_00504f8a_00504F8A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        push 1e6h
        push 5c7650h
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 B4 61 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x504fb9
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 1E 04 00 00: jmp 0x5053d7
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x504fd3
        __asm _emit 0x75
        __asm _emit 0x14
        push 1ebh
        push 5c7650h
        ; Exact mapped bytes E8 32 FA 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xfa
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504fd3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x504fb9
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 6E AE FC FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x505000
        __asm _emit 0x75
        __asm _emit 0x14
        push 1ech
        push 5c7650h
        ; Exact mapped bytes E8 05 FA 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfa
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505000
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x504fd9
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 1D: jne 0x50502c
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 75 14: jne 0x50502c
        __asm _emit 0x75
        __asm _emit 0x14
        push 1edh
        push 5c7650h
        ; Exact mapped bytes E8 D9 F9 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf9
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50502c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x505006
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 1D: jne 0x505058
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 75 14: jne 0x505058
        __asm _emit 0x75
        __asm _emit 0x14
        push 1eeh
        push 5c7650h
        ; Exact mapped bytes E8 AD F9 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf9
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505058
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x505032
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 33: je 0x50509a
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
        ; Exact mapped bytes E8 D4 AD FC FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xad
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50509a
        __asm _emit 0x75
        __asm _emit 0x14
        push 1f0h
        push 5c7650h
        ; Exact mapped bytes E8 6B F9 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf9
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50509a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 BE: jne 0x50505e
        __asm _emit 0x75
        __asm _emit 0xbe
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 74 33: je 0x5050dc
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
        ; Exact mapped bytes E8 92 AD FC FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xad
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5050dc
        __asm _emit 0x75
        __asm _emit 0x14
        push 1f2h
        push 5c7650h
        ; Exact mapped bytes E8 29 F9 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf9
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5050dc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 BE: jne 0x5050a0
        __asm _emit 0x75
        __asm _emit 0xbe
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 12 C8 02 00: call 0x5318fc
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x505102
        __asm _emit 0x75
        __asm _emit 0x14
        push 1f3h
        push 5c7650h
        ; Exact mapped bytes E8 03 F9 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf9
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505102
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x5050e2
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + 28h]
        sub eax, dword ptr [edx + 24h]
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 73 08: jae 0x505127
        __asm _emit 0x73
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x505136
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
        ; Exact mapped bytes E8 D0 3E FA FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x3e
        __asm _emit 0xfa
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
        ; Exact mapped bytes 0F 84 53 02 00 00: je 0x5053d1
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
        ; Exact mapped bytes 74 14: je 0x5051a0
        __asm _emit 0x74
        __asm _emit 0x14
        push 1ffh
        push 5c7650h
        ; Exact mapped bytes E8 65 F8 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5051a0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x50517e
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
        ; Exact mapped bytes 76 06: jbe 0x505209
        __asm _emit 0x76
        __asm _emit 0x06
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 77 BD: ja 0x5051c6
        __asm _emit 0x77
        __asm _emit 0xbd
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 85 B3 01 00 00: jne 0x5053d1
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
        ; Exact mapped bytes 74 14: je 0x505240
        __asm _emit 0x74
        __asm _emit 0x14
        push 215h
        push 5c7650h
        ; Exact mapped bytes E8 C5 F7 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xf7
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505240
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x50521e
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 72 14: jb 0x505265
        __asm _emit 0x72
        __asm _emit 0x14
        push 216h
        push 5c7650h
        ; Exact mapped bytes E8 A0 F7 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf7
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505265
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x505246
        __asm _emit 0x75
        __asm _emit 0xdb
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x505312
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 76 08: jbe 0x50528b
        __asm _emit 0x76
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 09: jmp 0x505294
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
        ; Exact mapped bytes 76 0E: jbe 0x5052f5
        __asm _emit 0x76
        __asm _emit 0x0e
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 76 08: jbe 0x5052f5
        __asm _emit 0x76
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 72 B5: jb 0x5052aa
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
        ; Exact mapped bytes EB 62: jmp 0x505374
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
        ; Exact mapped bytes 74 14: je 0x505362
        __asm _emit 0x74
        __asm _emit 0x14
        push 22fh
        push 5c7650h
        ; Exact mapped bytes E8 A3 F6 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf6
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505362
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x50533d
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
        ; Exact mapped bytes 73 08: jae 0x50538d
        __asm _emit 0x73
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x50539c
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
        ; Exact mapped bytes E8 6A 3C FA FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x3c
        __asm _emit 0xfa
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
