// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 4086 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885D380 .. +0xFF6 bytes.
extern "C" __declspec(naked) void FUN_5885d380_segment_00() {
    __asm {
        push -1
        push 58985842h
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
        mov edi, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 34h]
        mov ebx, dword ptr [esp + 30h]
        mov ebp, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push edi
        push eax
        push ecx
        push ebx
        push ebp
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 60 AB FF FF: call 0x58857f30
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        mov dword ptr [esp + 24h], 0
        mov dword ptr [esi], 5899eaa0h
        ; Exact mapped bytes E8 69 F8 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf8
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x5885d433
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 0
        ; Exact mapped bytes 7E 13: jle 0x5885d417
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0A: je 0x5885d417
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x5885d419
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 7d0h]
        push edx
        push ebx
        lea edx, [ebp + 0bah]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2F 48 ED FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x48
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885d435
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E8 07 F8 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf8
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov ebx, 2
        mov byte ptr [esp + 20h], bl
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x5885d49e
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 1
        ; Exact mapped bytes 7E 14: jle 0x5885d47e
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5885d47e
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes EB 02: jmp 0x5885d480
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 7d0h]
        push edx
        mov edx, dword ptr [esp + 34h]
        push edx
        lea edx, [ebp + 0bah]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C4 47 ED FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x47
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885d4a0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a8h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes E8 65 58 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x58
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        push 96h
        ; Exact mapped bytes E8 15 58 0A 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        push 96h
        ; Exact mapped bytes E8 05 58 0A 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0x0a
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 6C F7 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf7
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 3
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x5885d52e
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], ebx
        ; Exact mapped bytes 7E 14: jle 0x5885d514
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5885d514
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes EB 02: jmp 0x5885d516
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov ebx, dword ptr [esp + 30h]
        lea edx, [edi + 0bb8h]
        push edx
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 34 47 ED FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x5885d534
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 30h]
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E8 08 F7 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xf7
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 4
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x5885d58f
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 3
        ; Exact mapped bytes 7E 14: jle 0x5885d579
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5885d579
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x5885d57b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0bb8h]
        push edx
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D3 46 ED FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x46
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885d591
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0b0h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0b4h], eax
        ; Exact mapped bytes E8 74 57 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x57
        __asm _emit 0x0a
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 9B F6 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf6
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 5
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5885d605
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0fh
        ; Exact mapped bytes 7E 17: jle 0x5885d5e9
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885d5e9
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 3c0h
        ; Exact mapped bytes EB 02: jmp 0x5885d5eb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0c1ch]
        push edx
        lea edx, [ebx + 1dh]
        push edx
        lea edx, [ebp + 37h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2D 74 ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x74
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885d607
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0b8h], eax
        ; Exact mapped bytes E8 35 F6 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf6
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 6
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5885d66b
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0eh
        ; Exact mapped bytes 7E 17: jle 0x5885d64f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885d64f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 380h
        ; Exact mapped bytes EB 02: jmp 0x5885d651
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0c1ch]
        push edx
        lea edx, [ebx + 1dh]
        push edx
        lea edx, [ebp + 37h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C7 73 ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x73
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885d66d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0b8h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0bch], eax
        ; Exact mapped bytes E8 98 56 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 101h
        ; Exact mapped bytes E8 88 56 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x56
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b8h]
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0bch]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b8h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0bch]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 58h
        ; Exact mapped bytes E8 79 F5 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf5
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 7
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5885d727
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0dh
        ; Exact mapped bytes 7E 17: jle 0x5885d70b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885d70b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 340h
        ; Exact mapped bytes EB 02: jmp 0x5885d70d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0c1ch]
        push edx
        add ebx, 1dh
        push ebx
        lea edx, [ebp + 37h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 0B 73 ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x73
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885d729
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0c0h], eax
        ; Exact mapped bytes E8 13 F5 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf5
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 8
        mov ebx, 0ch
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x5885d795
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x5885d775
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885d775
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 300h
        ; Exact mapped bytes EB 02: jmp 0x5885d777
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0c1ch]
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 1dh
        push edx
        lea edx, [ebp + 37h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 9D 72 ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x72
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885d797
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0c0h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0c4h], eax
        ; Exact mapped bytes E8 6E 55 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x55
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 101h
        ; Exact mapped bytes E8 5E 55 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x55
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c0h]
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c4h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 58h
        ; Exact mapped bytes E8 6A F4 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf4
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 9
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x5885d83a
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 13h
        ; Exact mapped bytes 7E 17: jle 0x5885d81a
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885d81a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 4c0h
        ; Exact mapped bytes EB 02: jmp 0x5885d81c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0c1ch]
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 1dh
        push edx
        lea edx, [ebp + 37h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F8 71 ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x71
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885d83c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0c8h], eax
        ; Exact mapped bytes E8 00 F4 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf4
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0ah
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x5885d8a4
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 12h
        ; Exact mapped bytes 7E 17: jle 0x5885d884
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885d884
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 480h
        ; Exact mapped bytes EB 02: jmp 0x5885d886
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0c1ch]
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 1dh
        push edx
        lea edx, [ebp + 37h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8E 71 ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x71
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885d8a6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0c8h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0cch], eax
        ; Exact mapped bytes E8 5F 54 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x54
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0cch]
        push 101h
        ; Exact mapped bytes E8 4F 54 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x54
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c8h]
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0cch]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c8h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0cch]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 58h
        ; Exact mapped bytes E8 40 F3 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf3
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0bh
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x5885d964
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 11h
        ; Exact mapped bytes 7E 17: jle 0x5885d944
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885d944
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 440h
        ; Exact mapped bytes EB 02: jmp 0x5885d946
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0c1ch]
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 1dh
        push edx
        lea edx, [ebp + 37h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 CE 70 ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x70
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885d966
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0d0h], eax
        ; Exact mapped bytes E8 D6 F2 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf2
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], bl
        mov ebx, 10h
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x5885d9d1
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x5885d9b1
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885d9b1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 400h
        ; Exact mapped bytes EB 02: jmp 0x5885d9b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0c1ch]
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 1dh
        push edx
        lea edx, [ebp + 37h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 61 70 ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x70
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885d9d3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0d0h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes E8 32 53 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x53
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d4h]
        push 101h
        ; Exact mapped bytes E8 22 53 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x53
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d0h]
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d4h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 58h
        ; Exact mapped bytes E8 2E F2 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf2
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0dh
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x5885da79
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 15h
        ; Exact mapped bytes 7E 17: jle 0x5885da56
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885da56
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 540h
        ; Exact mapped bytes EB 02: jmp 0x5885da58
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0c1ch]
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 7
        push edx
        lea edx, [ebp + 0c8h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B9 6F ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x6f
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885da7b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0d8h], eax
        ; Exact mapped bytes E8 C1 F1 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf1
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0eh
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x5885dae6
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 14h
        ; Exact mapped bytes 7E 17: jle 0x5885dac3
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885dac3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 500h
        ; Exact mapped bytes EB 02: jmp 0x5885dac5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0c1ch]
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 7
        push edx
        lea edx, [ebp + 0c8h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 4C 6F ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x6f
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885dae8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0d8h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0dch], eax
        ; Exact mapped bytes E8 1D 52 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x52
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0dch]
        push 101h
        ; Exact mapped bytes E8 0D 52 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x52
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d8h]
        push 96h
        ; Exact mapped bytes E8 BD 51 0A 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x51
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0dch]
        push 96h
        ; Exact mapped bytes E8 AD 51 0A 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x51
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d8h]
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0dch]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 58h
        ; Exact mapped bytes E8 F9 F0 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf0
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0fh
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x5885dbae
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 17h
        ; Exact mapped bytes 7E 17: jle 0x5885db8b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885db8b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 5c0h
        ; Exact mapped bytes EB 02: jmp 0x5885db8d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0c1ch]
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 7
        push edx
        lea edx, [ebp + 0cdh]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 84 6E ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885dbb0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0e0h], eax
        ; Exact mapped bytes E8 8C F0 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf0
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], bl
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x5885dc1a
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 16h
        ; Exact mapped bytes 7E 17: jle 0x5885dbf7
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885dbf7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 580h
        ; Exact mapped bytes EB 02: jmp 0x5885dbf9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov ebx, dword ptr [esp + 30h]
        lea edx, [edi + 0c1ch]
        push edx
        lea edx, [ebx + 7]
        push edx
        lea edx, [ebp + 0cdh]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 18 6E ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x6e
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x5885dc20
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 30h]
        xor eax, eax
        mov ecx, dword ptr [esi + 0e0h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0e4h], eax
        ; Exact mapped bytes E8 E5 50 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x50
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        push 101h
        ; Exact mapped bytes E8 D5 50 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x50
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        push 96h
        ; Exact mapped bytes E8 85 50 0A 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        push 96h
        ; Exact mapped bytes E8 75 50 0A 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x50
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e0h]
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e4h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 58h
        ; Exact mapped bytes E8 C1 EF 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 11h
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x5885dce2
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 19h
        ; Exact mapped bytes 7E 17: jle 0x5885dcc3
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885dcc3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 640h
        ; Exact mapped bytes EB 02: jmp 0x5885dcc5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0c1ch]
        push edx
        lea edx, [ebx + 59h]
        push edx
        lea edx, [ebp + 0cdh]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 50 6D ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x6d
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885dce4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0e8h], eax
        ; Exact mapped bytes E8 58 EF 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xef
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 12h
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x5885dd4b
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 18h
        ; Exact mapped bytes 7E 17: jle 0x5885dd2c
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885dd2c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 600h
        ; Exact mapped bytes EB 02: jmp 0x5885dd2e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0c1ch]
        push edx
        lea edx, [ebx + 59h]
        push edx
        lea edx, [ebp + 0cdh]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E7 6C ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x6c
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885dd4d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0ech], eax
        mov eax, dword ptr [esi + 0e8h]
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ech]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 58h
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 D4 EE 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xee
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 13h
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x5885ddcf
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 19h
        ; Exact mapped bytes 7E 17: jle 0x5885ddb0
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885ddb0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 640h
        ; Exact mapped bytes EB 02: jmp 0x5885ddb2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0c1ch]
        push edx
        lea edx, [ebx + 59h]
        push edx
        lea edx, [ebp + 0f4h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 63 6C ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x6c
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885ddd1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0f0h], eax
        ; Exact mapped bytes E8 6B EE 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xee
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 14h
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x5885de38
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 18h
        ; Exact mapped bytes 7E 17: jle 0x5885de19
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885de19
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 600h
        ; Exact mapped bytes EB 02: jmp 0x5885de1b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 0c1ch]
        push ecx
        lea ecx, [ebx + 59h]
        push ecx
        lea ecx, [ebp + 0f4h]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 FA 6B ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885de3a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0f4h], eax
        mov eax, dword ptr [esi + 0f0h]
        mov edx, 0fffbh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0f4h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 74h
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 E7 ED 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xed
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 15h
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x5885decc
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 14: jle 0x5885de9a
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x5885de9a
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 40h
        ; Exact mapped bytes EB 02: jmp 0x5885de9c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0fa0h]
        push edx
        push 30ch
        lea edx, [ebp + 134h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esp + 38h]
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
        ; Exact mapped bytes E8 86 50 EE FF: call 0x58742f50
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885dece
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0f8h], eax
        ; Exact mapped bytes E8 6B ED 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 16h
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x5885df43
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 17: jle 0x5885df19
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885df19
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x5885df1b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 0dach]
        push ecx
        lea ecx, [ebx + 20h]
        push ecx
        lea ecx, [ebp + 1dh]
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
        ; Exact mapped bytes E8 9F FF EF FF: call 0x5875dee0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885df45
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0fch], eax
        ; Exact mapped bytes E8 F4 EC 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xec
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 17h
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x5885dfbd
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 17: jle 0x5885df90
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885df90
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 100h
        ; Exact mapped bytes EB 02: jmp 0x5885df92
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 0dach]
        push ecx
        lea ecx, [ebx + 20h]
        push ecx
        lea ecx, [ebp + 8fh]
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
        ; Exact mapped bytes E8 25 FF EF FF: call 0x5875dee0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885dfbf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 100h], eax
        ; Exact mapped bytes E8 7A EC 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xec
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 18h
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x5885e034
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 17: jle 0x5885e00a
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885e00a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 140h
        ; Exact mapped bytes EB 02: jmp 0x5885e00c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 0dach]
        push ecx
        lea ecx, [ebx + 75h]
        push ecx
        lea ecx, [ebp + 39h]
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
        ; Exact mapped bytes E8 AE FE EF FF: call 0x5875dee0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885e036
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 104h], eax
        ; Exact mapped bytes E8 03 EC 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xec
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 19h
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x5885e0ab
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 6
        ; Exact mapped bytes 7E 17: jle 0x5885e081
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885e081
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 180h
        ; Exact mapped bytes EB 02: jmp 0x5885e083
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 0dach]
        push ecx
        lea ecx, [ebx + 76h]
        push ecx
        lea ecx, [ebp + 6eh]
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
        ; Exact mapped bytes E8 37 FE EF FF: call 0x5875dee0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885e0ad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 108h], eax
        ; Exact mapped bytes E8 8C EB 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xeb
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 1ah
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x5885e125
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0ah
        ; Exact mapped bytes 7E 17: jle 0x5885e0f8
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885e0f8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 280h
        ; Exact mapped bytes EB 02: jmp 0x5885e0fa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 0dach]
        push ecx
        lea ecx, [ebx + 50h]
        push ecx
        lea ecx, [ebp + 114h]
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
        ; Exact mapped bytes E8 BD FD EF FF: call 0x5875dee0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885e127
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 10ch], eax
        ; Exact mapped bytes E8 12 EB 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xeb
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 1bh
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x5885e19f
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0bh
        ; Exact mapped bytes 7E 17: jle 0x5885e172
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885e172
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x5885e174
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 0dach]
        push ecx
        lea ecx, [ebx + 74h]
        push ecx
        lea ecx, [ebp + 114h]
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
        ; Exact mapped bytes E8 43 FD EF FF: call 0x5875dee0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xfd
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885e1a1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 110h], eax
        ; Exact mapped bytes E8 98 EA 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xea
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 1ch
        test eax, eax
        ; Exact mapped bytes 74 56: je 0x5885e21c
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 7
        ; Exact mapped bytes 7E 17: jle 0x5885e1ec
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885e1ec
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 1c0h
        ; Exact mapped bytes EB 02: jmp 0x5885e1ee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 0dach]
        push ecx
        lea ecx, [ebx + 8ch]
        push ecx
        lea ecx, [ebp + 0cch]
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
        ; Exact mapped bytes E8 C6 FC EF FF: call 0x5875dee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xfc
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885e21e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 114h], eax
        ; Exact mapped bytes E8 1B EA 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xea
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 1dh
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x5885e296
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 17: jle 0x5885e269
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885e269
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 200h
        ; Exact mapped bytes EB 02: jmp 0x5885e26b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 0dach]
        push ecx
        lea ecx, [ebx + 39h]
        push ecx
        lea ecx, [ebp + 0cah]
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
        ; Exact mapped bytes E8 4C FC EF FF: call 0x5875dee0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xfc
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885e298
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 118h], eax
        ; Exact mapped bytes E8 A1 E9 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 1eh
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x5885e310
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 9
        ; Exact mapped bytes 7E 17: jle 0x5885e2e3
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885e2e3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 240h
        ; Exact mapped bytes EB 02: jmp 0x5885e2e5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        add edi, 0dach
        push edi
        add ebx, 39h
        push ebx
        add ebp, 0f0h
        push ebp
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
        ; Exact mapped bytes E8 D2 FB EF FF: call 0x5875dee0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfb
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5885e312
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 11ch], eax
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e5ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        mov dword ptr [esi + 120h], 1
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
