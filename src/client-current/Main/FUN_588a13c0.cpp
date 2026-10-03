// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 7395 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588A13C0 .. +0x1CE3 bytes.
extern "C" __declspec(naked) void FUN_588a13c0_segment_00() {
    __asm {
        push -1
        push 5898798ch
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
        mov ebx, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 34h]
        mov edi, dword ptr [esp + 30h]
        mov ebp, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push ebx
        push eax
        push ecx
        push edi
        push ebp
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 90 1D 06 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x1d
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        xor eax, eax
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], eax
        push 198h
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esi], 589a0200h
        ; Exact mapped bytes E8 0D B8 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 1
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x588a1463
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        push 0
        push 589a0634h
        mov ecx, eax
        ; Exact mapped bytes E8 0F 29 05 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588a1465
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 DA B7 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 2
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x588a14bb
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 15h
        ; Exact mapped bytes 7E 1B: jle 0x588a14ab
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x588a14ab
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 54h]
        push ebx
        push edi
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B7 07 E9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x07
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x588a14bd
        __asm _emit 0xeb
        __asm _emit 0x12
        push ebx
        push edi
        xor ecx, ecx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A7 07 E9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x07
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a14bd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 4F 18 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 76 B7 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 3
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x588a151f
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 16h
        ; Exact mapped bytes 7E 1B: jle 0x588a150f
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x588a150f
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 58h]
        push ebx
        push edi
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 53 07 E9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x07
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x588a1521
        __asm _emit 0xeb
        __asm _emit 0x12
        push ebx
        push edi
        xor ecx, ecx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 43 07 E9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x07
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a1521
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 68h], eax
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 68h]
        push 0f0h
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 A1 17 06 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 08 B7 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 4
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x588a158d
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 17h
        ; Exact mapped bytes 7E 1B: jle 0x588a157d
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x588a157d
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 5ch]
        push ebx
        push edi
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E5 06 E9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x06
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x588a158f
        __asm _emit 0xeb
        __asm _emit 0x12
        push ebx
        push edi
        xor ecx, ecx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D5 06 E9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x06
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a158f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes E8 7D 17 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 A4 B6 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov ebx, 5
        mov byte ptr [esp + 20h], bl
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x588a15fd
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 18h
        ; Exact mapped bytes 7E 1F: jle 0x588a15e9
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x588a15e9
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [esp + 3ch]
        mov ecx, dword ptr [ecx + 60h]
        push edx
        push edi
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 79 06 E9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x06
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 16: jmp 0x588a15ff
        __asm _emit 0xeb
        __asm _emit 0x16
        mov edx, dword ptr [esp + 3ch]
        push edx
        push edi
        xor ecx, ecx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 65 06 E9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x06
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a15ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes E8 0D 17 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        push 5ch
        ; Exact mapped bytes E8 34 B6 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 6
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x588a163e
        __asm _emit 0x74
        __asm _emit 0x14
        push 40h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 24 89 EB FF: call 0x58759f60
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x89
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a1640
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push esi
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 CD 88 EB FF: call 0x58759f20
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x88
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edi, dword ptr [esi + 84h]
        mov ebp, dword ptr [esp + 3ch]
        mov ecx, dword ptr [edi + 40h]
        add ebp, 0ah
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a1671
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 DF 18 06 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a167e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 62 18 06 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 C9 B5 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb5
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 7
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x588a16d2
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 19h
        ; Exact mapped bytes 7E 0F: jle 0x588a16b0
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588a16b0
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx + 64h]
        ; Exact mapped bytes EB 02: jmp 0x588a16b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 3ch]
        push ecx
        mov ecx, dword ptr [esp + 34h]
        push ecx
        mov ecx, dword ptr [esp + 34h]
        push ecx
        push edx
        mov edx, dword ptr [esi + 84h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 90 05 E9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x05
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a16d4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes E8 38 16 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x16
        __asm _emit 0x06
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 5F B5 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xb5
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 8
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x588a173c
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 1ah
        ; Exact mapped bytes 7E 0F: jle 0x588a171a
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588a171a
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 68h]
        ; Exact mapped bytes EB 02: jmp 0x588a171c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 3ch]
        push edx
        mov edx, dword ptr [esp + 34h]
        push edx
        mov edx, dword ptr [esp + 34h]
        push edx
        push ecx
        mov ecx, dword ptr [esi + 84h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 26 05 E9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a173e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 CE 15 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        push 5ch
        ; Exact mapped bytes E8 F5 B4 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xb4
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 9
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x588a177d
        __asm _emit 0x74
        __asm _emit 0x14
        push 40h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E5 87 EB FF: call 0x58759f60
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x87
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a177f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push esi
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 8E 87 EB FF: call 0x58759f20
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x87
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edi, dword ptr [esi + 88h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a17a9
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A7 17 06 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a17b6
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2A 17 06 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 91 B4 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb4
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0ah
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x588a180a
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 1bh
        ; Exact mapped bytes 7E 0F: jle 0x588a17e8
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588a17e8
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes EB 02: jmp 0x588a17ea
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, dword ptr [esp + 3ch]
        mov ebp, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 2ch]
        push edi
        push ebp
        push ecx
        push edx
        mov edx, dword ptr [esi + 88h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 58 04 E9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x588a1814
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebp, dword ptr [esp + 30h]
        mov edi, dword ptr [esp + 3ch]
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 F8 14 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 1F B4 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xb4
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0bh
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x588a1874
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 1ch
        ; Exact mapped bytes 7E 0F: jle 0x588a185a
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588a185a
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 70h]
        ; Exact mapped bytes EB 02: jmp 0x588a185c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        push edi
        push ebp
        push edx
        push ecx
        mov ecx, dword ptr [esi + 88h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 EE 03 E9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x03
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a1876
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 93 14 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 B7 B3 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb3
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0ch
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x588a18f5
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 12: jle 0x588a18c4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588a18c4
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x588a18c6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 0c8h]
        push edx
        lea edx, [ebp + 3ch]
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 1e8h
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
        ; Exact mapped bytes E8 AD C4 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xc4
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a18f7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes E8 12 14 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 39 B3 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb3
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0dh
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x588a1966
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 20h
        ; Exact mapped bytes 7E 12: jle 0x588a1943
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588a1943
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 80h]
        ; Exact mapped bytes EB 02: jmp 0x588a1945
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        add edi, 12ch
        push edi
        lea edx, [ebp + 3ch]
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 1e8h
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 FC 02 E9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a1968
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes E8 D4 B2 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb2
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0eh
        mov edi, 1fh
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x588a19d0
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], edi
        ; Exact mapped bytes 7E 0F: jle 0x588a19a9
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588a19a9
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes EB 02: jmp 0x588a19ab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 3ch]
        mov ebx, dword ptr [esp + 2ch]
        add edx, 12ch
        push edx
        lea edx, [ebp + 3ch]
        push edx
        lea edx, [ebx + 1e8h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 92 02 E9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x588a19d6
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 2ch]
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 98h], eax
        ; Exact mapped bytes E8 63 B2 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xb2
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0fh
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x588a1a4a
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 6
        ; Exact mapped bytes 7E 12: jle 0x588a1a19
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588a1a19
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 180h
        ; Exact mapped bytes EB 02: jmp 0x588a1a1b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 3ch]
        add edx, 0c8h
        push edx
        lea edx, [ebp + 3ch]
        push edx
        lea edx, [ebx + 25bh]
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
        ; Exact mapped bytes E8 58 C3 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc3
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a1a4c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes E8 BD 12 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x12
        __asm _emit 0x06
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 E4 B1 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xb1
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 10h
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x588a1abb
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 20h
        ; Exact mapped bytes 7E 12: jle 0x588a1a98
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588a1a98
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 80h]
        ; Exact mapped bytes EB 02: jmp 0x588a1a9a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 3ch]
        add edx, 12ch
        push edx
        lea edx, [ebp + 3ch]
        push edx
        lea edx, [ebx + 25bh]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A7 01 E9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a1abd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes E8 7F B1 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xb1
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 11h
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x588a1b1c
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], edi
        ; Exact mapped bytes 7E 0F: jle 0x588a1af9
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588a1af9
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes EB 02: jmp 0x588a1afb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 3ch]
        lea edx, [edi + 12ch]
        push edx
        lea edx, [ebp + 3ch]
        push edx
        lea edx, [ebx + 25bh]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 46 01 E9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x588a1b22
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 3ch]
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes E8 17 B1 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xb1
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 12h
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x588a1b9b
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 12: jle 0x588a1b65
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588a1b65
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 200h
        ; Exact mapped bytes EB 02: jmp 0x588a1b67
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 12ch]
        push edx
        lea edx, [ebp + 1d4h]
        push edx
        lea edx, [ebx + 280h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 88h]
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
        ; Exact mapped bytes E8 07 C2 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xc2
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a1b9d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 360h], eax
        ; Exact mapped bytes E8 6C 11 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x11
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 90 B0 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xb0
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 13h
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a1c14
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a1be4
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a1be6
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 0a6h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 84h]
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
        ; Exact mapped bytes E8 8E C1 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc1
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a1c16
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes E8 F3 10 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 17 B0 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xb0
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 14h
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a1c8d
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a1c5d
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a1c5f
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 0b6h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 84h]
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
        ; Exact mapped bytes E8 15 C1 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xc1
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a1c8f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E8 7A 10 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 9E AF 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 15h
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a1d06
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a1cd6
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a1cd8
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 0c6h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 84h]
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
        ; Exact mapped bytes E8 9C C0 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xc0
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a1d08
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E8 01 10 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 25 AF 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 16h
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a1d7f
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a1d4f
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a1d51
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 0d6h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 84h]
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
        ; Exact mapped bytes E8 23 C0 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xc0
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a1d81
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0b8h], eax
        ; Exact mapped bytes E8 88 0F 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 AC AE 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xae
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 17h
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a1df8
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a1dc8
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a1dca
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 0e6h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 84h]
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
        ; Exact mapped bytes E8 AA BF EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xbf
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a1dfa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0bch], eax
        ; Exact mapped bytes E8 0F 0F 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 33 AE 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xae
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 18h
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a1e71
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a1e41
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a1e43
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 0f6h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 84h]
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
        ; Exact mapped bytes E8 31 BF EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xbf
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a1e73
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 120h], eax
        ; Exact mapped bytes E8 96 0E 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x0e
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 BA AD 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xad
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 19h
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a1eea
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a1eba
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a1ebc
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 106h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 84h]
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
        ; Exact mapped bytes E8 B8 BE EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xbe
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a1eec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 124h], eax
        ; Exact mapped bytes E8 1D 0E 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x0e
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 41 AD 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xad
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 1ah
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a1f63
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a1f33
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a1f35
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 116h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 84h]
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
        ; Exact mapped bytes E8 3F BE EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xbe
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a1f65
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0c8h], eax
        ; Exact mapped bytes E8 A4 0D 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 C8 AC 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xac
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 1bh
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a1fdc
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a1fac
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a1fae
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 126h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 84h]
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
        ; Exact mapped bytes E8 C6 BD EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xbd
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a1fde
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 364h], eax
        ; Exact mapped bytes E8 2B 0D 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 4F AC 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xac
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 1ch
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a2055
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a2025
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a2027
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 147h]
        push edx
        lea edx, [ebx + 236h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 84h]
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
        ; Exact mapped bytes E8 4D BD EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xbd
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a2057
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 110h], eax
        ; Exact mapped bytes E8 B2 0C 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 D6 AB 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xab
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 1dh
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a20ce
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a209e
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a20a0
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 147h]
        push edx
        lea edx, [ebx + 26fh]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 84h]
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
        ; Exact mapped bytes E8 D4 BC EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xbc
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a20d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 114h], eax
        ; Exact mapped bytes E8 39 0C 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 60 AB 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xab
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 1eh
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x588a213e
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 29h
        ; Exact mapped bytes 7E 12: jle 0x588a211c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588a211c
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 0a4h]
        ; Exact mapped bytes EB 02: jmp 0x588a211e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 16bh]
        push edx
        lea edx, [ebx + 24bh]
        push edx
        push ecx
        mov ecx, dword ptr [esi + 84h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 24 FB E8 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a2140
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes E8 FC AA 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xaa
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 1fh
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x588a21a5
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 27h
        ; Exact mapped bytes 7E 12: jle 0x588a2180
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588a2180
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes EB 02: jmp 0x588a2182
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 14h]
        push edx
        lea edx, [ebp + 168h]
        push edx
        lea edx, [ebx + 24bh]
        push edx
        push ecx
        mov ecx, dword ptr [esi + 84h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 BD FA E8 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xfa
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a21a7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0e0h], eax
        ; Exact mapped bytes E8 95 AA 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xaa
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 20h
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x588a220c
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 28h
        ; Exact mapped bytes 7E 12: jle 0x588a21e7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588a21e7
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 0a0h]
        ; Exact mapped bytes EB 02: jmp 0x588a21e9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 14h]
        push edx
        lea edx, [ebp + 168h]
        push edx
        lea edx, [ebx + 24bh]
        push edx
        push ecx
        mov ecx, dword ptr [esi + 84h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 56 FA E8 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xfa
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a220e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0e0h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0e4h], eax
        ; Exact mapped bytes E8 F7 0A 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x0a
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        push 101h
        ; Exact mapped bytes E8 E7 0A 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x0a
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 0B AA 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xaa
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 21h
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a2299
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a2269
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a226b
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 157h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 84h]
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
        ; Exact mapped bytes E8 09 BB EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xbb
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a229b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes E8 6E 0A 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0x06
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 95 A9 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xa9
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 22h
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x588a2309
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 29h
        ; Exact mapped bytes 7E 12: jle 0x588a22e7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588a22e7
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 0a4h]
        ; Exact mapped bytes EB 02: jmp 0x588a22e9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 18bh]
        push edx
        lea edx, [ebx + 24bh]
        push edx
        push ecx
        mov ecx, dword ptr [esi + 84h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 59 F9 E8 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf9
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a230b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0d8h], eax
        ; Exact mapped bytes E8 31 A9 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xa9
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 23h
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x588a2370
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 27h
        ; Exact mapped bytes 7E 12: jle 0x588a234b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588a234b
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes EB 02: jmp 0x588a234d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 14h]
        push edx
        lea edx, [ebp + 188h]
        push edx
        lea edx, [ebx + 24bh]
        push edx
        push ecx
        mov ecx, dword ptr [esi + 84h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 F2 F8 E8 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf8
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a2372
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0e8h], eax
        ; Exact mapped bytes E8 CA A8 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xa8
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 24h
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x588a23d7
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 28h
        ; Exact mapped bytes 7E 12: jle 0x588a23b2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588a23b2
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 0a0h]
        ; Exact mapped bytes EB 02: jmp 0x588a23b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 14h]
        push edx
        lea edx, [ebp + 188h]
        push edx
        lea edx, [ebx + 24bh]
        push edx
        push ecx
        mov ecx, dword ptr [esi + 84h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 8B F8 E8 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf8
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a23d9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0e8h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0ech], eax
        ; Exact mapped bytes E8 2C 09 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ech]
        push 101h
        ; Exact mapped bytes E8 1C 09 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 40 A8 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xa8
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 25h
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a2464
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a2434
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a2436
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 177h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 84h]
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
        ; Exact mapped bytes E8 3E B9 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xb9
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a2466
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0cch], eax
        ; Exact mapped bytes E8 A3 08 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 CA A7 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xa7
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 26h
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x588a24d4
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 29h
        ; Exact mapped bytes 7E 12: jle 0x588a24b2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588a24b2
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 0a4h]
        ; Exact mapped bytes EB 02: jmp 0x588a24b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 1abh]
        push edx
        lea edx, [ebx + 24bh]
        push edx
        push ecx
        mov ecx, dword ptr [esi + 84h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 8E F7 E8 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xf7
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a24d6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0dch], eax
        ; Exact mapped bytes E8 66 A7 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xa7
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 27h
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x588a253b
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 27h
        ; Exact mapped bytes 7E 12: jle 0x588a2516
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588a2516
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes EB 02: jmp 0x588a2518
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 14h]
        push edx
        lea edx, [ebp + 1a8h]
        push edx
        lea edx, [ebx + 24bh]
        push edx
        push ecx
        mov ecx, dword ptr [esi + 84h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 27 F7 E8 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf7
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a253d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0f0h], eax
        ; Exact mapped bytes E8 FF A6 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xa6
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 28h
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x588a25a2
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 164h], 28h
        ; Exact mapped bytes 7E 12: jle 0x588a257d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588a257d
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 0a0h]
        ; Exact mapped bytes EB 02: jmp 0x588a257f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi + 14h]
        push edx
        lea edx, [ebp + 1a8h]
        push edx
        lea edx, [ebx + 24bh]
        push edx
        push ecx
        mov ecx, dword ptr [esi + 84h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 C0 F6 E8 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xf6
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a25a4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0f0h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0f4h], eax
        ; Exact mapped bytes E8 61 07 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x07
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f4h]
        push 101h
        ; Exact mapped bytes E8 51 07 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x07
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 75 A6 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xa6
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 29h
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a262f
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a25ff
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a2601
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 197h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 84h]
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
        ; Exact mapped bytes E8 73 B7 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xb7
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a2631
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0d0h], eax
        ; Exact mapped bytes E8 D8 06 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 FC A5 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xa5
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 2ah
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a26a8
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a2678
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a267a
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 1b7h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 84h]
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
        ; Exact mapped bytes E8 FA B6 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xb6
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a26aa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0b4h], eax
        ; Exact mapped bytes E8 5F 06 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 83 A5 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa5
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 2bh
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a2721
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a26f1
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a26f3
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 1c7h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 84h]
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
        ; Exact mapped bytes E8 81 B6 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xb6
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a2723
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0c0h], eax
        ; Exact mapped bytes E8 E6 05 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x05
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 0A A5 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xa5
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 2ch
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a279a
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a276a
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a276c
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 1d7h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 84h]
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
        ; Exact mapped bytes E8 08 B6 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xb6
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a279c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0c4h], eax
        ; Exact mapped bytes E8 6D 05 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x05
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 91 A4 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xa4
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 2dh
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a2813
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a27e3
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a27e5
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 0b6h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 88h]
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
        ; Exact mapped bytes E8 8F B5 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xb5
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a2815
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 128h], eax
        ; Exact mapped bytes E8 F4 04 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 18 A4 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xa4
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 2eh
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a288c
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a285c
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a285e
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 0c6h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 88h]
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
        ; Exact mapped bytes E8 16 B5 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xb5
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a288e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 130h], eax
        ; Exact mapped bytes E8 7B 04 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 9F A3 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa3
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 2fh
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a2905
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a28d5
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a28d7
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 106h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 88h]
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
        ; Exact mapped bytes E8 9D B4 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xb4
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a2907
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 12ch], eax
        ; Exact mapped bytes E8 02 04 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 26 A3 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xa3
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 30h
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a297e
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a294e
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a2950
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 116h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 88h]
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
        ; Exact mapped bytes E8 24 B4 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xb4
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a2980
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 138h], eax
        ; Exact mapped bytes E8 89 03 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 AD A2 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa2
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 31h
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a29f7
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a29c7
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a29c9
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 126h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 88h]
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
        ; Exact mapped bytes E8 AB B3 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xb3
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a29f9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 14ch], eax
        ; Exact mapped bytes E8 10 03 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 14ch]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 25 A2 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa2
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 32h
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a2a7f
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a2a4f
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a2a51
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 136h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 88h]
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
        ; Exact mapped bytes E8 23 B3 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xb3
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a2a81
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 134h], eax
        ; Exact mapped bytes E8 88 02 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 134h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 9D A1 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xa1
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 33h
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a2b07
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a2ad7
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a2ad9
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 152h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 88h]
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
        ; Exact mapped bytes E8 9B B2 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xb2
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a2b09
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 13ch], eax
        ; Exact mapped bytes E8 00 02 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 24 A1 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xa1
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 34h
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a2b80
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a2b50
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a2b52
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 163h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 88h]
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
        ; Exact mapped bytes E8 22 B2 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xb2
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a2b82
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 140h], eax
        ; Exact mapped bytes E8 87 01 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 AB A0 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xa0
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 35h
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a2bf9
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a2bc9
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a2bcb
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 174h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 88h]
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
        ; Exact mapped bytes E8 A9 B1 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xb1
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a2bfb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 144h], eax
        ; Exact mapped bytes E8 0E 01 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x06
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 32 A0 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa0
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 36h
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a2c72
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 0A: jle 0x588a2c42
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x588a2c44
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebp + 185h]
        push edx
        lea edx, [ebx + 2a7h]
        push edx
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 88h]
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
        ; Exact mapped bytes E8 30 B1 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb1
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a2c74
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 148h], eax
        ; Exact mapped bytes E8 95 00 06 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 BC 9F 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x9f
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 37h
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x588a2cd9
        __asm _emit 0x74
        __asm _emit 0x37
        push 0
        push 0
        push 0efe5d4h
        lea edx, [ebp + 92h]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebx + 142h]
        push ecx
        add ebp, 86h
        push ebp
        add ebx, 7bh
        push ebx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 AB 05 E9 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x05
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588a2cdb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 3ch]
        mov dword ptr [esi + 260h], edi
        mov ecx, dword ptr [edi + 40h]
        inc eax
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a2cfc
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 54 02 06 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a2d09
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D7 01 06 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 260h]
        push 589a061ch
        ; Exact mapped bytes E8 C7 EF E8 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xef
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 3ch]
        mov ebp, dword ptr [esp + 3ch]
        mov dword ptr [esp + 38h], 0
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 38h]
        test edi, edi
        ; Exact mapped bytes 75 0A: jne 0x588a2d42
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ebx, 0c7h
        lea ebp, [ebx - 12h]
        ; Exact mapped bytes EB 49: jmp 0x588a2d8b
        __asm _emit 0xeb
        __asm _emit 0x49
        cmp edi, 9
        ; Exact mapped bytes 75 07: jne 0x588a2d4e
        __asm _emit 0x75
        __asm _emit 0x07
        mov ebp, 0b5h
        ; Exact mapped bytes EB 38: jmp 0x588a2d86
        __asm _emit 0xeb
        __asm _emit 0x38
        cmp edi, 11h
        ; Exact mapped bytes 75 0C: jne 0x588a2d5f
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ebx, 0c7h
        mov ebp, 165h
        ; Exact mapped bytes EB 2C: jmp 0x588a2d8b
        __asm _emit 0xeb
        __asm _emit 0x2c
        cmp edi, 14h
        ; Exact mapped bytes 75 07: jne 0x588a2d6b
        __asm _emit 0x75
        __asm _emit 0x07
        mov ebp, 153h
        ; Exact mapped bytes EB 1B: jmp 0x588a2d86
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp edi, 19h
        ; Exact mapped bytes 75 0C: jne 0x588a2d7c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ebx, 0c7h
        mov ebp, 1b5h
        ; Exact mapped bytes EB 0F: jmp 0x588a2d8b
        __asm _emit 0xeb
        __asm _emit 0x0f
        cmp edi, 1dh
        ; Exact mapped bytes 75 0A: jne 0x588a2d8b
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ebp, 1c5h
        mov ebx, 1a6h
        push 0ach
        ; Exact mapped bytes E8 B9 9E 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x9e
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 20h], 38h
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x588a2df1
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x588a2dc3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588a2dc3
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 100h]
        ; Exact mapped bytes EB 02: jmp 0x588a2dc5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 3ch]
        push ecx
        mov ecx, dword ptr [esp + 34h]
        add ecx, ebp
        push ecx
        mov ecx, dword ptr [esp + 34h]
        add ecx, ebx
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
        ; Exact mapped bytes E8 B1 AF EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xaf
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a2df3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + edi*4 + 264h], eax
        ; Exact mapped bytes E8 15 FF 05 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 3C 9E 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x9e
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 20h], 39h
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x588a2e5a
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [esp + 30h]
        push 0
        push 0
        push 0ffffffh
        lea edx, [ecx + ebp + 10h]
        push edx
        mov edx, dword ptr [esp + 3ch]
        lea edi, [ebx + edx + 28h]
        push edi
        lea ecx, [ecx + ebp + 1]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add edx, ebx
        push edx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2A 04 E9 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x04
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588a2e5c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 3ch]
        mov dword ptr [esi + edx*4 + 2e0h], edi
        mov ecx, dword ptr [edi + 40h]
        inc eax
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a2e82
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 CE 00 06 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a2e8f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 51 00 06 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 38h]
        mov eax, dword ptr [esi + ecx*4 + 2e0h]
        inc ecx
        add ebp, 10h
        cmp ecx, 1fh
        mov dword ptr [eax + 54h], 6
        mov dword ptr [esp + 38h], ecx
        ; Exact mapped bytes 0F 8C 7E FE FF FF: jl 0x588a2d30
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x7e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 92 9D 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x9d
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 3ah
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x588a2f1a
        __asm _emit 0x74
        __asm _emit 0x4e
        mov edx, dword ptr [esi + 60h]
        cmp dword ptr [edx + 160h], 2
        ; Exact mapped bytes 7E 0F: jle 0x588a2ee7
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 05: je 0x588a2ee7
        __asm _emit 0x74
        __asm _emit 0x05
        sub edx, -80h
        ; Exact mapped bytes EB 02: jmp 0x588a2ee9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, dword ptr [esp + 3ch]
        mov ebx, dword ptr [esp + 30h]
        mov ebp, dword ptr [esp + 2ch]
        push edi
        lea ecx, [ebx + 18h]
        push ecx
        lea ecx, [ebp + 183h]
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
        ; Exact mapped bytes E8 88 AE EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xae
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x588a2f28
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edi, dword ptr [esp + 3ch]
        mov ebp, dword ptr [esp + 2ch]
        mov ebx, dword ptr [esp + 30h]
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 248h], eax
        ; Exact mapped bytes E8 E1 FD 05 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0x05
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 05 9D 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x9d
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 3bh
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x588a2f9e
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 12: jle 0x588a2f77
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588a2f77
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x588a2f79
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push edi
        lea edx, [ebx + 18h]
        push edx
        lea edx, [ebp + 226h]
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
        ; Exact mapped bytes E8 04 AE EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xae
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a2fa0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 24ch], eax
        ; Exact mapped bytes E8 69 FD 05 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xfd
        __asm _emit 0x05
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 8D 9C 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 3ch
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x588a3015
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x588a2fec
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588a2fec
        __asm _emit 0x74
        __asm _emit 0x05
        add ecx, 40h
        ; Exact mapped bytes EB 02: jmp 0x588a2fee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        add ebx, 18h
        push ebx
        add ebp, 280h
        push ebp
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
        ; Exact mapped bytes E8 8F AD EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xad
        __asm _emit 0xeb
        __asm _emit 0xff
        xor edi, edi
        ; Exact mapped bytes EB 04: jmp 0x588a3019
        __asm _emit 0xeb
        __asm _emit 0x04
        xor edi, edi
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 250h], eax
        ; Exact mapped bytes E8 F0 FC 05 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi + 35ch], 0ffffffffh
        mov dword ptr [esi + 368h], edi
        mov dword ptr [esi + 0f8h], edi
        mov dword ptr [esi + 104h], edi
        mov dword ptr [esi + 0fch], edi
        mov dword ptr [esi + 108h], edi
        mov dword ptr [esi + 100h], edi
        mov dword ptr [esi + 10ch], edi
        mov eax, 0fff0h
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0e5ffh
        mov eax, 500h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov dword ptr [esi + 36ch], edi
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
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
