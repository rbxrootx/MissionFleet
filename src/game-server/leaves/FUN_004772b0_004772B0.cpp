// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004772B0 .. +0x870 bytes.
extern "C" __declspec(naked) void FUN_004772b0_004772B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bf49h
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
        sub esp, 20h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 2ch], ecx
        push 0
        lea eax, [ebp - 28h]
        push eax
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 26 F7 FF FF: call 0x476a20
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1F 11 00 00: call 0x478420
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 2E 1D 05 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 3E FF FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        ; Exact mapped bytes 3B 05 54 CB 5D 00: cmp eax, dword ptr [0x5dcb54]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x477342
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 38 FF FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 54: jmp 0x477396
        __asm _emit 0xeb
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 25 FF FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 3B 0D 54 CB 5D 00: cmp ecx, dword ptr [0x5dcb54]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x47736b
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 FF FE FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 2B: jmp 0x477396
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 FC FE FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 B1 14 00 00: call 0x478830
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 E2 FE FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 84 95 01 00 00: je 0x477537
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 B5 FE FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 FA 10 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 99 FE FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 8B FE FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [esi]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 8B FE FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 13: jne 0x477402
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 B8 10 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 74: jmp 0x477476
        __asm _emit 0xeb
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 A5 10 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 97 10 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 87 10 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 2C FE FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 2B FE FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 1D FE FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 0D FE FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 42 10 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 82 0E 00 00: call 0x478300
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 75 0F: jne 0x477494
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 73 0E 00 00: call 0x478300
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 58: jmp 0x4774ec
        __asm _emit 0xeb
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 13 10 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 B8 FD FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 75 1E: jne 0x4774d0
        __asm _emit 0x75
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 F5 0F 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 9A FD FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 1C: jmp 0x4774ec
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 D7 0F 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 8C FD FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 BB 0F 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 AD 0F 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 8D 0F 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 80 0F 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 07 19 00 00: call 0x478e30
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E9 4A 01 00 00: jmp 0x477681
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 70 0F 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 62 0F 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A3 0D 00 00: call 0x478300
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 75 0F: jne 0x477573
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 94 0D 00 00: call 0x478300
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 58: jmp 0x4775cb
        __asm _emit 0xeb
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 34 0F 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 D9 FC FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 75 1E: jne 0x4775af
        __asm _emit 0x75
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 16 0F 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 BB FC FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 1C: jmp 0x4775cb
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 F8 0E 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 AD FC FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 CD 0C 00 00: call 0x4782a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 74 02: je 0x4775dc
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 4A: jmp 0x477626
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 8B FC FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 3B 0D 54 CB 5D 00: cmp ecx, dword ptr [0x5dcb54]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 1C: jne 0x47760e
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 B5 0E 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 98 0C 00 00: call 0x4782a0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 18: jmp 0x477626
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 19 12 00 00: call 0x478830
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 7C 0C 00 00: call 0x4782a0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], esi
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A2 0C 00 00: call 0x4782d0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 74 02: je 0x477637
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 4A: jmp 0x477681
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 20 FC FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 3B 15 54 CB 5D 00: cmp edx, dword ptr [0x5dcb54]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 1C: jne 0x477669
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 5A 0E 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 6D 0C 00 00: call 0x4782d0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 18: jmp 0x477681
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 1E 11 00 00: call 0x478790
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 51 0C 00 00: call 0x4782d0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], esi
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 16 0E 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 0F 85 25 04 00 00: jne 0x477abb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 62 0C 00 00: call 0x478300
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 0F 84 00 04 00 00: je 0x477aa9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 EE 0D 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 0F 85 EB 03 00 00: jne 0x477aa9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 E9 0D 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 8E FB FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 0F 85 E6 01 00 00: jne 0x4778c6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 C7 0D 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 7C FB FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 9B 0D 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 62: jne 0x47776f
        __asm _emit 0x75
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 8A 0D 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 88 0D 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 6D 0D 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 6B 0D 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 AD 0E 00 00: call 0x478600
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 54 0D 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 09 FB FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 E8 FA FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 1D 0D 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 75 44: jne 0x4777cf
        __asm _emit 0x75
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 DC FA FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 01 0D 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 75 28: jne 0x4777cf
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 F0 0C 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 EE 0C 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 F2 00 00 00: jmp 0x4778c1
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 98 FA FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 BD 0C 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 75 57: jne 0x477842
        __asm _emit 0x75
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 6C FA FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 A1 0C 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 8F 0C 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 0
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 AA 10 00 00: call 0x4788d0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 81 0C 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 36 FA FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 65 0C 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 4A 0C 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 3C 0C 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 3C 0C 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 21 0C 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 DF F9 FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 04 0C 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 02 0C 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 44 0D 00 00: call 0x478600
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E8 01 00 00: jmp 0x477aa9
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 DE 01 00 00: jmp 0x477aa4
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 E1 0B 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 86 F9 FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 B5 0B 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 62: jne 0x477955
        __asm _emit 0x75
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 A4 0B 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 A2 0B 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 87 0B 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 85 0B 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 97 0F 00 00: call 0x4788d0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 6E 0B 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 13 F9 FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 12 F9 FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 37 0B 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 75 44: jne 0x4779b5
        __asm _emit 0x75
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 E6 F8 FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 1B 0B 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 75 28: jne 0x4779b5
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 0A 0B 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 08 0B 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes E9 EF 00 00 00: jmp 0x477aa4
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 A2 F8 FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 D7 0A 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 75 57: jne 0x477a28
        __asm _emit 0x75
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 96 F8 FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 BB 0A 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 A9 0A 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 0
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F4 0B 00 00: call 0x478600
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 9B 0A 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 40 F8 FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 7F 0A 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 64 0A 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 56 0A 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 56 0A 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 3B 0A 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 E9 F7 FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 1E 0A 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 1C 0A 00 00: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2E 0E 00 00: call 0x4788d0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x477aa9
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 ED FB FF FF: jmp 0x477696
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 EE 09 00 00: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 BC F7 FF FF: call 0x477280
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 20 10 00 00: call 0x478af0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 44 F6 FF FF: call 0x477120
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 0ch]
        sub eax, 1
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 1E 16 05 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x16
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 2ch
        cmp ebp, esp
        ; Exact mapped bytes E8 C6 0C 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
