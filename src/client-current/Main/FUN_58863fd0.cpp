// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 4087 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58863FD0 .. +0xFF7 bytes.
extern "C" __declspec(naked) void FUN_58863fd0_segment_00() {
    __asm {
        push -1
        push 58985bcch
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
        mov edi, ecx
        mov dword ptr [esp + 14h], edi
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 34h]
        mov esi, dword ptr [esp + 30h]
        mov ebp, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push esi
        push ebp
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 90 22 F5 FF: call 0x587b62b0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0xf5
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        mov dword ptr [esp + 24h], ebx
        mov dword ptr [edi], 5899ec54h
        ; Exact mapped bytes E8 1B 8C 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1
        cmp eax, ebx
        ; Exact mapped bytes 74 46: je 0x58864089
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 158h
        ; Exact mapped bytes 7E 23: jle 0x58864078
        __asm _emit 0x7e
        __asm _emit 0x23
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 1B: je 0x58864078
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 560h]
        push 40h
        push esi
        push ebp
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 EA DB EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xdb
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x5886408b
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push esi
        xor ecx, ecx
        push ebp
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 D9 DB EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xdb
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5886408b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [edi + 88h], eax
        ; Exact mapped bytes E8 7F EC 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xec
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [edi + 88h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 97 8B 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x8b
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 2
        cmp eax, ebx
        ; Exact mapped bytes 74 46: je 0x5886410d
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 157h
        ; Exact mapped bytes 7E 23: jle 0x588640fc
        __asm _emit 0x7e
        __asm _emit 0x23
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 1B: je 0x588640fc
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 55ch]
        push 40h
        push esi
        push ebp
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 66 DB EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xdb
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x5886410f
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push esi
        xor ecx, ecx
        push ebp
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 55 DB EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xdb
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5886410f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [edi + 84h], eax
        ; Exact mapped bytes E8 2E 8B 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x8b
        __asm _emit 0x11
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], esi
        mov byte ptr [esp + 20h], 3
        cmp esi, ebx
        ; Exact mapped bytes 74 28: je 0x5886415a
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [esp + 30h]
        push 40h
        push ebx
        push ebx
        add edx, 9ah
        push edx
        lea eax, [ebp + 5ch]
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 53 F0 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], ebx
        mov ecx, esi
        ; Exact mapped bytes EB 02: jmp 0x5886415c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [edi + 8ch], ecx
        ; Exact mapped bytes E8 B0 EB 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xeb
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8ch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 C8 8A 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x8a
        __asm _emit 0x11
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], esi
        mov byte ptr [esp + 20h], 4
        cmp esi, ebx
        ; Exact mapped bytes 74 26: je 0x588641be
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [esp + 30h]
        push 40h
        push ebx
        push ebx
        add edx, 147h
        push edx
        lea eax, [ebp + 6ah]
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 ED EF 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xef
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x588641c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [edi + 94h], esi
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, dword ptr [edi + 94h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes E8 3D EB 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xeb
        __asm _emit 0x09
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 64 8A 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x8a
        __asm _emit 0x11
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], esi
        mov byte ptr [esp + 20h], 5
        cmp esi, ebx
        ; Exact mapped bytes 74 26: je 0x58864222
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [esp + 30h]
        push 40h
        push ebx
        push ebx
        add edx, 147h
        push edx
        lea eax, [ebp + 6ah]
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 89 EF 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xef
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x58864224
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, dword ptr [edi + 94h]
        mov dword ptr [edi + 90h], esi
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [edi + 90h]
        push 101h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes E8 D3 EA 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xea
        __asm _emit 0x09
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 F7 89 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x89
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 6
        cmp eax, ebx
        ; Exact mapped bytes 74 49: je 0x588642b0
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 16: jle 0x5886428f
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5886428f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x58864291
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov esi, dword ptr [esp + 30h]
        lea edx, [esi + 15bh]
        push edx
        lea edx, [ebp + 271h]
        push edx
        push 8
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 52 2E 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x588642b6
        __asm _emit 0xeb
        __asm _emit 0x06
        mov esi, dword ptr [esp + 30h]
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [edi + 5bch], eax
        ; Exact mapped bytes E8 54 EA 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xea
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [edi + 5bch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0fch
        ; Exact mapped bytes E8 69 89 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x89
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 7
        cmp eax, ebx
        ; Exact mapped bytes 74 45: je 0x5886433a
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 16: jle 0x5886431d
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5886431d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x5886431f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [esi + 16ah]
        push edx
        lea edx, [ebp + 271h]
        push edx
        push 8
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 C8 2D 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x2d
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886433c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [edi + 5b8h], eax
        ; Exact mapped bytes E8 CE E9 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [edi + 5b8h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 E3 88 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x88
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 8
        cmp eax, ebx
        ; Exact mapped bytes 74 5B: je 0x588643d6
        __asm _emit 0x74
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1ah
        ; Exact mapped bytes 7E 16: jle 0x588643a0
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x588643a0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 680h
        ; Exact mapped bytes EB 02: jmp 0x588643a2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, 3e8h
        ; Exact mapped bytes 66 03 57 26: add dx, word ptr [edi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x57
        __asm _emit 0x26
        movzx edx, dx
        push edx
        lea edx, [esi + 1ech]
        push edx
        lea edx, [ebp + 200h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 CC 99 EF FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x99
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588643d8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [edi + 98h], eax
        ; Exact mapped bytes E8 32 E9 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [edi + 98h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 47 88 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x88
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 9
        cmp eax, ebx
        ; Exact mapped bytes 74 50: je 0x58864467
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1bh
        ; Exact mapped bytes 7E 16: jle 0x5886443c
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5886443c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 6c0h
        ; Exact mapped bytes EB 02: jmp 0x5886443e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        add esi, 1ech
        push esi
        lea edx, [ebp + 261h]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 3B 99 EF FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x99
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58864469
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [edi + 9ch], eax
        ; Exact mapped bytes E8 A1 E8 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [edi + 9ch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        add ebp, 0beh
        mov dword ptr [esp + 3ch], ebp
        lea esi, [edi + 104h]
        mov dword ptr [esp + 38h], 0bh
        push 54h
        ; Exact mapped bytes E8 A1 87 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x87
        __asm _emit 0x11
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 34h], ebp
        mov byte ptr [esp + 20h], 0ah
        cmp ebp, ebx
        ; Exact mapped bytes 74 2D: je 0x588644ec
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 3ch]
        push 40h
        push ebx
        push ebx
        add edx, 16fh
        push edx
        add eax, -8
        push eax
        push edi
        mov ecx, ebp
        ; Exact mapped bytes E8 C2 EC 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xec
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp], 5898c55ch
        mov dword ptr [ebp + 50h], ebx
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x588644ee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 2ch], ecx
        ; Exact mapped bytes E8 21 E8 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2ch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ebp, dword ptr [esi + 2ch]
        mov ecx, dword ptr [ebp + 40h]
        mov edx, 3e8h
        ; Exact mapped bytes 66 89 55 26: mov word ptr [ebp + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x58864524
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 2C EA 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xea
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x58864531
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 AF E9 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 13 87 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x87
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 20h], 0bh
        cmp eax, ebx
        ; Exact mapped bytes 74 44: je 0x5886458f
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1eh
        ; Exact mapped bytes 7E 16: jle 0x58864570
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58864570
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 780h
        ; Exact mapped bytes EB 02: jmp 0x58864572
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        add ecx, 16fh
        push ecx
        mov ecx, dword ptr [esp + 40h]
        push ecx
        push 2
        push edx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 73 2B 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x2b
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58864591
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi], eax
        ; Exact mapped bytes E8 7D E7 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe7
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ebp, dword ptr [esi]
        mov ecx, dword ptr [ebp + 40h]
        mov eax, 3e8h
        ; Exact mapped bytes 66 89 45 26: mov word ptr [ebp + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x588645c6
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 8A E9 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x588645d3
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 0D E9 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 74 86 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x86
        __asm _emit 0x11
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 34h], ebp
        mov byte ptr [esp + 20h], 0ch
        cmp ebp, ebx
        ; Exact mapped bytes 74 2D: je 0x58864619
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 3ch]
        push 40h
        push ebx
        push ebx
        add ecx, 184h
        push ecx
        add edx, -8
        push edx
        push edi
        mov ecx, ebp
        ; Exact mapped bytes E8 95 EB 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xeb
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp], 5898c55ch
        mov dword ptr [ebp + 50h], ebx
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x5886461b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi - 2ch], ecx
        ; Exact mapped bytes E8 F4 E6 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xe6
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi - 2ch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ebp, dword ptr [esi - 2ch]
        mov ecx, dword ptr [ebp + 40h]
        mov edx, 3e8h
        ; Exact mapped bytes 66 89 55 26: mov word ptr [ebp + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x58864651
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 FF E8 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5886465e
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 82 E8 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 E6 85 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 20h], 0dh
        cmp eax, ebx
        ; Exact mapped bytes 74 44: je 0x588646bc
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1eh
        ; Exact mapped bytes 7E 16: jle 0x5886469d
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5886469d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 780h
        ; Exact mapped bytes EB 02: jmp 0x5886469f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        add ecx, 184h
        push ecx
        mov ecx, dword ptr [esp + 40h]
        push ecx
        push 2
        push edx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 46 2A 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x2a
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588646be
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi - 58h], eax
        ; Exact mapped bytes E8 4F E6 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xe6
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi - 58h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ebp, dword ptr [esi - 58h]
        mov ecx, dword ptr [ebp + 40h]
        mov eax, 3e8h
        ; Exact mapped bytes 66 89 45 26: mov word ptr [ebp + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x588646f6
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 5A E8 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x58864703
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 DD E7 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe7
        __asm _emit 0x09
        __asm _emit 0x00
        add dword ptr [esp + 3ch], 1fh
        add esi, 4
        sub dword ptr [esp + 38h], 1
        ; Exact mapped bytes 0F 85 90 FD FF FF: jne 0x588644a6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 57 24: mov dx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
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
        ; Exact mapped bytes 66 89 57 24: mov word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x24
        mov dword ptr [edi + 7c8h], ebx
        mov dword ptr [edi + 7cch], ebx
        mov dword ptr [esp + 38h], ebx
        lea esi, [edi + 254h]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 F7 84 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 3ch], ebp
        mov byte ptr [esp + 20h], 0eh
        cmp ebp, ebx
        ; Exact mapped bytes 74 32: je 0x5886479b
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, dword ptr [edi + 8]
        mov edx, dword ptr [edi + 4]
        mov ecx, dword ptr [esp + 38h]
        push 40h
        push ebx
        push ebx
        add eax, 102h
        lea ecx, [edx + ecx + 7bh]
        push eax
        push ecx
        push edi
        mov ecx, ebp
        ; Exact mapped bytes E8 16 EA 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xea
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp], 5898ca74h
        mov dword ptr [ebp + 50h], ebx
        mov dword ptr [ebp + 54h], ebx
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x5886479d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi], ecx
        ; Exact mapped bytes E8 73 E5 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe5
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 8F 84 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 28h], ebp
        mov byte ptr [esp + 20h], 0fh
        cmp ebp, ebx
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x5886485f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esp + 34h], edx
        ; Exact mapped bytes 8B 15 C4 46 A2 58: mov edx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 164h], 9ch
        ; Exact mapped bytes 7E 1A: jle 0x5886480d
        __asm _emit 0x7e
        __asm _emit 0x1a
        cmp dword ptr [edx + 18ch], ebx
        ; Exact mapped bytes 74 12: je 0x5886480d
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [edx + 18ch]
        mov edx, dword ptr [edx + 270h]
        mov dword ptr [esp + 3ch], edx
        ; Exact mapped bytes EB 04: jmp 0x58864811
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 3ch], ebx
        push 40h
        push ebx
        push ebx
        push ecx
        mov ecx, dword ptr [esp + 44h]
        push ecx
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 7D E9 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esp + 3ch]
        mov dword ptr [ebp], 5898c55ch
        mov dword ptr [ebp + 50h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 26: je 0x5886485b
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ebp + 0ch], edx
        mov ecx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [ebp + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ebp + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ebp + 20h], eax
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x58864861
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 26ch], ecx
        ; Exact mapped bytes E8 AB E4 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xe4
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 26ch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 58h
        ; Exact mapped bytes E8 C3 83 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x83
        __asm _emit 0x11
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 28h], ebp
        mov byte ptr [esp + 20h], 10h
        cmp ebp, ebx
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x58864922
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esp + 34h], edx
        ; Exact mapped bytes 8B 15 C4 46 A2 58: mov edx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 160h], ebx
        ; Exact mapped bytes 7E 14: jle 0x588648cf
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [edx + 190h], ebx
        ; Exact mapped bytes 74 0C: je 0x588648cf
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [edx + 190h]
        mov dword ptr [esp + 3ch], edx
        ; Exact mapped bytes EB 04: jmp 0x588648d3
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 3ch], ebx
        push 40h
        push ebx
        push ebx
        push ecx
        mov ecx, dword ptr [esp + 44h]
        push ecx
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 BB E8 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esp + 3ch]
        mov dword ptr [ebp], 5898ca74h
        mov dword ptr [ebp + 50h], ebx
        mov dword ptr [ebp + 54h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 2A: je 0x58864924
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ebp + 0ch], edx
        mov ecx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [ebp + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ebp + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ebp + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x58864924
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, 0fffbh
        mov dword ptr [esi + 2e8h], ebp
        ; Exact mapped bytes 66 21 4D 24: and word ptr [ebp + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4d
        __asm _emit 0x24
        push 54h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes E8 10 83 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x83
        __asm _emit 0x11
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 3ch], ebp
        mov byte ptr [esp + 20h], 11h
        cmp ebp, ebx
        ; Exact mapped bytes 74 24: je 0x58864974
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        push 40h
        push ebx
        push ebx
        push ecx
        push edx
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 3A E8 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp], 5898c55ch
        mov dword ptr [ebp + 50h], ebx
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x58864976
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0f8h], ecx
        ; Exact mapped bytes E8 96 E3 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xe3
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f8h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 AE 82 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x82
        __asm _emit 0x11
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 3ch], ebp
        mov byte ptr [esp + 20h], 12h
        cmp ebp, ebx
        ; Exact mapped bytes 74 22: je 0x588649d4
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        push 40h
        push ebx
        push ebx
        push ecx
        push edx
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 D8 E7 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xe7
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp], 5898c55ch
        mov dword ptr [ebp + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x588649d6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 58h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 7ch], ebp
        ; Exact mapped bytes E8 6A 82 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x82
        __asm _emit 0x11
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 3ch], ebp
        mov byte ptr [esp + 20h], 13h
        cmp ebp, ebx
        ; Exact mapped bytes 74 25: je 0x58864a1b
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        push 40h
        push ebx
        push ebx
        push ecx
        push edx
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 94 E7 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe7
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp], 5898ca74h
        mov dword ptr [ebp + 50h], ebx
        mov dword ptr [ebp + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x58864a1d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi - 7ch], ebp
        ; Exact mapped bytes E8 23 82 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x82
        __asm _emit 0x11
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 3ch], ebp
        mov byte ptr [esp + 20h], 14h
        cmp ebp, ebx
        ; Exact mapped bytes 74 24: je 0x58864a61
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        push 40h
        push ebx
        push ebx
        push ecx
        push edx
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 4D E7 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe7
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp], 5898c55ch
        mov dword ptr [ebp + 50h], ebx
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x58864a63
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 1f0h], ecx
        ; Exact mapped bytes E8 A9 E2 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xe2
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1f0h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 C1 81 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x81
        __asm _emit 0x11
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 3ch], ebp
        mov byte ptr [esp + 20h], 15h
        cmp ebp, ebx
        ; Exact mapped bytes 74 22: je 0x58864ac1
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        push 40h
        push ebx
        push ebx
        push ecx
        push edx
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 EB E6 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xe6
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp], 5898c55ch
        mov dword ptr [ebp + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x58864ac3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 174h], ebp
        ; Exact mapped bytes E8 7A 81 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x81
        __asm _emit 0x11
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 3ch], ebp
        mov byte ptr [esp + 20h], 16h
        cmp ebp, ebx
        ; Exact mapped bytes 74 2A: je 0x58864b10
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        push 40h
        push ebx
        push ebx
        add ecx, -40h
        push ecx
        add eax, 1fh
        push eax
        push edi
        mov ecx, ebp
        ; Exact mapped bytes E8 9E E6 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xe6
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp], 5898c55ch
        mov dword ptr [ebp + 50h], ebx
        mov ecx, ebp
        ; Exact mapped bytes EB 02: jmp 0x58864b12
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi - 0f8h], ecx
        ; Exact mapped bytes E8 FA E1 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe1
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        add eax, 60h
        add esi, 4
        cmp eax, 0b40h
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 8E 11 FC FF FF: jle 0x58864750
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 940h
        lea ebp, [edi + 5c4h]
        sub eax, edi
        mov dword ptr [esp + 3ch], ebx
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esp + 34h], eax
        push 54h
        ; Exact mapped bytes E8 EF 80 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [esp + 3ch], 1dh
        mov esi, eax
        ; Exact mapped bytes 0F 8D B1 00 00 00: jge 0x58864c20
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 28h], esi
        mov byte ptr [esp + 20h], 17h
        cmp esi, ebx
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x58864c14
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 3ch]
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 3c1h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 1F: jle 0x58864bb6
        __asm _emit 0x7e
        __asm _emit 0x1f
        cmp eax, ebx
        ; Exact mapped bytes 7C 1B: jl 0x58864bb6
        __asm _emit 0x7c
        __asm _emit 0x1b
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 13: je 0x58864bb6
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ecx + 18ch]
        add edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 38h]
        mov ebp, dword ptr [edx + eax]
        ; Exact mapped bytes EB 02: jmp 0x58864bb8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push ebx
        push ebx
        add ecx, 148h
        push ecx
        add edx, 6eh
        push edx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 C9 E5 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe5
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 32: je 0x58864c16
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [esi + 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [esi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [esi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [esi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov ecx, dword ptr [esp + 38h]
        mov dword ptr [esi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [esi + 20h], eax
        mov dword ptr [ecx], esi
        mov ebp, ecx
        ; Exact mapped bytes EB 48: jmp 0x58864c5c
        __asm _emit 0xeb
        __asm _emit 0x48
        xor esi, esi
        mov ecx, dword ptr [esp + 38h]
        mov dword ptr [ecx], esi
        mov ebp, ecx
        ; Exact mapped bytes EB 3C: jmp 0x58864c5c
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov dword ptr [esp + 38h], esi
        mov byte ptr [esp + 20h], 18h
        cmp esi, ebx
        ; Exact mapped bytes 74 2A: je 0x58864c57
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push ebx
        push ebx
        add edx, 148h
        push edx
        add eax, 6eh
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 54 E5 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe5
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x58864c59
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [ebp], esi
        mov eax, dword ptr [ebp]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp]
        push 101h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes E8 A7 E0 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xe0
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esp + 3ch]
        inc eax
        add ebp, 4
        cmp eax, 20h
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 38h], ebp
        ; Exact mapped bytes 0F 8C BA FE FF FF: jl 0x58864b58
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 40bh
        ; Exact mapped bytes 7E 16: jle 0x58864cc5
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x58864cc5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 102ch]
        ; Exact mapped bytes EB 02: jmp 0x58864cc7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 640h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 28: je 0x58864cfc
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        push 54h
        ; Exact mapped bytes E8 4B 7F 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x7f
        __asm _emit 0x11
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], esi
        mov byte ptr [esp + 20h], 19h
        cmp esi, ebx
        ; Exact mapped bytes 74 2F: je 0x58864d44
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push ebx
        push ebx
        add ecx, 144h
        push ecx
        add edx, 82h
        push edx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 69 E4 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe4
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], ebx
        mov ecx, esi
        ; Exact mapped bytes EB 02: jmp 0x58864d46
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [edi + 5c0h], ecx
        ; Exact mapped bytes E8 C6 DF 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xdf
        __asm _emit 0x09
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 EA 7E 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x7e
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 1ah
        cmp eax, ebx
        ; Exact mapped bytes 74 56: je 0x58864dca
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1ch
        ; Exact mapped bytes 7E 16: jle 0x58864d99
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58864d99
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 700h
        ; Exact mapped bytes EB 02: jmp 0x58864d9b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 57 26: mov dx, word ptr [edi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C2 0A: add dx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x0a
        movzx edx, dx
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 258h
        push 320h
        push ecx
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 D8 8F EF FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x8f
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58864dcc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [edi + 0a0h], eax
        ; Exact mapped bytes E8 3E DF 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xdf
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0a0h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 56 7E 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x7e
        __asm _emit 0x11
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 30h], esi
        mov byte ptr [esp + 20h], 1bh
        cmp esi, ebx
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x58864e92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 155h
        ; Exact mapped bytes 7E 16: jle 0x58864e35
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x58864e35
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [edx + 554h]
        ; Exact mapped bytes EB 02: jmp 0x58864e37
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 47 26: mov ax, word ptr [edi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 8ch]
        ; Exact mapped bytes 66 83 C0 0A: add ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x0a
        movzx eax, ax
        push eax
        push ebx
        push ebx
        push 258h
        push 320h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 43 E3 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe3
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2A: je 0x58864e94
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [esi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x58864e94
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 101h
        mov ecx, esi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [edi + 0a4h], esi
        ; Exact mapped bytes E8 76 DE 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xde
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0a4h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 8E 7D 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x7d
        __asm _emit 0x11
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 30h], esi
        mov byte ptr [esp + 20h], 1ch
        cmp esi, ebx
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x58864f5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3ffh
        ; Exact mapped bytes 7E 16: jle 0x58864efd
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x58864efd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [edx + 0ffch]
        ; Exact mapped bytes EB 02: jmp 0x58864eff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 47 26: mov ax, word ptr [edi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 8ch]
        ; Exact mapped bytes 66 83 C0 0A: add ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x0a
        movzx eax, ax
        push eax
        push ebx
        push ebx
        push 258h
        push 320h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 7B E2 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe2
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2A: je 0x58864f5c
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [esi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x58864f5c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 101h
        mov ecx, esi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [edi + 0a8h], esi
        ; Exact mapped bytes E8 AE DD 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xdd
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0a8h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi + 0a8h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 180h
        lea eax, [edi + 648h]
        push ebx
        push eax
        mov dword ptr [edi + 1f44h], 0ffffffffh
        ; Exact mapped bytes E8 9C 7C 11 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x7c
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 0ch
        mov eax, edi
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
