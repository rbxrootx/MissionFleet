// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 1757 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58763890 .. +0x6DD bytes.
extern "C" __declspec(naked) void FUN_58763890_segment_00() {
    __asm {
        push -1
        push 5897edb6h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 14h], esi
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 30h]
        mov ebx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 40h
        push eax
        push ecx
        push ebp
        push ebx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 C3 F8 19 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf8
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        xor edi, edi
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebp
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], edi
        push 54h
        mov dword ptr [esp + 24h], edi
        mov dword ptr [esi], 5898dc10h
        ; Exact mapped bytes E8 43 93 21 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x93
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 1
        cmp eax, edi
        ; Exact mapped bytes 74 36: je 0x58763951
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 10 46 A2 58: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 8
        ; Exact mapped bytes 7E 13: jle 0x5876393d
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0B: je 0x5876393d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 20h]
        ; Exact mapped bytes EB 02: jmp 0x5876393f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 61a8h
        push ebp
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 11 E3 FC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xe3
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58763953
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 E9 92 21 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 2
        cmp eax, edi
        ; Exact mapped bytes 74 36: je 0x587639ab
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 10 46 A2 58: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 9
        ; Exact mapped bytes 7E 13: jle 0x58763997
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0B: je 0x58763997
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 24h]
        ; Exact mapped bytes EB 02: jmp 0x58763999
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 61a8h
        push ebp
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B7 E2 FC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xe2
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587639ad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 5C F3 19 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf3
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 74 92 21 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x92
        __asm _emit 0x21
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 20h], 3
        test edi, edi
        ; Exact mapped bytes 74 24: je 0x58763a10
        __asm _emit 0x74
        __asm _emit 0x24
        push 61b2h
        push 0
        push 0
        push ebp
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A1 F7 19 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf7
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x58763a12
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 80h], ecx
        ; Exact mapped bytes E8 F9 F2 19 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf2
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        xor edi, edi
        push 184h
        mov dword ptr [esi + 74h], edi
        ; Exact mapped bytes E8 09 92 21 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x92
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 4
        cmp eax, edi
        ; Exact mapped bytes 74 30: je 0x58763a85
        __asm _emit 0x74
        __asm _emit 0x30
        push 505050h
        push edi
        push 0dcdcdch
        lea ecx, [ebp + 0c8h]
        push ecx
        lea edx, [ebx + 1a4h]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebp + 3ah]
        push ecx
        push ebx
        push edx
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 9D B9 FF FF: call 0x5875f420
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        mov dword ptr [esi + 64h], edi
        mov ecx, dword ptr [edi + 40h]
        mov eax, 7fffh
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58763aa3
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 AD F4 19 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf4
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58763ab0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 30 F4 19 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xf4
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64h]
        mov dword ptr [eax + 5ch], 14h
        mov eax, dword ptr [esi + 64h]
        push 184h
        mov dword ptr [eax + 68h], 1
        ; Exact mapped bytes E8 80 91 21 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x91
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 5
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x58763b12
        __asm _emit 0x74
        __asm _emit 0x34
        push 505050h
        push 0
        push 0dcdcdch
        lea ecx, [ebp + 0c8h]
        push ecx
        lea edx, [ebx + 1a4h]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebp + 4eh]
        push ecx
        push ebx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 12 B9 FF FF: call 0x5875f420
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58763b14
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 68h], edi
        mov ecx, dword ptr [edi + 40h]
        mov eax, 7fffh
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58763b32
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 1E F4 19 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xf4
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58763b3f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A1 F3 19 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf3
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [esi + 68h]
        mov dword ptr [eax + 5ch], 14h
        mov eax, dword ptr [esi + 68h]
        mov dword ptr [eax + 68h], 1
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 0
        ; Exact mapped bytes 7E 13: jle 0x58763b74
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0A: je 0x58763b74
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 194h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x58763b76
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 64h]
        push eax
        ; Exact mapped bytes E8 61 B5 FF FF: call 0x5875f0e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 0
        ; Exact mapped bytes 7E 13: jle 0x58763ba0
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0A: je 0x58763ba0
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [eax + 194h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes EB 02: jmp 0x58763ba2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 68h]
        push eax
        ; Exact mapped bytes E8 35 B5 FF FF: call 0x5875f0e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        push 184h
        ; Exact mapped bytes E8 99 90 21 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 6
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x58763bf9
        __asm _emit 0x74
        __asm _emit 0x34
        push 505050h
        push 0
        push 0dcdcdch
        lea ecx, [ebp + 0c8h]
        push ecx
        lea edx, [ebx + 1a4h]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebp + 62h]
        push ecx
        push ebx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2B B8 FF FF: call 0x5875f420
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58763bfb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 6ch], edi
        mov ecx, dword ptr [edi + 40h]
        mov eax, 7fffh
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58763c19
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 37 F3 19 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf3
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58763c26
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BA F2 19 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf2
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        mov dword ptr [eax + 5ch], 14h
        mov eax, dword ptr [esi + 6ch]
        mov dword ptr [eax + 68h], 1
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 0
        ; Exact mapped bytes 7E 13: jle 0x58763c5b
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0A: je 0x58763c5b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 194h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x58763c5d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 6ch]
        push eax
        ; Exact mapped bytes E8 7A B4 FF FF: call 0x5875f0e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        push 184h
        ; Exact mapped bytes E8 DE 8F 21 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x8f
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 7
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x58763cb4
        __asm _emit 0x74
        __asm _emit 0x34
        push 505050h
        push 0
        push 0dcdcdch
        lea edx, [ebp + 0c8h]
        push edx
        lea ecx, [ebx + 1b8h]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 76h]
        push edx
        push ebx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 70 B7 FF FF: call 0x5875f420
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58763cb6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 70h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 7fffh
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58763cd4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7C F2 19 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf2
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58763ce1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 FF F1 19 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf1
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        mov dword ptr [eax + 5ch], 14h
        mov eax, dword ptr [esi + 70h]
        mov dword ptr [eax + 68h], 1
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 0
        ; Exact mapped bytes 7E 13: jle 0x58763d16
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0A: je 0x58763d16
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 194h]
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x58763d18
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 70h]
        push eax
        ; Exact mapped bytes E8 BF B3 FF FF: call 0x5875f0e0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0fffbh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 83 E0 04: and ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x04
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 0e5ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        push 0ach
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes E8 DE 8E 21 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x8e
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov edi, dword ptr [esp + 3ch]
        mov byte ptr [esp + 20h], 8
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x58763da7
        __asm _emit 0x74
        __asm _emit 0x23
        push edi
        lea edx, [ebp + 6ch]
        push edx
        ; Exact mapped bytes 8B 15 94 47 A2 58: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebx + 64h]
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 FB 9F FF FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58763da9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes E8 90 8E 21 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x8e
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 9
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x58763df4
        __asm _emit 0x74
        __asm _emit 0x26
        push edi
        lea edx, [ebp + 6ch]
        push edx
        ; Exact mapped bytes 8B 15 94 47 A2 58: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebx + 0c8h]
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 AE 9F FF FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58763df6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes E8 43 8E 21 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x8e
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0ah
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x58763e41
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8B 15 94 47 A2 58: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        add ebp, 6ch
        push ebp
        add ebx, 12ch
        push ebx
        push 0
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 61 9F FF FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58763e43
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ebx, dword ptr [esi + 8ch]
        mov dword ptr [esi + 94h], eax
        mov ecx, dword ptr [ebx + 40h]
        mov edx, 7fffh
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 53 26: mov word ptr [ebx + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58763e6a
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 E6 F0 19 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf0
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58763e77
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 69 F0 19 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf0
        __asm _emit 0x19
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 90h]
        mov ecx, dword ptr [ebx + 40h]
        mov eax, 7fffh
        ; Exact mapped bytes 66 89 43 26: mov word ptr [ebx + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58763e93
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 BD F0 19 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf0
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58763ea0
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 40 F0 19 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf0
        __asm _emit 0x19
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 94h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 89 4B 26: mov word ptr [ebx + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4b
        __asm _emit 0x26
        mov ecx, dword ptr [ebx + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58763ebc
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 94 F0 19 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf0
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58763ec9
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 17 F0 19 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf0
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push 101h
        ; Exact mapped bytes E8 47 EE 19 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xee
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        push 101h
        ; Exact mapped bytes E8 37 EE 19 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xee
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 101h
        ; Exact mapped bytes E8 27 EE 19 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xee
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 40h]
        xor edi, edi
        mov edx, 7fffh
        ; Exact mapped bytes 66 89 56 26: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        cmp ecx, edi
        ; Exact mapped bytes 74 06: je 0x58763f11
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 3F F0 19 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf0
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, edi
        ; Exact mapped bytes 74 06: je 0x58763f1e
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 C2 EF 19 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xef
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [esi + 60h], edi
        mov dword ptr [esi + 78h], edi
        mov dword ptr [esi + 7ch], edi
        mov dword ptr [esi + 98h], edi
        mov dword ptr [esi + 9ch], edi
        mov dword ptr [esi + 0a0h], edi
        mov dword ptr [esi + 0a4h], edi
        mov dword ptr [esi + 0a8h], edi
        mov dword ptr [esi + 0ach], 177h
        mov dword ptr [esi + 0b0h], edi
        mov eax, esi
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
