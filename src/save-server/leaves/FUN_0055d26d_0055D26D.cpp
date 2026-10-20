// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055D26D .. +0x546 bytes.
extern "C" __declspec(naked) void FUN_0055d26d_0055D26D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 158h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 144h], 0
        mov dword ptr [ebp - 118h], 0
        mov dword ptr [ebp - 110h], 0
        mov dword ptr [ebp - 140h], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 138h], eax
        push 0d4h
        push 67b3b8h
        mov ecx, dword ptr [ebp - 138h]
        push ecx
        ; Exact mapped bytes E8 A0 CF F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xcf
        __asm _emit 0xf7
        __asm _emit 0xff
        push 63c7b8h
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 C0 CE F7 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xce
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55d2e8
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d5h
        push 67b3b8h
        ; Exact mapped bytes E8 5D BA FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xba
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55d2e8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x55d2c0
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 45 95 FF FF: call 0x55683e
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 14: je 0x55d312
        __asm _emit 0x74
        __asm _emit 0x14
        push 0d6h
        push 67b3b8h
        ; Exact mapped bytes E8 33 BA FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xba
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55d312
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x55d2ee
        __asm _emit 0x75
        __asm _emit 0xd6
        mov dword ptr [ebp - 13ch], 0
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 124h], 0
        lea ecx, [ebp - 108h]
        mov dword ptr [ebp - 140h], ecx
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 75 0C: jne 0x55d365
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 154h], 0
        ; Exact mapped bytes EB 4E: jmp 0x55d3b3
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 140h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 144h], eax
        mov eax, dword ptr [ebp - 144h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 13 8C F0 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x8c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], esp
        mov eax, dword ptr [ebp - 144h]
        push eax
        mov ecx, dword ptr [ebp - 140h]
        push ecx
        mov edx, dword ptr [ebp - 158h]
        push edx
        ; Exact mapped bytes E8 43 02 EF FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        lea eax, [ebp - 124h]
        push eax
        mov ecx, dword ptr [ebp - 154h]
        push ecx
        ; Exact mapped bytes FF 15 64 C2 68 00: call dword ptr [0x68c264]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 75 0B: jne 0x55d3e1
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E9 C3 03 00 00: jmp 0x55d7a4
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], 0
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 3B: je 0x55d42c
        __asm _emit 0x74
        __asm _emit 0x3b
        lea edx, [ebp - 114h]
        push edx
        push 0
        ; Exact mapped bytes FF 15 F4 C2 68 00: call dword ptr [0x68c2f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 1D: je 0x55d42c
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 124h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E9 78 03 00 00: jmp 0x55d7a4
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        sub eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 10ch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx], eax
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 0F 86 5F 01 00 00: jbe 0x55d5bc
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14ch], 0
        mov dword ptr [ebp - 148h], 0
        lea ecx, [ebp - 148h]
        push ecx
        lea edx, [ebp - 14ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        push edx
        ; Exact mapped bytes E8 45 F7 FF FF: call 0x55cbdb
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 2F: je 0x55d4d7
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 124h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 114h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E9 CD 02 00 00: jmp 0x55d7a4
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        sub eax, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 10ch], eax
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp - 14ch]
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x55d5b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 150h], 0
        lea edx, [ebp - 150h]
        push edx
        mov eax, dword ptr [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C2 68 00: call dword ptr [0x68c2c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 7D 41: jge 0x55d587
        __asm _emit 0x7d
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 148h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 148h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E9 1D 02 00 00: jmp 0x55d7a4
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 148h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 148h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 150h]
        mov dword ptr [ebp - 124h], edx
        ; Exact mapped bytes E9 94 FE FF FF: jmp 0x55d450
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x55d6a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 13ch]
        push eax
        push 640cd0h
        push 0
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 7D 64: jge 0x55d660
        __asm _emit 0x7d
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 138h]
        mov byte ptr [edx + 40h], 1
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 114h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 124h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 74 1C: je 0x55d64f
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 13ch]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 13ch], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x55d62a
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E9 44 01 00 00: jmp 0x55d7a4
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 75 14: jne 0x55d67d
        __asm _emit 0x75
        __asm _emit 0x14
        push 128h
        push 67b3b8h
        ; Exact mapped bytes E8 C8 B6 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xb6
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55d67d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x55d660
        __asm _emit 0x75
        __asm _emit 0xdd
        lea edx, [ebp - 134h]
        push edx
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 13ch]
        push edx
        ; Exact mapped bytes FF 51 3C: call dword ptr [ecx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 138h]
        mov byte ptr [eax + 40h], 0
        push 641278h
        mov ecx, dword ptr [ebp - 138h]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes E8 3C D2 FE FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 75 14: jne 0x55d6dd
        __asm _emit 0x75
        __asm _emit 0x14
        push 131h
        push 67b3b8h
        ; Exact mapped bytes E8 68 B6 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xb6
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55d6dd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x55d6c0
        __asm _emit 0x75
        __asm _emit 0xdd
        lea ecx, [ebp - 134h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        push edx
        mov eax, dword ptr [ebp - 120h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 120h]
        push edx
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 74 24: je 0x55d736
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 13ch]
        push edx
        ; Exact mapped bytes FF 51 34: call dword ptr [ecx + 0x34]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 13ch]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 120h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 120h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 1C: je 0x55d76d
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 124h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 124h], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x55d748
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 1C: je 0x55d798
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 114h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov dword ptr [ebp - 114h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x55d773
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 11ch]
        lea esp, [ebp - 164h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
