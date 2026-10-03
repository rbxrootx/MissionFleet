// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 5868 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F15F0 .. +0xD77 bytes.
extern "C" __declspec(naked) void FUN_588f15f0_segment_00() {
    __asm {
        push -1
        push 58989d9fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 10h
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
        lea eax, [esp + 24h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 1ch], esi
        mov ebp, dword ptr [esp + 3ch]
        mov ebx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 34h]
        push 40h
        lea eax, [ebp + 0b4h]
        push eax
        lea ecx, [ebx + 1eah]
        push ecx
        push ebp
        push ebx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 5D 1B 01 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x1b
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
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebp
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], edi
        push 5ch
        mov dword ptr [esp + 30h], edi
        mov dword ptr [esi], 589a1758h
        ; Exact mapped bytes E8 DD B5 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xb5
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 2ch], 1
        cmp eax, edi
        ; Exact mapped bytes 74 12: je 0x588f1693
        __asm _emit 0x74
        __asm _emit 0x12
        push 40h
        push edi
        push edi
        push edi
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D1 88 E6 FF: call 0x58759f60
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x88
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588f1695
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 130h], edi
        mov ecx, dword ptr [edi + 40h]
        mov eax, 3e8h
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f16b6
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9A 18 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f16c3
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 1D 18 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 130h]
        push esi
        ; Exact mapped bytes E8 51 88 E6 FF: call 0x58759f20
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x88
        __asm _emit 0xe6
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 78 B5 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xb5
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 2ch], 2
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x588f171d
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 7
        ; Exact mapped bytes 7E 14: jle 0x588f1709
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x588f1709
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes EB 02: jmp 0x588f170b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 1f4h
        push ebp
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 45 05 E4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588f171f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes E8 ED 15 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 14 B5 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xb5
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 2ch], 3
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x588f1781
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 6
        ; Exact mapped bytes 7E 14: jle 0x588f176d
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x588f176d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 18h]
        ; Exact mapped bytes EB 02: jmp 0x588f176f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 1feh
        push ebp
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E1 04 E4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x04
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588f1783
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0c8h
        mov ecx, eax
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes E8 49 15 01 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 B0 B4 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xb4
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov edi, 4
        mov byte ptr [esp + 2ch], 4
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x588f17ea
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 8
        ; Exact mapped bytes 7E 14: jle 0x588f17d6
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x588f17d6
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 20h]
        ; Exact mapped bytes EB 02: jmp 0x588f17d8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 208h
        push ebp
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 78 04 E4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588f17ec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes E8 53 B4 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb4
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 2ch], 5
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x588f1841
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], edi
        ; Exact mapped bytes 7E 14: jle 0x588f182d
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x588f182d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 10h]
        ; Exact mapped bytes EB 02: jmp 0x588f182f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 203h
        push ebp
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 21 04 E4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x04
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588f1843
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 FC B3 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xb3
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 2ch], 6
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x588f1899
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 5
        ; Exact mapped bytes 7E 14: jle 0x588f1885
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x588f1885
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes EB 02: jmp 0x588f1887
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 200h
        push ebp
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C9 03 E4 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x03
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588f189b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 78h]
        push 101h
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 70 14 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 63 14 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 87 B3 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xb3
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 2ch], 7
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x588f1927
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x588f18fc
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588f18fc
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 100h
        ; Exact mapped bytes EB 02: jmp 0x588f18fe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 3e8h
        lea edx, [ebp + 25h]
        push edx
        lea edx, [ebx + 1cbh]
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
        ; Exact mapped bytes E8 7B C4 E6 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xc4
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588f1929
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 10 B3 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xb3
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 2ch], 8
        mov edi, 0cbh
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x588f1992
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x588f1978
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588f1978
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x588f197a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0a9h]
        push edx
        lea edx, [ebx + 4ch]
        push edx
        push 5
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 70 57 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588f1994
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 2c0h], eax
        ; Exact mapped bytes E8 A5 B2 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xb2
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 2ch], 9
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x588f19f8
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x588f19de
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588f19de
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x588f19e0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 0a9h]
        push ecx
        lea ecx, [ebx + 6eh]
        push ecx
        push 5
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 0A 57 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588f19fa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 2c4h], eax
        ; Exact mapped bytes E8 3F B2 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xb2
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 2ch], 0ah
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x588f1a61
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x588f1a44
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588f1a44
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x588f1a46
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 0a9h]
        push ecx
        lea ecx, [ebx + 0f0h]
        push ecx
        push 5
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A1 56 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588f1a63
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 2c8h], eax
        ; Exact mapped bytes E8 D6 B1 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xb1
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 2ch], 0bh
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x588f1aca
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x588f1aad
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588f1aad
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x588f1aaf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 0a9h]
        push ecx
        lea ecx, [ebx + 10eh]
        push ecx
        push 5
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 38 56 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588f1acc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 2c0h]
        push 101h
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 2cch], eax
        ; Exact mapped bytes E8 39 12 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2c4h]
        push 101h
        ; Exact mapped bytes E8 29 12 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esi + 2c0h]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f1b13
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 3D 14 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f1b20
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C0 13 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esi + 2c4h]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 320h
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f1b3c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 14 14 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f1b49
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 97 13 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2c8h]
        push 101h
        ; Exact mapped bytes E8 C7 11 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2cch]
        push 101h
        ; Exact mapped bytes E8 B7 11 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esi + 2c8h]
        mov ecx, 320h
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f1b85
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 CB 13 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f1b92
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 4E 13 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esi + 2cch]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f1bae
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A2 13 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f1bbb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 25 13 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 89 B0 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xb0
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 2ch], 0ch
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588f1c1b
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
        ; Exact mapped bytes 7E 17: jle 0x588f1bfe
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588f1bfe
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x588f1c00
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 0a9h]
        push ecx
        lea ecx, [ebx + 16ah]
        push ecx
        push 5
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E7 54 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588f1c1d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 2d0h], eax
        ; Exact mapped bytes E8 1C B0 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb0
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 2ch], 0dh
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588f1c88
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
        ; Exact mapped bytes 7E 17: jle 0x588f1c6b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588f1c6b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x588f1c6d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 0a9h]
        push ecx
        lea ecx, [ebx + 182h]
        push ecx
        push 5
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 7A 54 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588f1c8a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 2d0h]
        push 101h
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 2d4h], eax
        ; Exact mapped bytes E8 7B 10 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2d4h]
        push 101h
        ; Exact mapped bytes E8 6B 10 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esi + 2d0h]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f1cd1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7F 12 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f1cde
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 02 12 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esi + 2d4h]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 320h
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f1cfa
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 56 12 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f1d07
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D9 11 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        push 90h
        ; Exact mapped bytes E8 3D AF 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xaf
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 2ch], 0eh
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x588f1d51
        __asm _emit 0x74
        __asm _emit 0x30
        push 0
        push 0
        push 0ffffffh
        lea ecx, [ebp + 9eh]
        push ecx
        lea edx, [ebx + 1e0h]
        push edx
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add ebp, 44h
        push ebp
        lea ecx, [ebx + 12h]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 81 62 01 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588f1d53
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 118h], eax
        mov dword ptr [eax + 5ch], 0bh
        mov eax, dword ptr [esi + 118h]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [eax + 18h]
        lea ecx, [edx + ecx*8]
        mov dword ptr [eax + 20h], ecx
        mov edi, dword ptr [esi + 118h]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f1d93
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BD 11 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f1da0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 40 11 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 118h]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov dword ptr [esp + 34h], 0
        lea ebp, [esi + 11ch]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        push 90h
        ; Exact mapped bytes E8 84 AE 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [esp + 34h], 3
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes 7D 3A: jge 0x588f1e12
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov byte ptr [esp + 2ch], 0fh
        test eax, eax
        ; Exact mapped bytes 74 71: je 0x588f1e52
        __asm _emit 0x74
        __asm _emit 0x71
        mov ecx, dword ptr [esp + 3ch]
        push 0
        push 0
        push 0ffffffh
        lea edx, [ecx + 9ch]
        push edx
        lea edx, [ebx + 1e0h]
        push edx
        add ecx, 44h
        push ecx
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C0 61 01 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 42: jmp 0x588f1e54
        __asm _emit 0xeb
        __asm _emit 0x42
        mov byte ptr [esp + 2ch], 10h
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x588f1e52
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [esp + 3ch]
        push 0
        push 0
        push 0ffffffh
        lea edx, [ecx + 9ch]
        push edx
        lea edx, [ebx + 1e0h]
        push edx
        mov edx, dword ptr [esi + 130h]
        add ecx, 44h
        push ecx
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 80 61 01 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588f1e54
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        mov dword ptr [eax + 5ch], 0bh
        mov eax, dword ptr [esi + 118h]
        mov ecx, dword ptr [eax + 5ch]
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [eax + 18h]
        lea ecx, [edx + ecx*8]
        mov dword ptr [eax + 20h], ecx
        mov edi, dword ptr [ebp]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f1e91
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BF 10 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f1e9e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 42 10 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esp + 34h]
        inc eax
        add ebp, 4
        cmp eax, 4
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 0F 8C 01 FF FF FF: jl 0x588f1dc0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 11ch]
        lea edx, [ebx + 0b8h]
        push edx
        ; Exact mapped bytes E8 0F 14 01 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 120h]
        lea eax, [ebx + 0e2h]
        push eax
        ; Exact mapped bytes E8 FD 13 01 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebx + 115h]
        push ecx
        mov ecx, dword ptr [esi + 124h]
        ; Exact mapped bytes E8 EB 13 01 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 128h]
        lea edx, [ebx + 186h]
        push edx
        ; Exact mapped bytes E8 D9 13 01 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 40 AD 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xad
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 2ch], 11h
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x588f1f5c
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ecx, dword ptr [esp + 3ch]
        push 0
        push 0
        push 0ffffffh
        lea edx, [ecx + 0b6h]
        push edx
        lea edx, [ebx + 1e0h]
        push edx
        ; Exact mapped bytes 8B 15 3C 45 A2 58: mov edx, dword ptr [0x58a2453c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add ecx, 0a4h
        push ecx
        lea ecx, [ebx + 0afh]
        push ecx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 28 13 E4 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x13
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588f1f5e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 12ch], edi
        mov ecx, dword ptr [edi + 40h]
        mov eax, 320h
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f1f7f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D1 0F 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f1f8c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 54 0F 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esp + 3ch]
        add eax, 44h
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 34h], eax
        lea ebp, [esi + 1b4h]
        mov dword ptr [esp + 18h], 20h
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 94 AC 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xac
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 20h], eax
        mov byte ptr [esp + 2ch], 12h
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x588f201f
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0adh
        ; Exact mapped bytes 7E 17: jle 0x588f1ff3
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588f1ff3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 2b40h
        ; Exact mapped bytes EB 02: jmp 0x588f1ff5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, dword ptr [esp + 34h]
        push 3e8h
        push edi
        lea ecx, [ebx + 106h]
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
        ; Exact mapped bytes E8 83 BD E6 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x588f2025
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 34h]
        xor eax, eax
        mov dword ptr [ebp - 80h], eax
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 80h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0ach
        mov byte ptr [esp + 30h], 0
        ; Exact mapped bytes E8 05 AC 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xac
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 20h], eax
        mov byte ptr [esp + 2ch], 13h
        test eax, eax
        ; Exact mapped bytes 74 57: je 0x588f20b0
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0aeh
        ; Exact mapped bytes 7E 17: jle 0x588f2082
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588f2082
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 2b80h
        ; Exact mapped bytes EB 02: jmp 0x588f2084
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 3e8h
        push edi
        lea edx, [ebx + 177h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 130h]
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 F2 BC E6 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xbc
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588f20b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ebp]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0ach
        mov byte ptr [esp + 30h], 0
        ; Exact mapped bytes E8 78 AB 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xab
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 20h], eax
        mov byte ptr [esp + 2ch], 14h
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x588f2134
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 15h
        ; Exact mapped bytes 7E 17: jle 0x588f210c
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588f210c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 540h
        ; Exact mapped bytes EB 02: jmp 0x588f210e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 3e8h
        push edi
        lea edx, [ebx + 106h]
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
        ; Exact mapped bytes E8 6E BC E6 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xbc
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588f2136
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp + 80h], eax
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 80h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 70h
        mov byte ptr [esp + 30h], 0
        ; Exact mapped bytes E8 F1 AA 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 20h], eax
        mov byte ptr [esp + 2ch], 15h
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x588f219f
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [esp + 14h]
        push 10101h
        push 0
        push 0ffffh
        lea edx, [ecx + 11h]
        push edx
        lea edx, [ebx + 1dh]
        push edx
        ; Exact mapped bytes 8B 15 2C 45 A2 58: mov edx, dword ptr [0x58a2452c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        lea ecx, [ebx + 5]
        push ecx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E5 10 E4 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x10
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588f21a1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp - 11ch], edi
        mov ecx, dword ptr [edi + 40h]
        mov eax, 320h
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f21c2
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8E 0D 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f21cf
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 11 0D 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        add dword ptr [esp + 14h], 11h
        add dword ptr [esp + 34h], 0bh
        add ebp, 4
        sub dword ptr [esp + 18h], 1
        ; Exact mapped bytes 0F 85 C9 FD FF FF: jne 0x588f1fb0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        mov dword ptr [esi + 3ech], 0
        ; Exact mapped bytes E8 53 AA 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xaa
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 2ch], 16h
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x588f2263
        __asm _emit 0x74
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0ah
        ; Exact mapped bytes 7E 17: jle 0x588f2231
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588f2231
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 280h
        ; Exact mapped bytes EB 02: jmp 0x588f2233
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 3ch]
        push 3e8h
        add ecx, 0a7h
        push ecx
        lea ecx, [ebx + 19ah]
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
        ; Exact mapped bytes E8 3F BB E6 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xbb
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588f2265
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, 0fff0h
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 0ach
        mov byte ptr [esp + 30h], 0
        ; Exact mapped bytes E8 CB A9 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xa9
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 2ch], 17h
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x588f22eb
        __asm _emit 0x74
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0bh
        ; Exact mapped bytes 7E 17: jle 0x588f22b9
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588f22b9
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x588f22bb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 3ch]
        push 3e8h
        add ecx, 0a7h
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        add ebx, 1b8h
        push ebx
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
        ; Exact mapped bytes E8 B7 BA E6 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xba
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588f22ed
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, 0fff0h
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 90h]
        push 101h
        mov byte ptr [esp + 30h], 0
        ; Exact mapped bytes E8 0F 0A 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 101h
        ; Exact mapped bytes E8 FF 09 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 118h]
        ; Exact mapped bytes E8 C4 64 01 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        lea edi, [esi + 11ch]
        mov ebx, 4
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 B2 64 01 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        mov ebp, 20h
        mov ecx, dword ptr [edi]
        push 0ffffffh
        push 0
        push 5898d61ch
        ; Exact mapped bytes E8 7A 65 01 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x588f2343
        __asm _emit 0x75
        __asm _emit 0xe8
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 D4: jne 0x588f2337
        __asm _emit 0x75
        __asm _emit 0xd4
        xor edi, edi
        ; Exact mapped bytes EB 09: jmp 0x588f2370
        __asm _emit 0xeb
        __asm _emit 0x09
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F2370 .. +0x975 bytes.
extern "C" __declspec(naked) void FUN_588f15f0_segment_01() {
    __asm {
        mov ecx, dword ptr [esi + 118h]
        push 0ffffffh
        push 0
        push 5898d61ch
        ; Exact mapped bytes E8 49 65 01 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 118h]
        push edi
        push 0
        ; Exact mapped bytes E8 7B 5D 01 00: call 0x58908110
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        inc edi
        cmp edi, 20h
        ; Exact mapped bytes 7C D5: jl 0x588f2370
        __asm _emit 0x7c
        __asm _emit 0xd5
        push 0ach
        ; Exact mapped bytes E8 A9 A8 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xa8
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 2ch], 18h
        test eax, eax
        ; Exact mapped bytes 74 59: je 0x588f240e
        __asm _emit 0x74
        __asm _emit 0x59
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1eh
        ; Exact mapped bytes 7E 17: jle 0x588f23db
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588f23db
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 780h
        ; Exact mapped bytes EB 02: jmp 0x588f23dd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 3ch]
        push 3e8h
        add ecx, 3ch
        push ecx
        mov ecx, dword ptr [esp + 40h]
        add ecx, 1d8h
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
        ; Exact mapped bytes E8 94 B9 E6 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xb9
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588f2410
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 2b4h], eax
        ; Exact mapped bytes E8 29 A8 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xa8
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 2ch], 19h
        test eax, eax
        ; Exact mapped bytes 74 5C: je 0x588f2491
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1fh
        ; Exact mapped bytes 7E 17: jle 0x588f245b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588f245b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 7c0h
        ; Exact mapped bytes EB 02: jmp 0x588f245d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 3ch]
        push 3e8h
        add ecx, 94h
        push ecx
        mov ecx, dword ptr [esp + 40h]
        add ecx, 1d8h
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
        ; Exact mapped bytes E8 11 B9 E6 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xb9
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588f2493
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 2b4h]
        push 101h
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 2b8h], eax
        ; Exact mapped bytes E8 72 08 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2b8h]
        push 101h
        ; Exact mapped bytes E8 62 08 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2b4h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 2b8h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 58h
        ; Exact mapped bytes E8 6E A7 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xa7
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 2ch], 1ah
        test edi, edi
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x588f257c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 20h
        ; Exact mapped bytes 7E 17: jle 0x588f251b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588f251b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebp, dword ptr [eax + 190h]
        add ebp, 800h
        ; Exact mapped bytes EB 02: jmp 0x588f251d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ebx, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 38h]
        push 3e8h
        push 0
        push 0
        lea edx, [ebx + 48h]
        push edx
        add eax, 1d8h
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 60 0C 01 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2E: je 0x588f2582
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 1ch]
        lea eax, [ebp + 20h]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 06: jmp 0x588f2582
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 3ch]
        xor edi, edi
        mov dword ptr [esi + 2bch], edi
        mov eax, 0fffbh
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 2bch]
        push 101h
        mov byte ptr [esp + 30h], 0
        ; Exact mapped bytes E8 7A 07 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2bch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 8F A6 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa6
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        xor ebp, ebp
        mov byte ptr [esp + 2ch], 1bh
        cmp eax, ebp
        ; Exact mapped bytes 74 57: je 0x588f2628
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2dh
        ; Exact mapped bytes 7E 16: jle 0x588f25f6
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x588f25f6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0b40h
        ; Exact mapped bytes EB 02: jmp 0x588f25f8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 3e8h
        lea edx, [ebx + 0a4h]
        push edx
        mov edx, dword ptr [esp + 40h]
        add edx, 1bbh
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
        ; Exact mapped bytes E8 7A B7 E6 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xb7
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588f262a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 2d8h], eax
        ; Exact mapped bytes E8 DF 06 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2d8h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 2d8h]
        mov dword ptr [eax + 50h], ebp
        xor eax, eax
        mov dword ptr [esi + 424h], ebp
        mov dword ptr [esi + 428h], eax
        mov dword ptr [esi + 42ch], eax
        mov dword ptr [esi + 430h], eax
        mov dword ptr [esi + 434h], eax
        mov dword ptr [esi + 438h], eax
        mov dword ptr [esi + 43ch], eax
        mov dword ptr [esi + 440h], eax
        push 54h
        mov dword ptr [esi + 444h], eax
        ; Exact mapped bytes E8 B6 A5 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xa5
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 2ch], 1ch
        cmp edi, ebp
        ; Exact mapped bytes 74 76: je 0x588f2720
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 43h
        ; Exact mapped bytes 7E 16: jle 0x588f26ce
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x588f26ce
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [edx + 10ch]
        ; Exact mapped bytes EB 02: jmp 0x588f26d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 38h]
        push 1feh
        push 0
        push 0
        lea eax, [ebx - 34h]
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B6 0A 01 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x588f2722
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebp + 18h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x588f2722
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 4a8h], edi
        ; Exact mapped bytes E8 1A A5 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xa5
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 2ch], 1dh
        test edi, edi
        ; Exact mapped bytes 74 76: je 0x588f27bc
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 42h
        ; Exact mapped bytes 7E 17: jle 0x588f276b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588f276b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 108h]
        ; Exact mapped bytes EB 02: jmp 0x588f276d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        push 200h
        push 0
        push 0
        lea ecx, [ebx - 34h]
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 19 0A 01 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x588f27be
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x588f27be
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 4ach], edi
        ; Exact mapped bytes E8 7E A4 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xa4
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 2ch], 1eh
        test edi, edi
        ; Exact mapped bytes 74 76: je 0x588f2858
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 41h
        ; Exact mapped bytes 7E 17: jle 0x588f2807
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588f2807
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [ecx + 104h]
        ; Exact mapped bytes EB 02: jmp 0x588f2809
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 38h]
        push 1ffh
        push 0
        push 0
        lea edx, [ebx - 34h]
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 7D 09 01 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x588f285a
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x588f285a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 4b0h], edi
        ; Exact mapped bytes E8 E2 A3 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 2ch], 1fh
        test edi, edi
        ; Exact mapped bytes 74 7C: je 0x588f28fa
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 46h
        ; Exact mapped bytes 7E 17: jle 0x588f28a3
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588f28a3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 118h]
        ; Exact mapped bytes EB 02: jmp 0x588f28a5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        push 1feh
        push 0
        push 0
        lea ecx, [ebx - 34h]
        push ecx
        add edx, 0ffffff35h
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 DB 08 01 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x588f28fc
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x588f28fc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 4bch], edi
        ; Exact mapped bytes E8 40 A3 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 2ch], 20h
        test edi, edi
        ; Exact mapped bytes 74 7B: je 0x588f299b
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 45h
        ; Exact mapped bytes 7E 17: jle 0x588f2945
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588f2945
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [ecx + 114h]
        ; Exact mapped bytes EB 02: jmp 0x588f2947
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 38h]
        push 200h
        push 0
        push 0
        lea edx, [ebx - 34h]
        push edx
        add eax, 0ffffff35h
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 3A 08 01 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x588f299d
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x588f299d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 4c0h], edi
        ; Exact mapped bytes E8 9F A2 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 2ch], 21h
        test edi, edi
        ; Exact mapped bytes 74 7C: je 0x588f2a3d
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes A1 BC 46 A2 58: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 44h
        ; Exact mapped bytes 7E 17: jle 0x588f29e6
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588f29e6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 110h]
        ; Exact mapped bytes EB 02: jmp 0x588f29e8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        push 1ffh
        push 0
        push 0
        lea ecx, [ebx - 34h]
        push ecx
        add edx, 0ffffff35h
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 98 07 01 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x588f2a3f
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x588f2a3f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 4ach]
        push 101h
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 4c4h], edi
        ; Exact mapped bytes E8 C6 02 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4a8h]
        push 0fffffeffh
        ; Exact mapped bytes E8 B6 02 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4c0h]
        push 101h
        ; Exact mapped bytes E8 A6 02 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4bch]
        push 0fffffeffh
        ; Exact mapped bytes E8 96 02 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 BA A1 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 2ch], 22h
        mov edi, 0cch
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x588f2ae9
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x588f2ace
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588f2ace
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 3300h
        ; Exact mapped bytes EB 02: jmp 0x588f2ad0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov ebp, dword ptr [esp + 38h]
        lea edx, [ebx + 10h]
        push edx
        lea edx, [ebp + 3ch]
        push edx
        push 4
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 19 46 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x588f2aef
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 38h]
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 4b4h], eax
        ; Exact mapped bytes E8 4A A1 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 2ch], 23h
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x588f2b53
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x588f2b39
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588f2b39
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 3300h
        ; Exact mapped bytes EB 02: jmp 0x588f2b3b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 10h]
        push ecx
        lea ecx, [ebp + 0abh]
        push ecx
        push 4
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 AF 45 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588f2b55
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 4b8h], eax
        ; Exact mapped bytes E8 E4 A0 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xa0
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 2ch], 24h
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x588f2bb6
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x588f2b9f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588f2b9f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 3300h
        ; Exact mapped bytes EB 02: jmp 0x588f2ba1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 10h]
        push ecx
        lea ecx, [ebp - 26h]
        push ecx
        push 4
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 4C 45 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588f2bb8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 4c8h], eax
        ; Exact mapped bytes E8 81 A0 08 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xa0
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 2ch], 25h
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x588f2c1c
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x588f2c02
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588f2c02
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 3300h
        ; Exact mapped bytes EB 02: jmp 0x588f2c04
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        add ebx, 10h
        push ebx
        add ebp, 0ffffff78h
        push ebp
        push 4
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E6 44 01 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588f2c1e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 4b4h]
        mov dword ptr [esi + 4cch], eax
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f2c45
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0B 03 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f2c52
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8E 02 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esi + 4b8h]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 320h
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f2c6e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E2 02 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f2c7b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 65 02 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esi + 4c8h]
        mov ecx, 320h
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f2c97
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B9 02 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f2ca4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 3C 02 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esi + 4cch]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f2cc0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 90 02 01 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588f2ccd
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 13 02 01 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, esi
        mov ecx, dword ptr [esp + 24h]
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
        add esp, 1ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
