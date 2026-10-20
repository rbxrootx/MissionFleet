// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042A692 .. +0x63D bytes.
extern "C" __declspec(naked) void FUN_0042a692_0042A692() {
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
        ; Exact mapped bytes FF 15 CC C0 68 00: call dword ptr [0x68c0cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc0
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2C A7 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa7
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ecx + 64h], eax
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [edx + 0ch], 1
        lea eax, [ebp - 4]
        push eax
        push 4004667fh
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 EB 1B 00 00: call 0x42c2d0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 CD 05 00 00: je 0x42acbc
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
        ; Exact mapped bytes 76 61: jbe 0x42a767
        __asm _emit 0x76
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 51 1D 0A 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x1d
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 74 2F: je 0x42a753
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
        ; Exact mapped bytes E8 C5 AB 03 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 59 1D 0A 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x1d
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 38h], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + 34h], ecx
        ; Exact mapped bytes EB 76: jmp 0x42a7dd
        __asm _emit 0xeb
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 50h]
        cmp dword ptr [edx + 38h], 8000h
        ; Exact mapped bytes 76 6A: jbe 0x42a7dd
        __asm _emit 0x76
        __asm _emit 0x6a
        cmp dword ptr [ebp - 20h], 4000h
        ; Exact mapped bytes 73 61: jae 0x42a7dd
        __asm _emit 0x73
        __asm _emit 0x61
        push 8000h
        ; Exact mapped bytes E8 DA 1C 0A 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x1c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 74 2F: je 0x42a7ca
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
        ; Exact mapped bytes E8 4E AB 03 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 E2 1C 0A 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x1c
        __asm _emit 0x0a
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
        ; Exact mapped bytes FF 15 90 C1 68 00: call dword ptr [0x68c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B8 A5 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 0F 84 4D 04 00 00: je 0x42ac8e
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
        ; Exact mapped bytes 0F 84 07 03 00 00: je 0x42ab70
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 50h]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 0F 84 F5 02 00 00: je 0x42ab6b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        cmp dword ptr [eax + 3ch], 14h
        ; Exact mapped bytes 0F 82 BC 02 00 00: jb 0x42ab3f
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
        ; Exact mapped bytes 0F 82 A2 02 00 00: jb 0x42ab3f
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx], 1020304h
        ; Exact mapped bytes 0F 85 55 02 00 00: jne 0x42ab01
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
        ; Exact mapped bytes 75 0C: jne 0x42a8d9
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 30h], 1
        ; Exact mapped bytes E9 78 01 00 00: jmp 0x42aa51
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
        ; Exact mapped bytes E8 0E AA 03 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x42a90d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 1
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 38h], 14h
        ; Exact mapped bytes 73 1F: jae 0x42a932
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
        ; Exact mapped bytes EB D2: jmp 0x42a904
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x42a944
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 38h]
        add eax, 1
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 38h]
        cmp edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 73 20: jae 0x42a96f
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
        ; Exact mapped bytes EB CC: jmp 0x42a93b
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ecx + 0d0h], 0
        ; Exact mapped bytes 74 4D: je 0x42a9c8
        __asm _emit 0x74
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [ebp - 2ch]
        imul eax, dword ptr [edx + 0dch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ecx + 0c8h]
        ; Exact mapped bytes E8 29 18 00 00: call 0x42c1c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 75 07: jne 0x42a9c3
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 1
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x42aa51
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
        ; Exact mapped bytes 75 09: jne 0x42a9e5
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 1
        ; Exact mapped bytes EB 6C: jmp 0x42aa51
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
        ; Exact mapped bytes E8 B4 17 00 00: call 0x42c1c0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        xor ecx, eax
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        cmp edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 75 35: jne 0x42aa51
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 4], 8002030eh
        ; Exact mapped bytes 75 29: jne 0x42aa51
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
        ; Exact mapped bytes 74 78: je 0x42aacf
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 50h]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 74 4E: je 0x42aaae
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
        ; Exact mapped bytes E8 67 A3 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x42aaac
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
        ; Exact mapped bytes E8 44 A3 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 1F: jmp 0x42aacd
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
        ; Exact mapped bytes E8 23 A3 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 30: jmp 0x42aaff
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
        ; Exact mapped bytes E8 F1 A2 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa2
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x42ab16
        __asm _emit 0xeb
        __asm _emit 0x15
        push 0
        push 4c9h
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 51 67 FD FF: call 0x401267
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x67
        __asm _emit 0xfd
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
        ; Exact mapped bytes EB 27: jmp 0x42ab66
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 34h]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 1A: je 0x42ab64
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
        ; Exact mapped bytes E8 FF B0 03 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 05: jmp 0x42ab6b
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 FE FC FF FF: jmp 0x42a869
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 1C 01 00 00: jmp 0x42ac8c
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 0F 84 0F 01 00 00: je 0x42ac8c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 50h]
        cmp dword ptr [edx + 3ch], 14h
        ; Exact mapped bytes 0F 82 D6 00 00 00: jb 0x42ac60
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
        ; Exact mapped bytes 0F 82 C1 00 00 00: jb 0x42ac60
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax], 1020304h
        ; Exact mapped bytes 75 78: jne 0x42ac22
        __asm _emit 0x75
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 74 4E: je 0x42ac01
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
        ; Exact mapped bytes E8 14 A2 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xa2
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x42abff
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
        ; Exact mapped bytes E8 F1 A1 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 1F: jmp 0x42ac20
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
        ; Exact mapped bytes E8 D0 A1 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x42ac37
        __asm _emit 0xeb
        __asm _emit 0x15
        push 0
        push 4c9h
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 30 66 FD FF: call 0x401267
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x66
        __asm _emit 0xfd
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
        ; Exact mapped bytes EB 27: jmp 0x42ac87
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx + 34h]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 1A: je 0x42ac85
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
        ; Exact mapped bytes E8 DE AF 03 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 05: jmp 0x42ac8c
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 E4 FE FF FF: jmp 0x42ab70
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 2E: jmp 0x42acbc
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 50h]
        cmp dword ptr [edx + 48h], 0
        ; Exact mapped bytes 74 0B: je 0x42aca2
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 1E 18 00 00: call 0x42c4c0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 4cah
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 B0 65 FD FF: call 0x401267
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x65
        __asm _emit 0xfd
        __asm _emit 0xff
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 03: jmp 0x42acbf
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 25 A1 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
