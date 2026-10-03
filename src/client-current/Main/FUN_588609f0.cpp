// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 4843 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588609F0 .. +0x51D bytes.
extern "C" __declspec(naked) void FUN_588609f0_segment_00() {
    __asm {
        push -1
        push 589859e9h
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
        mov edi, dword ptr [esp + 30h]
        mov ebp, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push edi
        push ebp
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F0 74 FF FF: call 0x58857f30
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        mov dword ptr [esp + 24h], ebx
        mov dword ptr [esi], 5899eadch
        mov dword ptr [esi + 738h], 0ffffffffh
        ; Exact mapped bytes E8 F1 C1 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xc1
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1
        cmp eax, ebx
        ; Exact mapped bytes 74 45: je 0x58860ab2
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 321h
        ; Exact mapped bytes 7E 16: jle 0x58860a95
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x58860a95
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 0c84h]
        ; Exact mapped bytes EB 02: jmp 0x58860a97
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 7d0h
        lea edx, [edi - 4]
        push edx
        lea edx, [ebp + 0f6h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B0 11 ED FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x11
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58860ab4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes E8 88 C1 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xc1
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 2
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x58860b18
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 32h
        ; Exact mapped bytes 7E 16: jle 0x58860afb
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58860afb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0c80h
        ; Exact mapped bytes EB 02: jmp 0x58860afd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 801h
        lea edx, [edi - 4]
        push edx
        lea edx, [ebp + 0f6h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 1A 3F ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x3f
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58860b1a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0e0h], eax
        ; Exact mapped bytes E8 EF 21 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x21
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e0h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e0h]
        mov edx, 0fffbh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e0h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 58h
        ; Exact mapped bytes E8 E9 C0 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 3
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x58860bb7
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 31h
        ; Exact mapped bytes 7E 16: jle 0x58860b9a
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58860b9a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0c40h
        ; Exact mapped bytes EB 02: jmp 0x58860b9c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 802h
        lea edx, [edi - 4]
        push edx
        lea edx, [ebp + 0f6h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 7B 3E ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x3e
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58860bb9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0dch], eax
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0dch]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 58h
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 6B C0 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 4
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x58860c35
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 33h
        ; Exact mapped bytes 7E 16: jle 0x58860c18
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58860c18
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0cc0h
        ; Exact mapped bytes EB 02: jmp 0x58860c1a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 834h
        lea edx, [edi - 4]
        push edx
        lea edx, [ebp + 0f6h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 FD 3D ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x3d
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58860c37
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0e4h], eax
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e4h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 58h
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 ED BF 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xbf
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 5
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x58860cb3
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 30h
        ; Exact mapped bytes 7E 16: jle 0x58860c96
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58860c96
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0c00h
        ; Exact mapped bytes EB 02: jmp 0x58860c98
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 834h
        lea edx, [edi - 4]
        push edx
        lea edx, [ebp + 0f6h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 7F 3D ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x3d
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58860cb5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0e8h], eax
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e8h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 6F BF 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xbf
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 6
        cmp eax, ebx
        ; Exact mapped bytes 74 45: je 0x58860d34
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 35ch
        ; Exact mapped bytes 7E 16: jle 0x58860d17
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x58860d17
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 0d70h]
        ; Exact mapped bytes EB 02: jmp 0x58860d19
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 898h
        lea edx, [edi - 4]
        push edx
        lea edx, [ebp + 0f6h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2E 0F ED FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x0f
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58860d36
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, 0fffeh
        mov dword ptr [esi + 0d8h], eax
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 58h
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 FD BE 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xbe
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 7
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x58860da3
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2fh
        ; Exact mapped bytes 7E 16: jle 0x58860d86
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58860d86
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0bc0h
        ; Exact mapped bytes EB 02: jmp 0x58860d88
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 834h
        lea edx, [edi - 4]
        push edx
        lea edx, [ebp + 0f6h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8F 3C ED FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x3c
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58860da5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, 0fffbh
        mov dword ptr [esi + 0ech], eax
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 6ch
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 8E BE 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xbe
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 8
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x58860e12
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 16: jle 0x58860df5
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58860df5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x58860df7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 834h
        lea edx, [edi - 4]
        push edx
        lea edx, [ebp + 0f6h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E0 31 F3 FF: call 0x58793ff0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x31
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58860e14
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0f0h], eax
        ; Exact mapped bytes E8 DA 2F F3 FF: call 0x58793e00
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x2f
        __asm _emit 0xf3
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 1E BE 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xbe
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 9
        cmp eax, ebx
        ; Exact mapped bytes 74 50: je 0x58860e90
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 16: jle 0x58860e65
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58860e65
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x58860e67
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 834h
        lea ecx, [edi - 4]
        push ecx
        lea ecx, [ebp + 0f6h]
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
        ; Exact mapped bytes E8 12 CF EF FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xcf
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58860e92
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0f4h], eax
        ; Exact mapped bytes E8 AA BD 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xbd
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0ah
        cmp eax, ebx
        ; Exact mapped bytes 74 3C: je 0x58860ef0
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 322h
        ; Exact mapped bytes 7E 16: jle 0x58860edc
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x58860edc
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 0c88h]
        ; Exact mapped bytes EB 02: jmp 0x58860ede
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 7d0h
        push edi
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 72 0D ED FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x0d
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58860ef2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esp + 38h], ebx
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0f8h], eax
        mov dword ptr [esp + 3ch], ebp
        lea ebx, [esi + 6c0h]
        ; Exact mapped bytes EB 03: jmp 0x58860f10
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58860F10 .. +0xDCE bytes.
extern "C" __declspec(naked) void FUN_588609f0_segment_01() {
    __asm {
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [ebx - 5c4h], 0
        push 58h
        mov byte ptr [esi + eax + 110h], 0
        ; Exact mapped bytes E8 21 BD 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xbd
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 20h], 0bh
        test edi, edi
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x58860fc5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 13h
        ; Exact mapped bytes 7E 17: jle 0x58860f68
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58860f68
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebp, dword ptr [eax + 190h]
        add ebp, 4c0h
        ; Exact mapped bytes EB 02: jmp 0x58860f6a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 3ch]
        push 834h
        push 0
        push 0
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 1B 22 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 26: je 0x58860fbf
        __asm _emit 0x74
        __asm _emit 0x26
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
        mov ebp, dword ptr [esp + 3ch]
        ; Exact mapped bytes EB 02: jmp 0x58860fc7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, 0fffbh
        mov dword ptr [ebx], edi
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        push 0ach
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 6D BC 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xbc
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 20h], 0ch
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x5886103d
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1eh
        ; Exact mapped bytes 7E 17: jle 0x58861017
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58861017
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 780h
        ; Exact mapped bytes EB 02: jmp 0x58861019
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        push 834h
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
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
        ; Exact mapped bytes E8 65 CD EF FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xcd
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5886103f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [ebx + 28h], eax
        ; Exact mapped bytes E8 FD BB 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xbb
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 20h], 0dh
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x588610b0
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 1ch
        ; Exact mapped bytes 7E 17: jle 0x58861087
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58861087
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 700h
        ; Exact mapped bytes EB 02: jmp 0x58861089
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        push 834h
        push ecx
        lea ecx, [ebp + 2]
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
        ; Exact mapped bytes E8 F2 CC EF FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xcc
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588610b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, 0fff0h
        mov dword ptr [ebx - 44h], eax
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 84 BB 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 20h], 0eh
        test edi, edi
        ; Exact mapped bytes 74 7E: je 0x5886115a
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 219h
        ; Exact mapped bytes 7E 17: jle 0x58861104
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58861104
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 864h]
        ; Exact mapped bytes EB 02: jmp 0x58861106
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 3ch]
        push 834h
        push 0
        push 0
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 7F 20 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 26: je 0x58861154
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
        mov ebp, dword ptr [esp + 3ch]
        ; Exact mapped bytes EB 02: jmp 0x5886115c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, 0fff0h
        mov dword ptr [ebx + 14h], edi
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        push 6ch
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 DA BA 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xba
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 0fh
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x588611c2
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 11h
        ; Exact mapped bytes 7E 17: jle 0x588611aa
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588611aa
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 440h
        ; Exact mapped bytes EB 02: jmp 0x588611ac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        push 7d1h
        push ecx
        push ebp
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 30 2E F3 FF: call 0x58793ff0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x2e
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588611c4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [ebx - 14h], eax
        ; Exact mapped bytes E8 2D 2C F3 FF: call 0x58793e00
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x2c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esp + 38h]
        inc eax
        add ebp, 2ah
        add ebx, 4
        cmp eax, 5
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 3ch], ebp
        ; Exact mapped bytes 0F 8C 21 FD FF FF: jl 0x58860f10
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 39h
        ; Exact mapped bytes 7E 16: jle 0x58861213
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x58861213
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0e40h
        ; Exact mapped bytes EB 02: jmp 0x58861215
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 690h], eax
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 3ah
        ; Exact mapped bytes 7E 16: jle 0x5886123f
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x5886123f
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0e80h
        ; Exact mapped bytes EB 02: jmp 0x58861241
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov dword ptr [esi + 694h], eax
        ; Exact mapped bytes E8 FD B9 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xb9
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 10h
        test eax, eax
        ; Exact mapped bytes 74 5C: je 0x588612bd
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 19h
        ; Exact mapped bytes 7E 17: jle 0x58861287
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58861287
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 640h
        ; Exact mapped bytes EB 02: jmp 0x58861289
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        push 834h
        add ecx, 82h
        push ecx
        mov ecx, dword ptr [esp + 34h]
        add ecx, 0b8h
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
        ; Exact mapped bytes E8 E5 CA EF FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xca
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588612bf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 728h], eax
        lea ebx, [esi + 70ch]
        mov ebp, 4
        push 0fch
        ; Exact mapped bytes E8 6F B9 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xb9
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 11h
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x58861339
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 21h
        ; Exact mapped bytes 7E 17: jle 0x58861315
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58861315
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 840h
        ; Exact mapped bytes EB 02: jmp 0x58861317
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        add ecx, 82h
        push ecx
        mov ecx, dword ptr [esp + 30h]
        add ecx, 4bh
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 CB 5D 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x5886133b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebx], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 834h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58861358
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F8 1B 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x1b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58861365
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7B 1B 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x1b
        __asm _emit 0x0a
        __asm _emit 0x00
        add ebx, 4
        sub ebp, 1
        ; Exact mapped bytes 0F 85 64 FF FF FF: jne 0x588612d5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [esp + 30h]
        lea ebx, [esi + 71ch]
        add ebp, 44h
        mov dword ptr [esp + 3ch], 3
        push 0fch
        ; Exact mapped bytes E8 BE B8 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xb8
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 12h
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x588613e3
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 21h
        ; Exact mapped bytes 7E 17: jle 0x588613c6
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588613c6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 840h
        ; Exact mapped bytes EB 02: jmp 0x588613c8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 2ch]
        push ebp
        add ecx, 0c8h
        push ecx
        push 4
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 21 5D 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588613e5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebx], edi
        mov ecx, dword ptr [edi + 40h]
        mov edx, 834h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58861402
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 4E 1B 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x1b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5886140f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D1 1A 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x0a
        __asm _emit 0x00
        add ebx, 4
        add ebp, 0ah
        sub dword ptr [esp + 3ch], 1
        ; Exact mapped bytes 0F 85 66 FF FF FF: jne 0x58861386
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0fch
        ; Exact mapped bytes E8 24 B8 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xb8
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 13h
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x58861482
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 20h
        ; Exact mapped bytes 7E 17: jle 0x58861460
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58861460
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 800h
        ; Exact mapped bytes EB 02: jmp 0x58861462
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ebp, dword ptr [esp + 30h]
        mov ebx, dword ptr [esp + 2ch]
        lea ecx, [ebp + 80h]
        push ecx
        lea ecx, [ebx + 66h]
        push ecx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 80 5C 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x5c
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x5886148c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebp, dword ptr [esp + 30h]
        mov ebx, dword ptr [esp + 2ch]
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 704h], eax
        ; Exact mapped bytes E8 AD B7 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb7
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 14h
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x588614f1
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 21h
        ; Exact mapped bytes 7E 17: jle 0x588614d7
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x588614d7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 840h
        ; Exact mapped bytes EB 02: jmp 0x588614d9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 70h]
        push ecx
        lea ecx, [ebx + 400h]
        push ecx
        push 1
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 11 5C 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x5c
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588614f3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 700h], eax
        ; Exact mapped bytes E8 46 B7 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb7
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 15h
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x58861558
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 21h
        ; Exact mapped bytes 7E 17: jle 0x5886153e
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5886153e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 840h
        ; Exact mapped bytes EB 02: jmp 0x58861540
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 82h]
        push ecx
        lea ecx, [ebx + 32h]
        push ecx
        push 2
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 AA 5B 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x5b
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886155a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 700h]
        mov dword ptr [esi + 708h], eax
        mov ecx, dword ptr [edi + 40h]
        mov edx, 834h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58861581
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 CF 19 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5886158e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 52 19 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 704h]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 834h
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588615aa
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A6 19 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588615b7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 29 19 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 708h]
        mov ecx, 834h
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588615d3
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7D 19 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588615e0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 00 19 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 64 B6 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xb6
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 16h
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x58861648
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 15h
        ; Exact mapped bytes 7E 17: jle 0x58861620
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58861620
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 540h
        ; Exact mapped bytes EB 02: jmp 0x58861622
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 834h
        lea ecx, [ebp + 74h]
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        sub ebx, -80h
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
        ; Exact mapped bytes E8 5A C7 EF FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xc7
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5886164a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 730h], eax
        ; Exact mapped bytes E8 EF B5 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xb5
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov ebx, 17h
        mov byte ptr [esp + 20h], bl
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x588616c8
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 14h
        ; Exact mapped bytes 7E 17: jle 0x58861699
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58861699
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 500h
        ; Exact mapped bytes EB 02: jmp 0x5886169b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        push 834h
        lea ecx, [ebp + 82h]
        push ecx
        mov ecx, dword ptr [esp + 34h]
        sub ecx, -80h
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
        ; Exact mapped bytes E8 DA C6 EF FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc6
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588616ca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 730h]
        push 101h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 734h], eax
        ; Exact mapped bytes E8 3B 16 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x16
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 734h]
        push 101h
        ; Exact mapped bytes E8 2B 16 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x16
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 730h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 734h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 34 B5 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb5
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 18h
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x5886177e
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x5886174f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5886174f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 5c0h
        ; Exact mapped bytes EB 02: jmp 0x58861751
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 834h
        lea edx, [ebp + 73h]
        push edx
        mov edx, dword ptr [esp + 34h]
        add edx, 0b8h
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
        ; Exact mapped bytes E8 24 C6 EF FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc6
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58861780
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 72ch], eax
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 164h]
        cmp eax, 322h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 7E 17: jle 0x588617b5
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588617b5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov edx, dword ptr [edx + 0c88h]
        ; Exact mapped bytes EB 02: jmp 0x588617b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        cmp eax, 322h
        mov edx, dword ptr [edx + 24h]
        ; Exact mapped bytes 7E 17: jle 0x588617d8
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588617d8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx + 18ch]
        mov eax, dword ptr [eax + 0c88h]
        ; Exact mapped bytes EB 02: jmp 0x588617da
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov eax, dword ptr [eax + 20h]
        push 198h
        mov dword ptr [esi + 14h], 0
        mov dword ptr [esi + 18h], 32h
        mov dword ptr [esi + 1ch], eax
        mov dword ptr [esi + 20h], edx
        ; Exact mapped bytes E8 53 B4 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb4
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 19h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x5886181b
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        push 5899ea4ch
        mov ecx, eax
        ; Exact mapped bytes E8 C7 55 0A 00: call 0x58906de0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x55
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886181d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 73ch], eax
        ; Exact mapped bytes E8 1F B4 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xb4
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov ebx, dword ptr [esp + 2ch]
        mov byte ptr [esp + 20h], 1ah
        test edi, edi
        ; Exact mapped bytes 74 28: je 0x5886186d
        __asm _emit 0x74
        __asm _emit 0x28
        push 834h
        push 0
        push 0
        lea ecx, [ebp + 3eh]
        push ecx
        lea edx, [ebx + 2bh]
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 42 19 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x5886186f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 758h], edi
        ; Exact mapped bytes E8 CD B3 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xb3
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov byte ptr [esp + 20h], 1bh
        test edi, edi
        ; Exact mapped bytes 74 28: je 0x588618bb
        __asm _emit 0x74
        __asm _emit 0x28
        push 834h
        push 0
        push 0
        lea eax, [ebp + 40h]
        push eax
        lea ecx, [ebx + 3ah]
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 F4 18 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x588618bd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 754h], edi
        ; Exact mapped bytes E8 7F B3 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xb3
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov byte ptr [esp + 20h], 1ch
        test edi, edi
        ; Exact mapped bytes 74 28: je 0x58861909
        __asm _emit 0x74
        __asm _emit 0x28
        push 834h
        push 0
        push 0
        lea edx, [ebp + 55h]
        push edx
        lea eax, [ebx + 2bh]
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A6 18 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x5886190b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 740h], edi
        ; Exact mapped bytes E8 31 B3 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xb3
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov byte ptr [esp + 20h], 1dh
        test edi, edi
        ; Exact mapped bytes 74 2B: je 0x5886195a
        __asm _emit 0x74
        __asm _emit 0x2b
        push 7dah
        push 0
        push 0
        lea ecx, [ebp + 41h]
        push ecx
        lea edx, [ebx + 10eh]
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 55 18 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x5886195c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 744h], edi
        ; Exact mapped bytes E8 E0 B2 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb2
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov byte ptr [esp + 20h], 1eh
        test edi, edi
        ; Exact mapped bytes 74 2B: je 0x588619ab
        __asm _emit 0x74
        __asm _emit 0x2b
        push 7d9h
        push 0
        push 0
        lea eax, [ebp + 41h]
        push eax
        lea ecx, [ebx + 10eh]
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 04 18 0A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x588619ad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 744h]
        mov dword ptr [esi + 748h], edi
        mov edx, 0fffbh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 748h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 748h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 3D 13 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x13
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 61 B2 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xb2
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 1fh
        mov edi, 21h
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x58861a3e
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x58861a27
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58861a27
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 840h
        ; Exact mapped bytes EB 02: jmp 0x58861a29
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 57h]
        push edx
        lea edx, [ebx + 58h]
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C4 56 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x56
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58861a40
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 74ch], eax
        ; Exact mapped bytes E8 F9 B1 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xb1
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 20h
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x58861aa1
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x58861a8a
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58861a8a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 840h
        ; Exact mapped bytes EB 02: jmp 0x58861a8c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 57h]
        push ecx
        lea ecx, [ebx + 67h]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 61 56 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x56
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58861aa3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 750h], eax
        mov eax, dword ptr [esi + 74ch]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 750h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0fch
        mov byte ptr [esp + 24h], 0
        ; Exact mapped bytes E8 7B B1 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xb1
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 21h
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x58861b1f
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x58861b08
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58861b08
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 840h
        ; Exact mapped bytes EB 02: jmp 0x58861b0a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 69h]
        push edx
        lea edx, [ebx + 37h]
        push edx
        push 2
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E3 55 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x55
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58861b21
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 75ch], eax
        ; Exact mapped bytes E8 18 B1 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xb1
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 22h
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x58861b82
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 17: jle 0x58861b6b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58861b6b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 840h
        ; Exact mapped bytes EB 02: jmp 0x58861b6d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        lea ecx, [ebp + 69h]
        push ecx
        lea ecx, [ebx + 5ah]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 80 55 0A 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x55
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58861b84
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 74h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 760h], eax
        ; Exact mapped bytes E8 B8 B0 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb0
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 20h], 23h
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x58861bec
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 3d6h
        ; Exact mapped bytes 7E 17: jle 0x58861bcf
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58861bcf
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 0f58h]
        ; Exact mapped bytes EB 02: jmp 0x58861bd1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        add ebp, 4bh
        push ebp
        add ebx, 17h
        push ebx
        push ecx
        push esi
        push 1
        push 3ch
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 16 CC F1 FF: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xcc
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58861bee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 75ch]
        mov dword ptr [esi + 764h], eax
        mov ecx, dword ptr [edi + 40h]
        mov eax, 834h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58861c15
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 3B 13 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x13
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58861c22
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BE 12 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x12
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 760h]
        mov ecx, 834h
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58861c3e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 12 13 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x13
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58861c4b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 95 12 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x12
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 74ch]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 834h
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58861c67
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E9 12 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58861c74
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 6C 12 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x12
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 750h]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 834h
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58861c90
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C0 12 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x12
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58861c9d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 43 12 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x12
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 764h]
        mov ecx, 834h
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58861cb9
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 97 12 0A 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x12
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58861cc6
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 1A 12 0A 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x12
        __asm _emit 0x0a
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
