// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 5643 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588EDC50 .. +0x160B bytes.
extern "C" __declspec(naked) void FUN_588edc50_segment_00() {
    __asm {
        push -1
        push 58989bdbh
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
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 34h]
        mov ebx, dword ptr [esp + 30h]
        mov ebp, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push ebx
        push ebp
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 00 55 01 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        xor edi, edi
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], edi
        push 54h
        mov dword ptr [esp + 24h], edi
        mov dword ptr [esi], 589a1548h
        ; Exact mapped bytes E8 80 EF 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xef
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1
        cmp eax, edi
        ; Exact mapped bytes 74 3C: je 0x588edd1a
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 0f2h
        ; Exact mapped bytes 7E 16: jle 0x588edd06
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0E: je 0x588edd06
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 3c8h]
        ; Exact mapped bytes EB 02: jmp 0x588edd08
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 1f4h
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 48 3F E4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x3f
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588edd1c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 F0 4F 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 17 EF 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xef
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 2
        cmp eax, edi
        ; Exact mapped bytes 74 36: je 0x588edd7d
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 3
        ; Exact mapped bytes 7E 13: jle 0x588edd69
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0B: je 0x588edd69
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x588edd6b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 1feh
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E5 3E E4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x3e
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588edd7f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0dch
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes E8 4D 4F 01 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 B4 EE 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xee
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 3
        cmp eax, edi
        ; Exact mapped bytes 74 34: je 0x588eddde
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D BC 46 A2 58: mov ecx, dword ptr [0x58a246bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], edi
        ; Exact mapped bytes 7E 12: jle 0x588eddca
        __asm _emit 0x7e
        __asm _emit 0x12
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0A: je 0x588eddca
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x588eddcc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 3fch
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 84 3E E4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588edde0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 2C 4F 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 53 EE 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xee
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 4
        cmp eax, edi
        ; Exact mapped bytes 74 3C: je 0x588ede47
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 0f3h
        ; Exact mapped bytes 7E 16: jle 0x588ede33
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0E: je 0x588ede33
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 3cch]
        ; Exact mapped bytes EB 02: jmp 0x588ede35
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 406h
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 1B 3E E4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x3e
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ede49
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 F3 ED 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xed
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 5
        cmp eax, edi
        ; Exact mapped bytes 74 50: je 0x588edebb
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 16: jle 0x588ede90
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], edi
        ; Exact mapped bytes 74 0E: je 0x588ede90
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 100h
        ; Exact mapped bytes EB 02: jmp 0x588ede92
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 3e8h
        lea ecx, [ebx + 4]
        push ecx
        lea ecx, [ebp + 0bdh]
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 15 94 47 A2 58: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 E7 FE E6 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588edebd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 10ch], eax
        ; Exact mapped bytes E8 7C ED 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xed
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 6
        cmp eax, edi
        ; Exact mapped bytes 74 6E: je 0x588edf50
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1bh
        ; Exact mapped bytes 7E 16: jle 0x588edf07
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], edi
        ; Exact mapped bytes 74 0E: je 0x588edf07
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 6c0h
        ; Exact mapped bytes EB 02: jmp 0x588edf09
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D D8 46 A2 58: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 170h], 15h
        ; Exact mapped bytes 7E 13: jle 0x588edf2b
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [ecx + 194h], edi
        ; Exact mapped bytes 74 0B: je 0x588edf2b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 194h]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes EB 02: jmp 0x588edf2d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 3e8h
        lea edi, [ebx + 0ch]
        push edi
        lea edi, [ebp + 0aah]
        push edi
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 52 FE E6 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588edf52
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 11ch], eax
        ; Exact mapped bytes E8 E7 EC 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 7
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x588edfcb
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1ch
        ; Exact mapped bytes 7E 17: jle 0x588edf9d
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588edf9d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 700h
        ; Exact mapped bytes EB 02: jmp 0x588edf9f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 3e8h
        lea edx, [ebx + 149h]
        push edx
        lea edx, [ebp + 0b4h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 D7 FD E6 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588edfcd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 114h], eax
        ; Exact mapped bytes E8 6C EC 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 8
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x588ee046
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1dh
        ; Exact mapped bytes 7E 17: jle 0x588ee018
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588ee018
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 740h
        ; Exact mapped bytes EB 02: jmp 0x588ee01a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 3e8h
        lea ecx, [ebx + 149h]
        push ecx
        lea ecx, [ebp + 92h]
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 5C FD E6 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ee048
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 118h], eax
        ; Exact mapped bytes E8 F1 EB 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xeb
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 9
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x588ee0b8
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D BC 46 A2 58: mov ecx, dword ptr [0x58a246bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 11: jle 0x588ee08d
        __asm _emit 0x7e
        __asm _emit 0x11
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 08: je 0x588ee08d
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x588ee08f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 3e8h
        lea edx, [ebx + 149h]
        push edx
        lea edx, [ebp + 61h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 EA FC E6 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xfc
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ee0ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 11ch]
        push 101h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 110h], eax
        ; Exact mapped bytes E8 4B 4C 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 114h]
        push 101h
        ; Exact mapped bytes E8 3B 4C 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 118h]
        push 101h
        ; Exact mapped bytes E8 2B 4C 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 52 EB 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xeb
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 0ah
        test edi, edi
        ; Exact mapped bytes 74 2C: je 0x588ee13a
        __asm _emit 0x74
        __asm _emit 0x2c
        push 316h
        push 0
        push 0
        lea eax, [ebx + 0ech]
        push eax
        lea ecx, [ebp + 28h]
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 76 50 01 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], eax
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes EB 02: jmp 0x588ee13c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 7ch], edi
        ; Exact mapped bytes E8 03 EB 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xeb
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 0bh
        test edi, edi
        ; Exact mapped bytes 74 2C: je 0x588ee189
        __asm _emit 0x74
        __asm _emit 0x2c
        push 316h
        push 0
        push 0
        lea edx, [ebx + 127h]
        push edx
        lea eax, [ebp + 2dh]
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 27 50 01 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], eax
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes EB 02: jmp 0x588ee18b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 78h], edi
        ; Exact mapped bytes E8 B4 EA 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xea
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0ch
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588ee1f0
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 132h
        ; Exact mapped bytes 7E 17: jle 0x588ee1d3
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588ee1d3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 4c8h]
        ; Exact mapped bytes EB 02: jmp 0x588ee1d5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 3fch
        lea edx, [ebx + 14ch]
        push edx
        lea edx, [ebp + 2]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 72 3A E4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x3a
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ee1f2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 124h], eax
        ; Exact mapped bytes E8 4A EA 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xea
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0dh
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588ee25a
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 131h
        ; Exact mapped bytes 7E 17: jle 0x588ee23d
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588ee23d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 4c4h]
        ; Exact mapped bytes EB 02: jmp 0x588ee23f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 3fch
        lea edx, [ebx + 14ch]
        push edx
        lea edx, [ebp + 2]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 08 3A E4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x3a
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ee25c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 124h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 120h], eax
        ; Exact mapped bytes E8 A9 4A 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 120h]
        push 0c8h
        ; Exact mapped bytes E8 59 4A 01 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 BD E9 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0eh
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x588ee2f2
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 31h
        ; Exact mapped bytes 7E 17: jle 0x588ee2c7
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588ee2c7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0c40h
        ; Exact mapped bytes EB 02: jmp 0x588ee2c9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 406h
        lea edx, [ebx + 165h]
        push edx
        lea edx, [ebp + 2dh]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 B0 FA E6 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfa
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ee2f4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 128h], eax
        ; Exact mapped bytes E8 45 E9 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0fh
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x588ee36a
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 32h
        ; Exact mapped bytes 7E 17: jle 0x588ee33f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588ee33f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0c80h
        ; Exact mapped bytes EB 02: jmp 0x588ee341
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 406h
        lea ecx, [ebx + 165h]
        push ecx
        lea ecx, [ebp + 7ch]
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 38 FA E6 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xfa
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ee36c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 12ch], eax
        ; Exact mapped bytes E8 D0 E8 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 10h
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x588ee3c3
        __asm _emit 0x74
        __asm _emit 0x35
        push 0
        push 0
        push 0ffffffh
        lea edx, [ebx + 188h]
        push edx
        lea ecx, [ebp + 0d2h]
        push ecx
        lea edx, [ebx + 178h]
        push edx
        ; Exact mapped bytes 8B 15 3C 45 A2 58: mov edx, dword ptr [0x58a2453c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebp + 12h]
        push ecx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BF 4E E4 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x4e
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ee3c5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 130h], eax
        ; Exact mapped bytes E8 77 E8 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 11h
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x588ee41c
        __asm _emit 0x74
        __asm _emit 0x35
        push 0
        push 0
        push 0ffffffh
        lea ecx, [ebx + 19bh]
        push ecx
        lea edx, [ebp + 0d2h]
        push edx
        lea ecx, [ebx + 18ch]
        push ecx
        ; Exact mapped bytes 8B 0D 3C 45 A2 58: mov ecx, dword ptr [0x58a2453c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 12h]
        push edx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 66 4E E4 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4e
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ee41e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 130h]
        mov dword ptr [esi + 134h], eax
        mov ecx, dword ptr [edi + 40h]
        mov edx, 410h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee445
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0B 4B 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee452
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8E 4A 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esi + 134h]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 410h
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee46e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E2 4A 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee47b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 65 4A 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        push 74h
        ; Exact mapped bytes E8 CC E7 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xe7
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 12h
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x588ee4d9
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 0
        ; Exact mapped bytes 7E 13: jle 0x588ee4b4
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0A: je 0x588ee4b4
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x588ee4b6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 320h
        lea edx, [ebx + 42h]
        push edx
        lea edx, [ebp + 11h]
        push edx
        push ecx
        push esi
        push 0
        push 0fa0h
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 2B 03 E9 FF: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588ee4db
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 80h], edi
        mov ecx, dword ptr [edi + 40h]
        mov eax, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee4fc
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 54 4A 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee509
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D7 49 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        push 74h
        ; Exact mapped bytes E8 3E E7 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xe7
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 13h
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x588ee567
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 0
        ; Exact mapped bytes 7E 13: jle 0x588ee542
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0A: je 0x588ee542
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x588ee544
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 320h
        lea ecx, [ebx + 59h]
        push ecx
        lea ecx, [ebp + 11h]
        push ecx
        push edx
        push esi
        push 0
        push 0fa0h
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 9D 02 E9 FF: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588ee569
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 84h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee58a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C6 49 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee597
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 49 49 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        push 74h
        ; Exact mapped bytes E8 B0 E6 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xe6
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 14h
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x588ee5f6
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 9
        ; Exact mapped bytes 7E 14: jle 0x588ee5d1
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x588ee5d1
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [ecx + 24h]
        ; Exact mapped bytes EB 02: jmp 0x588ee5d3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 320h
        lea ecx, [ebx + 42h]
        push ecx
        lea ecx, [ebp + 11h]
        push ecx
        push edx
        push esi
        push 0
        push 0fa0h
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 0E 02 E9 FF: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588ee5f8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 88h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 321h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee619
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 37 49 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee626
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BA 48 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 21 E6 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe6
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 15h
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x588ee66e
        __asm _emit 0x74
        __asm _emit 0x31
        push 0
        push 0
        push 0ffffffh
        lea ecx, [ebx + 61h]
        push ecx
        lea edx, [ebp + 0ceh]
        push edx
        lea ecx, [ebx + 11h]
        push ecx
        ; Exact mapped bytes 8B 0D 40 45 A2 58: mov ecx, dword ptr [0x58a24540]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 14h]
        push edx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 16 4C E4 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x4c
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588ee670
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0b0h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee691
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BF 48 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee69e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 42 48 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 A9 E5 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xe5
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 16h
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x588ee6e6
        __asm _emit 0x74
        __asm _emit 0x31
        push 0
        push 0
        push 0ffffffh
        lea ecx, [ebx + 64h]
        push ecx
        lea edx, [ebp + 0ceh]
        push edx
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebx + 21h]
        push ecx
        add ebp, 32h
        push ebp
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 9E 4B E4 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x4b
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588ee6e8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0b4h], edi
        mov ecx, dword ptr [edi + 40h]
        mov eax, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee709
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 47 48 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee716
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 CA 47 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        push 68h
        ; Exact mapped bytes E8 31 E5 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xe5
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 17h
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x588ee73f
        __asm _emit 0x74
        __asm _emit 0x12
        push 40h
        push 0
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 45 CB FF FF: call 0x588eb280
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588ee741
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, 320h
        mov dword ptr [esi + 8ch], edi
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 20h], 0
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee762
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EE 47 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee76f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 71 47 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 D5 E4 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xe4
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 18h
        mov ebp, 23h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x588ee7d0
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebp
        ; Exact mapped bytes 7E 17: jle 0x588ee7b3
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588ee7b3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x588ee7b5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 34h]
        push ecx
        mov ecx, dword ptr [esp + 30h]
        add ecx, 64h
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 34 89 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588ee7d2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0bch], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee7f3
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 5D 47 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee800
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E0 46 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 101h
        ; Exact mapped bytes E8 10 45 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0bch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0fch
        ; Exact mapped bytes E8 25 E4 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe4
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 19h
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x588ee87e
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebp
        ; Exact mapped bytes 7E 17: jle 0x588ee85e
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588ee85e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x588ee860
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebp, dword ptr [esp + 2ch]
        lea ecx, [ebx + 34h]
        push ecx
        lea ecx, [ebp + 96h]
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 86 88 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 06: jmp 0x588ee884
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 2ch]
        xor edi, edi
        mov dword ptr [esi + 0c0h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee8a5
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 AB 46 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee8b2
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2E 46 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 101h
        ; Exact mapped bytes E8 5E 44 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c0h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 70h
        ; Exact mapped bytes E8 76 E3 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe3
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1ah
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x588ee91f
        __asm _emit 0x74
        __asm _emit 0x37
        push 0
        push 0
        push 0ffffffh
        lea edx, [ebx + 0eeh]
        push edx
        lea ecx, [ebp + 15fh]
        push ecx
        lea edx, [ebx + 0d2h]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebp + 37h]
        push ecx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 65 49 E4 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x49
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588ee921
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0f0h], edi
        mov ecx, dword ptr [edi + 40h]
        mov eax, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee942
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0E 46 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee94f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 91 45 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 F5 E2 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe2
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1bh
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x588ee9b1
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 17: jle 0x588ee992
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588ee992
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x588ee994
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 0eah]
        push ecx
        lea ecx, [ebp + 93h]
        push ecx
        push 7
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 53 87 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588ee9b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0f8h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee9d4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7C 45 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ee9e1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 FF 44 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 63 E2 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xe2
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1ch
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x588eea43
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 17: jle 0x588eea24
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588eea24
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x588eea26
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 0f6h]
        push ecx
        lea ecx, [ebp + 93h]
        push ecx
        push 7
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C1 86 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588eea45
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0fch], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588eea66
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EA 44 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588eea73
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 6D 44 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 D4 E1 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xe1
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1dh
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x588eeac1
        __asm _emit 0x74
        __asm _emit 0x37
        push 0
        push 0
        push 0ffffffh
        lea ecx, [ebx + 12ch]
        push ecx
        lea edx, [ebp + 15fh]
        push edx
        lea ecx, [ebx + 118h]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 37h]
        push edx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C3 47 E4 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x47
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588eeac3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0f4h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588eeae4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 6C 44 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588eeaf1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EF 43 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 53 E1 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xe1
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1eh
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x588eeb53
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 17: jle 0x588eeb34
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588eeb34
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x588eeb36
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 129h]
        push ecx
        lea ecx, [ebp + 93h]
        push ecx
        push 7
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B1 85 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588eeb55
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 100h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588eeb76
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 DA 43 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588eeb83
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 5D 43 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 C1 E0 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1fh
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x588eebe5
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 17: jle 0x588eebc6
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588eebc6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x588eebc8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 136h]
        push ecx
        lea ecx, [ebp + 89h]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 1F 85 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588eebe7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 108h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588eec08
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 48 43 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588eec15
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 CB 42 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 2F E0 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe0
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 20h
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x588eec77
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 17: jle 0x588eec58
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588eec58
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x588eec5a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 136h]
        push ecx
        lea ecx, [ebp + 93h]
        push ecx
        push 7
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8D 84 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588eec79
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 104h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588eec9a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B6 42 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588eeca7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 39 42 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 A0 DF 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xdf
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 21h
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x588eecf5
        __asm _emit 0x74
        __asm _emit 0x37
        push 141414h
        push 0
        push 0ffffffh
        lea ecx, [ebx + 23h]
        push ecx
        lea edx, [ebp + 0d2h]
        push edx
        lea ecx, [ebx + 11h]
        push ecx
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 87h]
        push edx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8F 45 E4 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588eecf7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0b8h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588eed18
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 38 42 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588eed25
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BB 41 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 1F DF 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xdf
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 22h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x588eed81
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 17: jle 0x588eed68
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588eed68
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x588eed6a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 62h]
        push ecx
        lea ecx, [ebp + 4eh]
        push ecx
        push 4
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 83 83 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588eed83
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0d4h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588eeda4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 AC 41 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588eedb1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2F 41 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d4h]
        push 101h
        ; Exact mapped bytes E8 5F 3F 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d4h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0fch
        ; Exact mapped bytes E8 74 DE 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xde
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 23h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x588eee2c
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 17: jle 0x588eee13
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588eee13
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x588eee15
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        add ebx, 62h
        push ebx
        sub ebp, -80h
        push ebp
        push 4
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D8 82 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588eee2e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0d0h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588eee4f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 01 41 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588eee5c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 84 40 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d0h]
        push 101h
        ; Exact mapped bytes E8 B4 3E 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d0h]
        mov ebx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        add ebx, 94h
        add edx, 64h
        lea ebp, [esi + 0c8h]
        mov dword ptr [esp + 3ch], edx
        mov dword ptr [esp + 38h], 2
        mov edi, edi
        push 0fch
        ; Exact mapped bytes E8 A4 DD 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xdd
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 20h], 24h
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x588eeefe
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 17: jle 0x588eeee0
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588eeee0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x588eeee2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        add ecx, 4bh
        push ecx
        mov ecx, dword ptr [esp + 40h]
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 06 82 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588eef00
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588eef1e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 32 40 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588eef2b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B5 3F 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push 101h
        ; Exact mapped bytes E8 E8 3D 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0fch
        ; Exact mapped bytes E8 00 DD 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xdd
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 20h], 25h
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x588eefa1
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 17: jle 0x588eef87
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588eef87
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x588eef89
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        push ebx
        add edx, 4eh
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 63 81 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588eefa3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp + 18h], edi
        mov ecx, dword ptr [edi + 40h]
        mov eax, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588eefc1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8F 3F 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588eefce
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 12 3F 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 76 DC 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xdc
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 20h], 26h
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588ef02e
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 17: jle 0x588ef011
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588ef011
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x588ef013
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 2ch]
        push ebx
        add ecx, 85h
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D6 80 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588ef030
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp + 20h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ef04e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 02 3F 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ef05b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 85 3E 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        push 101h
        ; Exact mapped bytes E8 B8 3C 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 20h]
        push 101h
        ; Exact mapped bytes E8 AB 3C 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        add dword ptr [esp + 3ch], 32h
        add ebp, 4
        add ebx, 0eh
        sub dword ptr [esp + 38h], 1
        ; Exact mapped bytes 0F 85 15 FE FF FF: jne 0x588eeea0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0fch
        ; Exact mapped bytes E8 B9 DB 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xdb
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 27h
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x588ef0f0
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 17: jle 0x588ef0ce
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588ef0ce
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x588ef0d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        add ecx, 87h
        push ecx
        mov ecx, dword ptr [esp + 30h]
        add ecx, 3ch
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 12 80 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588ef0f2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0d8h], eax
        ; Exact mapped bytes E8 47 DB 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xdb
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 28h
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x588ef162
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 17: jle 0x588ef140
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588ef140
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x588ef142
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        add ecx, 0b0h
        push ecx
        mov ecx, dword ptr [esp + 30h]
        add ecx, 3ch
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A0 7F 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588ef164
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0d8h]
        push 101h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0dch], eax
        ; Exact mapped bytes E8 A1 3B 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0dch]
        push 101h
        ; Exact mapped bytes E8 91 3B 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0d8h]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ef1ab
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A5 3D 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ef1b8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 28 3D 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0dch]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 320h
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ef1d4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7C 3D 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ef1e1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 FF 3C 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        push 20h
        ; Exact mapped bytes E8 66 DA 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xda
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 29h
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x588ef22f
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 15 F0 46 A2 58: mov edx, dword ptr [0x58a246f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 170h], 7
        ; Exact mapped bytes 7E 1C: jle 0x588ef223
        __asm _emit 0x7e
        __asm _emit 0x1c
        cmp dword ptr [edx + 194h], 0
        ; Exact mapped bytes 74 13: je 0x588ef223
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [edx + 194h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 9F 88 01 00: call 0x58907ac0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x588ef231
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor edx, edx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 93 88 01 00: call 0x58907ac0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588ef231
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, 0a9h
        mov dword ptr [esi + 138h], eax
        ; Exact mapped bytes 66 89 96 3C 01 00 00: mov word ptr [esi + 0x13c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
