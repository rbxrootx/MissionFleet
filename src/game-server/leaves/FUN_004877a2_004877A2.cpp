// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004877A2 .. +0x63D bytes.
extern "C" __declspec(naked) void FUN_004877a2_004877A2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 50h], ecx
        mov dword ptr [ebp - 8], 0
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0C 10 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ecx + 64h], eax
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [edx + 0ch], 1
        lea eax, [ebp - 4]
        push eax
        push 4004667fh
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 0B 1C 00 00: call 0x489400
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 CD 05 00 00: je 0x487dcc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx + 3ch]
        add edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [eax + 38h]
        ; Exact mapped bytes 76 61: jbe 0x487877
        __asm _emit 0x76
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 A1 5B 06 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x5b
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 74 2F: je 0x487863
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 3ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx + 34h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 D5 17 02 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 A9 5B 06 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x5b
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 38h], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + 34h], ecx
        ; Exact mapped bytes EB 76: jmp 0x4878ed
        __asm _emit 0xeb
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 50h]
        cmp dword ptr [edx + 38h], 8000h
        ; Exact mapped bytes 76 6A: jbe 0x4878ed
        __asm _emit 0x76
        __asm _emit 0x6a
        cmp dword ptr [ebp - 20h], 4000h
        ; Exact mapped bytes 73 61: jae 0x4878ed
        __asm _emit 0x73
        __asm _emit 0x61
        push 8000h
        ; Exact mapped bytes E8 2A 5B 06 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x5b
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 74 2F: je 0x4878da
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 3ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx + 34h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 5E 17 02 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 32 5B 06 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x5b
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ecx + 38h], 8000h
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [edx + 34h], eax
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [eax + 38h]
        sub edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp - 50h]
        add ecx, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 18h], ecx
        mov esi, esp
        push 0
        mov eax, dword ptr [ebp - 50h]
        add eax, 20h
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        push 1
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 38 29 5E 00: call dword ptr [0x5e2938]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 98 0E 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 0F 84 4D 04 00 00: je 0x487d9e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx + 3ch]
        add edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [eax + 3ch], edx
        mov ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ecx + 0e0h], 0
        ; Exact mapped bytes 0F 84 07 03 00 00: je 0x487c80
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 50h]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 0F 84 F5 02 00 00: je 0x487c7b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        cmp dword ptr [eax + 3ch], 14h
        ; Exact mapped bytes 0F 82 BC 02 00 00: jb 0x487c4f
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx + 3ch]
        sub edx, 14h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 4
        cmp edx, ecx
        ; Exact mapped bytes 0F 82 A2 02 00 00: jb 0x487c4f
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx], 1020304h
        ; Exact mapped bytes 0F 85 55 02 00 00: jne 0x487c11
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 4], 8002000fh
        ; Exact mapped bytes 75 0C: jne 0x4879e9
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 30h], 1
        ; Exact mapped bytes E9 78 01 00 00: jmp 0x487b61
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [ebp - 14h]
        lea ecx, [eax + edx + 14h]
        push ecx
        lea edx, [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 1E 16 02 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x487a1d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 1
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 38h], 14h
        ; Exact mapped bytes 73 1F: jae 0x487a42
        __asm _emit 0x73
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 3ch]
        add edx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        add eax, 0dh
        mov ecx, dword ptr [ebp - 38h]
        imul ecx, ecx, 0bh
        imul eax, ecx
        mov edx, dword ptr [ebp - 2ch]
        add edx, eax
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB D2: jmp 0x487a14
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x487a54
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 38h]
        add eax, 1
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 38h]
        cmp edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 73 20: jae 0x487a7f
        __asm _emit 0x73
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 3ch]
        add eax, dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F BE 48 14: movsx ecx, byte ptr [eax + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x14
        add ecx, 1dh
        mov edx, dword ptr [ebp - 38h]
        imul edx, edx, 7
        imul ecx, edx
        mov eax, dword ptr [ebp - 2ch]
        add eax, ecx
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB CC: jmp 0x487a4b
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ecx + 0d0h], 0
        ; Exact mapped bytes 74 4D: je 0x487ad8
        __asm _emit 0x74
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [ebp - 2ch]
        imul eax, dword ptr [edx + 0dch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ecx + 0c8h]
        ; Exact mapped bytes E8 09 B4 F8 FF: call 0x412eb0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xb4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        xor edx, eax
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 0dch]
        add ecx, 11h
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [edx + 0dch], ecx
        mov eax, dword ptr [ebp - 2ch]
        cmp eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes 75 07: jne 0x487ad3
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 1
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x487b61
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        xor ecx, 7c8ba106h
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        cmp edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 75 09: jne 0x487af5
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 1
        ; Exact mapped bytes EB 6C: jmp 0x487b61
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 2ch]
        xor eax, 7c8ba106h
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ebp - 2ch]
        imul edx, dword ptr [ecx + 0dch]
        push edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 0c8h]
        ; Exact mapped bytes E8 94 B3 F8 FF: call 0x412eb0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xb3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        xor ecx, eax
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        cmp edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 75 35: jne 0x487b61
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 4], 8002030eh
        ; Exact mapped bytes 75 29: jne 0x487b61
        __asm _emit 0x75
        __asm _emit 0x29
        mov dword ptr [ebp - 30h], 1
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ecx + 0d0h], 1
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 0dch]
        add eax, 11h
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ecx + 0dch], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 78: je 0x487bdf
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 50h]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 74 4E: je 0x487bbe
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 14h]
        add eax, 14h
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 4ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 47 0C 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x487bbc
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 14h]
        add eax, 14h
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        cmp esi, esp
        ; Exact mapped bytes E8 24 0C 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 1F: jmp 0x487bdd
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 14h
        mov esi, esp
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 50h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        cmp esi, esp
        ; Exact mapped bytes E8 03 0C 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 30: jmp 0x487c0f
        __asm _emit 0xeb
        __asm _emit 0x30
        mov esi, esp
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 0dch]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 14h
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 50h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 D1 0B 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x487c26
        __asm _emit 0xeb
        __asm _emit 0x15
        push 0
        push 4c9h
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 EA BC F7 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xbc
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 18h
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 3ch]
        sub eax, ecx
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ecx + 3ch], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [ecx + eax + 18h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 27: jmp 0x487c76
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 34h]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 1A: je 0x487c74
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 3ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 34h]
        push eax
        ; Exact mapped bytes E8 1F 4C 02 00: call 0x4ac890
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 05: jmp 0x487c7b
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 FE FC FF FF: jmp 0x487979
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 1C 01 00 00: jmp 0x487d9c
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 0F 84 0F 01 00 00: je 0x487d9c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 50h]
        cmp dword ptr [edx + 3ch], 14h
        ; Exact mapped bytes 0F 82 D6 00 00 00: jb 0x487d70
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 3ch]
        sub ecx, 14h
        mov edx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [edx + 10h]
        ; Exact mapped bytes 0F 82 C1 00 00 00: jb 0x487d70
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax], 1020304h
        ; Exact mapped bytes 75 78: jne 0x487d32
        __asm _emit 0x75
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 74 4E: je 0x487d11
        __asm _emit 0x74
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 14h]
        add edx, 14h
        mov esi, esp
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        mov ecx, dword ptr [edx + 4ch]
        mov eax, dword ptr [ebp - 50h]
        mov edx, dword ptr [eax + 4ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 F4 0A 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x487d0f
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 14h
        mov esi, esp
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 50h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        cmp esi, esp
        ; Exact mapped bytes E8 D1 0A 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 1F: jmp 0x487d30
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 14h]
        add eax, 14h
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        cmp esi, esp
        ; Exact mapped bytes E8 B0 0A 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x487d47
        __asm _emit 0xeb
        __asm _emit 0x15
        push 0
        push 4c9h
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 C9 BB F7 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xbb
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        add edx, 14h
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 3ch]
        sub ecx, edx
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [edx + 3ch], ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 14h]
        lea eax, [edx + ecx + 14h]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 27: jmp 0x487d97
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx + 34h]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 1A: je 0x487d95
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 3ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        ; Exact mapped bytes E8 FE 4A 02 00: call 0x4ac890
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 05: jmp 0x487d9c
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 E4 FE FF FF: jmp 0x487c80
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 2E: jmp 0x487dcc
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 50h]
        cmp dword ptr [edx + 48h], 0
        ; Exact mapped bytes 74 0B: je 0x487db2
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 9E 17 00 00: call 0x489550
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 4cah
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 49 BB F7 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xbb
        __asm _emit 0xf7
        __asm _emit 0xff
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 03: jmp 0x487dcf
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 05 0A 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
