// Complete Ghidra body ranges for the selected function.
// 4 discontiguous segments; total 6408 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58843380 .. +0x8F6 bytes.
extern "C" __declspec(naked) void FUN_58843380_segment_00() {
    __asm {
        push -1
        push 58984bf9h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8
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
        lea eax, [esp + 1ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 14h], esi
        mov eax, dword ptr [esp + 40h]
        mov ecx, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 38h]
        mov edi, dword ptr [esp + 34h]
        mov ebx, dword ptr [esp + 30h]
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        push edx
        push edi
        push ebx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 CE FD 0B 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        xor eax, eax
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], eax
        mov dword ptr [esi], 5899e400h
        ; Exact mapped bytes 8B 0D 68 47 A2 58: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [esi + 6ch]
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esi + 60h], ecx
        mov dword ptr [esp + 3ch], 22h
        mov dword ptr [esp + 38h], edx
        mov ebx, 88h
        push 54h
        ; Exact mapped bytes E8 31 98 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x98
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov byte ptr [esp + 24h], 1
        test edi, edi
        ; Exact mapped bytes 74 72: je 0x588434a1
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esp + 3ch]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 13: jle 0x58843451
        __asm _emit 0x7e
        __asm _emit 0x13
        test ecx, ecx
        ; Exact mapped bytes 7C 0F: jl 0x58843451
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x58843451
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [ebx + eax]
        ; Exact mapped bytes EB 02: jmp 0x58843453
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 30h]
        push 40h
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 35 FD 0B 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xfd
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x588434a3
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
        ; Exact mapped bytes EB 02: jmp 0x588434a3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        dec dword ptr [esp + 3ch]
        mov dword ptr [eax], edi
        add eax, 4
        sub ebx, 4
        cmp ebx, 80h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 8F 4E FF FF FF: jg 0x58843416
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 74h]
        mov dword ptr [esp + 3ch], 20h
        mov dword ptr [esp + 38h], eax
        mov ebx, 80h
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 67 97 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x97
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov byte ptr [esp + 24h], 2
        test edi, edi
        ; Exact mapped bytes 74 71: je 0x5884356a
        __asm _emit 0x74
        __asm _emit 0x71
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esp + 3ch]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 13: jle 0x5884351b
        __asm _emit 0x7e
        __asm _emit 0x13
        test ecx, ecx
        ; Exact mapped bytes 7C 0F: jl 0x5884351b
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5884351b
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + ebx]
        ; Exact mapped bytes EB 02: jmp 0x5884351d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 30h]
        push 40h
        push 0
        push 0
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6B FC 0B 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xfc
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x5884356c
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
        ; Exact mapped bytes EB 02: jmp 0x5884356c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        dec dword ptr [esp + 3ch]
        mov dword ptr [eax], edi
        add eax, 4
        sub ebx, 4
        cmp ebx, 78h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 8F 52 FF FF FF: jg 0x588434e0
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 B6 96 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x96
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 3
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x588435f6
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 4ch
        ; Exact mapped bytes 7E 12: jle 0x588435c6
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588435c6
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 1300h]
        ; Exact mapped bytes EB 02: jmp 0x588435c8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebx, dword ptr [esp + 34h]
        mov edi, dword ptr [esp + 30h]
        push 40h
        lea ecx, [ebx + 16h]
        push ecx
        lea ecx, [edi + 161h]
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
        ; Exact mapped bytes E8 AC A7 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa7
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x58843600
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edi, dword ptr [esp + 30h]
        mov ebx, dword ptr [esp + 34h]
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0b4h], eax
        ; Exact mapped bytes E8 39 96 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 4
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x5884366b
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 12: jle 0x58843643
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x58843643
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 200h
        ; Exact mapped bytes EB 02: jmp 0x58843645
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebx + 16h]
        push edx
        lea edx, [edi + 1bah]
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
        ; Exact mapped bytes E8 37 A7 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa7
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5884366d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 CF 95 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x95
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov edx, 5
        mov byte ptr [esp + 24h], dl
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x588436d8
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], edx
        ; Exact mapped bytes 7E 12: jle 0x588436b0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588436b0
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x588436b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebx + 16h]
        push edx
        lea edx, [edi + 1fah]
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
        ; Exact mapped bytes E8 CA A6 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xa6
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588436da
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 5F 95 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x95
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 6
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x58843748
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 6
        ; Exact mapped bytes 7E 12: jle 0x5884371d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x5884371d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 180h
        ; Exact mapped bytes EB 02: jmp 0x5884371f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebx + 17ah]
        push edx
        lea edx, [edi + 1fah]
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
        ; Exact mapped bytes E8 5A A6 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xa6
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5884374a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 EF 94 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x94
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 7
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x588437b2
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 3ah
        ; Exact mapped bytes 7E 12: jle 0x5884378d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x5884378d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0e80h
        ; Exact mapped bytes EB 02: jmp 0x5884378f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebx + 46h]
        push edx
        lea edx, [edi + 43h]
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
        ; Exact mapped bytes E8 F0 A5 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xa5
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588437b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 108h], eax
        ; Exact mapped bytes E8 85 94 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 8
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x5884381f
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 3bh
        ; Exact mapped bytes 7E 12: jle 0x588437f7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588437f7
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0ec0h
        ; Exact mapped bytes EB 02: jmp 0x588437f9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebx + 46h]
        push edx
        lea edx, [edi + 0c8h]
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
        ; Exact mapped bytes E8 83 A5 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa5
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58843821
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 10ch], eax
        ; Exact mapped bytes E8 18 94 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x94
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 9
        mov ebp, 3dh
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5884388d
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], ebp
        ; Exact mapped bytes 7E 12: jle 0x58843868
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x58843868
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0f40h
        ; Exact mapped bytes EB 02: jmp 0x5884386a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebx + 69h]
        push edx
        lea edx, [edi + 7ch]
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
        ; Exact mapped bytes E8 15 A5 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa5
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5884388f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 110h], eax
        ; Exact mapped bytes E8 AA 93 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x93
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 0ah
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x588438f9
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], ebp
        ; Exact mapped bytes 7E 12: jle 0x588438d1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588438d1
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0f40h
        ; Exact mapped bytes EB 02: jmp 0x588438d3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebx + 69h]
        push edx
        lea edx, [edi + 0d6h]
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
        ; Exact mapped bytes E8 A9 A4 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xa4
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588438fb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 114h], eax
        ; Exact mapped bytes E8 3E 93 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x93
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 0bh
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x58843965
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], ebp
        ; Exact mapped bytes 7E 12: jle 0x5884393d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x5884393d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0f40h
        ; Exact mapped bytes EB 02: jmp 0x5884393f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebx + 69h]
        push edx
        lea edx, [edi + 144h]
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
        ; Exact mapped bytes E8 3D A4 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58843967
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 118h], eax
        ; Exact mapped bytes E8 D2 92 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x92
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 0ch
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x588439d1
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], ebp
        ; Exact mapped bytes 7E 12: jle 0x588439a9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588439a9
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0f40h
        ; Exact mapped bytes EB 02: jmp 0x588439ab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebx + 69h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        add edi, 1e5h
        push edi
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
        ; Exact mapped bytes E8 D1 A3 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xa3
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588439d3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 11ch], eax
        ; Exact mapped bytes E8 69 92 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x92
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 24h], 0dh
        test edi, edi
        ; Exact mapped bytes 74 73: je 0x58843a6a
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 124h
        ; Exact mapped bytes 7E 12: jle 0x58843a18
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x58843a18
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 490h]
        ; Exact mapped bytes EB 02: jmp 0x58843a1a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 30h]
        push 40h
        push 0
        push 0
        lea eax, [ebx + 69h]
        push eax
        add ecx, 7ch
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6C F7 0B 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf7
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x58843a6c
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp + 14h]
        add ebp, 18h
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebp]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], ecx
        ; Exact mapped bytes EB 02: jmp 0x58843a6c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 120h], edi
        ; Exact mapped bytes E8 D0 91 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x91
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 24h], 0eh
        test edi, edi
        ; Exact mapped bytes 74 75: je 0x58843b05
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 124h
        ; Exact mapped bytes 7E 12: jle 0x58843ab1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x58843ab1
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 490h]
        ; Exact mapped bytes EB 02: jmp 0x58843ab3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 30h]
        push 40h
        push 0
        push 0
        lea edx, [ebx + 69h]
        push edx
        add eax, 0d6h
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D1 F6 0B 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf6
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x58843b07
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        add ebp, 18h
        mov dword ptr [edi + 10h], edx
        mov eax, dword ptr [ebp]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x58843b07
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 124h], edi
        ; Exact mapped bytes E8 35 91 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x91
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 24h], 0fh
        test edi, edi
        ; Exact mapped bytes 74 76: je 0x58843ba1
        __asm _emit 0x74
        __asm _emit 0x76
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 124h
        ; Exact mapped bytes 7E 12: jle 0x58843b4c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x58843b4c
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 490h]
        ; Exact mapped bytes EB 02: jmp 0x58843b4e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        push 40h
        push 0
        push 0
        lea ecx, [ebx + 69h]
        push ecx
        add edx, 144h
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 35 F6 0B 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf6
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x58843ba3
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        add ebp, 18h
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [ebp]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x58843ba3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 128h], edi
        ; Exact mapped bytes E8 99 90 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 24h], 10h
        test edi, edi
        ; Exact mapped bytes 74 75: je 0x58843c3c
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 124h
        ; Exact mapped bytes 7E 12: jle 0x58843be8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x58843be8
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 490h]
        ; Exact mapped bytes EB 02: jmp 0x58843bea
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 30h]
        push 40h
        push 0
        push 0
        add ebx, 69h
        push ebx
        add eax, 1e5h
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 9A F5 0B 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf5
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x58843c3e
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        add ebp, 18h
        mov dword ptr [edi + 10h], edx
        mov eax, dword ptr [ebp]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x58843c3e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 108h]
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 12ch], edi
        ; Exact mapped bytes E8 C7 F0 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf0
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10ch]
        push 101h
        ; Exact mapped bytes E8 B7 F0 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf0
        __asm _emit 0x0b
        __asm _emit 0x00
        lea edi, [esi + 120h]
        mov ebp, 4
        ; Exact mapped bytes EB 0A: jmp 0x58843c80
        __asm _emit 0xeb
        __asm _emit 0x0a
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58843C80 .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_58843380_segment_01() {
    __asm {
        mov ecx, dword ptr [edi - 10h]
        push 101h
        ; Exact mapped bytes E8 93 F0 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf0
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 0fffffeffh
        ; Exact mapped bytes E8 87 F0 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf0
        __asm _emit 0x0b
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 DF: jne 0x58843c80
        __asm _emit 0x75
        __asm _emit 0xdf
        xor edi, edi
        xor ecx, ecx
        push 0f4h
        mov dword ptr [esi + 130h], edi
        mov dword ptr [esi + 134h], edi
        mov dword ptr [esi + 138h], edi
        mov dword ptr [esi + 13ch], edi
        mov dword ptr [esi + 140h], edi
        mov dword ptr [esi + 144h], edi
        ; Exact mapped bytes 66 89 8E FC 00 00 00: mov word ptr [esi + 0xfc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 74 8F 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x8f
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 11h
        cmp eax, edi
        ; Exact mapped bytes 74 1A: je 0x58843d04
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C2 64: add dx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x64
        movzx ecx, dx
        push ecx
        push edi
        push edi
        push edi
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5E 0B 06 00: call 0x588a4860
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x0b
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58843d06
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 7ch]
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 148h], eax
        ; Exact mapped bytes E8 02 F0 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf0
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        push 101h
        ; Exact mapped bytes E8 F2 EF 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xef
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        push 101h
        ; Exact mapped bytes E8 E2 EF 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xef
        __asm _emit 0x0b
        __asm _emit 0x00
        push 5ch
        ; Exact mapped bytes E8 09 8F 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x8f
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 12h
        cmp eax, edi
        ; Exact mapped bytes 74 10: je 0x58843d65
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push edi
        push edi
        push edi
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 FD 61 F1 FF: call 0x58759f60
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x61
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58843d67
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ebp, 64h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 90h], eax
        mov dword ptr [esp + 3ch], ebp
        mov ebx, 190h
        mov dword ptr [esp + 38h], 2
        ; Exact mapped bytes EB 0A: jmp 0x58843d94
        __asm _emit 0xeb
        __asm _emit 0x0a
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58843D90 .. +0xB6A bytes.
extern "C" __declspec(naked) void FUN_58843380_segment_02() {
    __asm {
        mov ebp, dword ptr [esp + 3ch]
        push 54h
        ; Exact mapped bytes E8 B3 8E 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x8e
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov byte ptr [esp + 24h], 13h
        test edi, edi
        ; Exact mapped bytes 74 74: je 0x58843e21
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 13: jle 0x58843dcb
        __asm _emit 0x7e
        __asm _emit 0x13
        test ebp, ebp
        ; Exact mapped bytes 7C 0F: jl 0x58843dcb
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x58843dcb
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + ebx]
        ; Exact mapped bytes EB 02: jmp 0x58843dcd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 30h]
        mov eax, dword ptr [esi + 90h]
        push 40h
        push 0
        push 0
        push edx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 B5 F3 0B 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf3
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x58843e23
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
        ; Exact mapped bytes EB 02: jmp 0x58843e23
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 1
        add dword ptr [esp + 3ch], eax
        mov dword ptr [esi + ebx - 108h], edi
        add ebx, 4
        sub dword ptr [esp + 38h], eax
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes 0F 85 4B FF FF FF: jne 0x58843d90
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 88h]
        push 0fffffeffh
        ; Exact mapped bytes E8 CB EE 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xee
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        push 101h
        ; Exact mapped bytes E8 BB EE 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xee
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push esi
        ; Exact mapped bytes E8 AF 60 F1 FF: call 0x58759f20
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x60
        __asm _emit 0xf1
        __asm _emit 0xff
        lea eax, [esi + 94h]
        mov dword ptr [esp + 38h], eax
        mov eax, dword ptr [esp + 30h]
        mov ebp, 82h
        add eax, 8fh
        mov dword ptr [esp + 2ch], ebp
        mov dword ptr [esp + 3ch], eax
        mov ebx, 208h
        push 54h
        ; Exact mapped bytes E8 B1 8D 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x8d
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 18h], edi
        mov byte ptr [esp + 24h], 14h
        test edi, edi
        ; Exact mapped bytes 74 7C: je 0x58843f2b
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 13: jle 0x58843ecd
        __asm _emit 0x7e
        __asm _emit 0x13
        test ebp, ebp
        ; Exact mapped bytes 7C 0F: jl 0x58843ecd
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x58843ecd
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + ebx]
        ; Exact mapped bytes EB 02: jmp 0x58843ecf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 3ch]
        mov eax, dword ptr [esi + 90h]
        push 40h
        push 0
        push 0
        add ecx, 3bh
        push ecx
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 B0 F2 0B 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf2
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 26: je 0x58843f23
        __asm _emit 0x74
        __asm _emit 0x26
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
        mov ebp, dword ptr [esp + 2ch]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x58843f2d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 38h]
        push 0fffffeffh
        mov byte ptr [esp + 28h], 0
        mov dword ptr [edi], ecx
        ; Exact mapped bytes E8 DE ED 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xed
        __asm _emit 0x0b
        __asm _emit 0x00
        add dword ptr [esp + 3ch], 46h
        add edi, 4
        add ebx, 18h
        add ebp, 6
        cmp ebx, 250h
        mov dword ptr [esp + 38h], edi
        mov dword ptr [esp + 2ch], ebp
        ; Exact mapped bytes 0F 8C 32 FF FF FF: jl 0x58843e96
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 E0 8C 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x8c
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 15h
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x58843fd2
        __asm _emit 0x74
        __asm _emit 0x54
        mov edx, dword ptr [esi + 60h]
        cmp dword ptr [edx + 160h], 12h
        ; Exact mapped bytes 7E 12: jle 0x58843f9c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x58843f9c
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [edx + 480h]
        ; Exact mapped bytes EB 02: jmp 0x58843f9e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edi, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 30h]
        push 40h
        lea ecx, [edi + 3dh]
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 8fh]
        push edx
        mov edx, dword ptr [esi + 90h]
        push ebx
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 D0 9D F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x9d
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x58843fdc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edi, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 30h]
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes E8 5D 8C 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x8c
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 16h
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x5884404d
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 14h
        ; Exact mapped bytes 7E 12: jle 0x5884401f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x5884401f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 500h
        ; Exact mapped bytes EB 02: jmp 0x58844021
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 3dh]
        push edx
        lea edx, [ebp + 0d5h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 90h]
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
        ; Exact mapped bytes E8 55 9D F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x9d
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5884404f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes E8 EA 8B 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x8b
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 17h
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x588440c0
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 13h
        ; Exact mapped bytes 7E 12: jle 0x58844092
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x58844092
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 4c0h
        ; Exact mapped bytes EB 02: jmp 0x58844094
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 3dh]
        push edx
        lea edx, [ebp + 11bh]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 90h]
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
        ; Exact mapped bytes E8 E2 9C F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x9c
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588440c2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E8 77 8B 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x8b
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 18h
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x58844133
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 36h
        ; Exact mapped bytes 7E 12: jle 0x58844105
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x58844105
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0d80h
        ; Exact mapped bytes EB 02: jmp 0x58844107
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 3dh]
        push edx
        lea edx, [ebp + 161h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 90h]
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
        ; Exact mapped bytes E8 6F 9C F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x9c
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58844135
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes E8 04 8B 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x8b
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 19h
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x588441a6
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 37h
        ; Exact mapped bytes 7E 12: jle 0x58844178
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x58844178
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0dc0h
        ; Exact mapped bytes EB 02: jmp 0x5884417a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 3dh]
        push edx
        lea edx, [ebp + 1a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 90h]
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
        ; Exact mapped bytes E8 FC 9B F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x9b
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588441a8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0d0h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E8 91 8A 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x8a
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 1ah
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x588441e5
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [esi + 90h]
        push 40h
        push 0
        push 0
        push edi
        push ebp
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 ED DC FE FF: call 0x58831ed0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588441e7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 84h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 154h], eax
        ; Exact mapped bytes E8 52 8A 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x8a
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 1bh
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x58844224
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 90h]
        push 40h
        push 0
        push 0
        push edi
        push ebp
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 5E F7 FE FF: call 0x58833980
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58844226
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0b8h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 158h], eax
        ; Exact mapped bytes E8 13 8A 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x8a
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 1ch
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x58844263
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [esi + 90h]
        push 40h
        push 0
        push 0
        push edi
        push ebp
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 CF 64 FE FF: call 0x5882a730
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58844265
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 348h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 15ch], eax
        ; Exact mapped bytes E8 D4 89 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x89
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 1dh
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x588442a8
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [esi + 90h]
        push 2
        push 0
        push 0
        push 40h
        push 0
        push 0
        push edi
        push ebp
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 EA 28 FF FF: call 0x58836b90
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588442aa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 310h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 160h], eax
        ; Exact mapped bytes E8 8F 89 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x89
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 1eh
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x588442ed
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [esi + 90h]
        push 2
        push 0
        push 0
        push 40h
        push 0
        push 0
        push edi
        push ebp
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 F5 78 FF FF: call 0x5883bbe0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588442ef
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 27ch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 164h], eax
        ; Exact mapped bytes E8 4A 89 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x89
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 1fh
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x5884432c
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 90h]
        push 40h
        push 0
        push 0
        push edi
        push ebp
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 46 06 FE FF: call 0x58824970
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5884432e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 25ch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 16ch], eax
        ; Exact mapped bytes E8 0B 89 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x89
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 20h
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x5884436b
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [esi + 90h]
        push 40h
        push 0
        push 0
        push edi
        push ebp
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 87 C1 FE FF: call 0x588304f0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5884436d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 1c0h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 170h], eax
        ; Exact mapped bytes E8 CC 88 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 21h
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x588443aa
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 90h]
        push 40h
        push 0
        push 0
        push edi
        push ebp
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 48 8E FE FF: call 0x5882d1f0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588443ac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 78h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 174h], eax
        ; Exact mapped bytes E8 90 88 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 22h
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x588443f2
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [esi + 90h]
        push 40h
        push 0
        push 0
        add edi, 0c8h
        push edi
        add ebp, 0c8h
        push ebp
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 00 A0 FF FF: call 0x5883e3f0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588443f4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 168h], eax
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 168h]
        push esi
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes E8 8C 7D 06 00: call 0x588ac1a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x7d
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push 101h
        mov dword ptr [esi + 178h], 0
        ; Exact mapped bytes E8 F2 E8 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        push 101h
        ; Exact mapped bytes E8 E2 E8 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        push 101h
        ; Exact mapped bytes E8 D2 E8 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        push 101h
        ; Exact mapped bytes E8 C2 E8 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push 101h
        ; Exact mapped bytes E8 B2 E8 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x00
        push 5ch
        ; Exact mapped bytes E8 D9 87 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x87
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 23h
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x58844499
        __asm _emit 0x74
        __asm _emit 0x14
        push 40h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C9 5A F1 FF: call 0x58759f60
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x5a
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5884449b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push esi
        mov ecx, eax
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0cch], eax
        ; Exact mapped bytes E8 72 5A F1 FF: call 0x58759f20
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x5a
        __asm _emit 0xf1
        __asm _emit 0xff
        lea edx, [esi + 0c4h]
        mov dword ptr [esp + 3ch], 24h
        mov dword ptr [esp + 38h], edx
        mov ebx, 90h
        push 54h
        ; Exact mapped bytes E8 82 87 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x87
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov byte ptr [esp + 24h], 24h
        test edi, edi
        ; Exact mapped bytes 74 77: je 0x58844555
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esp + 3ch]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 13: jle 0x58844500
        __asm _emit 0x7e
        __asm _emit 0x13
        test ecx, ecx
        ; Exact mapped bytes 7C 0F: jl 0x58844500
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x58844500
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [ebx + eax]
        ; Exact mapped bytes EB 02: jmp 0x58844502
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esi + 0cch]
        push 40h
        push 0
        push 0
        push ecx
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 80 EC 0B 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xec
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x58844557
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
        ; Exact mapped bytes EB 02: jmp 0x58844557
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        dec dword ptr [esp + 3ch]
        mov dword ptr [eax], edi
        add eax, 4
        sub ebx, 4
        cmp ebx, 88h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 8F 49 FF FF FF: jg 0x588444c5
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 90h
        ; Exact mapped bytes E8 C8 86 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x86
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov edi, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 30h]
        mov byte ptr [esp + 24h], 25h
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x588445d4
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        push 0
        push 0ffffffh
        lea ecx, [edi + 140h]
        push ecx
        lea edx, [ebp + 9bh]
        push edx
        lea ecx, [edi + 7eh]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 48h]
        push edx
        mov edx, dword ptr [esi + 0cch]
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 AE 5C F4 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x5c
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588445d6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0d0h], eax
        ; Exact mapped bytes E8 63 86 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x86
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 24h], 26h
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x58844634
        __asm _emit 0x74
        __asm _emit 0x39
        push 0
        push 0
        push 0ffffffh
        lea ecx, [edi + 140h]
        push ecx
        lea edx, [ebp + 0e6h]
        push edx
        lea ecx, [edi + 7eh]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 0a5h]
        push edx
        mov edx, dword ptr [esi + 0cch]
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 4E 5C F4 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x5c
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58844636
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes E8 03 86 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 24h], 27h
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x58844694
        __asm _emit 0x74
        __asm _emit 0x39
        push 0
        push 0
        push 0ffffffh
        lea ecx, [edi + 140h]
        push ecx
        lea edx, [ebp + 17bh]
        push edx
        lea ecx, [edi + 7eh]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 0f2h]
        push edx
        mov edx, dword ptr [esi + 0cch]
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 EE 5B F4 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x5b
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58844696
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0d8h], eax
        ; Exact mapped bytes E8 A3 85 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 24h], 28h
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588446f4
        __asm _emit 0x74
        __asm _emit 0x39
        push 0
        push 0
        push 0ffffffh
        lea ecx, [edi + 140h]
        push ecx
        lea edx, [ebp + 209h]
        push edx
        lea ecx, [edi + 7eh]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 18ah]
        push edx
        mov edx, dword ptr [esi + 0cch]
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 8E 5B F4 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x5b
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588446f6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0dch], eax
        mov eax, dword ptr [esi + 0d0h]
        mov ecx, 0ff00h
        mov dword ptr [eax + 6ch], ecx
        mov edx, dword ptr [esi + 0d4h]
        mov dword ptr [edx + 6ch], ecx
        mov eax, dword ptr [esi + 0d8h]
        mov dword ptr [eax + 6ch], ecx
        mov eax, dword ptr [esi + 0dch]
        push 90h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [eax + 6ch], ecx
        ; Exact mapped bytes E8 1A 85 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 24h], 29h
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x5884477a
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        push 0
        push 0ffffffh
        lea ecx, [edi + 140h]
        push ecx
        lea edx, [ebp + 9bh]
        push edx
        lea ecx, [edi + 7eh]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 48h]
        push edx
        mov edx, dword ptr [esi + 0cch]
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 08 5B F4 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x5b
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5884477c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea ebx, [esi + 0e0h]
        push 90h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [ebx], eax
        ; Exact mapped bytes E8 BB 84 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 24h], 2ah
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x588447dc
        __asm _emit 0x74
        __asm _emit 0x39
        push 0
        push 0
        push 0ffffffh
        lea ecx, [edi + 140h]
        push ecx
        lea edx, [ebp + 0e6h]
        push edx
        lea ecx, [edi + 7eh]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 0a5h]
        push edx
        mov edx, dword ptr [esi + 0cch]
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 A6 5A F4 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x5a
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588447de
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0e4h], eax
        ; Exact mapped bytes E8 5B 84 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 24h], 2bh
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x5884483c
        __asm _emit 0x74
        __asm _emit 0x39
        push 0
        push 0
        push 0ffffffh
        lea ecx, [edi + 140h]
        push ecx
        lea edx, [ebp + 17bh]
        push edx
        lea ecx, [edi + 7eh]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 0f2h]
        push edx
        mov edx, dword ptr [esi + 0cch]
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 46 5A F4 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x5a
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5884483e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0e8h], eax
        ; Exact mapped bytes E8 FB 83 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x83
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 24h], 2ch
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x5884489c
        __asm _emit 0x74
        __asm _emit 0x39
        push 0
        push 0
        push 0ffffffh
        lea ecx, [edi + 140h]
        push ecx
        lea edx, [ebp + 209h]
        push edx
        lea ecx, [edi + 7eh]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 18ah]
        push edx
        mov edx, dword ptr [esi + 0cch]
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 E6 59 F4 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x59
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5884489e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0ech], eax
        mov eax, dword ptr [ebx]
        mov ecx, 0ff00h
        mov dword ptr [eax + 6ch], ecx
        mov edx, dword ptr [esi + 0e4h]
        mov dword ptr [edx + 6ch], ecx
        mov eax, dword ptr [esi + 0e8h]
        mov dword ptr [eax + 6ch], ecx
        mov eax, dword ptr [esi + 0ech]
        mov dword ptr [eax + 6ch], ecx
        xor ecx, ecx
        xor edx, edx
        xor eax, eax
        ; Exact mapped bytes 66 89 96 F8 00 00 00: mov word ptr [esi + 0xf8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 FA 00 00 00: mov word ptr [esi + 0xfa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes 66 89 8E F0 00 00 00: mov word ptr [esi + 0xf0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0f4h], 1
        mov eax, ebx
        lea edx, [ecx + 4]
        ; Exact mapped bytes EB 06: jmp 0x58844900
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58844900 .. +0x39E bytes.
extern "C" __declspec(naked) void FUN_58843380_segment_03() {
    __asm {
        mov ecx, dword ptr [eax]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 59 24: and word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0x24
        mov ecx, dword ptr [eax]
        mov ebx, 0dh
        add eax, 4
        sub edx, 1
        mov dword ptr [ecx + 5ch], ebx
        ; Exact mapped bytes 75 E3: jne 0x58844900
        __asm _emit 0x75
        __asm _emit 0xe3
        lea eax, [esi + 0d0h]
        lea edx, [ebx - 9]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 66 83 49 24 01: or word ptr [ecx + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x01
        mov ecx, dword ptr [eax]
        add eax, 4
        sub edx, 1
        mov dword ptr [ecx + 5ch], ebx
        ; Exact mapped bytes 75 EC: jne 0x58844926
        __asm _emit 0x75
        __asm _emit 0xec
        push 0ach
        ; Exact mapped bytes E8 0A 83 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x83
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        xor ebx, ebx
        mov byte ptr [esp + 24h], 2dh
        cmp eax, ebx
        ; Exact mapped bytes 74 4C: je 0x588449a2
        __asm _emit 0x74
        __asm _emit 0x4c
        mov edx, dword ptr [esi + 60h]
        cmp dword ptr [edx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x58844974
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [edx + 190h]
        cmp edx, ebx
        ; Exact mapped bytes 74 08: je 0x58844974
        __asm _emit 0x74
        __asm _emit 0x08
        add edx, 100h
        ; Exact mapped bytes EB 02: jmp 0x58844976
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 40h
        lea ecx, [edi + 14ch]
        push ecx
        lea ecx, [ebp + 41h]
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        mov edx, dword ptr [esi + 0cch]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 00 94 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x94
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588449a4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 100h], eax
        ; Exact mapped bytes E8 96 82 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x82
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 24h], 2eh
        cmp eax, ebx
        ; Exact mapped bytes 74 4F: je 0x58844a17
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x588449e6
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x588449e6
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1c0h
        ; Exact mapped bytes EB 02: jmp 0x588449e8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [edi + 14ch]
        push edx
        lea edx, [ebp + 80h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 0cch]
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
        ; Exact mapped bytes E8 8B 93 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58844a19
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 100h]
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 104h], eax
        ; Exact mapped bytes E8 EC E2 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xe2
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 104h]
        push 101h
        ; Exact mapped bytes E8 DC E2 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe2
        __asm _emit 0x0b
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 00 82 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x82
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 24h], 2fh
        cmp eax, ebx
        ; Exact mapped bytes 74 56: je 0x58844ab4
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1eh
        ; Exact mapped bytes 7E 16: jle 0x58844a83
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58844a83
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 780h
        ; Exact mapped bytes EB 02: jmp 0x58844a85
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 40h]
        push ecx
        lea ecx, [edi + 78h]
        push ecx
        lea ecx, [ebp + 217h]
        push ecx
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        mov edx, dword ptr [esi + 0cch]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 EE 92 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x92
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58844ab6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 14ch], eax
        ; Exact mapped bytes E8 53 E2 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xe2
        __asm _emit 0x0b
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 77 81 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x81
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 24h], 30h
        cmp eax, ebx
        ; Exact mapped bytes 74 59: je 0x58844b40
        __asm _emit 0x74
        __asm _emit 0x59
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1fh
        ; Exact mapped bytes 7E 16: jle 0x58844b0c
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58844b0c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 7c0h
        ; Exact mapped bytes EB 02: jmp 0x58844b0e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 40h]
        push ecx
        lea ecx, [edi + 138h]
        push ecx
        lea ecx, [ebp + 217h]
        push ecx
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        mov edx, dword ptr [esi + 0cch]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 62 92 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x92
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58844b42
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 150h], eax
        ; Exact mapped bytes E8 C7 E1 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xe1
        __asm _emit 0x0b
        __asm _emit 0x00
        push 5ch
        ; Exact mapped bytes E8 EE 80 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x80
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 24h], 31h
        cmp eax, ebx
        ; Exact mapped bytes 74 10: je 0x58844b80
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push ebx
        push ebx
        push edi
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A2 06 FD FF: call 0x58815220
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58844b82
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 5ch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 BD 80 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x80
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 24h], 32h
        cmp eax, ebx
        ; Exact mapped bytes 74 10: je 0x58844bb1
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B1 53 F1 FF: call 0x58759f60
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x53
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58844bb3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 118h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0b8h], eax
        ; Exact mapped bytes E8 86 80 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 24h], 33h
        cmp eax, ebx
        ; Exact mapped bytes 74 10: je 0x58844be8
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push ebx
        push ebx
        push edi
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 DA A8 FF FF: call 0x5883f4c0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58844bea
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0b4h]
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0bch], eax
        ; Exact mapped bytes E8 1B E1 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xe1
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov dword ptr [esi + 0c0h], ebx
        mov ecx, eax
        cmp eax, dword ptr [esi + 70h]
        ; Exact mapped bytes 74 09: je 0x58844c1e
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, 0bfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [eax + 38h]
        cmp eax, ecx
        ; Exact mapped bytes 75 EB: jne 0x58844c10
        __asm _emit 0x75
        __asm _emit 0xeb
        mov eax, 0fah
        ; Exact mapped bytes 66 89 86 82 01 00 00: mov word ptr [esi + 0x182], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        mov ecx, 0fff0h
        mov edx, ecx
        mov dword ptr [esi + 184h], ebx
        mov dword ptr [esi + 188h], 1
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b8h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        xor eax, eax
        ; Exact mapped bytes 66 89 86 80 01 00 00: mov word ptr [esi + 0x180], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0e5ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov eax, esi
        mov ecx, dword ptr [esp + 1ch]
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
        add esp, 14h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
