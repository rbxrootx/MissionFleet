// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 5371 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58799EB0 .. +0x9DD bytes.
extern "C" __declspec(naked) void FUN_58799eb0_segment_00() {
    __asm {
        push -1
        push 58980713h
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
        mov ebp, dword ptr [esp + 30h]
        mov ebx, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push ebp
        push ebx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A0 92 16 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x92
        __asm _emit 0x16
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
        mov dword ptr [esi + 54h], ebp
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], eax
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0e5ffh
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov dword ptr [esi], 58998080h
        push 54h
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes E8 08 2D 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x2d
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 1
        test edi, edi
        ; Exact mapped bytes 74 22: je 0x58799f7a
        __asm _emit 0x74
        __asm _emit 0x22
        push 1f4h
        push 0
        push 0
        push ebp
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 35 92 16 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x92
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x58799f7c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 78h], edi
        ; Exact mapped bytes E8 90 8D 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x8d
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 78h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 AB 2C 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x2c
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 2
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x58799ff0
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 0c4h
        ; Exact mapped bytes 7E 17: jle 0x58799fdc
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58799fdc
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 310h]
        ; Exact mapped bytes EB 02: jmp 0x58799fde
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 1feh
        push ebp
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 72 7C F9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x7c
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58799ff2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0e6h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes E8 DA 8C 16 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x8c
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 74h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 29 2C 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x2c
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 3
        test edi, edi
        ; Exact mapped bytes 74 24: je 0x5879a05b
        __asm _emit 0x74
        __asm _emit 0x24
        push 208h
        push 0
        push 0
        push ebp
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 56 91 16 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x91
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x5879a05d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 6ch], ecx
        ; Exact mapped bytes E8 B1 8C 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x8c
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 CC 2B 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x2b
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 4
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x5879a0cf
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 0c5h
        ; Exact mapped bytes 7E 17: jle 0x5879a0bb
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5879a0bb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 314h]
        ; Exact mapped bytes EB 02: jmp 0x5879a0bd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 208h
        push ebp
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 93 7B F9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x7b
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5879a0d1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 84h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes E8 6B 2B 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x2b
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 5
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5879a108
        __asm _emit 0x74
        __asm _emit 0x15
        push 212h
        push ebp
        push ebx
        push 0
        push esi
        push 20h
        mov ecx, eax
        ; Exact mapped bytes E8 8A 47 FD FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5879a10a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 FF 8B 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x8b
        __asm _emit 0x16
        __asm _emit 0x00
        push 84h
        ; Exact mapped bytes E8 23 2B 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x2b
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 6
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5879a150
        __asm _emit 0x74
        __asm _emit 0x15
        push 211h
        push ebp
        push ebx
        push 0
        push esi
        push 20h
        mov ecx, eax
        ; Exact mapped bytes E8 42 47 FD FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5879a152
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 B7 8B 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x8b
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 84h]
        mov edx, 0bfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 C0 2A 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x2a
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 7
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x5879a1e1
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 11bh
        ; Exact mapped bytes 7E 17: jle 0x5879a1c7
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5879a1c7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 46ch]
        ; Exact mapped bytes EB 02: jmp 0x5879a1c9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebp + 0ddh]
        push edx
        lea edx, [ebx + 26h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 81 7A F9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x7a
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5879a1e3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0c8h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1c4h], eax
        ; Exact mapped bytes E8 E6 8A 16 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x8a
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1c4h]
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1c4h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1c4h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edi, dword ptr [esi + 1c4h]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 226h
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879a243
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0D 8D 16 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x8d
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879a250
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 90 8C 16 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x16
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 F7 29 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x29
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 8
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x5879a2aa
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 11ah
        ; Exact mapped bytes 7E 17: jle 0x5879a290
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5879a290
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [ecx + 468h]
        ; Exact mapped bytes EB 02: jmp 0x5879a292
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 40h
        lea ecx, [ebp + 0ddh]
        push ecx
        lea ecx, [ebx + 26h]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B8 79 F9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x79
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5879a2ac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1c8h], eax
        ; Exact mapped bytes E8 5D 8A 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x8a
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1c8h]
        mov edx, 0bfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1c8h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1c8h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov edi, dword ptr [esi + 1c8h]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 60fh
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879a30c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 44 8C 16 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x8c
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879a319
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C7 8B 16 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x8b
        __asm _emit 0x16
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 2B 29 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x29
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        xor edi, edi
        mov byte ptr [esp + 20h], 9
        cmp eax, edi
        ; Exact mapped bytes 74 4D: je 0x5879a382
        __asm _emit 0x74
        __asm _emit 0x4d
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 16: jle 0x5879a35a
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], edi
        ; Exact mapped bytes 74 0E: je 0x5879a35a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 100h
        ; Exact mapped bytes EB 02: jmp 0x5879a35c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 3e8h
        push ebp
        lea ecx, [ebx + 226h]
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
        ; Exact mapped bytes E8 20 3A FC FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x3a
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5879a384
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes E8 B5 28 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x28
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0ah
        cmp eax, edi
        ; Exact mapped bytes 74 53: je 0x5879a3fc
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 26h
        ; Exact mapped bytes 7E 16: jle 0x5879a3ce
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], edi
        ; Exact mapped bytes 74 0E: je 0x5879a3ce
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 980h
        ; Exact mapped bytes EB 02: jmp 0x5879a3d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 3e8h
        lea ecx, [ebp + 159h]
        push ecx
        lea ecx, [ebx + 186h]
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
        ; Exact mapped bytes E8 A6 39 FC FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x39
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5879a3fe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 3B 28 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x28
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0bh
        cmp eax, edi
        ; Exact mapped bytes 74 53: je 0x5879a476
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 25h
        ; Exact mapped bytes 7E 16: jle 0x5879a448
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], edi
        ; Exact mapped bytes 74 0E: je 0x5879a448
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 940h
        ; Exact mapped bytes EB 02: jmp 0x5879a44a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 3e8h
        lea ecx, [ebp + 159h]
        push ecx
        lea ecx, [ebx + 1e0h]
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
        ; Exact mapped bytes E8 2C 39 FC FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x39
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5879a478
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 88h]
        push 101h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes E8 8D 88 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        push 101h
        ; Exact mapped bytes E8 7D 88 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x88
        __asm _emit 0x16
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 A1 27 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x27
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0ch
        cmp eax, edi
        ; Exact mapped bytes 74 50: je 0x5879a50d
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1eh
        ; Exact mapped bytes 7E 16: jle 0x5879a4e2
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], edi
        ; Exact mapped bytes 74 0E: je 0x5879a4e2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 780h
        ; Exact mapped bytes EB 02: jmp 0x5879a4e4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 3e8h
        lea edx, [ebp + 0ddh]
        push edx
        lea edx, [ebx + 14h]
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
        ; Exact mapped bytes E8 95 38 FC FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5879a50f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes E8 2A 27 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x27
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0dh
        cmp eax, edi
        ; Exact mapped bytes 74 50: je 0x5879a584
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1fh
        ; Exact mapped bytes 7E 16: jle 0x5879a559
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], edi
        ; Exact mapped bytes 74 0E: je 0x5879a559
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 7c0h
        ; Exact mapped bytes EB 02: jmp 0x5879a55b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 3e8h
        lea edx, [ebp + 13bh]
        push edx
        lea edx, [ebx + 14h]
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
        ; Exact mapped bytes E8 1E 38 FC FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x38
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5879a586
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 94h]
        push 101h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 98h], eax
        ; Exact mapped bytes E8 7F 87 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x87
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        push 101h
        ; Exact mapped bytes E8 6F 87 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x87
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 98h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 78 26 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x26
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0eh
        cmp eax, edi
        ; Exact mapped bytes 74 50: je 0x5879a636
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 20h
        ; Exact mapped bytes 7E 16: jle 0x5879a60b
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], edi
        ; Exact mapped bytes 74 0E: je 0x5879a60b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 800h
        ; Exact mapped bytes EB 02: jmp 0x5879a60d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 3e8h
        lea edx, [ebp + 0e9h]
        push edx
        lea edx, [ebx + 15h]
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
        ; Exact mapped bytes E8 6C 37 FC FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x37
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5879a638
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 7ch], eax
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 7ch]
        push 101h
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 CA 86 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7ch]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 78h
        mov dword ptr [esi + 0a0h], edi
        mov dword ptr [esi + 9ch], edi
        ; Exact mapped bytes E8 D9 25 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x25
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0fh
        cmp eax, edi
        ; Exact mapped bytes 74 0C: je 0x5879a691
        __asm _emit 0x74
        __asm _emit 0x0c
        push ebp
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D1 5D 00 00: call 0x587a0460
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5879a693
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ebp, dword ptr [esp + 30h]
        mov ecx, 0ffffh
        mov dword ptr [esi + 2e8h], eax
        mov eax, ecx
        ; Exact mapped bytes 66 89 86 9C 02 00 00: mov word ptr [esi + 0x29c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        or eax, 0ffffffffh
        mov dword ptr [esi + 2c0h], eax
        mov dword ptr [esi + 2bch], eax
        mov dword ptr [esi + 2ach], eax
        mov dword ptr [esi + 2a8h], eax
        mov dword ptr [esi + 2a4h], eax
        mov dword ptr [esi + 2a0h], eax
        xor eax, eax
        xor edx, edx
        ; Exact mapped bytes 66 89 96 B2 02 00 00: mov word ptr [esi + 0x2b2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 B0 02 00 00: mov word ptr [esi + 0x2b0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 270h], eax
        mov dword ptr [esi + 2f4h], eax
        mov dword ptr [esi + 2f8h], eax
        mov dword ptr [esi + 2f0h], eax
        mov edx, ecx
        lea eax, [esi + 1ach]
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 300h], 1
        mov dword ptr [esi + 2b8h], ecx
        mov dword ptr [esi + 2b4h], ecx
        ; Exact mapped bytes 66 89 96 C6 02 00 00: mov word ptr [esi + 0x2c6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E C4 02 00 00: mov word ptr [esi + 0x2c4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 3ch], eax
        add ebp, 9dh
        mov dword ptr [esp + 38h], 3
        nop
        push 70h
        ; Exact mapped bytes E8 07 25 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x25
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 20h], 10h
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x5879a78b
        __asm _emit 0x74
        __asm _emit 0x34
        push 3c3c3ch
        push 0
        push 0c8c8c8h
        lea ecx, [ebp + 0ch]
        push ecx
        lea edx, [ebx + 258h]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        lea ecx, [ebx + 15eh]
        push ecx
        push edx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F9 8A F9 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x8a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x5879a78d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 3ch]
        mov ecx, 320h
        mov dword ptr [eax], edi
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 20h], 0
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879a7ae
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A2 87 16 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x87
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879a7bb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 25 87 16 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x87
        __asm _emit 0x16
        __asm _emit 0x00
        add dword ptr [esp + 3ch], 4
        add ebp, 0ch
        sub dword ptr [esp + 38h], 1
        ; Exact mapped bytes 0F 85 72 FF FF FF: jne 0x5879a740
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 90h
        ; Exact mapped bytes E8 76 24 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x24
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 11h
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x5879a81f
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [esp + 30h]
        push 0
        push 0
        push 0ffffffh
        lea edx, [ecx + 148h]
        push edx
        lea edx, [ebx + 0ddh]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add ecx, 0e1h
        push ecx
        lea ecx, [ebx + 28h]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B3 D7 16 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xd7
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5879a821
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0b0h], eax
        mov dword ptr [eax + 5ch], 0dh
        mov eax, dword ptr [esi + 0b0h]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [eax + 18h]
        lea ecx, [edx + ecx*8]
        mov dword ptr [eax + 20h], ecx
        mov edi, dword ptr [esi + 0b0h]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879a861
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EF 86 16 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879a86e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 72 86 16 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        lea ebp, [esi + 0b4h]
        mov dword ptr [esp + 3ch], 7
        ; Exact mapped bytes EB 03: jmp 0x5879a890
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879A890 .. +0xB1E bytes.
extern "C" __declspec(naked) void FUN_58799eb0_segment_01() {
    __asm {
        push 90h
        ; Exact mapped bytes E8 B4 23 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x23
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 12h
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x5879a8e4
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [esp + 30h]
        push 0
        push 0
        push 0ffffffh
        lea edx, [ecx + 148h]
        push edx
        lea edx, [ebx + 25dh]
        push edx
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add ecx, 0e1h
        push ecx
        lea ecx, [ebx + 0e2h]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 EE D6 16 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xd6
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5879a8e6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        mov dword ptr [eax + 5ch], 0dh
        mov eax, dword ptr [ebp]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [eax + 18h]
        lea ecx, [edx + ecx*8]
        mov dword ptr [eax + 20h], ecx
        mov edi, dword ptr [ebp]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879a91d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 33 86 16 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879a92a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B6 85 16 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        add ebp, 4
        sub dword ptr [esp + 3ch], 1
        ; Exact mapped bytes 0F 85 4C FF FF FF: jne 0x5879a890
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 70h
        ; Exact mapped bytes E8 03 23 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x23
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 13h
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x5879a990
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [esp + 30h]
        push 1
        push 0
        push 0ffffffh
        lea edx, [ecx + 6eh]
        push edx
        lea edx, [ebx + 1f4h]
        push edx
        add ecx, 50h
        push ecx
        ; Exact mapped bytes 8B 0D 44 45 A2 58: mov ecx, dword ptr [0x58a24544]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add ebx, 14h
        push ebx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F4 88 F9 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x88
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x5879a992
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
        ; Exact mapped bytes 74 06: je 0x5879a9b3
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9D 85 16 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879a9c0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 20 85 16 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 30h]
        lea ebx, [esi + 0dch]
        add ebp, 2ah
        mov dword ptr [esp + 3ch], 30h
        push 184h
        ; Exact mapped bytes E8 6F 22 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x22
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 14h
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x5879aa24
        __asm _emit 0x74
        __asm _emit 0x35
        push 0
        push 0
        push 0ffffffh
        lea ecx, [ebp + 10h]
        push ecx
        mov ecx, dword ptr [esp + 3ch]
        lea edx, [ecx + 258h]
        push edx
        push ebp
        add ecx, 1bdh
        push ecx
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 00 4A FC FF: call 0x5875f420
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x5879aa26
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebx], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879aa43
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0D 85 16 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879aa50
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 90 84 16 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        add ebx, 4
        add ebp, 9
        sub dword ptr [esp + 3ch], 1
        mov dword ptr [eax + 5ch], 10h
        ; Exact mapped bytes 0F 85 6B FF FF FF: jne 0x5879a9d5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 30h]
        mov ebp, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esi + 18ch]
        lea eax, [ebx + 6ah]
        push eax
        lea edi, [ebp + 52h]
        push edi
        ; Exact mapped bytes E8 0B 88 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x88
        __asm _emit 0x16
        __asm _emit 0x00
        lea ecx, [ebx + 77h]
        push ecx
        mov ecx, dword ptr [esi + 190h]
        push edi
        ; Exact mapped bytes E8 FB 87 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x87
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 194h]
        lea edx, [ebx + 8eh]
        push edx
        push edi
        ; Exact mapped bytes E8 E8 87 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        lea eax, [ebx + 9ch]
        push eax
        push edi
        ; Exact mapped bytes E8 D5 87 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x87
        __asm _emit 0x16
        __asm _emit 0x00
        push 184h
        ; Exact mapped bytes E8 89 21 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x21
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 15h
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x5879ab09
        __asm _emit 0x74
        __asm _emit 0x34
        push 0
        push 0
        push 0dcdcdch
        lea ecx, [ebx + 8fh]
        push ecx
        lea edx, [ebp + 0edh]
        push edx
        lea ecx, [ebx + 67h]
        push ecx
        ; Exact mapped bytes 8B 0D 48 45 A2 58: mov ecx, dword ptr [0x58a24548]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 3ch]
        push edx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 1B 49 FC FF: call 0x5875f420
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x49
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x5879ab0b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 19ch], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879ab2c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 24 84 16 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879ab39
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A7 83 16 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x83
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 19ch]
        push 70h
        mov dword ptr [eax + 5ch], 1eh
        ; Exact mapped bytes E8 01 21 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x21
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 16h
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x5879ab94
        __asm _emit 0x74
        __asm _emit 0x37
        push 1
        push 0
        push 0dcdcdch
        lea ecx, [ebx + 172h]
        push ecx
        lea edx, [ebp + 1b8h]
        push edx
        lea ecx, [ebx + 165h]
        push ecx
        ; Exact mapped bytes 8B 0D 3C 45 A2 58: mov ecx, dword ptr [0x58a2453c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 0ah]
        push edx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F0 86 F9 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x86
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x5879ab96
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 1a8h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879abb7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 99 83 16 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x83
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879abc4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 1C 83 16 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x83
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1a8h]
        push 70h
        mov dword ptr [eax + 5ch], 14h
        ; Exact mapped bytes E8 76 20 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x20
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 17h
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x5879ac1f
        __asm _emit 0x74
        __asm _emit 0x37
        push 1
        push 0
        push 0dcdcdch
        lea ecx, [ebx + 96h]
        push ecx
        lea edx, [ebp + 240h]
        push edx
        lea ecx, [ebx + 75h]
        push ecx
        ; Exact mapped bytes 8B 0D 3C 45 A2 58: mov ecx, dword ptr [0x58a2453c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [ebp + 1ach]
        push edx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 65 86 F9 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x86
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x5879ac21
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0d8h], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 320h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879ac42
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0E 83 16 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x83
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879ac4f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 91 82 16 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x82
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d8h]
        push 90h
        mov dword ptr [eax + 5ch], 14h
        ; Exact mapped bytes E8 E8 1F 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 18h
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x5879aca7
        __asm _emit 0x74
        __asm _emit 0x31
        push 0
        push 0ffffffh
        lea ecx, [ebx + 82h]
        push ecx
        lea edx, [ebp + 226h]
        push edx
        ; Exact mapped bytes 8B 15 3C 45 A2 58: mov edx, dword ptr [0x58a2453c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebx + 61h]
        push ecx
        add ebp, 1c6h
        push ebp
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 FB 0F 17 00: call 0x5890bca0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x0f
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5879aca9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 1a0h], eax
        ; Exact mapped bytes 8B 15 A4 46 A2 58: mov edx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [edx + 160h]
        cmp edi, 0c9h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 7E 17: jle 0x5879acdf
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [edx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5879acdf
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [edx + 190h]
        add ecx, 3240h
        ; Exact mapped bytes EB 02: jmp 0x5879ace1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        cmp edi, 0c8h
        ; Exact mapped bytes 7E 17: jle 0x5879ad00
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [edx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5879ad00
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [edx + 190h]
        add edx, 3200h
        ; Exact mapped bytes EB 02: jmp 0x5879ad02
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 F5 0B 17 00: call 0x5890b900
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x0b
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1a0h]
        push 0
        ; Exact mapped bytes E8 28 0F 17 00: call 0x5890bc40
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x0f
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1a0h]
        mov ebp, 0ffh
        mov dword ptr [eax + 74h], ebp
        mov eax, dword ptr [esi + 1a0h]
        mov dword ptr [eax + 70h], 0
        mov edi, dword ptr [esi + 1a0h]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 320h
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879ad4f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 01 82 16 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x82
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879ad5c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 84 81 16 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1a0h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 20h
        ; Exact mapped bytes E8 DC 1E 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x1e
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 19h
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x5879adb9
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D D8 46 A2 58: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 170h], 0ch
        ; Exact mapped bytes 7E 1C: jle 0x5879adad
        __asm _emit 0x7e
        __asm _emit 0x1c
        cmp dword ptr [ecx + 194h], 0
        ; Exact mapped bytes 74 13: je 0x5879adad
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ecx + 194h]
        mov ecx, dword ptr [edx + 30h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 15 CD 16 00: call 0x58907ac0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xcd
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x5879adbb
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 09 CD 16 00: call 0x58907ac0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xcd
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5879adbb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 84 1E 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 1ah
        test edi, edi
        ; Exact mapped bytes 74 73: je 0x5879ae4f
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 17: jle 0x5879ae00
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5879ae00
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 3fch]
        ; Exact mapped bytes EB 02: jmp 0x5879ae02
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        push 320h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 87 83 16 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x83
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x5879ae51
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
        ; Exact mapped bytes EB 02: jmp 0x5879ae51
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1b8h], edi
        ; Exact mapped bytes E8 B8 7E 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x7e
        __asm _emit 0x16
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 DF 1D 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 1bh
        test edi, edi
        ; Exact mapped bytes 74 77: je 0x5879aef8
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0feh
        ; Exact mapped bytes 7E 17: jle 0x5879aea9
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5879aea9
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [edx + 3f8h]
        ; Exact mapped bytes EB 02: jmp 0x5879aeab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        push 320h
        push 0
        push 0
        push ebx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 DE 82 16 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x82
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x5879aefa
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
        ; Exact mapped bytes EB 02: jmp 0x5879aefa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 1bch], edi
        ; Exact mapped bytes E8 0F 7E 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x16
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 36 1D 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x1d
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 1ch
        test edi, edi
        ; Exact mapped bytes 74 77: je 0x5879afa1
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 128h
        ; Exact mapped bytes 7E 17: jle 0x5879af52
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5879af52
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [ecx + 4a0h]
        ; Exact mapped bytes EB 02: jmp 0x5879af54
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        push 320h
        push 0
        push 0
        push ebx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 35 82 16 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x82
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x5879afa3
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
        ; Exact mapped bytes EB 02: jmp 0x5879afa3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 1b8h]
        mov dword ptr [esi + 1c0h], edi
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1bch]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1c0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 35h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 7E 1A: jle 0x5879affb
        __asm _emit 0x7e
        __asm _emit 0x1a
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 11: je 0x5879affb
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        add eax, 0d40h
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes EB 08: jmp 0x5879b003
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 3ch], 0
        mov eax, 0fffffe30h
        sub eax, esi
        lea ebp, [esi + 1d0h]
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 38h], 20h
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 27 1C 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x1c
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        mov byte ptr [esp + 20h], 1dh
        test edi, edi
        ; Exact mapped bytes 74 67: je 0x5879b0a0
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, dword ptr [esp + 3ch]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        add eax, dword ptr [esp + 34h]
        push 320h
        mov ebx, dword ptr [eax + ebp]
        push 0
        push 0
        add ecx, 0aah
        push ecx
        add edx, 64h
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 35 81 16 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x81
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x5879b0a2
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
        ; Exact mapped bytes EB 02: jmp 0x5879b0a2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 24h], 0
        mov dword ptr [ebp], edi
        ; Exact mapped bytes E8 6A 7C 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        add ebp, 4
        sub dword ptr [esp + 38h], 1
        ; Exact mapped bytes 0F 85 44 FF FF FF: jne 0x5879b020
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 6B 1B 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x1b
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 1eh
        test edi, edi
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x5879b17d
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
        cmp dword ptr [eax + 164h], 9ch
        ; Exact mapped bytes 7E 17: jle 0x5879b121
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5879b121
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 270h]
        ; Exact mapped bytes EB 02: jmp 0x5879b123
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ebx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        push 320h
        push 0
        push 0
        lea ecx, [ebx + 0aah]
        push ecx
        add eax, 52h
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 59 80 16 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x80
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2F: je 0x5879b183
        __asm _emit 0x74
        __asm _emit 0x2f
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
        ; Exact mapped bytes EB 06: jmp 0x5879b183
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 30h]
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0a4h], edi
        ; Exact mapped bytes E8 86 7B 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x7b
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a4h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 58h
        ; Exact mapped bytes E8 9E 1A 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x1a
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov byte ptr [esp + 20h], 1fh
        test edi, edi
        ; Exact mapped bytes 74 7E: je 0x5879b240
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0
        ; Exact mapped bytes 7E 11: jle 0x5879b1e1
        __asm _emit 0x7e
        __asm _emit 0x11
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 08: je 0x5879b1e1
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 190h]
        ; Exact mapped bytes EB 02: jmp 0x5879b1e3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 320h
        push 0
        push 0
        lea eax, [ebx + 0aah]
        push eax
        mov eax, dword ptr [esp + 3ch]
        add eax, 52h
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 9D 7F 16 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x7f
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x5879b242
        __asm _emit 0x74
        __asm _emit 0x2b
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
        ; Exact mapped bytes EB 02: jmp 0x5879b242
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, 0fff0h
        mov dword ptr [esi + 0a8h], edi
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        push 0fch
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 EE 19 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x19
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        xor ebp, ebp
        mov byte ptr [esp + 20h], 20h
        cmp eax, ebp
        ; Exact mapped bytes 74 46: je 0x5879b2b8
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
        ; Exact mapped bytes 7E 16: jle 0x5879b29a
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x5879b29a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x5879b29c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        add ebx, 0b8h
        push ebx
        add edx, 55h
        push edx
        push 4
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 4A BE 16 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xbe
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5879b2ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0d0h], eax
        ; Exact mapped bytes E8 4F 7A 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x7a
        __asm _emit 0x16
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0d0h]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 320h
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x5879b2ed
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 63 7C 16 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x5879b2fa
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E6 7B 16 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x7b
        __asm _emit 0x16
        __asm _emit 0x00
        xor ecx, ecx
        push 2084h
        ; Exact mapped bytes 66 89 8E 78 02 00 00: mov word ptr [esi + 0x278], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 41 19 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x19
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 21h
        cmp eax, ebp
        ; Exact mapped bytes 74 1B: je 0x5879b338
        __asm _emit 0x74
        __asm _emit 0x1b
        push ebp
        push 40h
        push ebp
        push ebp
        push 1aeh
        push 44ch
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 1C 14 11 00: call 0x588ac750
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x14
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x5879b33a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 1cch], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 3ec0h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x5879b35b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F5 7B 16 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x7b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x5879b368
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 78 7B 16 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x7b
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1cch]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, ecx
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        mov dword ptr [esi + 260h], ebp
        mov byte ptr [esi + 2d8h], 1
        mov dword ptr [esi + 2d4h], ebp
        mov dword ptr [esi + 2d0h], ebp
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
