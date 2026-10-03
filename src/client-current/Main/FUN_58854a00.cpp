// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 6126 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58854A00 .. +0x17EE bytes.
extern "C" __declspec(naked) void FUN_58854a00_segment_00() {
    __asm {
        push -1
        push 5898548fh
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
        mov edi, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push ebx
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 50 E7 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ebp, 20h
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 09 6E 24: or word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x6e
        __asm _emit 0x24
        xor eax, eax
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], eax
        mov dword ptr [esp + 20h], eax
        mov ecx, 578h
        mov edx, 4b0h
        mov eax, 5aah
        push ebp
        mov dword ptr [esi], 5899e918h
        ; Exact mapped bytes 66 89 4E 60: mov word ptr [esi + 0x60], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 66 89 56 62: mov word ptr [esi + 0x62], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x62
        ; Exact mapped bytes 66 89 46 64: mov word ptr [esi + 0x64], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        mov dword ptr [esi + 2dch], edi
        mov dword ptr [esi + 2e0h], ebx
        ; Exact mapped bytes E8 A6 81 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x81
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x58854aef
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D F0 46 A2 58: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 170h], 7
        ; Exact mapped bytes 7E 1C: jle 0x58854ae3
        __asm _emit 0x7e
        __asm _emit 0x1c
        cmp dword ptr [ecx + 194h], 0
        ; Exact mapped bytes 74 13: je 0x58854ae3
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ecx + 194h]
        mov ecx, dword ptr [ecx + 1ch]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 DF 2F 0B 00: call 0x58907ac0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x2f
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x58854af1
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 D3 2F 0B 00: call 0x58907ac0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x2f
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58854af1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 4E 81 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x81
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 2
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x58854b4d
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 129h
        ; Exact mapped bytes 7E 17: jle 0x58854b39
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58854b39
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 4a4h]
        ; Exact mapped bytes EB 02: jmp 0x58854b3b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        movzx edx, word ptr [esi + 60h]
        push edx
        push ebx
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 15 D1 ED FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xd1
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58854b4f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes E8 F0 80 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x80
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 3
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x58854bb2
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 12ah
        ; Exact mapped bytes 7E 17: jle 0x58854b97
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58854b97
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 4a8h]
        ; Exact mapped bytes EB 02: jmp 0x58854b99
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 60: mov dx, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x60
        ; Exact mapped bytes 66 83 C2 33: add dx, 0x33
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x33
        movzx edx, dx
        push edx
        push ebx
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B0 D0 ED FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xd0
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58854bb4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes E8 58 E1 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xe1
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 70h]
        mov edx, 0bfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 0c4h
        ; Exact mapped bytes E8 64 80 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x80
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 4
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x58854c10
        __asm _emit 0x74
        __asm _emit 0x16
        push 40h
        push 0
        push 0
        push -3ch
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 64 0E 04 00: call 0x58895a70
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x0e
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58854c12
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        movzx eax, word ptr [esi + 60h]
        mov dword ptr [esi + 0c4h], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58854c32
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 1E E3 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58854c3f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A1 E2 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        mov ecx, 0dfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        lea ebx, [esi + 108h]
        mov dword ptr [esp + 3ch], ebp
        push 58h
        ; Exact mapped bytes E8 EF 7F 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x7f
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 20h], 5
        test edi, edi
        ; Exact mapped bytes 74 7E: je 0x58854cef
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 7
        ; Exact mapped bytes 7E 17: jle 0x58854c96
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58854c96
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebp, dword ptr [eax + 190h]
        add ebp, 1c0h
        ; Exact mapped bytes EB 02: jmp 0x58854c98
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        push 0fa0h
        push 0
        push 0
        add edx, 3dh
        push edx
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 ED E4 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe4
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x58854cf1
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        lea eax, [ebp + 20h]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x58854cf1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebx], edi
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        add ebx, 4
        sub dword ptr [esp + 3ch], 1
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 0F 85 49 FF FF FF: jne 0x58854c58
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [esi + 0c8h]
        mov dword ptr [esp + 3ch], 0
        mov ebx, 3dh
        lea ebp, [esi + 80h]
        mov dword ptr [esp + 38h], edx
        push 0ach
        ; Exact mapped bytes E8 18 7F 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x7f
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 20h], 6
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x58854d9e
        __asm _emit 0x74
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 9
        ; Exact mapped bytes 7E 17: jle 0x58854d6c
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58854d6c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 240h
        ; Exact mapped bytes EB 02: jmp 0x58854d6e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 66 8B 4E 60: mov cx, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 66 83 C1 0A: add cx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x0a
        movzx ecx, cx
        push ecx
        mov ecx, dword ptr [esi + 8]
        add ecx, 6ah
        push ecx
        lea ecx, [ebx + 3bh]
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
        ; Exact mapped bytes E8 04 90 F0 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x90
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58854da0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esp + 38h]
        push 0b8h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edx], eax
        ; Exact mapped bytes E8 99 7E 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x7e
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 20h], 7
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x58854dde
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [esp + 30h]
        push 40h
        push 0
        push 0
        add ecx, 68h
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 84 77 00 00: call 0x5885c560
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58854de0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0bch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 5C 7E 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x7e
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 20h], 8
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x58854e1e
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [esp + 30h]
        push 40h
        push 0
        push 0
        add edx, 9ah
        push edx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 24 E7 00 00: call 0x58863540
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58854e20
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [ebp - 4]
        mov dword ptr [ebp], eax
        ; Exact mapped bytes 66 8B 46 60: mov ax, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x60
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 83 C0 32: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x32
        movzx eax, ax
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58854e47
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 09 E1 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe1
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58854e54
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8C E0 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe0
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 60: mov cx, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x60
        mov edi, dword ptr [ebp]
        ; Exact mapped bytes 66 83 C1 32: add cx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x32
        movzx eax, cx
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58854e73
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 DD E0 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe0
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58854e80
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 60 E0 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xe0
        __asm _emit 0x0a
        __asm _emit 0x00
        movzx edi, word ptr [esp + 3ch]
        mov ecx, dword ptr [ebp - 4]
        push 0
        push 0
        push 0
        push edi
        ; Exact mapped bytes E8 2C 30 00 00: call 0x58857ec0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push 0
        push 0
        push 0
        push edi
        ; Exact mapped bytes E8 1D 30 00 00: call 0x58857ec0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [esp + 3ch]
        add dword ptr [esp + 38h], 4
        add ebx, 4ch
        add ebp, 8
        cmp ebx, 16dh
        ; Exact mapped bytes 0F 8C 6E FE FF FF: jl 0x58854d2c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 89 7D 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 9
        test edi, edi
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x58854f60
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 4
        ; Exact mapped bytes 7E 17: jle 0x58854f00
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58854f00
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebp, dword ptr [eax + 190h]
        add ebp, 100h
        ; Exact mapped bytes EB 02: jmp 0x58854f02
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ebx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        push 0bb8h
        push 0
        push 0
        lea edx, [ebx + 3bh]
        push edx
        add eax, 0ch
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 7D E2 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2F: je 0x58854f66
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 1ch]
        add ebp, 20h
        mov dword ptr [edi + 10h], edx
        mov eax, dword ptr [ebp]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 06: jmp 0x58854f66
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 30h]
        xor edi, edi
        push 58h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 188h], edi
        ; Exact mapped bytes E8 D6 7C 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x7c
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 0ah
        test edi, edi
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x5885500f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 3
        ; Exact mapped bytes 7E 17: jle 0x58854fb3
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58854fb3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebp, dword ptr [eax + 190h]
        add ebp, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x58854fb5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        push 0bb8h
        push 0
        push 0
        lea ecx, [ebx + 6dh]
        push ecx
        add edx, 2
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 CE E1 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe1
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x58855011
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        add ebp, 20h
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [ebp]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x58855011
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 18ch], edi
        ; Exact mapped bytes E8 2B 7C 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x7c
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 0bh
        test edi, edi
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x588550bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 6
        ; Exact mapped bytes 7E 17: jle 0x5885505e
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885505e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebp, dword ptr [eax + 190h]
        add ebp, 180h
        ; Exact mapped bytes EB 02: jmp 0x58855060
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        push 0bb8h
        push 0
        push 0
        lea eax, [ebx + 3bh]
        push eax
        add ecx, 17ah
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 20 E1 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe1
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x588550bf
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp + 1ch]
        add ebp, 20h
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebp]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], ecx
        ; Exact mapped bytes EB 02: jmp 0x588550bf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 190h], edi
        ; Exact mapped bytes E8 7D 7B 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x7b
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 0ch
        test edi, edi
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x5885516b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 5
        ; Exact mapped bytes 7E 17: jle 0x5885510c
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885510c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebp, dword ptr [eax + 190h]
        add ebp, 140h
        ; Exact mapped bytes EB 02: jmp 0x5885510e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        push 0bb8h
        push 0
        push 0
        add ebx, 6ch
        push ebx
        add edx, 179h
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 72 E0 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe0
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x5885516d
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        add ebp, 20h
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [ebp]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x5885516d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 188h]
        mov dword ptr [esi + 194h], edi
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 18ch]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 190h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 194h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 0fch
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 9D 7A 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x7a
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0dh
        mov ebx, 0eh
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x5885520a
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x588551eb
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588551eb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 380h
        ; Exact mapped bytes EB 02: jmp 0x588551ed
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov ebp, dword ptr [esp + 30h]
        mov edi, dword ptr [esp + 2ch]
        lea edx, [ebp + 5ch]
        push edx
        lea edx, [edi + 14h]
        push edx
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F8 1E 0B 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x1e
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x58855214
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebp, dword ptr [esp + 30h]
        mov edi, dword ptr [esp + 2ch]
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 198h], eax
        ; Exact mapped bytes E8 25 7A 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x7a
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], bl
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x58855277
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x5885525d
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885525d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 380h
        ; Exact mapped bytes EB 02: jmp 0x5885525f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 8dh]
        push ecx
        lea ecx, [edi + 0ch]
        push ecx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8B 1E 0B 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x1e
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58855279
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 19ch], eax
        ; Exact mapped bytes E8 C0 79 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x79
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov ebx, 0fh
        mov byte ptr [esp + 20h], bl
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x588552e1
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x588552c7
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588552c7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 3c0h
        ; Exact mapped bytes EB 02: jmp 0x588552c9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 5ch]
        push ecx
        lea ecx, [edi + 17ch]
        push ecx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 21 1E 0B 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x1e
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588552e3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1a0h], eax
        ; Exact mapped bytes E8 56 79 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x79
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 10h
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5885534a
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x5885532d
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885532d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 3c0h
        ; Exact mapped bytes EB 02: jmp 0x5885532f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 8dh]
        push ecx
        add edi, 17ch
        push edi
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B8 1D 0B 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x1d
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5885534c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 198h]
        mov dword ptr [esi + 1a4h], eax
        mov ecx, dword ptr [edi + 40h]
        mov edx, 1194h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58855373
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 DD DB 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xdb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58855380
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 60 DB 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xdb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 19ch]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 1194h
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5885539c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B4 DB 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xdb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588553a9
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 37 DB 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xdb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 1a0h]
        mov ecx, 1194h
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588553c5
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8B DB 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xdb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588553d2
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0E DB 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xdb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 1a4h]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 1194h
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588553ee
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 62 DB 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xdb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588553fb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E5 DA 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xda
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5ch
        ; Exact mapped bytes E8 4C 78 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x78
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 11h
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x58855426
        __asm _emit 0x74
        __asm _emit 0x14
        push 40h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 3C 4B F0 FF: call 0x58759f60
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x4b
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58855428
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push esi
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 2e8h], eax
        ; Exact mapped bytes E8 E5 4A F0 FF: call 0x58759f20
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x4a
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 2e8h]
        add ebp, 190h
        push ebp
        ; Exact mapped bytes E8 13 DF 0A 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xdf
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 2e8h]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 1194h
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58855469
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E7 DA 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xda
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58855476
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 6A DA 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xda
        __asm _emit 0x0a
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 D1 77 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x77
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 12h
        test edi, edi
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x58855520
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 2eeh
        ; Exact mapped bytes 7E 17: jle 0x588554bb
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588554bb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [ecx + 0bb8h]
        ; Exact mapped bytes EB 02: jmp 0x588554bd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 56 60: mov dx, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x60
        mov ecx, dword ptr [esi + 2e8h]
        mov ebx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 66 83 C2 64: add dx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x64
        movzx eax, dx
        push eax
        mov eax, dword ptr [esp + 34h]
        push 0
        push 0
        add eax, 323h
        push eax
        push ebx
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 B6 DC 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xdc
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2F: je 0x58855526
        __asm _emit 0x74
        __asm _emit 0x2f
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
        ; Exact mapped bytes EB 06: jmp 0x58855526
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 2ch]
        xor edi, edi
        mov ebp, dword ptr [esp + 30h]
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 2a8h], edi
        ; Exact mapped bytes E8 DF D7 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 06 77 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x77
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov byte ptr [esp + 20h], 13h
        test edi, edi
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x588555e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 2efh
        ; Exact mapped bytes 7E 17: jle 0x58855586
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58855586
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [ecx + 0bbch]
        ; Exact mapped bytes EB 02: jmp 0x58855588
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 56 60: mov dx, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x60
        mov ecx, dword ptr [esi + 2e8h]
        ; Exact mapped bytes 66 83 C2 64: add dx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x64
        movzx eax, dx
        push eax
        mov eax, dword ptr [esp + 34h]
        push 0
        push 0
        add eax, 6
        push eax
        push ebx
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 F1 DB 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xdb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 27: je 0x588555e3
        __asm _emit 0x74
        __asm _emit 0x27
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
        mov ebp, dword ptr [esp + 30h]
        ; Exact mapped bytes EB 02: jmp 0x588555eb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 2a8h]
        mov dword ptr [esi + 2ach], edi
        mov ecx, 0dfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 2ach]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 6ch
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 36 76 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x76
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 14h
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x58855672
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ah
        ; Exact mapped bytes 7E 17: jle 0x5885564e
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5885564e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0a80h
        ; Exact mapped bytes EB 02: jmp 0x58855650
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 60: mov dx, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x60
        ; Exact mapped bytes 66 83 C2 64: add dx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x64
        movzx edx, dx
        push edx
        lea edx, [ebp + 6]
        push edx
        push ebx
        push ecx
        mov ecx, dword ptr [esi + 2e8h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 80 E9 F3 FF: call 0x58793ff0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58855674
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 2b0h], eax
        ; Exact mapped bytes E8 7A E7 F3 FF: call 0x58793e00
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe7
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esi + 2b0h]
        mov edx, 0dfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 6ch
        ; Exact mapped bytes E8 B2 75 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x75
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 15h
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x588556f6
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 29h
        ; Exact mapped bytes 7E 17: jle 0x588556d2
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588556d2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0a40h
        ; Exact mapped bytes EB 02: jmp 0x588556d4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 60: mov dx, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x60
        ; Exact mapped bytes 66 83 C2 64: add dx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x64
        movzx edx, dx
        push edx
        lea edx, [ebp + 6]
        push edx
        push ebx
        push ecx
        mov ecx, dword ptr [esi + 2e8h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 FC E8 F3 FF: call 0x58793ff0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588556f8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 2b4h], eax
        ; Exact mapped bytes E8 F6 E6 F3 FF: call 0x58793e00
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xe6
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esi + 2b4h]
        mov edx, 0dfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 58h
        ; Exact mapped bytes E8 2E 75 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x75
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov byte ptr [esp + 20h], 16h
        test edi, edi
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x588557c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 2
        ; Exact mapped bytes 7E 14: jle 0x58855758
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x58855758
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ebp, dword ptr [eax + 190h]
        sub ebp, -80h
        ; Exact mapped bytes EB 02: jmp 0x5885575a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 46 60: mov ax, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x60
        mov edx, dword ptr [esp + 30h]
        mov ecx, dword ptr [esi + 2e8h]
        ; Exact mapped bytes 66 83 C0 64: add ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x64
        movzx eax, ax
        push eax
        push 0
        push 0
        add edx, 6
        push edx
        push ebx
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 1F DA 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xda
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 27: je 0x588557bc
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        add ebp, 20h
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [ebp]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], edx
        mov ebp, dword ptr [esp + 30h]
        ; Exact mapped bytes EB 02: jmp 0x588557c4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 2b8h], edi
        mov eax, 0fffbh
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov eax, dword ptr [esi + 2b8h]
        mov ecx, 0dfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 60 74 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x74
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov byte ptr [esp + 20h], 17h
        test edi, edi
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x58855898
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 4fdh
        ; Exact mapped bytes 7E 17: jle 0x5885582c
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5885582c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [edx + 13f4h]
        ; Exact mapped bytes EB 02: jmp 0x5885582e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 46 60: mov ax, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x60
        mov edx, dword ptr [esp + 30h]
        mov ecx, dword ptr [esi + 2e8h]
        ; Exact mapped bytes 66 83 C0 3C: add ax, 0x3c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x3c
        movzx eax, ax
        push eax
        push 0
        push 0
        add edx, 84h
        push edx
        lea eax, [ebx + 332h]
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 42 D9 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xd9
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 27: je 0x58855892
        __asm _emit 0x74
        __asm _emit 0x27
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
        mov ebp, dword ptr [esp + 30h]
        ; Exact mapped bytes EB 02: jmp 0x5885589a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, 0dfffh
        mov dword ptr [esi + 304h], edi
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        push 54h
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 99 73 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x73
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov byte ptr [esp + 20h], 18h
        test edi, edi
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x5885595f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 4feh
        ; Exact mapped bytes 7E 17: jle 0x588558f3
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588558f3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [edx + 13f8h]
        ; Exact mapped bytes EB 02: jmp 0x588558f5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 46 60: mov ax, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x60
        mov edx, dword ptr [esp + 30h]
        mov ecx, dword ptr [esi + 2e8h]
        ; Exact mapped bytes 66 83 C0 50: add ax, 0x50
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x50
        movzx eax, ax
        push eax
        push 0
        push 0
        add edx, 84h
        push edx
        lea eax, [ebx + 39ah]
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 7B D8 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 27: je 0x58855959
        __asm _emit 0x74
        __asm _emit 0x27
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
        mov ebp, dword ptr [esp + 30h]
        ; Exact mapped bytes EB 02: jmp 0x58855961
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, 0dfffh
        mov dword ptr [esi + 308h], edi
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        lea eax, [ebp + 84h]
        lea edx, [ebx + 364h]
        lea ecx, [ebx + 367h]
        push 0cch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 314h], edx
        mov dword ptr [esi + 318h], eax
        mov dword ptr [esi + 30ch], ecx
        mov dword ptr [esi + 310h], eax
        mov dword ptr [esi + 31ch], 0
        ; Exact mapped bytes E8 9B 72 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x72
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 19h
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x588559e9
        __asm _emit 0x74
        __asm _emit 0x26
        push 40h
        push 0
        push 0
        lea edx, [ebp + 90h]
        push edx
        mov edx, dword ptr [esi + 2e8h]
        lea ecx, [ebx + 36ah]
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 CB 23 F7 FF: call 0x587c7db0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x23
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588559eb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 2bch], edi
        mov ecx, dword ptr [edi + 40h]
        mov eax, 11c6h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58855a0c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 44 D5 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58855a19
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C7 D4 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xd4
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push 4
        push 0
        push 3
        push 14h
        push ecx
        mov ecx, dword ptr [esi + 2bch]
        ; Exact mapped bytes E8 9D 24 F7 FF: call 0x587c7ed0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x24
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 2bch]
        push 2
        ; Exact mapped bytes E8 A0 22 F7 FF: call 0x587c7ce0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x22
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [esi + 2bch]
        mov edx, 0dfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 F8 71 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x71
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov byte ptr [esp + 20h], 1ah
        test edi, edi
        ; Exact mapped bytes 74 7E: je 0x58855ae6
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 2d0h
        ; Exact mapped bytes 7E 17: jle 0x58855a90
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58855a90
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 0b40h]
        ; Exact mapped bytes EB 02: jmp 0x58855a92
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 30h]
        push 1176h
        push 0
        push 0
        add ecx, 9
        push ecx
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 F4 D6 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xd6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 27: je 0x58855ae0
        __asm _emit 0x74
        __asm _emit 0x27
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
        mov ebp, dword ptr [esp + 30h]
        ; Exact mapped bytes EB 02: jmp 0x58855ae8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 74h], edi
        ; Exact mapped bytes E8 24 D2 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 74h]
        mov ecx, 0dfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 33 71 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x71
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov byte ptr [esp + 20h], 1bh
        test edi, edi
        ; Exact mapped bytes 74 7E: je 0x58855bab
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 2d1h
        ; Exact mapped bytes 7E 17: jle 0x58855b55
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58855b55
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [edx + 0b44h]
        ; Exact mapped bytes EB 02: jmp 0x58855b57
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 30h]
        push 1176h
        push 0
        push 0
        add eax, 9
        push eax
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 2F D6 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xd6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 27: je 0x58855ba5
        __asm _emit 0x74
        __asm _emit 0x27
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
        mov ebp, dword ptr [esp + 30h]
        ; Exact mapped bytes EB 02: jmp 0x58855bad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 78h], edi
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        mov eax, dword ptr [esi + 78h]
        mov edx, 0dfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 5d0h
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 7A 70 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 1ch
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x58855c01
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        push 0
        push 0
        lea ecx, [ebp + 14h]
        push ecx
        lea edx, [ebx + 323h]
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 53 11 04 00: call 0x58896d50
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58855c03
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        movzx eax, word ptr [esi + 62h]
        mov dword ptr [esi + 2c0h], edi
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58855c23
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2D D3 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xd3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58855c30
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B0 D2 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2c0h]
        mov ecx, 0dfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0ab4h
        ; Exact mapped bytes E8 05 70 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 1dh
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x58855c71
        __asm _emit 0x74
        __asm _emit 0x18
        push 40h
        push 0
        push 0
        push ebp
        lea edx, [ebx + 1c6h]
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 31 4E 00 00: call 0x5885aaa0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58855c73
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0dh
        push 0
        push 0
        push 0
        mov ecx, eax
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes E8 33 22 00 00: call 0x58857ec0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 9ch]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 11adh
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58855ca9
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A7 D2 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58855cb6
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2A D2 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        push 768h
        ; Exact mapped bytes E8 8E 6F 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x6f
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 1eh
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x58855cea
        __asm _emit 0x74
        __asm _emit 0x1a
        push 40h
        push 0
        push 0
        push ebp
        lea ecx, [ebx + 1c7h]
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 0A AD 00 00: call 0x588609f0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58855cec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0a0h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 11adh
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58855d0d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 43 D2 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58855d1a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C6 D1 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xd1
        __asm _emit 0x0a
        __asm _emit 0x00
        xor edi, edi
        push 124h
        mov dword ptr [esi + 2f0h], edi
        mov dword ptr [esi + 2ech], edi
        mov byte ptr [esi + 2fch], 0
        mov dword ptr [esi + 300h], edi
        ; Exact mapped bytes E8 0F 6F 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 1fh
        cmp eax, edi
        ; Exact mapped bytes 74 2F: je 0x58855d7e
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, 3e8h
        ; Exact mapped bytes 66 03 4E 60: add cx, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4e
        __asm _emit 0x60
        movzx edx, cx
        push edx
        push 2feh
        lea ecx, [ebx + 341h]
        push ecx
        push 25eh
        lea edx, [ebx + 1aeh]
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 04 76 00 00: call 0x5885d380
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58855d80
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes E8 B9 6E 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x6e
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 20h
        cmp eax, edi
        ; Exact mapped bytes 74 54: je 0x58855df9
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 13: jle 0x58855dc7
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [ecx + 190h], edi
        ; Exact mapped bytes 74 0B: je 0x58855dc7
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 190h]
        sub edx, -80h
        ; Exact mapped bytes EB 02: jmp 0x58855dc9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, 7d0h
        ; Exact mapped bytes 66 03 4E 60: add cx, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4e
        __asm _emit 0x60
        movzx ecx, cx
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 2d0h
        push 0dbh
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
        ; Exact mapped bytes E8 A9 7F F0 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x7f
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58855dfb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a8h], eax
        mov dword ptr [esi + 0ach], edi
        mov dword ptr [esi + 2e4h], edi
        ; Exact mapped bytes E8 32 6E 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x6e
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 21h
        cmp eax, edi
        ; Exact mapped bytes 74 4C: je 0x58855e78
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D 30 47 A2 58: mov ecx, dword ptr [0x58a24730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 6
        ; Exact mapped bytes 7E 16: jle 0x58855e51
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], edi
        ; Exact mapped bytes 74 0E: je 0x58855e51
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 180h
        ; Exact mapped bytes EB 02: jmp 0x58855e53
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, 7d0h
        ; Exact mapped bytes 66 03 4E 60: add cx, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4e
        __asm _emit 0x60
        movzx ecx, cx
        push ecx
        lea ecx, [ebp - 57h]
        push ecx
        lea ecx, [ebx + 34fh]
        push ecx
        push edx
        push esi
        push edi
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 2A 7F F0 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x7f
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58855e7a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 2f8h], eax
        ; Exact mapped bytes E8 BF 6D 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x6d
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 22h
        cmp eax, edi
        ; Exact mapped bytes 74 41: je 0x58855ee0
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2dh
        ; Exact mapped bytes 7E 16: jle 0x58855ec4
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], edi
        ; Exact mapped bytes 74 0E: je 0x58855ec4
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b40h
        ; Exact mapped bytes EB 02: jmp 0x58855ec6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        add ebp, -4bh
        push ebp
        add ebx, 394h
        push ebx
        push 5
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 24 12 0B 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x12
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58855ee2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov edx, 7d2h
        ; Exact mapped bytes 66 03 56 60: add dx, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x60
        mov dword ptr [esi + 2f4h], edi
        mov ecx, dword ptr [edi + 40h]
        movzx eax, dx
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58855f0a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 46 D0 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd0
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58855f17
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C9 CF 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xcf
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2f8h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 2f8h]
        mov edx, 0dfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 2f4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 2f4h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 60h
        ; Exact mapped bytes E8 FE 6C 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x6c
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov byte ptr [esp + 20h], 23h
        test edi, edi
        ; Exact mapped bytes 74 47: je 0x58855fa9
        __asm _emit 0x74
        __asm _emit 0x47
        push 40h
        push 0
        push 0
        push 500h
        push 1beh
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 26 D2 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c500h
        ; Exact mapped bytes 66 83 4F 24 20: or word ptr [edi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4f
        __asm _emit 0x24
        __asm _emit 0x20
        mov dword ptr [edi], 5898c520h
        mov dword ptr [edi + 50h], 1beh
        mov dword ptr [edi + 54h], 500h
        mov dword ptr [edi + 58h], 100h
        mov dword ptr [edi + 5ch], 0
        ; Exact mapped bytes EB 02: jmp 0x58855fab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 3e8h
        ; Exact mapped bytes 66 03 46 60: add ax, word ptr [esi + 0x60]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x60
        mov dword ptr [esi + 0b0h], edi
        mov ecx, dword ptr [edi + 40h]
        movzx eax, ax
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58855fd3
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7D CF 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xcf
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58855fe0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 00 CF 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xcf
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, 14h
        sub eax, esi
        mov dword ptr [esp + 3ch], eax
        mov eax, 1ch
        mov ebp, 34h
        sub eax, esi
        mov dword ptr [esp + 30h], ebp
        lea ebx, [esi + 0b4h]
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 2ch], 2
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 37 6C 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x6c
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 20h], 24h
        test edi, edi
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x588560b5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 47 A2 58: mov ecx, dword ptr [0x58a24720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        lea eax, [ebp - 2]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 1E: jle 0x5885605c
        __asm _emit 0x7e
        __asm _emit 0x1e
        test eax, eax
        ; Exact mapped bytes 7C 1A: jl 0x5885605c
        __asm _emit 0x7c
        __asm _emit 0x1a
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 11: je 0x5885605c
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [esp + 3ch]
        mov eax, dword ptr [ecx + 18ch]
        add edx, ebx
        mov ebp, dword ptr [edx + eax]
        ; Exact mapped bytes EB 02: jmp 0x5885605e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 0b0h]
        push 40h
        push 0
        push 0
        push 500h
        push 1beh
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 24 D1 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd1
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 26: je 0x588560af
        __asm _emit 0x74
        __asm _emit 0x26
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
        mov ebp, dword ptr [esp + 30h]
        ; Exact mapped bytes EB 02: jmp 0x588560b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [ebx], edi
        ; Exact mapped bytes E8 89 6B 12 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x6b
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 20h], 25h
        test edi, edi
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x5885615f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 20 47 A2 58: mov eax, dword ptr [0x58a24720]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 1E: jle 0x58856106
        __asm _emit 0x7e
        __asm _emit 0x1e
        test ebp, ebp
        ; Exact mapped bytes 7C 1A: jl 0x58856106
        __asm _emit 0x7c
        __asm _emit 0x1a
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 11: je 0x58856106
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [eax + 18ch]
        add ecx, ebx
        mov ebp, dword ptr [ecx + edx]
        ; Exact mapped bytes EB 02: jmp 0x58856108
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 0b0h]
        push 40h
        push 0
        push 0
        push 500h
        push 1beh
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 7A D0 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xd0
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 26: je 0x58856159
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
        mov ebp, dword ptr [esp + 30h]
        ; Exact mapped bytes EB 02: jmp 0x58856161
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [ebx]
        push 0c8h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [ebx + 8], edi
        ; Exact mapped bytes E8 6B CB 0A 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xcb
        __asm _emit 0x0a
        __asm _emit 0x00
        inc ebp
        add ebx, 4
        sub dword ptr [esp + 2ch], 1
        mov dword ptr [esp + 30h], ebp
        ; Exact mapped bytes 0F 85 88 FE FF FF: jne 0x58856010
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0b4h]
        push 0fffffeffh
        ; Exact mapped bytes E8 88 CB 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xcb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push 0fffffeffh
        ; Exact mapped bytes E8 78 CB 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xcb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 101h
        ; Exact mapped bytes E8 68 CB 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xcb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b0h]
        mov edx, 0bfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
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
