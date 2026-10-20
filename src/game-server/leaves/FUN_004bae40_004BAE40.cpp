// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BAE40 .. +0x3EF bytes.
extern "C" __declspec(naked) void FUN_004bae40_004BAE40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b0h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 06: jl 0x4bae55
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 5
        ; Exact mapped bytes 7E 07: jle 0x4bae5c
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CF 03 00 00: jmp 0x4bb22b
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 13h
        ; Exact mapped bytes E8 8D A3 FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes A1 0C F1 5D 00: mov eax, dword ptr [0x5df10c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        add eax, 1
        ; Exact mapped bytes A3 0C F1 5D 00: mov dword ptr [0x5df10c], eax
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 10 F1 5D 00 00: cmp dword ptr [0x5df110], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x4bae8d
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        ; Exact mapped bytes FF 15 F0 23 5E 00: call dword ptr [0x5e23f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB ED: jmp 0x4bae7a
        __asm _emit 0xeb
        __asm _emit 0xed
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 3E: je 0x4baed1
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 18: je 0x4baeb1
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 8A 03 00 00: call 0x4bb230
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 12: jmp 0x4baec3
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 0ch
        mov ecx, dword ptr [eax + 5d1ffch]
        mov dword ptr [ebp - 0a8h], ecx
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes E9 3A 03 00 00: jmp 0x4bb20b
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 1
        mov dword ptr [ebp - 0ch], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 1A 03 00 00: je 0x4bb203
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 4ch
        ; Exact mapped bytes 0F 85 1C 02 00 00: jne 0x4bb114
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 42 01: movsx eax, byte ptr [edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        cmp eax, 43h
        ; Exact mapped bytes 0F 85 0C 02 00 00: jne 0x4bb114
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 51 02: movsx edx, byte ptr [ecx + 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x02
        cmp edx, 5fh
        ; Exact mapped bytes 0F 85 FC 01 00 00: jne 0x4bb114
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 9ch], eax
        push 58cd10h
        mov ecx, dword ptr [ebp - 9ch]
        push ecx
        ; Exact mapped bytes E8 5E F1 FF FF: call 0x4ba090
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 0a0h], eax
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 29: je 0x4baf6d
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 0a0h]
        sub edx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 0a4h], edx
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 0E: je 0x4baf6d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 3bh
        ; Exact mapped bytes 75 26: jne 0x4baf93
        __asm _emit 0x75
        __asm _emit 0x26
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x4baf8c
        __asm _emit 0x74
        __asm _emit 0x19
        push 13h
        ; Exact mapped bytes E8 16 A3 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 8B 15 0C F1 5D 00: mov edx, dword ptr [0x5df10c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        sub edx, 1
        ; Exact mapped bytes 89 15 0C F1 5D 00: mov dword ptr [0x5df10c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 98 02 00 00: jmp 0x4bb22b
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 09: jmp 0x4bafa5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 7F 48: jg 0x4baff3
        __asm _emit 0x7f
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        mov edx, dword ptr [ebp - 9ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 0ch
        mov ecx, dword ptr [eax + 5d1ff8h]
        push ecx
        ; Exact mapped bytes E8 B5 E7 FE FF: call 0x4a9780
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x4baff1
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 0ch
        mov eax, dword ptr [edx + 5d1ff8h]
        push eax
        ; Exact mapped bytes E8 EC E3 FE FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes 75 02: jne 0x4baff1
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4baff3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB A9: jmp 0x4baf9c
        __asm _emit 0xeb
        __asm _emit 0xa9
        push 58cd0ch
        mov ecx, dword ptr [ebp - 0a0h]
        add ecx, 1
        mov dword ptr [ebp - 0a0h], ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        ; Exact mapped bytes E8 0D F5 FF FF: call 0x4ba520
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 0a4h], eax
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 75 34: jne 0x4bb059
        __asm _emit 0x75
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 3bh
        ; Exact mapped bytes 74 26: je 0x4bb059
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x4bb052
        __asm _emit 0x74
        __asm _emit 0x19
        push 13h
        ; Exact mapped bytes E8 50 A2 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 8B 15 0C F1 5D 00: mov edx, dword ptr [0x5df10c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        sub edx, 1
        ; Exact mapped bytes 89 15 0C F1 5D 00: mov dword ptr [0x5df10c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 D2 01 00 00: jmp 0x4bb22b
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 7F 4B: jg 0x4bb0aa
        __asm _emit 0x7f
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        push ecx
        lea edx, [ebp - 98h]
        push edx
        ; Exact mapped bytes E8 C7 E7 FE FF: call 0x4a9840
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 0a4h]
        mov byte ptr [ebp + eax - 98h], 0
        lea ecx, [ebp - 98h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 96 01 00 00: call 0x4bb230
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4bb0aa
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0a0h]
        add ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 9ch], ecx
        mov edx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x4bb0d8
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 9ch]
        add ecx, 1
        mov dword ptr [ebp - 9ch], ecx
        mov edx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 0F 85 38 FE FF FF: jne 0x4baf21
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0D: je 0x4bb0fc
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes E8 DC 02 00 00: call 0x4bb3d0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x4bb106
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov ecx, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x4bb201
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0
        push 0
        lea eax, [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 A4 03 00 00: call 0x4bb4d0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x4bb201
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x4bb14e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 7F 5C: jg 0x4bb1b0
        __asm _emit 0x7f
        __asm _emit 0x5c
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 54: je 0x4bb1ae
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 0ch
        mov ecx, dword ptr [eax + 5d1ffch]
        push ecx
        lea edx, [ebp - 98h]
        push edx
        ; Exact mapped bytes E8 BD ED FF FF: call 0x4b9f30
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x4bb1a5
        __asm _emit 0x74
        __asm _emit 0x2b
        lea eax, [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 A6 00 00 00: call 0x4bb230
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x4bb19c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 07: jmp 0x4bb1a3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x4bb1ae
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 95: jmp 0x4bb145
        __asm _emit 0xeb
        __asm _emit 0x95
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 25: je 0x4bb1db
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes E8 15 02 00 00: call 0x4bb3d0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 2
        ; Exact mapped bytes 8B 0D FC 1F 5D 00: mov ecx, dword ptr [0x5d1ffc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x1f
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 F4 FA FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes C7 05 FC 1F 5D 00 00 00 00 00: mov dword ptr [0x5d1ffc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x1f
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 26: jmp 0x4bb201
        __asm _emit 0xeb
        __asm _emit 0x26
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0D: je 0x4bb1ee
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes E8 EA 01 00 00: call 0x4bb3d0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x4bb1f8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov edx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 08: jmp 0x4bb20b
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes E8 C8 01 00 00: call 0x4bb3d0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 17: je 0x4bb228
        __asm _emit 0x74
        __asm _emit 0x17
        push 13h
        ; Exact mapped bytes E8 78 A0 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes A1 0C F1 5D 00: mov eax, dword ptr [0x5df10c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes A3 0C F1 5D 00: mov dword ptr [0x5df10c], eax
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
