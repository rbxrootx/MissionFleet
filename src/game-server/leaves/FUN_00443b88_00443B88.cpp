// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00443B88 .. +0x5C7 bytes.
extern "C" __declspec(naked) void FUN_00443b88_00443B88() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57af65h
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
        sub esp, 140h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 14ch]
        mov ecx, 50h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 14ch], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 144h], eax
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 75 07: jne 0x443bdb
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 55 05 00 00: jmp 0x444130
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 140h]
        ; Exact mapped bytes E8 21 D3 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xd3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 38h], 1
        mov ecx, dword ptr [ebp - 14ch]
        add ecx, 340h
        ; Exact mapped bytes E8 3C 3C 09 00: call 0x4d7841
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x3c
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 1ch], 5
        mov dword ptr [ebp - 20h], 3ch
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 24h], 5b65a4h
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 14ch]
        add ecx, 340h
        ; Exact mapped bytes E8 59 3D 09 00: call 0x4d7999
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x3d
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 1
        mov esi, esp
        push 5b65a8h
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 D7 28 00 00: call 0x446530
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 79 4B 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x4b
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x443cff
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5b65b8h
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 AF 28 00 00: call 0x446530
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 51 4B 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x4b
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 6C: je 0x443cff
        __asm _emit 0x74
        __asm _emit 0x6c
        mov esi, esp
        push 5b65cch
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 8B 28 00 00: call 0x446530
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2D 4B 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x4b
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x443cff
        __asm _emit 0x74
        __asm _emit 0x48
        mov esi, esp
        push 5b65d8h
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 67 28 00 00: call 0x446530
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 09 4B 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x4b
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x443cff
        __asm _emit 0x74
        __asm _emit 0x24
        mov esi, esp
        push 5b65e4h
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 43 28 00 00: call 0x446530
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E5 4A 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x443d0f
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 26 28 00 00: call 0x446530
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x443d16
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 5b65f0h
        lea edx, [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 14ch]
        add ecx, 340h
        ; Exact mapped bytes E8 BE 3B 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 2
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 140h]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 8F 42 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 1D 28 00 00: call 0x446570
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 10060000h
        ; Exact mapped bytes 75 15: jne 0x443d6f
        __asm _emit 0x75
        __asm _emit 0x15
        push 100h
        lea ecx, [ebp - 140h]
        ; Exact mapped bytes E8 8E A2 0A 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xa2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x443d76
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 5b6608h
        lea edx, [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 14ch]
        add ecx, 340h
        ; Exact mapped bytes E8 5E 3B 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 3
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 B3 27 00 00: call 0x446550
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 CC D9 0E 00: call 0x531770
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 9E 27 00 00: call 0x446550
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9F D9 0E 00: call 0x531758
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd9
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 8B 27 00 00: call 0x446550
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 74 D9 0E 00: call 0x531740
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd9
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        push 5b6614h
        lea eax, [ebp - 138h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 14h
        cmp esi, esp
        ; Exact mapped bytes E8 F7 49 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x49
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 138h]
        mov dword ptr [ebp - 24h], ecx
        lea edx, [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 14ch]
        add ecx, 340h
        ; Exact mapped bytes E8 E2 3A 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x3a
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 4
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 37 27 00 00: call 0x446550
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 50 D9 0E 00: call 0x531770
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 22 27 00 00: call 0x446550
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 23 D9 0E 00: call 0x531758
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xd9
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 0F 27 00 00: call 0x446550
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F8 D8 0E 00: call 0x531740
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd8
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        push 5b6624h
        lea eax, [ebp - 138h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 14h
        cmp esi, esp
        ; Exact mapped bytes E8 7B 49 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x49
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 138h]
        mov dword ptr [ebp - 24h], ecx
        lea edx, [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 14ch]
        add ecx, 340h
        ; Exact mapped bytes E8 66 3A 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x3a
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 5
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 DB 26 00 00: call 0x446570
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 10060000h
        ; Exact mapped bytes 75 45: jne 0x443ee1
        __asm _emit 0x75
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 144h]
        cmp dword ptr [eax + 168h], 0
        ; Exact mapped bytes 74 2D: je 0x443ed8
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 144h]
        mov edx, dword ptr [ecx + 168h]
        mov esi, esp
        mov eax, dword ptr [edx + 18h]
        push eax
        push 5b6634h
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 0A 49 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x49
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x443edf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 5b6638h
        ; Exact mapped bytes EB 07: jmp 0x443ee8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 5b663ch
        lea edx, [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 14ch]
        add ecx, 340h
        ; Exact mapped bytes E8 EC 39 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 6
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 61 26 00 00: call 0x446570
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 10060000h
        ; Exact mapped bytes 75 45: jne 0x443f5b
        __asm _emit 0x75
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 144h]
        cmp dword ptr [eax + 168h], 0
        ; Exact mapped bytes 74 2D: je 0x443f52
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 144h]
        mov edx, dword ptr [ecx + 168h]
        mov esi, esp
        mov eax, dword ptr [edx + 1ch]
        push eax
        push 5b6640h
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 90 48 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x443f59
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 5b6644h
        ; Exact mapped bytes EB 07: jmp 0x443f62
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 5b6648h
        lea edx, [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 14ch]
        add ecx, 340h
        ; Exact mapped bytes E8 72 39 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 7
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 E7 25 00 00: call 0x446570
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 10060000h
        ; Exact mapped bytes 75 09: jne 0x443f99
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 5b664ch
        ; Exact mapped bytes EB 07: jmp 0x443fa0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 5b6654h
        lea eax, [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        add ecx, 340h
        ; Exact mapped bytes E8 34 39 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 144h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 14ch]
        add ecx, 340h
        ; Exact mapped bytes E8 6E 39 09 00: call 0x4d793f
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 70 F9 FB FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf9
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 29 25 00 00: call 0x446510
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 14ch]
        add ecx, 340h
        ; Exact mapped bytes E8 6E A7 09 00: call 0x4de76a
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xa7
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14ch]
        mov eax, dword ptr [edx + 400h]
        add eax, 1
        mov ecx, dword ptr [ebp - 14ch]
        mov dword ptr [ecx + 400h], eax
        push 1
        mov edx, dword ptr [ebp - 14ch]
        mov eax, dword ptr [edx + 400h]
        push eax
        push 3ech
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 31 AB 0A 00: call 0x4eeb67
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xab
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], 1
        ; Exact mapped bytes EB 0F: jmp 0x444051
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 13ch]
        add ecx, 1
        mov dword ptr [ebp - 13ch], ecx
        mov ecx, dword ptr [ebp - 14ch]
        add ecx, 340h
        ; Exact mapped bytes E8 DF 37 09 00: call 0x4d7841
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x37
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes 0F 8D 8F 00 00 00: jge 0x4440fd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 34h], edx
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 1ch], 5
        mov eax, dword ptr [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 14ch]
        add ecx, 340h
        ; Exact mapped bytes E8 96 09 09 00: call 0x4d4a3a
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A5 F8 FB FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xf8
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5E 24 00 00: call 0x446510
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 13ch]
        add edx, 1
        mov esi, esp
        push edx
        push 5b665ch
        lea eax, [ebp - 138h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 06 47 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x47
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 138h]
        mov dword ptr [ebp - 24h], ecx
        lea edx, [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 14ch]
        add ecx, 340h
        ; Exact mapped bytes E8 F1 37 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x37
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 45 FF FF FF: jmp 0x444042
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14ch]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 02 25 00 00: call 0x446610
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 148h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 140h]
        ; Exact mapped bytes E8 22 97 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x97
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 148h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 14ch
        cmp ebp, esp
        ; Exact mapped bytes E8 97 46 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x46
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
