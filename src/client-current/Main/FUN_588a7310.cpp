// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 5977 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588A7310 .. +0xEDD bytes.
extern "C" __declspec(naked) void FUN_588a7310_segment_00() {
    __asm {
        push -1
        push 58987ca4h
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
        push eax
        mov eax, dword ptr [esp + 34h]
        push ecx
        mov ecx, dword ptr [esp + 34h]
        push edx
        mov edx, dword ptr [esp + 34h]
        push eax
        push ecx
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 50 EF F0 FF: call 0x587b62b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xef
        __asm _emit 0xf0
        __asm _emit 0xff
        xor ebp, ebp
        push 54h
        mov dword ptr [esp + 24h], ebp
        mov dword ptr [edi], 589a06a0h
        ; Exact mapped bytes E8 DB 58 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1
        cmp eax, ebp
        ; Exact mapped bytes 74 46: je 0x588a73c9
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D 1C 47 A2 58: mov ecx, dword ptr [0x58a2471c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 191h
        ; Exact mapped bytes 7E 23: jle 0x588a73b8
        __asm _emit 0x7e
        __asm _emit 0x23
        cmp dword ptr [ecx + 18ch], ebp
        ; Exact mapped bytes 74 1B: je 0x588a73b8
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 644h]
        push 4bh
        push ebp
        push ebp
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 AA A8 E8 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x588a73cb
        __asm _emit 0xeb
        __asm _emit 0x13
        push 4bh
        push ebp
        xor ecx, ecx
        push ebp
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 99 A8 E8 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a73cb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi + 124h], eax
        ; Exact mapped bytes E8 71 58 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 2
        cmp eax, ebp
        ; Exact mapped bytes 74 46: je 0x588a7433
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D 1C 47 A2 58: mov ecx, dword ptr [0x58a2471c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 190h
        ; Exact mapped bytes 7E 23: jle 0x588a7422
        __asm _emit 0x7e
        __asm _emit 0x23
        cmp dword ptr [ecx + 18ch], ebp
        ; Exact mapped bytes 74 1B: je 0x588a7422
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 640h]
        push 4ah
        push ebp
        push ebp
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 40 A8 E8 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x588a7435
        __asm _emit 0xeb
        __asm _emit 0x13
        push 4ah
        push ebp
        xor ecx, ecx
        push ebp
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 2F A8 E8 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a7435
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi + 128h], eax
        ; Exact mapped bytes E8 D4 B8 05 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 128h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 68h
        ; Exact mapped bytes E8 EC 57 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 3
        cmp eax, ebp
        ; Exact mapped bytes 74 66: je 0x588a74d8
        __asm _emit 0x74
        __asm _emit 0x66
        ; Exact mapped bytes 8B 0D 1C 47 A2 58: mov ecx, dword ptr [0x58a2471c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [ecx + 164h]
        cmp esi, 192h
        ; Exact mapped bytes 7E 16: jle 0x588a749c
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x588a749c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [edx + 648h]
        ; Exact mapped bytes EB 02: jmp 0x588a749e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        cmp esi, 193h
        ; Exact mapped bytes 7E 22: jle 0x588a74c8
        __asm _emit 0x7e
        __asm _emit 0x22
        cmp dword ptr [ecx + 18ch], ebp
        ; Exact mapped bytes 74 1A: je 0x588a74c8
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 64ch]
        push ebp
        push ebp
        push edx
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 9A 44 F7 FF: call 0x5881b960
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x44
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x588a74da
        __asm _emit 0xeb
        __asm _emit 0x12
        push ebp
        push ebp
        xor ecx, ecx
        push edx
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 8A 44 F7 FF: call 0x5881b960
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x44
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a74da
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0c8h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi + 158h], eax
        ; Exact mapped bytes E8 EF B7 05 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 158h]
        mov edx, 0bfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov esi, dword ptr [edi + 158h]
        mov ecx, dword ptr [esi + 40h]
        mov eax, 4ah
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588a751c
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 34 BA 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xba
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588a7529
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 B7 B9 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb9
        __asm _emit 0x05
        __asm _emit 0x00
        push 6ch
        ; Exact mapped bytes E8 1E 57 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x57
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 4
        cmp eax, ebp
        ; Exact mapped bytes 74 55: je 0x588a7595
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 8B 15 1C 47 A2 58: mov edx, dword ptr [0x58a2471c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 160h]
        cmp ecx, 3
        ; Exact mapped bytes 7E 16: jle 0x588a7567
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [edx + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x588a7567
        __asm _emit 0x74
        __asm _emit 0x0e
        mov esi, dword ptr [edx + 190h]
        add esi, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x588a7569
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        cmp ecx, 2
        ; Exact mapped bytes 7E 13: jle 0x588a7581
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [edx + 190h], ebp
        ; Exact mapped bytes 74 0B: je 0x588a7581
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [edx + 190h]
        sub edx, -80h
        ; Exact mapped bytes EB 02: jmp 0x588a7583
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push ebp
        push 0ffffff38h
        push esi
        push edx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 6D 3F F7 FF: call 0x5881b500
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x3f
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a7597
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, 0fff0h
        mov dword ptr [edi + 17ch], eax
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 60h
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 9C 56 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], esi
        mov byte ptr [esp + 20h], 5
        mov ebx, 20h
        cmp esi, ebp
        ; Exact mapped bytes 74 38: je 0x588a7601
        __asm _emit 0x74
        __asm _emit 0x38
        push 40h
        push ebp
        push ebp
        push ebp
        push 400h
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 C5 BB 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xbb
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 09 5E 24: or word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5e
        __asm _emit 0x24
        mov dword ptr [esi], 5898c520h
        mov dword ptr [esi + 50h], 400h
        mov dword ptr [esi + 54h], ebp
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebp
        ; Exact mapped bytes EB 02: jmp 0x588a7603
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [edi + 114h], esi
        mov ecx, dword ptr [esi + 40h]
        mov edx, 54h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 56 26: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588a7624
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 2C B9 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb9
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588a7631
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 AF B8 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 16 56 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x56
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 6
        cmp eax, ebp
        ; Exact mapped bytes 74 3B: je 0x588a7683
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D 1C 47 A2 58: mov ecx, dword ptr [0x58a2471c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], ebp
        ; Exact mapped bytes 7E 12: jle 0x588a7668
        __asm _emit 0x7e
        __asm _emit 0x12
        cmp dword ptr [ecx + 18ch], ebp
        ; Exact mapped bytes 74 0A: je 0x588a7668
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x588a766a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 40h
        push ebp
        push 400h
        push edx
        mov edx, dword ptr [edi + 114h]
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 DF A5 E8 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xa5
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a7685
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi + 118h], eax
        ; Exact mapped bytes E8 B7 55 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x55
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 7
        cmp eax, ebp
        ; Exact mapped bytes 74 39: je 0x588a76e0
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D 1C 47 A2 58: mov ecx, dword ptr [0x58a2471c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 16: jle 0x588a76cb
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x588a76cb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 800h
        ; Exact mapped bytes EB 02: jmp 0x588a76cd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        push ebp
        push 36ah
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 C2 6E 06 00: call 0x5890e5a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x6e
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588a76e2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi + 11ch], eax
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [edi + 11ch]
        mov ecx, dword ptr [esi + 40h]
        mov edx, 55h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 56 26: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588a7712
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 3E B8 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588a771f
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 C1 B7 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x00
        push 5ch
        ; Exact mapped bytes E8 28 55 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x55
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 8
        mov ebx, 9
        cmp eax, ebp
        ; Exact mapped bytes 74 46: je 0x588a7781
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D 1C 47 A2 58: mov ecx, dword ptr [0x58a2471c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 25: jle 0x588a776e
        __asm _emit 0x7e
        __asm _emit 0x25
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 1D: je 0x588a776e
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ecx + 190h]
        push ebp
        push 36ah
        add edx, 240h
        push edx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 94 73 F2 FF: call 0x587ceb00
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x73
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 15: jmp 0x588a7783
        __asm _emit 0xeb
        __asm _emit 0x15
        push ebp
        push 36ah
        xor edx, edx
        push edx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 81 73 F2 FF: call 0x587ceb00
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x73
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a7783
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi + 120h], eax
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [edi + 120h]
        mov ecx, dword ptr [esi + 40h]
        mov edx, 55h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 56 26: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588a77b3
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 9D B7 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588a77c0
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 20 B7 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 87 54 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], bl
        cmp eax, ebp
        ; Exact mapped bytes 74 40: je 0x588a7816
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 1C 47 A2 58: mov ecx, dword ptr [0x58a2471c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1dh
        ; Exact mapped bytes 7E 16: jle 0x588a77fb
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x588a77fb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 740h
        ; Exact mapped bytes EB 02: jmp 0x588a77fd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [edi + 114h]
        push 40h
        push ebp
        push 400h
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 8C 6D 06 00: call 0x5890e5a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x6d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588a7818
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, 0fff0h
        mov dword ptr [edi + 188h], eax
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 58h
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 1B 54 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0ah
        cmp eax, ebp
        ; Exact mapped bytes 74 40: je 0x588a7883
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 1C 47 A2 58: mov ecx, dword ptr [0x58a2471c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1eh
        ; Exact mapped bytes 7E 16: jle 0x588a7868
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x588a7868
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 780h
        ; Exact mapped bytes EB 02: jmp 0x588a786a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        push ebp
        push 400h
        push ecx
        mov ecx, dword ptr [edi + 114h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 1F 6D 06 00: call 0x5890e5a0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x6d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588a7885
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, 0fff0h
        mov dword ptr [edi + 18ch], eax
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 58h
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 AE 53 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x53
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0bh
        cmp eax, ebp
        ; Exact mapped bytes 74 40: je 0x588a78f0
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 1C 47 A2 58: mov ecx, dword ptr [0x58a2471c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1fh
        ; Exact mapped bytes 7E 16: jle 0x588a78d5
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x588a78d5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 7c0h
        ; Exact mapped bytes EB 02: jmp 0x588a78d7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        push ebp
        push 400h
        push ecx
        mov ecx, dword ptr [edi + 114h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 B2 6C 06 00: call 0x5890e5a0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588a78f2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, 0fff0h
        mov dword ptr [edi + 190h], eax
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 0ach
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 3E 53 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x53
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0ch
        cmp eax, ebp
        ; Exact mapped bytes 74 48: je 0x588a7968
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 1C 47 A2 58: mov ecx, dword ptr [0x58a2471c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 16: jle 0x588a7945
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x588a7945
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 200h
        ; Exact mapped bytes EB 02: jmp 0x588a7947
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
        push 40h
        push ebp
        push 36ah
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 3A 64 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x64
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a796a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi + 194h], eax
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [edi + 194h]
        mov ecx, dword ptr [esi + 40h]
        mov edx, 55h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 56 26: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588a799a
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 B6 B5 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb5
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588a79a7
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 39 B5 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb5
        __asm _emit 0x05
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 9D 52 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x52
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0dh
        cmp eax, ebp
        ; Exact mapped bytes 74 48: je 0x588a7a09
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 1C 47 A2 58: mov ecx, dword ptr [0x58a2471c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 6
        ; Exact mapped bytes 7E 16: jle 0x588a79e6
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x588a79e6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 180h
        ; Exact mapped bytes EB 02: jmp 0x588a79e8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 40h
        push ebp
        push 36ah
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 99 63 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x63
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a7a0b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi + 198h], eax
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [edi + 198h]
        mov ecx, dword ptr [esi + 40h]
        mov edx, 55h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 56 26: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588a7a3b
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 15 B5 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb5
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588a7a48
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 98 B4 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xb4
        __asm _emit 0x05
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 FC 51 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x51
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0eh
        cmp eax, ebp
        ; Exact mapped bytes 74 48: je 0x588a7aaa
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 1C 47 A2 58: mov ecx, dword ptr [0x58a2471c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 7
        ; Exact mapped bytes 7E 16: jle 0x588a7a87
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x588a7a87
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 1c0h
        ; Exact mapped bytes EB 02: jmp 0x588a7a89
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 40h
        push ebp
        push 36ah
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 F8 62 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x62
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a7aac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi + 19ch], eax
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [edi + 19ch]
        mov ecx, dword ptr [esi + 40h]
        mov edx, 55h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 56 26: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588a7adc
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 74 B4 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xb4
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588a7ae9
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 F7 B3 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xb3
        __asm _emit 0x05
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 5B 51 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x51
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0fh
        cmp eax, ebp
        ; Exact mapped bytes 74 48: je 0x588a7b4b
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D A8 46 A2 58: mov ecx, dword ptr [0x58a246a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 10h
        ; Exact mapped bytes 7E 16: jle 0x588a7b28
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x588a7b28
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 400h
        ; Exact mapped bytes EB 02: jmp 0x588a7b2a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 40h
        push ebp
        push 36ah
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 57 62 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x62
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a7b4d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi + 1a8h], eax
        ; Exact mapped bytes E8 EC 50 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x50
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 10h
        cmp eax, ebp
        ; Exact mapped bytes 74 48: je 0x588a7bba
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D A8 46 A2 58: mov ecx, dword ptr [0x58a246a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 11h
        ; Exact mapped bytes 7E 16: jle 0x588a7b97
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x588a7b97
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 440h
        ; Exact mapped bytes EB 02: jmp 0x588a7b99
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
        push 40h
        push ebp
        push 36ah
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 E8 61 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a7bbc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi + 1ach], eax
        mov eax, dword ptr [edi + 1a8h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi + 1ach]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov esi, dword ptr [edi + 1a8h]
        mov ecx, dword ptr [esi + 40h]
        mov eax, 55h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588a7bfe
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 52 B3 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xb3
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588a7c0b
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 D5 B2 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xb2
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, dword ptr [edi + 1ach]
        mov ecx, 55h
        ; Exact mapped bytes 66 89 4E 26: mov word ptr [esi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 40h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588a7c27
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 29 B3 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xb3
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588a7c34
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 AC B2 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xb2
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esp + 3ch], ebp
        mov dword ptr [esp + 38h], ebp
        lea ebx, [edi + 1a0h]
        push 58h
        ; Exact mapped bytes E8 05 50 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 34h], esi
        mov byte ptr [esp + 20h], 11h
        test esi, esi
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x588a7ce0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 45 A2 58: mov ecx, dword ptr [0x58a24524]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 79 F2 FF: call 0x587cf610
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x79
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 3ch]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 17: jle 0x588a7c8d
        __asm _emit 0x7e
        __asm _emit 0x17
        test ecx, ecx
        ; Exact mapped bytes 7C 13: jl 0x588a7c8d
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x588a7c8d
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esp + 38h]
        lea ebp, [eax + edx]
        ; Exact mapped bytes EB 02: jmp 0x588a7c8f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push 0
        push 0
        push 0
        push 0fah
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 FC B4 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xb4
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi], 5898ca74h
        mov dword ptr [esi + 50h], 0
        mov dword ptr [esi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x588a7ce2
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [esi + 0ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        lea eax, [ebp + 20h]
        mov dword ptr [esi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [esi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [esi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [esi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [esi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x588a7ce2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [ebx], esi
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov esi, dword ptr [ebx]
        mov ecx, dword ptr [esi + 40h]
        mov edx, 59h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 56 26: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a7d0a
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 46 B2 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb2
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a7d17
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 C9 B1 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb1
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        inc dword ptr [esp + 3ch]
        add eax, 40h
        add ebx, 4
        cmp eax, 80h
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 8C 0E FF FF FF: jl 0x588a7c42
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 1a0h]
        push 0fffffeffh
        ; Exact mapped bytes E8 DC AF 05 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 1a4h]
        push 101h
        ; Exact mapped bytes E8 CC AF 05 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        xor ecx, ecx
        mov eax, 40000000h
        mov dword ptr [edi + 98h], ecx
        mov dword ptr [edi + 88h], eax
        mov dword ptr [edi + 84h], eax
        mov dword ptr [esp + 38h], ecx
        mov dword ptr [esp + 30h], 0f3h
        lea esi, [edi + 0d4h]
        mov dword ptr [esp + 34h], 3cch
        mov dword ptr [esp + 3ch], 108h
        nop
        push 0ach
        ; Exact mapped bytes E8 B4 4E 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x4e
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 12h
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x588a7dfa
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 1C 47 A2 58: mov ecx, dword ptr [0x58a2471c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 24h
        ; Exact mapped bytes 7E 17: jle 0x588a7dd0
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588a7dd0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 900h
        ; Exact mapped bytes EB 02: jmp 0x588a7dd2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebx, dword ptr [esp + 3ch]
        push 3e8h
        push 5
        lea ecx, [ebx - 0bh]
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
        push edi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 A8 5F EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x5f
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x588a7e00
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 3ch]
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi - 20h], eax
        ; Exact mapped bytes E8 0C AF 05 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        mov ebp, dword ptr [esi - 20h]
        mov ecx, dword ptr [ebp + 40h]
        mov edx, 4bh
        ; Exact mapped bytes 66 89 55 26: mov word ptr [ebp + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a7e2d
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 23 B1 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xb1
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a7e3a
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 A6 B0 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 0A 4E 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x4e
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 13h
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x588a7e94
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 94 46 A2 58: mov ecx, dword ptr [0x58a24694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 7E 1F: jle 0x588a7e82
        __asm _emit 0x7e
        __asm _emit 0x1f
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 16: je 0x588a7e82
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ecx + 190h]
        push 19h
        push ebx
        push 5
        push edx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 80 F2 05 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf2
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x588a7e96
        __asm _emit 0xeb
        __asm _emit 0x14
        push 19h
        push ebx
        push 5
        xor edx, edx
        push edx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 6E F2 05 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf2
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588a7e96
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi], eax
        ; Exact mapped bytes E8 77 AE 05 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 100h
        ; Exact mapped bytes E8 2B AE 05 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ebp, dword ptr [esi]
        mov ecx, dword ptr [ebp + 40h]
        mov eax, 7d0h
        ; Exact mapped bytes 66 89 45 26: mov word ptr [ebp + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a7ee3
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 6D B0 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a7ef0
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 F0 AF 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        mov ebp, dword ptr [esi]
        mov ecx, 4bh
        ; Exact mapped bytes 66 89 4D 26: mov word ptr [ebp + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a7f08
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 48 B0 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a7f15
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 CB AF 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 2F 4D 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x4d
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 14h
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a7f75
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 25: jle 0x588a7f63
        __asm _emit 0x7e
        __asm _emit 0x25
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 1C: je 0x588a7f63
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ecx + 190h]
        push 2ch
        push ebx
        push 5
        add edx, 0b80h
        push edx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 9F F1 05 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xf1
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x588a7f77
        __asm _emit 0xeb
        __asm _emit 0x14
        push 2ch
        push ebx
        push 5
        xor edx, edx
        push edx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 8D F1 05 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xf1
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588a7f77
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 20h], eax
        ; Exact mapped bytes E8 95 AD 05 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xad
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 20h]
        push 100h
        ; Exact mapped bytes E8 48 AD 05 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xad
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 20h]
        mov edx, 0bfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 20h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ebp, dword ptr [esi + 20h]
        mov ecx, dword ptr [ebp + 40h]
        mov edx, 7d0h
        ; Exact mapped bytes 66 89 55 26: mov word ptr [ebp + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a7fc9
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 87 AF 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a7fd6
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 0A AF 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 20h]
        mov ecx, dword ptr [ebp + 40h]
        mov eax, 4bh
        ; Exact mapped bytes 66 89 45 26: mov word ptr [ebp + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a7fef
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 61 AF 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a7ffc
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 E4 AE 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        push 184h
        ; Exact mapped bytes E8 48 4C 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x4c
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov byte ptr [esp + 20h], 15h
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x588a802b
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push 35h
        push ebx
        push 0
        push edi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 39 1D FD FF: call 0x58879d60
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ebp, eax
        ; Exact mapped bytes EB 02: jmp 0x588a802d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, 41ah
        mov dword ptr [esi + 88h], ebp
        ; Exact mapped bytes 66 89 4D 26: mov word ptr [ebp + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 40h]
        mov byte ptr [esp + 20h], 0
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a804e
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 02 AF 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a805b
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 85 AE 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ebx, dword ptr [esi + 88h]
        mov ecx, dword ptr [ebx + 40h]
        mov eax, 4bh
        ; Exact mapped bytes 66 89 43 26: mov word ptr [ebx + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a8086
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 CA AE 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a8093
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 4D AE 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 B4 4B 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x4b
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 2ch], ebp
        mov byte ptr [esp + 20h], 16h
        test ebp, ebp
        ; Exact mapped bytes 0F 84 7D 00 00 00: je 0x588a812d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 1C 47 A2 58: mov eax, dword ptr [0x58a2471c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 30h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 1C: jle 0x588a80dd
        __asm _emit 0x7e
        __asm _emit 0x1c
        test ecx, ecx
        ; Exact mapped bytes 7C 18: jl 0x588a80dd
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0F: je 0x588a80dd
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [eax + 18ch]
        mov edx, dword ptr [esp + 34h]
        mov ebx, dword ptr [edx + ecx]
        ; Exact mapped bytes EB 02: jmp 0x588a80df
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 3e9h
        push 0
        push 0
        push 0
        push 0fch
        push edi
        mov ecx, ebp
        ; Exact mapped bytes E8 A9 B0 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp], 5898c55ch
        mov dword ptr [ebp + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x588a812f
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
        ; Exact mapped bytes EB 02: jmp 0x588a812f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, 4bh
        mov dword ptr [esi + 10ch], ebp
        ; Exact mapped bytes 66 89 4D 26: mov word ptr [ebp + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 40h]
        mov byte ptr [esp + 20h], 0
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a8150
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 00 AE 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a815d
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 83 AD 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xad
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10ch]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        cmp dword ptr [esp + 38h], 4
        ; Exact mapped bytes 7C 2A: jl 0x588a819d
        __asm _emit 0x7c
        __asm _emit 0x2a
        mov eax, dword ptr [esi - 20h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 20h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 10ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esp + 3ch]
        inc dword ptr [esp + 38h]
        add dword ptr [esp + 34h], 14h
        add dword ptr [esp + 30h], 5
        add eax, 50h
        add esi, 4
        cmp eax, 388h
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes 0F 8C CC FB FF FF: jl 0x588a7d90
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [edi + 1bch]
        mov dword ptr [esp + 38h], 0bh
        mov ebx, 2
        mov dword ptr [esp + 3ch], 2ch
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 30h], 3
        ; Exact mapped bytes EB 03: jmp 0x588a81f0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588A81F0 .. +0x87C bytes.
extern "C" __declspec(naked) void FUN_588a7310_segment_01() {
    __asm {
        push 54h
        ; Exact mapped bytes E8 57 4A 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x4a
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], esi
        mov byte ptr [esp + 20h], 17h
        test esi, esi
        ; Exact mapped bytes 74 7C: je 0x588a8285
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes A1 64 47 A2 58: mov eax, dword ptr [0x58a24764]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 38h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 1C: jle 0x588a8236
        __asm _emit 0x7e
        __asm _emit 0x1c
        test ecx, ecx
        ; Exact mapped bytes 7C 18: jl 0x588a8236
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0F: je 0x588a8236
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [esp + 3ch]
        mov ebp, dword ptr [eax + edx]
        ; Exact mapped bytes EB 02: jmp 0x588a8238
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 3e9h
        push 0
        push 0
        push ebx
        push 109h
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 51 AF 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x588a8287
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        add ebp, 18h
        mov dword ptr [esi + 10h], edx
        mov eax, dword ptr [ebp]
        mov dword ptr [esi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [esi + 18h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [esi + 1ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [esi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x588a8287
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, dword ptr [esp + 34h]
        add dword ptr [esp + 3ch], 4
        mov dword ptr [eax], esi
        add eax, 4
        mov dword ptr [esp + 34h], eax
        mov eax, 1
        add dword ptr [esp + 38h], eax
        add ebx, 0ch
        sub dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 0F 85 3C FF FF FF: jne 0x588a81f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 93 49 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x49
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], esi
        mov byte ptr [esp + 20h], 18h
        test esi, esi
        ; Exact mapped bytes 74 72: je 0x588a833f
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes A1 64 47 A2 58: mov eax, dword ptr [0x58a24764]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0eh
        ; Exact mapped bytes 7E 14: jle 0x588a82ef
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x588a82ef
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [ecx + 38h]
        ; Exact mapped bytes EB 02: jmp 0x588a82f1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 3e9h
        push 0
        push 0
        push 2
        push 11bh
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 97 AE 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x588a8341
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [esi + 0ch], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [esi + 10h], eax
        mov ecx, dword ptr [ebp + 18h]
        lea eax, [ebp + 18h]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [esi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x588a8341
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        lea eax, [edi + 1cch]
        mov byte ptr [esp + 20h], 0
        mov dword ptr [edi + 1c8h], esi
        mov dword ptr [esp + 38h], 0fh
        mov ebx, 2
        mov dword ptr [esp + 3ch], 3ch
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 30h], 3
        push 54h
        ; Exact mapped bytes E8 D4 48 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x48
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], esi
        mov byte ptr [esp + 20h], 19h
        test esi, esi
        ; Exact mapped bytes 74 7C: je 0x588a8408
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes A1 64 47 A2 58: mov eax, dword ptr [0x58a24764]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 38h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 1C: jle 0x588a83b9
        __asm _emit 0x7e
        __asm _emit 0x1c
        test ecx, ecx
        ; Exact mapped bytes 7C 18: jl 0x588a83b9
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0F: je 0x588a83b9
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [eax + 18ch]
        mov edx, dword ptr [esp + 3ch]
        mov ebp, dword ptr [edx + ecx]
        ; Exact mapped bytes EB 02: jmp 0x588a83bb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 3e9h
        push 0
        push 0
        push ebx
        push 12dh
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 CE AD 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xad
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x588a840a
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [esi + 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        add ebp, 18h
        mov dword ptr [esi + 10h], ecx
        mov edx, dword ptr [ebp]
        mov dword ptr [esi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [esi + 18h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [esi + 1ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [esi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x588a840a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, dword ptr [esp + 34h]
        add dword ptr [esp + 3ch], 4
        mov dword ptr [eax], esi
        add eax, 4
        mov dword ptr [esp + 34h], eax
        mov eax, 1
        add dword ptr [esp + 38h], eax
        add ebx, 0ch
        sub dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 0F 85 3C FF FF FF: jne 0x588a8373
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 10 48 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], esi
        mov byte ptr [esp + 20h], 1ah
        test esi, esi
        ; Exact mapped bytes 74 72: je 0x588a84c2
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes A1 64 47 A2 58: mov eax, dword ptr [0x58a24764]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 12h
        ; Exact mapped bytes 7E 14: jle 0x588a8472
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x588a8472
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 48h]
        ; Exact mapped bytes EB 02: jmp 0x588a8474
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 3e9h
        push 0
        push 0
        push 2
        push 11bh
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 14 AD 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xad
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x588a84c4
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        add ebp, 18h
        mov dword ptr [esi + 10h], edx
        mov eax, dword ptr [ebp]
        mov dword ptr [esi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [esi + 18h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [esi + 1ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [esi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x588a84c4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov byte ptr [esp + 20h], 0
        mov dword ptr [edi + 1d8h], esi
        lea ebp, [edi + 1bch]
        mov ebx, 8
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp]
        mov ecx, 4bh
        ; Exact mapped bytes 66 89 4E 26: mov word ptr [esi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a84f9
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 57 AA 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xaa
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588a8506
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 DA A9 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa9
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        add ebp, 4
        sub ebx, 1
        ; Exact mapped bytes 75 C6: jne 0x588a84e0
        __asm _emit 0x75
        __asm _emit 0xc6
        push 0ach
        mov byte ptr [edi + 1dch], bl
        ; Exact mapped bytes E8 24 47 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x47
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1bh
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a8580
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D 94 46 A2 58: mov ecx, dword ptr [0x58a24694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 14h
        ; Exact mapped bytes 7E 16: jle 0x588a855f
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x588a855f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 500h
        ; Exact mapped bytes EB 02: jmp 0x588a8561
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 40h
        push 0
        push 0
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 22 58 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x58
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a8582
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi + 12ch], eax
        ; Exact mapped bytes E8 B7 46 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1ch
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x588a85ee
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D 94 46 A2 58: mov ecx, dword ptr [0x58a24694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 14h
        ; Exact mapped bytes 7E 17: jle 0x588a85cd
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588a85cd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 500h
        ; Exact mapped bytes EB 02: jmp 0x588a85cf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 40h
        push 0
        push 0
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 B4 57 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a85f0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [edi + 130h], eax
        mov ebp, 0ch
        mov ebx, 300h
        lea esi, [edi + 134h]
        mov dword ptr [esp + 3ch], 8
        push 0ach
        ; Exact mapped bytes E8 31 46 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x46
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 1dh
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x588a8673
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D 1C 47 A2 58: mov ecx, dword ptr [0x58a2471c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebp
        ; Exact mapped bytes 7E 17: jle 0x588a8652
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebp, ebp
        ; Exact mapped bytes 7C 13: jl 0x588a8652
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0A: je 0x588a8652
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx + 190h]
        add edx, ebx
        ; Exact mapped bytes EB 02: jmp 0x588a8654
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 40h
        push 0
        push 0
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 2F 57 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x57
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a8675
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi], eax
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        add ebx, 40h
        add esi, 4
        inc ebp
        sub dword ptr [esp + 3ch], 1
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 75 80: jne 0x588a8613
        __asm _emit 0x75
        __asm _emit 0x80
        push 5ch
        ; Exact mapped bytes E8 B4 45 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        xor ebx, ebx
        mov byte ptr [esp + 20h], 1eh
        cmp eax, ebx
        ; Exact mapped bytes 74 0C: je 0x588a86b8
        __asm _emit 0x74
        __asm _emit 0x0c
        push ebx
        push ebx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 1A 26 EB FF: call 0x5875acd0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x26
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588a86ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, 0fff0h
        mov dword ptr [edi + 154h], eax
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 6ch
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 79 45 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x45
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1fh
        cmp eax, ebx
        ; Exact mapped bytes 74 3B: je 0x588a8720
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D 1C 47 A2 58: mov ecx, dword ptr [0x58a2471c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1ch
        ; Exact mapped bytes 7E 16: jle 0x588a870a
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x588a870a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 700h
        ; Exact mapped bytes EB 02: jmp 0x588a870c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 4bh
        push 5
        push 381h
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 F2 08 06 00: call 0x58909010
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588a8722
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi + 184h], eax
        ; Exact mapped bytes E8 E7 A5 05 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa5
        __asm _emit 0x05
        __asm _emit 0x00
        push 20h
        ; Exact mapped bytes E8 0E 45 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x45
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 20h
        cmp eax, ebx
        ; Exact mapped bytes 74 36: je 0x588a8786
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D D8 46 A2 58: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 170h], 2
        ; Exact mapped bytes 7E 1B: jle 0x588a877a
        __asm _emit 0x7e
        __asm _emit 0x1b
        cmp dword ptr [ecx + 194h], ebx
        ; Exact mapped bytes 74 13: je 0x588a877a
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ecx + 194h]
        mov ecx, dword ptr [ecx + 8]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 48 F3 05 00: call 0x58907ac0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf3
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x588a8788
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 3C F3 05 00: call 0x58907ac0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xf3
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588a8788
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi + 0b0h], eax
        ; Exact mapped bytes E8 B4 44 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x44
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], esi
        mov byte ptr [esp + 20h], 21h
        cmp esi, ebx
        ; Exact mapped bytes 74 72: je 0x588a881e
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes A1 1C 47 A2 58: mov eax, dword ptr [0x58a2471c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 1a5h
        ; Exact mapped bytes 7E 16: jle 0x588a87d3
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x588a87d3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [edx + 694h]
        ; Exact mapped bytes EB 02: jmp 0x588a87d5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 55h
        push ebx
        push ebx
        push 6
        push 0bch
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 B8 A9 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xa9
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2B: je 0x588a8820
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [esi + 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        add ebp, 18h
        mov dword ptr [esi + 10h], ecx
        mov edx, dword ptr [ebp]
        mov dword ptr [esi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [esi + 18h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [esi + 1ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [esi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x588a8820
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi + 1b0h], esi
        ; Exact mapped bytes E8 19 44 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x44
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 22h
        cmp eax, ebx
        ; Exact mapped bytes 74 3E: je 0x588a8883
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cdh
        ; Exact mapped bytes 7E 16: jle 0x588a886d
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x588a886d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 3340h
        ; Exact mapped bytes EB 02: jmp 0x588a886f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 1ah
        push 0cah
        push 4
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 7F E8 05 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588a8885
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi + 1b8h], eax
        ; Exact mapped bytes E8 84 A4 05 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 1b8h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [edi + 1b8h]
        mov ecx, dword ptr [esi + 40h]
        mov edx, 56h
        ; Exact mapped bytes 66 89 56 26: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x588a88c7
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 89 A6 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xa6
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x588a88d4
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 0C A6 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xa6
        __asm _emit 0x05
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 70 43 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x43
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 23h
        cmp eax, ebx
        ; Exact mapped bytes 74 44: je 0x588a8932
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cch
        ; Exact mapped bytes 7E 16: jle 0x588a8916
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x588a8916
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 3300h
        ; Exact mapped bytes EB 02: jmp 0x588a8918
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [edi + 1b8h]
        push 1ah
        push 0cah
        push 4
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 D0 E7 05 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xe7
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588a8934
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [edi + 1b4h], eax
        ; Exact mapped bytes E8 D5 A3 05 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xa3
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 1b4h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        xor eax, eax
        push 90h
        ; Exact mapped bytes 66 89 87 9C 00 00 00: mov word ptr [edi + 0x9c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 0a0h], ebx
        mov dword ptr [edi + 0a4h], ebx
        mov dword ptr [edi + 0a8h], ebx
        mov dword ptr [edi + 200h], ebx
        ; Exact mapped bytes E8 C9 42 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x42
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 24h
        cmp eax, ebx
        ; Exact mapped bytes 74 33: je 0x588a89c8
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [edi + 158h]
        push 10101h
        push ebx
        push 40ff40h
        push 190h
        push 3e8h
        push 32h
        push 24eh
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 0A F6 05 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588a89ca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi + 204h], eax
        mov dword ptr [eax + 5ch], 0eh
        mov eax, dword ptr [edi + 204h]
        mov ecx, dword ptr [eax + 14h]
        add ecx, 12ch
        mov dword ptr [eax + 1ch], ecx
        mov eax, dword ptr [edi + 204h]
        mov edx, dword ptr [eax + 5ch]
        mov ecx, dword ptr [eax + 18h]
        lea edx, [ecx + edx*8 + 5]
        mov dword ptr [eax + 20h], edx
        mov eax, dword ptr [edi + 204h]
        mov dword ptr [eax + 6ch], 0fefefeh
        mov dword ptr [eax + 70h], ebx
        mov esi, dword ptr [edi + 204h]
        mov ecx, dword ptr [esi + 40h]
        mov eax, 40h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x588a8a2d
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 23 A5 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa5
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x588a8a3a
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 A6 A4 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 204h]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi + 204h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
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
