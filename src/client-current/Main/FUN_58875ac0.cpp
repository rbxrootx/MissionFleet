// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 3152 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58875AC0 .. +0xC50 bytes.
extern "C" __declspec(naked) void FUN_58875ac0_segment_00() {
    __asm {
        push -1
        push 58986562h
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
        push eax
        mov eax, dword ptr [esp + 34h]
        push ecx
        mov ecx, dword ptr [esp + 34h]
        push edx
        mov edx, dword ptr [esp + 34h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 90 D6 08 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xd6
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        xor ebx, ebx
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 5899ef80h
        push 54h
        ; Exact mapped bytes E8 20 71 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x71
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 1
        test edi, edi
        ; Exact mapped bytes 74 74: je 0x58875bb4
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes A1 20 47 A2 58: mov eax, dword ptr [0x58a24720]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 18: jle 0x58875b65
        __asm _emit 0x7e
        __asm _emit 0x18
        test ebx, ebx
        ; Exact mapped bytes 7C 14: jl 0x58875b65
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58875b65
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + ebx*4]
        ; Exact mapped bytes EB 02: jmp 0x58875b67
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 21 D6 08 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xd6
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x58875bb6
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
        ; Exact mapped bytes EB 02: jmp 0x58875bb6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, 0fffeh
        mov dword ptr [esi + ebx*4 + 50h], edi
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        mov byte ptr [esp + 20h], 0
        test ebx, ebx
        ; Exact mapped bytes 75 0A: jne 0x58875bd6
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [esi + 50h]
        push 0fffffeffh
        ; Exact mapped bytes EB 09: jmp 0x58875bdf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [esi + ebx*4 + 50h]
        push 101h
        ; Exact mapped bytes E8 3C D1 08 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x08
        __asm _emit 0x00
        inc ebx
        cmp ebx, 3
        ; Exact mapped bytes 0F 8C 39 FF FF FF: jl 0x58875b27
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        ; Exact mapped bytes E8 57 70 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x70
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 2
        test edi, edi
        ; Exact mapped bytes 74 79: je 0x58875c82
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes 8B 0D 20 47 A2 58: mov ecx, dword ptr [0x58a24720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        lea eax, [ebx + 3]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x58875c32
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58875c32
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58875c32
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 18ch]
        mov ebp, dword ptr [edx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x58875c34
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 54 D5 08 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xd5
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x58875c84
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
        ; Exact mapped bytes EB 02: jmp 0x58875c84
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 0fffeh
        mov dword ptr [esi + ebx*4 + 5ch], edi
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov byte ptr [esp + 20h], 0
        test ebx, ebx
        ; Exact mapped bytes 75 0A: jne 0x58875ca4
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [esi + 5ch]
        push 0fffffeffh
        ; Exact mapped bytes EB 09: jmp 0x58875cad
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [esi + ebx*4 + 5ch]
        push 101h
        ; Exact mapped bytes E8 6E D0 08 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 34 FF FF FF: jl 0x58875bf0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        mov edi, edi
        push 54h
        ; Exact mapped bytes E8 87 6F 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x6f
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 3
        test edi, edi
        ; Exact mapped bytes 0F 84 78 00 00 00: je 0x58875d55
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
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
        lea eax, [ebx + 5]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x58875d06
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58875d06
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58875d06
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ebp, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x58875d08
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 80 D4 08 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xd4
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x58875d57
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
        ; Exact mapped bytes EB 02: jmp 0x58875d57
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 0fffeh
        mov dword ptr [esi + ebx*4 + 64h], edi
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov byte ptr [esp + 20h], 0
        test ebx, ebx
        ; Exact mapped bytes 75 0A: jne 0x58875d77
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [esi + 64h]
        push 0fffffeffh
        ; Exact mapped bytes EB 09: jmp 0x58875d80
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [esi + ebx*4 + 64h]
        push 101h
        ; Exact mapped bytes E8 9B CF 08 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xcf
        __asm _emit 0x08
        __asm _emit 0x00
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 31 FF FF FF: jl 0x58875cc0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        ; Exact mapped bytes E8 B6 6E 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x6e
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 4
        test edi, edi
        ; Exact mapped bytes 0F 84 78 00 00 00: je 0x58875e26
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
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
        lea eax, [ebx + 7]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x58875dd7
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58875dd7
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58875dd7
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ebp, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x58875dd9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 AF D3 08 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd3
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x58875e28
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
        ; Exact mapped bytes EB 02: jmp 0x58875e28
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 0fffeh
        mov dword ptr [esi + ebx*4 + 6ch], edi
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov byte ptr [esp + 20h], 0
        test ebx, ebx
        ; Exact mapped bytes 75 0A: jne 0x58875e48
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [esi + 6ch]
        push 0fffffeffh
        ; Exact mapped bytes EB 09: jmp 0x58875e51
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [esi + ebx*4 + 6ch]
        push 101h
        ; Exact mapped bytes E8 CA CE 08 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0x00
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 31 FF FF FF: jl 0x58875d91
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        ; Exact mapped bytes E8 E5 6D 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x6d
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 5
        test edi, edi
        ; Exact mapped bytes 0F 84 78 00 00 00: je 0x58875ef7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
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
        lea eax, [ebx + 9]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x58875ea8
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58875ea8
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58875ea8
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ebp, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x58875eaa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 DE D2 08 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x58875ef9
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
        ; Exact mapped bytes EB 02: jmp 0x58875ef9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 0fffeh
        mov dword ptr [esi + ebx*4 + 74h], edi
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov byte ptr [esp + 20h], 0
        test ebx, ebx
        ; Exact mapped bytes 75 0A: jne 0x58875f19
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [esi + 74h]
        push 0fffffeffh
        ; Exact mapped bytes EB 09: jmp 0x58875f22
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [esi + ebx*4 + 74h]
        push 101h
        ; Exact mapped bytes E8 F9 CD 08 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xcd
        __asm _emit 0x08
        __asm _emit 0x00
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 31 FF FF FF: jl 0x58875e62
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        ; Exact mapped bytes E8 14 6D 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x6d
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 6
        test edi, edi
        ; Exact mapped bytes 0F 84 78 00 00 00: je 0x58875fc8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
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
        lea eax, [ebx + 0bh]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x58875f79
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58875f79
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58875f79
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ebp, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x58875f7b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 0D D2 08 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x58875fca
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
        ; Exact mapped bytes EB 02: jmp 0x58875fca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 0fffeh
        mov dword ptr [esi + ebx*4 + 7ch], edi
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov byte ptr [esp + 20h], 0
        test ebx, ebx
        ; Exact mapped bytes 75 0A: jne 0x58875fea
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [esi + 7ch]
        push 0fffffeffh
        ; Exact mapped bytes EB 09: jmp 0x58875ff3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [esi + ebx*4 + 7ch]
        push 101h
        ; Exact mapped bytes E8 28 CD 08 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xcd
        __asm _emit 0x08
        __asm _emit 0x00
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 31 FF FF FF: jl 0x58875f33
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        ; Exact mapped bytes E8 43 6C 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x6c
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 7
        test edi, edi
        ; Exact mapped bytes 0F 84 78 00 00 00: je 0x58876099
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
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
        lea eax, [ebx + 0dh]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x5887604a
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x5887604a
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5887604a
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ebp, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5887604c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 3C D1 08 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x5887609b
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
        ; Exact mapped bytes EB 02: jmp 0x5887609b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 0fffeh
        mov dword ptr [esi + ebx*4 + 84h], edi
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov byte ptr [esp + 20h], 0
        test ebx, ebx
        ; Exact mapped bytes 75 0D: jne 0x588760c1
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 84h]
        push 0fffffeffh
        ; Exact mapped bytes EB 0C: jmp 0x588760cd
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + ebx*4 + 84h]
        push 101h
        ; Exact mapped bytes E8 4E CC 08 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0x00
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 28 FF FF FF: jl 0x58876004
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        ; Exact mapped bytes E8 69 6B 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x6b
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 8
        test edi, edi
        ; Exact mapped bytes 0F 84 78 00 00 00: je 0x58876173
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
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
        lea eax, [ebx + 0fh]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x58876124
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58876124
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58876124
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ebp, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x58876126
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 62 D0 08 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x58876175
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
        ; Exact mapped bytes EB 02: jmp 0x58876175
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 0fffeh
        mov dword ptr [esi + ebx*4 + 8ch], edi
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov byte ptr [esp + 20h], 0
        test ebx, ebx
        ; Exact mapped bytes 75 0D: jne 0x5887619b
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 8ch]
        push 0fffffeffh
        ; Exact mapped bytes EB 0C: jmp 0x588761a7
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + ebx*4 + 8ch]
        push 101h
        ; Exact mapped bytes E8 74 CB 08 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xcb
        __asm _emit 0x08
        __asm _emit 0x00
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 28 FF FF FF: jl 0x588760de
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        ; Exact mapped bytes E8 8F 6A 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x6a
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 9
        test edi, edi
        ; Exact mapped bytes 0F 84 78 00 00 00: je 0x5887624d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
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
        lea eax, [ebx + 11h]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x588761fe
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x588761fe
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x588761fe
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ebp, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x58876200
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 88 CF 08 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xcf
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x5887624f
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
        ; Exact mapped bytes EB 02: jmp 0x5887624f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 0fffeh
        mov dword ptr [esi + ebx*4 + 94h], edi
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov byte ptr [esp + 20h], 0
        test ebx, ebx
        ; Exact mapped bytes 75 0D: jne 0x58876275
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 94h]
        push 0fffffeffh
        ; Exact mapped bytes EB 0C: jmp 0x58876281
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + ebx*4 + 94h]
        push 101h
        ; Exact mapped bytes E8 9A CA 08 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xca
        __asm _emit 0x08
        __asm _emit 0x00
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 28 FF FF FF: jl 0x588761b8
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        ; Exact mapped bytes E8 B5 69 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x69
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 0ah
        test edi, edi
        ; Exact mapped bytes 0F 84 78 00 00 00: je 0x58876327
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
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
        lea eax, [ebx + 13h]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x588762d8
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x588762d8
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x588762d8
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ebp, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x588762da
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 AE CE 08 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x58876329
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
        ; Exact mapped bytes EB 02: jmp 0x58876329
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 0fffeh
        mov dword ptr [esi + ebx*4 + 9ch], edi
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov byte ptr [esp + 20h], 0
        test ebx, ebx
        ; Exact mapped bytes 75 0D: jne 0x5887634f
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 9ch]
        push 0fffffeffh
        ; Exact mapped bytes EB 0C: jmp 0x5887635b
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + ebx*4 + 9ch]
        push 101h
        ; Exact mapped bytes E8 C0 C9 08 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xc9
        __asm _emit 0x08
        __asm _emit 0x00
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 28 FF FF FF: jl 0x58876292
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        ; Exact mapped bytes E8 DB 68 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 0bh
        test edi, edi
        ; Exact mapped bytes 0F 84 78 00 00 00: je 0x58876401
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
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
        lea eax, [ebx + 15h]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x588763b2
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x588763b2
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x588763b2
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ebp, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x588763b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D4 CD 08 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xcd
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x58876403
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
        ; Exact mapped bytes EB 02: jmp 0x58876403
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 0fffeh
        mov dword ptr [esi + ebx*4 + 0a4h], edi
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov byte ptr [esp + 20h], 0
        test ebx, ebx
        ; Exact mapped bytes 75 0D: jne 0x58876429
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 0a4h]
        push 0fffffeffh
        ; Exact mapped bytes EB 0C: jmp 0x58876435
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + ebx*4 + 0a4h]
        push 101h
        ; Exact mapped bytes E8 E6 C8 08 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xc8
        __asm _emit 0x08
        __asm _emit 0x00
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 28 FF FF FF: jl 0x5887636c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        ; Exact mapped bytes E8 01 68 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov byte ptr [esp + 20h], 0ch
        test edi, edi
        ; Exact mapped bytes 0F 84 76 00 00 00: je 0x588764d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x76
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
        lea eax, [ebx + 17h]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x5887648c
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x5887648c
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5887648c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ebp, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5887648e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push 0
        push 0
        push 264h
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 FD CC 08 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x588764db
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
        ; Exact mapped bytes EB 02: jmp 0x588764db
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 0fffeh
        mov dword ptr [esi + ebx*4 + 0ach], edi
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov byte ptr [esp + 20h], 0
        test ebx, ebx
        ; Exact mapped bytes 75 0D: jne 0x58876501
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 0ach]
        push 0fffffeffh
        ; Exact mapped bytes EB 0C: jmp 0x5887650d
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + ebx*4 + 0ach]
        push 101h
        ; Exact mapped bytes E8 0E C8 08 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xc8
        __asm _emit 0x08
        __asm _emit 0x00
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 2A FF FF FF: jl 0x58876446
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        ; Exact mapped bytes E8 29 67 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x67
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov byte ptr [esp + 20h], 0dh
        test edi, edi
        ; Exact mapped bytes 0F 84 76 00 00 00: je 0x588765b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x76
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
        lea eax, [ebx + 19h]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x58876564
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58876564
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x58876564
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ebp, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x58876566
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push 0
        push 0
        push 264h
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 25 CC 08 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x588765b3
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
        ; Exact mapped bytes EB 02: jmp 0x588765b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 0fffeh
        mov dword ptr [esi + ebx*4 + 0b4h], edi
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov byte ptr [esp + 20h], 0
        test ebx, ebx
        ; Exact mapped bytes 75 0D: jne 0x588765d9
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 0b4h]
        push 0fffffeffh
        ; Exact mapped bytes EB 0C: jmp 0x588765e5
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + ebx*4 + 0b4h]
        push 101h
        ; Exact mapped bytes E8 36 C7 08 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xc7
        __asm _emit 0x08
        __asm _emit 0x00
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 2A FF FF FF: jl 0x5887651e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        ; Exact mapped bytes E8 51 66 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x66
        __asm _emit 0x10
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov byte ptr [esp + 20h], 0eh
        test edi, edi
        ; Exact mapped bytes 0F 84 76 00 00 00: je 0x58876689
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x76
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
        lea eax, [ebx + 1fh]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x5887663c
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x5887663c
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5887663c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov ebp, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5887663e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push 0
        push 0
        push 264h
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 4D CB 08 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xcb
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x5887668b
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
        ; Exact mapped bytes EB 02: jmp 0x5887668b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 0fffeh
        mov dword ptr [esi + ebx*4 + 0bch], edi
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov byte ptr [esp + 20h], 0
        test ebx, ebx
        ; Exact mapped bytes 75 0D: jne 0x588766b1
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 0bch]
        push 0fffffeffh
        ; Exact mapped bytes EB 0C: jmp 0x588766bd
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + ebx*4 + 0bch]
        push 101h
        ; Exact mapped bytes E8 5E C6 08 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc6
        __asm _emit 0x08
        __asm _emit 0x00
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 2A FF FF FF: jl 0x588765f6
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        xor edx, edx
        xor eax, eax
        mov dword ptr [esi + 0c4h], eax
        mov dword ptr [esi + 0c8h], eax
        mov eax, 1
        ; Exact mapped bytes 66 89 86 D0 00 00 00: mov word ptr [esi + 0xd0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E CC 00 00 00: mov word ptr [esi + 0xcc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 96 CE 00 00 00: mov word ptr [esi + 0xce], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
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
