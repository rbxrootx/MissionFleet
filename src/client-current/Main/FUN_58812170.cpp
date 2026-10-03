// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 7574 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58812170 .. +0x1D96 bytes.
extern "C" __declspec(naked) void FUN_58812170_segment_00() {
    __asm {
        push -1
        push 589830e1h
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
        mov ebx, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 30h]
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        push edx
        push ebx
        push ebp
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 DE 0F 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x0f
        __asm _emit 0x0f
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
        mov dword ptr [esp + 28h], edi
        mov dword ptr [esi], 5899d6d4h
        ; Exact mapped bytes E8 5E AA 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xaa
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 1
        cmp eax, edi
        ; Exact mapped bytes 74 41: je 0x58812241
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 8fh
        ; Exact mapped bytes 7E 16: jle 0x58812228
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0E: je 0x58812228
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 23ch]
        ; Exact mapped bytes EB 02: jmp 0x5881222a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 40h]
        push edx
        lea edx, [ebx + 32h]
        push edx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 23 FA F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xfa
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58812243
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 44 24 40: mov ax, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        mov dword ptr [esi + 60h], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58812261
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EF 0C 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x0c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5881226e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 72 0C 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x0c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 60h]
        push 101h
        ; Exact mapped bytes E8 A5 0A 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x0a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 60h]
        push 96h
        ; Exact mapped bytes E8 58 0A 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x0a
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 BC A9 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xa9
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 2
        mov edi, 8
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x588122e2
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x588122cc
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588122cc
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 200h
        ; Exact mapped bytes EB 02: jmp 0x588122ce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 5ah]
        push edx
        lea edx, [ebp + 3fh]
        push edx
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 20 4E 0F 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x4e
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588122e4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 58 A9 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xa9
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 3
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x58812341
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x5881232b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5881232b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 200h
        ; Exact mapped bytes EB 02: jmp 0x5881232d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 64h]
        push ecx
        lea ecx, [ebp + 3fh]
        push ecx
        push edi
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C1 4D 0F 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x4d
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58812343
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 F9 A8 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xa8
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 4
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x588123a0
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x5881238a
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5881238a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 200h
        ; Exact mapped bytes EB 02: jmp 0x5881238c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 6eh]
        push ecx
        lea ecx, [ebp + 3fh]
        push ecx
        push edi
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 62 4D 0F 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x4d
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588123a2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes E8 9A A8 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa8
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 5
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x58812400
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 9
        ; Exact mapped bytes 7E 17: jle 0x588123ea
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588123ea
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 240h
        ; Exact mapped bytes EB 02: jmp 0x588123ec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebx + 78h]
        push ecx
        lea ecx, [ebp + 46h]
        push ecx
        push edi
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 02 4D 0F 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x4d
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58812402
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 64h]
        ; Exact mapped bytes 66 8B 54 24 40: mov dx, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        mov dword ptr [esi + 70h], eax
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58812423
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2D 0B 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x0b
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58812430
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B0 0A 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x0a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, dword ptr [esi + 68h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 8B 44 24 40: mov ax, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58812449
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 07 0B 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x0b
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58812456
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8A 0A 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x0a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, dword ptr [esi + 6ch]
        ; Exact mapped bytes 66 8B 4C 24 40: mov cx, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5881246f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E1 0A 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x0a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5881247c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 64 0A 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x0a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, dword ptr [esi + 70h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 8B 54 24 40: mov dx, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58812495
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BB 0A 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588124a2
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 3E 0A 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x0a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 64h]
        push 101h
        ; Exact mapped bytes E8 71 08 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x08
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        push 101h
        ; Exact mapped bytes E8 64 08 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        push 101h
        ; Exact mapped bytes E8 57 08 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x08
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        push 101h
        ; Exact mapped bytes E8 4A 08 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x08
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 64h]
        push 96h
        ; Exact mapped bytes E8 FD 07 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x07
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        push 96h
        ; Exact mapped bytes E8 F0 07 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x07
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        push 96h
        ; Exact mapped bytes E8 E3 07 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x07
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        push 96h
        ; Exact mapped bytes E8 D6 07 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x07
        __asm _emit 0x0f
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 3D A7 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xa7
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 6
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x58812564
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 90h
        ; Exact mapped bytes 7E 17: jle 0x5881254a
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5881254a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 240h]
        ; Exact mapped bytes EB 02: jmp 0x5881254c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 40h]
        push edx
        add ebx, 33h
        push ebx
        lea edx, [ebp + 2]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 FE F6 F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xf6
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58812566
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 D6 A6 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xa6
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 7
        mov ebx, 0ah
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x588125d0
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x588125b2
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588125b2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 280h
        ; Exact mapped bytes EB 02: jmp 0x588125b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 40h]
        mov edi, dword ptr [esp + 34h]
        push edx
        lea edx, [edi + 33h]
        push edx
        lea edx, [ebp + 2]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 62 24 F2 FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x588125d6
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 34h]
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 63 A6 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xa6
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 8
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x5881263b
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 17: jle 0x58812621
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58812621
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 200h
        ; Exact mapped bytes EB 02: jmp 0x58812623
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 82h]
        push ecx
        lea ecx, [ebp + 44h]
        push ecx
        push 7
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C7 4A 0F 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x4a
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5881263d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 FF A5 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xa5
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 9
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x5881269f
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 17: jle 0x58812685
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58812685
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 200h
        ; Exact mapped bytes EB 02: jmp 0x58812687
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [edi + 82h]
        push ecx
        lea ecx, [ebp + 12h]
        push ecx
        push 7
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 63 4A 0F 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x4a
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588126a1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes E8 9E A5 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa5
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], bl
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x58812705
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 12ch
        ; Exact mapped bytes 7E 17: jle 0x588126e8
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588126e8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 4b0h]
        ; Exact mapped bytes EB 02: jmp 0x588126ea
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 40h]
        push edx
        add edi, 82h
        push edi
        lea edx, [ebp + 46h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5D F5 F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf5
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58812707
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ebx, dword ptr [esp + 40h]
        mov dword ptr [esi + 7ch], eax
        mov eax, dword ptr [esi + 84h]
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edi, dword ptr [esi + 84h]
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58812739
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 17 08 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x08
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58812746
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9A 07 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x07
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, dword ptr [esi + 78h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5881275a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F6 07 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x07
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58812767
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 79 07 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x07
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, dword ptr [esi + 74h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5881277b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D5 07 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x07
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58812788
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 58 07 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, dword ptr [esi + 7ch]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 5F 26: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5881279c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B4 07 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x07
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588127a9
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 37 07 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x07
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        push 101h
        ; Exact mapped bytes E8 6A 05 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x05
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        push 101h
        ; Exact mapped bytes E8 5A 05 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x05
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        push 101h
        ; Exact mapped bytes E8 4A 05 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x05
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        push 101h
        ; Exact mapped bytes E8 3A 05 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x05
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        push 101h
        ; Exact mapped bytes E8 2D 05 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x05
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        push 101h
        ; Exact mapped bytes E8 20 05 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        push 96h
        ; Exact mapped bytes E8 D0 04 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        push 96h
        ; Exact mapped bytes E8 C0 04 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        push 96h
        ; Exact mapped bytes E8 B3 04 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        push 96h
        ; Exact mapped bytes E8 A6 04 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        push 96h
        ; Exact mapped bytes E8 99 04 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x04
        __asm _emit 0x0f
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 00 A4 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xa4
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov ebx, 0bh
        mov byte ptr [esp + 24h], bl
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x588128ac
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 93h
        ; Exact mapped bytes 7E 17: jle 0x5881288b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5881288b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 24ch]
        ; Exact mapped bytes EB 02: jmp 0x5881288d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 40h]
        mov edx, dword ptr [esp + 34h]
        push edi
        add edx, 8ch
        push edx
        lea edx, [ebp + 70h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B6 F3 F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf3
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x588128b2
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 40h]
        xor eax, eax
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 8A A3 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xa3
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 0ch
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x5881291a
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 92h
        ; Exact mapped bytes 7E 17: jle 0x588128fd
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588128fd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 248h]
        ; Exact mapped bytes EB 02: jmp 0x588128ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 34h]
        push edi
        add edx, 9dh
        push edx
        lea edx, [ebp + 70h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 48 F3 F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf3
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5881291c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 88h]
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes E8 E9 03 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        push 101h
        ; Exact mapped bytes E8 D9 03 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x03
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        lea eax, [ebp - 2]
        push 96h
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes E8 80 03 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        push 96h
        ; Exact mapped bytes E8 70 03 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x0f
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 D7 A2 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa2
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 0dh
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x588129ca
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 1a4h
        ; Exact mapped bytes 7E 17: jle 0x588129b0
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588129b0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 690h]
        ; Exact mapped bytes EB 02: jmp 0x588129b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 34h]
        push edi
        add edx, 3dh
        push edx
        lea edx, [ebp + 2]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 98 F2 F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf2
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588129cc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes E8 70 A2 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xa2
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 0eh
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x58812a2d
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x58812a13
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58812a13
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x58812a15
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 34h]
        push edi
        add ecx, 3dh
        push ecx
        lea ecx, [ebp + 2]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 05 20 F2 FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58812a2f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 90h]
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes E8 D6 02 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 101h
        ; Exact mapped bytes E8 C6 02 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        mov edx, 0fffbh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 90h]
        push 96h
        ; Exact mapped bytes E8 67 02 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 96h
        ; Exact mapped bytes E8 57 02 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 BB A1 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xa1
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 0fh
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x58812ae3
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 11: jle 0x58812ac3
        __asm _emit 0x7e
        __asm _emit 0x11
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 08: je 0x58812ac3
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x58812ac5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov ebx, dword ptr [esp + 34h]
        lea edx, [ebx + 61h]
        push edx
        lea edx, [ebp + 0a6h]
        push edx
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 21 46 0F 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 06: jmp 0x58812ae9
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 34h]
        xor edi, edi
        ; Exact mapped bytes 66 8B 44 24 40: mov ax, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        mov dword ptr [esi + 0a4h], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58812b0a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 46 04 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58812b17
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C9 03 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x03
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        push 101h
        ; Exact mapped bytes E8 F9 01 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        push 96h
        ; Exact mapped bytes E8 A9 01 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x0f
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 10 A1 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xa1
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 10h
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x58812b91
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 50h
        ; Exact mapped bytes 7E 17: jle 0x58812b74
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58812b74
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 140h]
        ; Exact mapped bytes EB 02: jmp 0x58812b76
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 40h]
        push edi
        lea edx, [ebx + 78h]
        push edx
        lea edx, [ebp + 0b1h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D1 F0 F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf0
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x58812b97
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 40h]
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E8 72 01 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        push 96h
        ; Exact mapped bytes E8 22 01 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x0f
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 89 A0 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xa0
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 11h
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x58812c11
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 52h
        ; Exact mapped bytes 7E 17: jle 0x58812bfb
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58812bfb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 148h]
        ; Exact mapped bytes EB 02: jmp 0x58812bfd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebx + 1eh]
        push edx
        lea edx, [ebp + 1eh]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 51 F0 F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf0
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58812c13
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E8 F6 00 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push 96h
        ; Exact mapped bytes E8 A6 00 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 0D A0 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 12h
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x58812c8a
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 14: jle 0x58812c74
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x58812c74
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 190h]
        sub ecx, -80h
        ; Exact mapped bytes EB 02: jmp 0x58812c76
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebx + 1eh]
        push edx
        lea edx, [ebp + 1eh]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A8 1D F2 FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x1d
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58812c8c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0ach], eax
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0ach]
        push 101h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes E8 70 00 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        push 96h
        ; Exact mapped bytes E8 20 00 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        push 54h
        mov byte ptr [esi + 0b4h], 0
        ; Exact mapped bytes E8 80 9F 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9f
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 13h
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x58812d1d
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 5ch
        ; Exact mapped bytes 7E 17: jle 0x58812d04
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58812d04
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes EB 02: jmp 0x58812d06
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebx + 39h]
        push edx
        lea edx, [ebp + 0bdh]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 45 EF F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xef
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58812d1f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0b8h], eax
        ; Exact mapped bytes E8 EA FF 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 96h
        ; Exact mapped bytes E8 9A FF 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0x0e
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 01 9F 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x9f
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 14h
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x58812d9c
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 5ah
        ; Exact mapped bytes 7E 17: jle 0x58812d83
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58812d83
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 168h]
        ; Exact mapped bytes EB 02: jmp 0x58812d85
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebx + 3bh]
        push edx
        lea edx, [ebp + 0cbh]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C6 EE F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xee
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58812d9e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0bch], eax
        ; Exact mapped bytes E8 6B FF 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 96h
        ; Exact mapped bytes E8 1B FF 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0x0e
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 82 9E 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x9e
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 15h
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x58812e1b
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 5eh
        ; Exact mapped bytes 7E 17: jle 0x58812e02
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58812e02
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 178h]
        ; Exact mapped bytes EB 02: jmp 0x58812e04
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebx + 56h]
        push edx
        add ebp, 0dfh
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 47 EE F1 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xee
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58812e1d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 0c0h], eax
        ; Exact mapped bytes E8 EC FE 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 96h
        ; Exact mapped bytes E8 9C FE 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0x0e
        __asm _emit 0x00
        add ebx, 50h
        mov dword ptr [esp + 3ch], ebx
        lea edi, [esi + 0cch]
        mov dword ptr [esp + 38h], 2
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 E7 9D 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x9d
        __asm _emit 0x16
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 2ch], ebp
        mov byte ptr [esp + 24h], 16h
        test ebp, ebp
        ; Exact mapped bytes 74 7D: je 0x58812ef6
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 63h
        ; Exact mapped bytes 7E 17: jle 0x58812e9e
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58812e9e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebx, dword ptr [eax + 18ch]
        ; Exact mapped bytes EB 02: jmp 0x58812ea0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esp + 40h]
        mov edx, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 30h]
        push ecx
        push 0
        push 0
        push edx
        add eax, 0e3h
        push eax
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 E0 02 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp], 5898c55ch
        mov dword ptr [ebp + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x58812ef8
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebx + 10h]
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebx + 14h]
        lea eax, [ebx + 18h]
        mov dword ptr [ebp + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x58812ef8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 101h
        mov ecx, ebp
        mov byte ptr [esp + 28h], 0
        mov dword ptr [edi - 8], ebp
        ; Exact mapped bytes E8 14 FE 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi - 8]
        push 96h
        ; Exact mapped bytes E8 C7 FD 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfd
        __asm _emit 0x0e
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 2B 9D 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x9d
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 17h
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x58812f7a
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 17: jle 0x58812f59
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58812f59
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 200h
        ; Exact mapped bytes EB 02: jmp 0x58812f5b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 3ch]
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 0e9h
        push edx
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8A 41 0F 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x41
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ebx, eax
        ; Exact mapped bytes EB 02: jmp 0x58812f7c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        ; Exact mapped bytes 66 8B 44 24 40: mov ax, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        mov dword ptr [edi], ebx
        mov ecx, dword ptr [ebx + 40h]
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes 66 89 43 26: mov word ptr [ebx + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58812f99
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 B7 FF 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58812fa6
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 3A FF 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 101h
        ; Exact mapped bytes E8 6E FD 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xfd
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 96h
        ; Exact mapped bytes E8 22 FD 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xfd
        __asm _emit 0x0e
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 89 9C 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x16
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 2ch], ebp
        mov byte ptr [esp + 24h], 18h
        test ebp, ebp
        ; Exact mapped bytes 74 7F: je 0x58813056
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 61h
        ; Exact mapped bytes 7E 17: jle 0x58812ffc
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58812ffc
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ebx, dword ptr [ecx + 184h]
        ; Exact mapped bytes EB 02: jmp 0x58812ffe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 30h]
        push edx
        push 0
        push 0
        push eax
        add ecx, 0feh
        push ecx
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 81 01 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp], 5898c55ch
        mov dword ptr [ebp + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2B: je 0x58813058
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebx + 10h]
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebx + 14h]
        mov dword ptr [ebp + 10h], eax
        mov ecx, dword ptr [ebx + 18h]
        lea eax, [ebx + 18h]
        mov dword ptr [ebp + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x58813058
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 101h
        mov ecx, ebp
        mov byte ptr [esp + 28h], 0
        mov dword ptr [edi + 8], ebp
        ; Exact mapped bytes E8 B4 FC 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 8]
        push 96h
        ; Exact mapped bytes E8 67 FC 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 CE 9B 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x9b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 2ch], ebp
        mov byte ptr [esp + 24h], 19h
        test ebp, ebp
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x5881311b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0ch
        ; Exact mapped bytes 7E 17: jle 0x588130bb
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588130bb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebx, dword ptr [eax + 190h]
        add ebx, 300h
        ; Exact mapped bytes EB 02: jmp 0x588130bd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 40h]
        mov ecx, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 30h]
        push eax
        push 0
        push 0
        push ecx
        add edx, 0feh
        push edx
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 C2 00 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp], 5898ca74h
        mov dword ptr [ebp + 50h], 0
        mov dword ptr [ebp + 54h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x5881311d
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebx + 18h]
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebx + 1ch]
        lea eax, [ebx + 20h]
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [ebp + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ebp + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ebp + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x5881311d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov dword ptr [edi + 30h], ebp
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 4D 24: and word ptr [ebp + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4d
        __asm _emit 0x24
        mov ecx, dword ptr [edi + 30h]
        push 96h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes E8 A5 FB 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfb
        __asm _emit 0x0e
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 0C 9B 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 2ch], ebp
        mov byte ptr [esp + 24h], 1ah
        test ebp, ebp
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x588131d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 5fh
        ; Exact mapped bytes 7E 17: jle 0x5881317d
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5881317d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov ebx, dword ptr [edx + 17ch]
        ; Exact mapped bytes EB 02: jmp 0x5881317f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 40h]
        mov ecx, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 30h]
        push eax
        push 0
        push 0
        add ecx, 6
        push ecx
        add edx, 0fch
        push edx
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 FD FF 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp], 5898c55ch
        mov dword ptr [ebp + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x588131db
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebx + 10h]
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebx + 14h]
        lea eax, [ebx + 18h]
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [ebp + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ebp + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ebp + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x588131db
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 101h
        mov ecx, ebp
        mov byte ptr [esp + 28h], 0
        mov dword ptr [edi + 10h], ebp
        ; Exact mapped bytes E8 31 FB 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfb
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 10h]
        push 96h
        ; Exact mapped bytes E8 E4 FA 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfa
        __asm _emit 0x0e
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 48 9A 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x9a
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 24h], 1bh
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x58813260
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 9
        ; Exact mapped bytes 7E 17: jle 0x5881323c
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5881323c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 240h
        ; Exact mapped bytes EB 02: jmp 0x5881323e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 3ch]
        add edx, 5
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 100h
        push edx
        push 4
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A4 3E 0F 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x3e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ebx, eax
        ; Exact mapped bytes EB 02: jmp 0x58813262
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        ; Exact mapped bytes 66 8B 44 24 40: mov ax, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        mov dword ptr [edi + 18h], ebx
        mov ecx, dword ptr [ebx + 40h]
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes 66 89 43 26: mov word ptr [ebx + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58813280
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 D0 FC 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5881328d
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 53 FC 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 18h]
        push 101h
        ; Exact mapped bytes E8 86 FA 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfa
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 18h]
        push 96h
        ; Exact mapped bytes E8 39 FA 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xfa
        __asm _emit 0x0e
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 A0 99 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x99
        __asm _emit 0x16
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 2ch], ebp
        mov byte ptr [esp + 24h], 1ch
        test ebp, ebp
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x58813346
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 64h
        ; Exact mapped bytes 7E 17: jle 0x588132e9
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588132e9
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ebx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x588132eb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 30h]
        push edx
        push 0
        push 0
        add eax, -2
        push eax
        add ecx, 0e8h
        push ecx
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 91 FE 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp], 5898c55ch
        mov dword ptr [ebp + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2B: je 0x58813348
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebx + 10h]
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebx + 14h]
        mov dword ptr [ebp + 10h], eax
        mov ecx, dword ptr [ebx + 18h]
        lea eax, [ebx + 18h]
        mov dword ptr [ebp + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x58813348
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov dword ptr [edi + 20h], ebp
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 45 24: and word ptr [ebp + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x45
        __asm _emit 0x24
        mov ecx, dword ptr [edi + 20h]
        push 101h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes E8 BA F9 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 20h]
        push 96h
        ; Exact mapped bytes E8 6D F9 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf9
        __asm _emit 0x0e
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 D4 98 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x98
        __asm _emit 0x16
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 2ch], ebp
        mov byte ptr [esp + 24h], 1dh
        test ebp, ebp
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x58813412
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 66h
        ; Exact mapped bytes 7E 17: jle 0x588133b5
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588133b5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ebx, dword ptr [ecx + 198h]
        ; Exact mapped bytes EB 02: jmp 0x588133b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 30h]
        push edx
        push 0
        push 0
        add eax, 0bh
        push eax
        add ecx, 0e8h
        push ecx
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 C5 FD 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp], 5898c55ch
        mov dword ptr [ebp + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2B: je 0x58813414
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebx + 10h]
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebx + 14h]
        mov dword ptr [ebp + 10h], eax
        mov ecx, dword ptr [ebx + 18h]
        lea eax, [ebx + 18h]
        mov dword ptr [ebp + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x58813414
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov dword ptr [edi + 28h], ebp
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 45 24: and word ptr [ebp + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x45
        __asm _emit 0x24
        mov ecx, dword ptr [edi + 28h]
        push 101h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes E8 EE F8 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf8
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 28h]
        push 96h
        ; Exact mapped bytes E8 A1 F8 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x0e
        __asm _emit 0x00
        add dword ptr [esp + 3ch], 18h
        add edi, 4
        sub dword ptr [esp + 38h], 1
        ; Exact mapped bytes 0F 85 0E FA FF FF: jne 0x58812e60
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 F5 97 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x97
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 24h], 1eh
        test edi, edi
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x588134f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 3
        ; Exact mapped bytes 7E 17: jle 0x58813494
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58813494
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebx, dword ptr [eax + 190h]
        add ebx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x58813496
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esp + 40h]
        mov ebp, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 30h]
        push ecx
        push 0
        push 0
        lea edx, [ebp + 1dh]
        push edx
        add eax, 1ah
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E9 FC 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2E: je 0x588134f9
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebx + 18h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebx + 1ch]
        lea eax, [ebx + 20h]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 06: jmp 0x588134f9
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 34h]
        xor edi, edi
        mov ebx, dword ptr [esp + 30h]
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 104h], edi
        ; Exact mapped bytes E8 3F 97 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x97
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 24h], 1fh
        test edi, edi
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x588135a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 8ah
        ; Exact mapped bytes 7E 17: jle 0x5881354d
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5881354d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebx, dword ptr [eax + 228h]
        ; Exact mapped bytes EB 02: jmp 0x5881354f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 30h]
        push ecx
        push 0
        push 0
        lea edx, [ebp + 1dh]
        push edx
        add eax, 1ah
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 34 FC 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 26: je 0x5881359f
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebx + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebx + 14h]
        lea eax, [ebx + 18h]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        mov ebx, dword ptr [esp + 30h]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x588135a9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 108h], ecx
        ; Exact mapped bytes E8 62 F7 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf7
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 104h]
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 104h]
        push 101h
        ; Exact mapped bytes E8 43 F7 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf7
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 104h]
        push 96h
        ; Exact mapped bytes E8 F3 F6 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf6
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 108h]
        push 96h
        ; Exact mapped bytes E8 E3 F6 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf6
        __asm _emit 0x0e
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 4A 96 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x96
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 24h], 20h
        test edi, edi
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x5881369c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 8bh
        ; Exact mapped bytes 7E 17: jle 0x58813642
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58813642
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov ebx, dword ptr [edx + 22ch]
        ; Exact mapped bytes EB 02: jmp 0x58813644
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 40h]
        mov edx, dword ptr [esp + 30h]
        push eax
        push 0
        push 0
        lea ecx, [ebp + 32h]
        push ecx
        add edx, 76h
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 3F FB 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfb
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 26: je 0x58813694
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebx + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx + 14h]
        lea eax, [ebx + 18h]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        mov ebx, dword ptr [esp + 30h]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x5881369e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 10ch], ecx
        ; Exact mapped bytes E8 6D F6 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf6
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10ch]
        push 96h
        ; Exact mapped bytes E8 1D F6 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xf6
        __asm _emit 0x0e
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 84 95 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 24h], 21h
        test edi, edi
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x58813763
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 8ch
        ; Exact mapped bytes 7E 17: jle 0x58813708
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58813708
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ebx, dword ptr [ecx + 230h]
        ; Exact mapped bytes EB 02: jmp 0x5881370a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 40h]
        mov ecx, dword ptr [esp + 30h]
        push edx
        push 0
        push 0
        lea eax, [ebp + 32h]
        push eax
        add ecx, 70h
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 79 FA 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfa
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 27: je 0x5881375b
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebx + 10h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebx + 14h]
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebx + 18h]
        lea eax, [ebx + 18h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        mov ebx, dword ptr [esp + 30h]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x58813765
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 110h], ecx
        ; Exact mapped bytes E8 A6 F5 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 110h]
        push 96h
        ; Exact mapped bytes E8 56 F5 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf5
        __asm _emit 0x0e
        __asm _emit 0x00
        push 54h
        mov byte ptr [esi + 114h], 0
        ; Exact mapped bytes E8 B6 94 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x94
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 24h], 22h
        test edi, edi
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x5881382e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 96h
        ; Exact mapped bytes 7E 17: jle 0x588137d6
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588137d6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebx, dword ptr [eax + 258h]
        ; Exact mapped bytes EB 02: jmp 0x588137d8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 30h]
        push ecx
        push 0
        push 0
        lea edx, [ebp + 23h]
        push edx
        add eax, 20h
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 AB F9 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 26: je 0x58813828
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebx + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebx + 14h]
        lea eax, [ebx + 18h]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        mov ebx, dword ptr [esp + 30h]
        ; Exact mapped bytes EB 02: jmp 0x58813830
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 120h], edi
        ; Exact mapped bytes E8 0C 94 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x94
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov byte ptr [esp + 24h], 23h
        test edi, edi
        ; Exact mapped bytes 74 2E: je 0x58813882
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [esp + 40h]
        push eax
        push 0
        push 0
        lea ecx, [ebp + 97h]
        push ecx
        lea edx, [ebx + 0ffh]
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 2D F9 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xf9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x58813884
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 120h]
        push 101h
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 124h], edi
        ; Exact mapped bytes E8 81 F4 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 124h]
        push 101h
        ; Exact mapped bytes E8 71 F4 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 120h]
        push 96h
        ; Exact mapped bytes E8 21 F4 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 124h]
        push 96h
        ; Exact mapped bytes E8 11 F4 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        lea eax, [ebx + 20h]
        lea ecx, [ebp + 23h]
        push 0fch
        mov dword ptr [esi + 118h], eax
        mov dword ptr [esi + 11ch], ecx
        ; Exact mapped bytes E8 63 93 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x93
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 24h], 24h
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x5881393e
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 9
        ; Exact mapped bytes 7E 17: jle 0x58813921
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58813921
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 240h
        ; Exact mapped bytes EB 02: jmp 0x58813923
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 95h]
        push edx
        lea edx, [ebx + 163h]
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C4 37 0F 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x37
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58813940
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 128h], eax
        ; Exact mapped bytes E8 F9 92 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x92
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 24h], 25h
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x588139a8
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 9
        ; Exact mapped bytes 7E 17: jle 0x5881398b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5881398b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 240h
        ; Exact mapped bytes EB 02: jmp 0x5881398d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 95h]
        push ecx
        lea ecx, [ebx + 18ah]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5A 37 0F 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x37
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588139aa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 128h]
        ; Exact mapped bytes 66 8B 54 24 40: mov dx, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        mov dword ptr [esi + 12ch], eax
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588139d1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7F F5 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588139de
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 02 F5 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 12ch]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 8B 44 24 40: mov ax, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588139fa
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 56 F5 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58813a07
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D9 F4 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 128h]
        push 96h
        ; Exact mapped bytes E8 C9 F2 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 12ch]
        push 96h
        ; Exact mapped bytes E8 B9 F2 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 128h]
        push 101h
        ; Exact mapped bytes E8 E9 F2 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 12ch]
        push 101h
        ; Exact mapped bytes E8 D9 F2 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf2
        __asm _emit 0x0e
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 FD 91 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x91
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 24h], 26h
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x58813aa4
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 9
        ; Exact mapped bytes 7E 17: jle 0x58813a87
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58813a87
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 240h
        ; Exact mapped bytes EB 02: jmp 0x58813a89
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 0a9h]
        push ecx
        lea ecx, [ebx + 106h]
        push ecx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5E 36 0F 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x36
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58813aa6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 130h], eax
        ; Exact mapped bytes E8 93 91 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x91
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 24h], 27h
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x58813b0e
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 9
        ; Exact mapped bytes 7E 17: jle 0x58813af1
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58813af1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 240h
        ; Exact mapped bytes EB 02: jmp 0x58813af3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 0a9h]
        push ecx
        lea ecx, [ebx + 139h]
        push ecx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F4 35 0F 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x35
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58813b10
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 134h], eax
        ; Exact mapped bytes E8 29 91 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x91
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 24h], 28h
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x58813b78
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 17: jle 0x58813b5b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58813b5b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 200h
        ; Exact mapped bytes EB 02: jmp 0x58813b5d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        add ebp, 0a9h
        push ebp
        lea ecx, [ebx + 15ah]
        push ecx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8A 35 0F 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x35
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58813b7a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 130h]
        mov ebp, dword ptr [esp + 40h]
        mov dword ptr [esi + 138h], eax
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58813ba0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B0 F3 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58813bad
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 33 F3 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 134h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58813bc4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8C F3 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58813bd1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0F F3 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esi + 138h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58813be8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 68 F3 0E 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58813bf5
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EB F2 0E 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 130h]
        push 96h
        ; Exact mapped bytes E8 DB F0 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 134h]
        push 96h
        ; Exact mapped bytes E8 CB F0 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 138h]
        push 96h
        ; Exact mapped bytes E8 BB F0 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 130h]
        push 101h
        ; Exact mapped bytes E8 EB F0 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 134h]
        push 101h
        ; Exact mapped bytes E8 DB F0 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 138h]
        push 101h
        ; Exact mapped bytes E8 CB F0 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf0
        __asm _emit 0x0e
        __asm _emit 0x00
        add ebx, 0dah
        mov eax, 2e0h
        sub eax, esi
        mov dword ptr [esp + 3ch], 10fh
        mov dword ptr [esp + 30h], ebx
        lea ebp, [esi + 15ch]
        mov dword ptr [esp + 2ch], eax
        mov dword ptr [esp + 38h], 8
        push 54h
        ; Exact mapped bytes E8 C7 8F 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x8f
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 18h], edi
        mov byte ptr [esp + 24h], 29h
        test edi, edi
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x58813d1d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 117h
        ; Exact mapped bytes 7E 17: jle 0x58813cc5
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58813cc5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov ebx, dword ptr [edx + 45ch]
        ; Exact mapped bytes EB 02: jmp 0x58813cc7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 40h]
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 30h]
        push eax
        push 0
        push 0
        add ecx, 81h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B8 F4 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x58813d1f
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebx + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx + 14h]
        lea eax, [ebx + 18h]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x58813d1f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 28h], 0
        mov dword ptr [ebp - 20h], edi
        ; Exact mapped bytes E8 ED EF 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xef
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        push 96h
        ; Exact mapped bytes E8 A0 EF 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xef
        __asm _emit 0x0e
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 07 8F 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x8f
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 18h], edi
        mov byte ptr [esp + 24h], 2ah
        test edi, edi
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x58813de1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 4
        ; Exact mapped bytes 7E 17: jle 0x58813d82
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58813d82
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebx, dword ptr [eax + 190h]
        add ebx, 100h
        ; Exact mapped bytes EB 02: jmp 0x58813d84
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esp + 40h]
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 30h]
        push ecx
        push 0
        push 0
        add edx, 81h
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 FB F3 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x58813de3
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebx + 18h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebx + 1ch]
        lea eax, [ebx + 20h]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x58813de3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp], edi
        mov eax, 0fffbh
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov ecx, dword ptr [ebp]
        push 101h
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes E8 1F EF 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xef
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push 96h
        ; Exact mapped bytes E8 D2 EE 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xee
        __asm _emit 0x0e
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 39 8E 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x8e
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 18h], edi
        mov byte ptr [esp + 24h], 2bh
        test edi, edi
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x58813eb0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 3ch]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 1C: jle 0x58813e58
        __asm _emit 0x7e
        __asm _emit 0x1c
        test ecx, ecx
        ; Exact mapped bytes 7C 18: jl 0x58813e58
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0F: je 0x58813e58
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [eax + 18ch]
        add ecx, dword ptr [esp + 2ch]
        mov ebx, dword ptr [ecx + ebp]
        ; Exact mapped bytes EB 02: jmp 0x58813e5a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 30h]
        push edx
        push 0
        push 0
        add eax, 83h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 26 F3 0E 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2B: je 0x58813eb2
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebx + 10h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebx + 14h]
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebx + 18h]
        lea eax, [ebx + 18h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x58813eb2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 28h], 0
        mov dword ptr [ebp + 20h], edi
        ; Exact mapped bytes E8 5A EE 0E 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xee
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 20h]
        push 96h
        ; Exact mapped bytes E8 0D EE 0E 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xee
        __asm _emit 0x0e
        __asm _emit 0x00
        add dword ptr [esp + 30h], 16h
        mov eax, 1
        add dword ptr [esp + 3ch], eax
        add ebp, 4
        sub dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 85 92 FD FF FF: jne 0x58813c80
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
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
