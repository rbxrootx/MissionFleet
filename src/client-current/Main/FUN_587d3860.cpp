// Complete Ghidra body ranges for the selected function.
// 3 discontiguous segments; total 6493 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D3860 .. +0x59D bytes.
extern "C" __declspec(naked) void FUN_587d3860_segment_00() {
    __asm {
        push -1
        push 58981de3h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 20h
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
        lea eax, [esp + 34h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e1ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 100h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 05: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x05
        mov edi, dword ptr [esi + 0a00h]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 1388h
        ; Exact mapped bytes 66 03 46 26: add ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x26
        xor ebp, ebp
        movzx eax, ax
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x587d38cb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 85 F6 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x587d38d8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 08 F6 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xf6
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 150h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 504h]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 504h]
        mov dword ptr [eax + 7ch], ebp
        mov eax, dword ptr [esi + 508h]
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 50ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 04 F4 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf4
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 50ch]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 508h]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 508h]
        mov dword ptr [eax + 7ch], ebp
        mov ecx, dword ptr [esi + 508h]
        push ebp
        ; Exact mapped bytes E8 97 F3 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xf3
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 508h]
        mov dword ptr [eax + 84h], ebp
        mov eax, dword ptr [esi + 508h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        lea eax, [esi + 574h]
        mov dword ptr [esp + 18h], 0ah
        mov dword ptr [esp + 14h], 28h
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esp + 1ch], 2
        push 54h
        ; Exact mapped bytes E8 C1 92 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x92
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov dword ptr [esp + 3ch], ebp
        cmp edi, ebp
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x587d3a27
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 78 47 A2 58: mov eax, dword ptr [0x58a24778]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 18h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 1B: jle 0x587d39ce
        __asm _emit 0x7e
        __asm _emit 0x1b
        cmp ecx, ebp
        ; Exact mapped bytes 7C 17: jl 0x587d39ce
        __asm _emit 0x7c
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0F: je 0x587d39ce
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [esp + 14h]
        mov ebx, dword ptr [eax + edx]
        ; Exact mapped bytes EB 02: jmp 0x587d39d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, 5dch
        ; Exact mapped bytes 66 03 4E 26: add cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4e
        __asm _emit 0x26
        movzx eax, cx
        mov ecx, dword ptr [esi + 508h]
        push eax
        push ebp
        push ebp
        push 66h
        push 4
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 AF F7 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf7
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        cmp ebx, ebp
        ; Exact mapped bytes 74 2B: je 0x587d3a29
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
        ; Exact mapped bytes EB 02: jmp 0x587d3a29
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 20h]
        add dword ptr [esp + 14h], 4
        mov dword ptr [eax], edi
        add eax, 4
        mov dword ptr [esp + 20h], eax
        mov eax, 1
        add dword ptr [esp + 18h], eax
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        sub dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 3ch], 0ffffffffh
        ; Exact mapped bytes 0F 85 27 FF FF FF: jne 0x587d3986
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 574h]
        push 0fffffeffh
        ; Exact mapped bytes E8 B1 F2 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf2
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 578h]
        push 101h
        ; Exact mapped bytes E8 A1 F2 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf2
        __asm _emit 0x12
        __asm _emit 0x00
        cmp dword ptr [esi + 15ch], ebp
        ; Exact mapped bytes 0F 85 B2 06 00 00: jne 0x587d413d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, 1
        push 54h
        mov dword ptr [esi + 15ch], ebx
        ; Exact mapped bytes E8 B1 91 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x91
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov dword ptr [esp + 3ch], ebx
        test edi, edi
        ; Exact mapped bytes 74 21: je 0x587d3acf
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E0 F6 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xf6
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x587d3ad1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov edx, 76ch
        ; Exact mapped bytes 66 03 56 26: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        mov dword ptr [esi + 160h], edi
        mov ecx, dword ptr [edi + 40h]
        movzx eax, dx
        mov dword ptr [esp + 3ch], 0ffffffffh
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587d3afc
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 54 F4 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf4
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587d3b09
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 D7 F3 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xf3
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, 284h
        sub eax, esi
        mov dword ptr [esp + 18h], 1a9h
        lea ebp, [esi + 420h]
        mov dword ptr [esp + 28h], eax
        mov dword ptr [esp + 20h], 2
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 17 91 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x91
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov dword ptr [esp + 3ch], 2
        test edi, edi
        ; Exact mapped bytes 74 7C: je 0x587d3bc8
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes A1 78 47 A2 58: mov eax, dword ptr [0x58a24778]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 18h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 1C: jle 0x587d3b79
        __asm _emit 0x7e
        __asm _emit 0x1c
        test ecx, ecx
        ; Exact mapped bytes 7C 18: jl 0x587d3b79
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0F: je 0x587d3b79
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        add eax, dword ptr [esp + 28h]
        mov ebx, dword ptr [eax + ebp]
        ; Exact mapped bytes EB 02: jmp 0x587d3b7b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 160h]
        push 40h
        push 0
        push 0
        push 0
        push 0
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 0D F6 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf6
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x587d3bca
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes EB 02: jmp 0x587d3bca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp], edi
        mov eax, 7fffh
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov eax, dword ptr [ebp]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, 1
        add dword ptr [esp + 18h], eax
        add ebp, 4
        sub dword ptr [esp + 20h], eax
        mov dword ptr [esp + 3ch], 0ffffffffh
        ; Exact mapped bytes 0F 85 30 FF FF FF: jne 0x587d3b30
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 420h]
        push 0fffffeffh
        ; Exact mapped bytes E8 10 F1 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf1
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 424h]
        push 101h
        ; Exact mapped bytes E8 00 F1 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf1
        __asm _emit 0x12
        __asm _emit 0x00
        lea edx, [esi + 3bch]
        lea eax, [esi + 164h]
        mov dword ptr [esp + 1ch], edx
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esp + 28h], 19h
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 07 90 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x90
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov dword ptr [esp + 3ch], 3
        test edi, edi
        ; Exact mapped bytes 74 7B: je 0x587d3cd7
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 78 47 A2 58: mov eax, dword ptr [0x58a24778]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 4ah
        ; Exact mapped bytes 7E 17: jle 0x587d3c81
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x587d3c81
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebx, dword ptr [eax + 190h]
        add ebx, 1280h
        ; Exact mapped bytes EB 02: jmp 0x587d3c83
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 160h]
        push 40h
        push 0
        push 0
        push 0
        push 0
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 05 F5 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf5
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x587d3cd9
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
        ; Exact mapped bytes EB 02: jmp 0x587d3cd9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ebp, dword ptr [esp + 20h]
        push 58h
        mov dword ptr [esp + 40h], 0ffffffffh
        mov dword ptr [ebp], edi
        ; Exact mapped bytes E8 5F 8F 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x8f
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        mov dword ptr [esp + 3ch], 4
        test edi, edi
        ; Exact mapped bytes 74 7B: je 0x587d3d7f
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 78 47 A2 58: mov eax, dword ptr [0x58a24778]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 47h
        ; Exact mapped bytes 7E 17: jle 0x587d3d29
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x587d3d29
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebx, dword ptr [eax + 190h]
        add ebx, 11c0h
        ; Exact mapped bytes EB 02: jmp 0x587d3d2b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 160h]
        push 40h
        push 0
        push 0
        push 0
        push 0
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 5D F4 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf4
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x587d3d81
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebx + 18h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx + 1ch]
        lea eax, [ebx + 20h]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x587d3d81
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [ebp]
        push 0fffffeffh
        mov dword ptr [esp + 40h], 0ffffffffh
        mov dword ptr [ebp + 4], edi
        ; Exact mapped bytes E8 87 EF 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xef
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 4]
        push 101h
        ; Exact mapped bytes E8 7A EF 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xef
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, ebp
        mov edx, 2
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edi, 0fffbh
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        mov ecx, dword ptr [eax]
        mov edi, 0bfffh
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        mov ecx, dword ptr [eax]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        add eax, 4
        sub edx, 1
        ; Exact mapped bytes 75 D7: jne 0x587d3db0
        __asm _emit 0x75
        __asm _emit 0xd7
        mov dword ptr [esp + 2ch], eax
        mov dword ptr [esp + 14h], 4bh
        mov dword ptr [esp + 18h], 12c0h
        lea edi, [ebp + 0c8h]
        mov dword ptr [esp + 24h], 2
        ; Exact mapped bytes EB 03: jmp 0x587d3e00
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D3E00 .. +0x989 bytes.
extern "C" __declspec(naked) void FUN_587d3860_segment_01() {
    __asm {
        push 58h
        ; Exact mapped bytes E8 47 8E 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x8e
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 30h], ebx
        mov dword ptr [esp + 3ch], 5
        test ebx, ebx
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x587d3ea2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 78 47 A2 58: mov eax, dword ptr [0x58a24778]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 14h]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 19: jle 0x587d3e4a
        __asm _emit 0x7e
        __asm _emit 0x19
        test ecx, ecx
        ; Exact mapped bytes 7C 15: jl 0x587d3e4a
        __asm _emit 0x7c
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0C: je 0x587d3e4a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ebp, dword ptr [eax + 190h]
        add ebp, dword ptr [esp + 18h]
        ; Exact mapped bytes EB 02: jmp 0x587d3e4c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 160h]
        push 40h
        push 0
        push 0
        push 0
        push 0
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 3C F3 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xf3
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebx], 5898ca74h
        mov dword ptr [ebx + 50h], 0
        mov dword ptr [ebx + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 26: je 0x587d3e9e
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebx + 0ch], ecx
        mov edx, dword ptr [ebp + 1ch]
        lea eax, [ebp + 20h]
        mov dword ptr [ebx + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [ebx + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebx + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebx + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebx + 20h], edx
        mov eax, ebx
        ; Exact mapped bytes EB 02: jmp 0x587d3ea4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add dword ptr [esp + 18h], 40h
        mov dword ptr [edi], eax
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi]
        mov edx, 0bfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [edi]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, 1
        add dword ptr [esp + 14h], eax
        add edi, 4
        sub dword ptr [esp + 24h], eax
        mov dword ptr [esp + 3ch], 0ffffffffh
        ; Exact mapped bytes 0F 85 18 FF FF FF: jne 0x587d3e00
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [esp + 20h]
        mov ecx, dword ptr [ebp + 0c8h]
        push 0fffffeffh
        ; Exact mapped bytes E8 24 EE 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xee
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0cch]
        push 101h
        ; Exact mapped bytes E8 14 EE 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xee
        __asm _emit 0x12
        __asm _emit 0x00
        lea eax, [ebp + 190h]
        mov dword ptr [esp + 14h], 48h
        mov dword ptr [esp + 18h], 1200h
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 20h], 2
        mov edi, edi
        push 58h
        ; Exact mapped bytes E8 17 8D 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x8d
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov dword ptr [esp + 3ch], 6
        test edi, edi
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x587d3fd0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 78 47 A2 58: mov eax, dword ptr [0x58a24778]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 14h]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 19: jle 0x587d3f7a
        __asm _emit 0x7e
        __asm _emit 0x19
        test ecx, ecx
        ; Exact mapped bytes 7C 15: jl 0x587d3f7a
        __asm _emit 0x7c
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0C: je 0x587d3f7a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ebx, dword ptr [eax + 190h]
        add ebx, dword ptr [esp + 18h]
        ; Exact mapped bytes EB 02: jmp 0x587d3f7c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 160h]
        push 40h
        push 0
        push 0
        push 0
        push 0
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 0C F2 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xf2
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x587d3fd2
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebx + 18h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebx + 1ch]
        add ebx, 20h
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebx]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebx + 4]
        mov dword ptr [edi + 18h], edx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edi + 1ch], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [edi + 20h], ecx
        ; Exact mapped bytes EB 02: jmp 0x587d3fd2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esp + 24h]
        add dword ptr [esp + 18h], 40h
        mov dword ptr [ecx], edi
        mov edx, 0fffbh
        ; Exact mapped bytes 66 21 57 24: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        mov eax, dword ptr [ecx]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, 1
        add dword ptr [esp + 14h], eax
        add ecx, 4
        sub dword ptr [esp + 20h], eax
        mov dword ptr [esp + 3ch], 0ffffffffh
        mov dword ptr [esp + 24h], ecx
        ; Exact mapped bytes 0F 85 1D FF FF FF: jne 0x587d3f30
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 190h]
        push 0fffffeffh
        ; Exact mapped bytes E8 FD EC 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xec
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 194h]
        push 101h
        ; Exact mapped bytes E8 ED EC 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xec
        __asm _emit 0x12
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 14 8C 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x8c
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov dword ptr [esp + 3ch], 7
        test edi, edi
        ; Exact mapped bytes 74 27: je 0x587d4076
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [esi + 160h]
        push 40h
        push 0
        push 0
        push 0
        push 0
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 39 F1 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf1
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x587d4078
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [eax], edi
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        mov dword ptr [esp + 3ch], 0ffffffffh
        lea edi, [ebp + 0c8h]
        mov ebx, 2
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 2c8h]
        mov eax, dword ptr [ebp + 2c4h]
        mov ecx, dword ptr [edi - 0c8h]
        push edx
        push eax
        ; Exact mapped bytes E8 D7 F1 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xf1
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 2c8h]
        mov eax, dword ptr [ebp + 2c4h]
        mov ecx, dword ptr [edi]
        push edx
        push eax
        ; Exact mapped bytes E8 C2 F1 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf1
        __asm _emit 0x12
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 CA: jne 0x587d40a0
        __asm _emit 0x75
        __asm _emit 0xca
        lea edi, [ebp + 190h]
        mov ebx, 2
        mov ecx, dword ptr [ebp + 2c8h]
        mov edx, dword ptr [ebp + 2c4h]
        sub ecx, 0bh
        push ecx
        mov ecx, dword ptr [edi]
        add edx, 38h
        push edx
        ; Exact mapped bytes E8 94 F1 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf1
        __asm _emit 0x12
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 DD: jne 0x587d40e1
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 2c8h]
        mov ecx, dword ptr [ebp + 2c4h]
        mov edi, dword ptr [esp + 1ch]
        add eax, 14h
        add ecx, 11h
        push eax
        push ecx
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 6D F1 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf1
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [esp + 2ch]
        add edi, 4
        sub dword ptr [esp + 28h], 1
        mov dword ptr [esp + 1ch], edi
        mov dword ptr [esp + 20h], edx
        ; Exact mapped bytes 0F 85 03 FB FF FF: jne 0x587d3c40
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 0fffffa88h
        sub eax, esi
        mov dword ptr [esp + 28h], eax
        mov eax, 0fffffa90h
        sub eax, esi
        mov dword ptr [esp + 24h], eax
        mov eax, 0fffffa98h
        sub eax, esi
        mov dword ptr [esp + 20h], eax
        mov eax, 0fffffaa0h
        sub eax, esi
        mov dword ptr [esi + 57ch], 0
        mov dword ptr [esp + 14h], 8
        lea ebp, [esi + 590h]
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 18h], 2
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 B7 8A 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x8a
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov dword ptr [esp + 3ch], 8
        test edi, edi
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x587d4236
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 0D CC 46 A2 58: mov ecx, dword ptr [0x58a246cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, -2
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 1C: jle 0x587d41e1
        __asm _emit 0x7e
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 7C 18: jl 0x587d41e1
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0F: je 0x587d41e1
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ecx + 18ch]
        add eax, dword ptr [esp + 28h]
        mov ebx, dword ptr [eax + ebp]
        ; Exact mapped bytes EB 02: jmp 0x587d41e3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 508h]
        push 40h
        push 0
        push 0
        push 160h
        push 138h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 9F EF 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xef
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x587d4238
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebx + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebx + 14h]
        add ebx, 18h
        mov dword ptr [edi + 10h], edx
        mov eax, dword ptr [ebx]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [ebx + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [ebx + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x587d4238
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, 7fffh
        mov dword ptr [ebp - 8], edi
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        push 54h
        mov dword ptr [esp + 40h], 0ffffffffh
        ; Exact mapped bytes E8 FB 89 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x89
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov dword ptr [esp + 3ch], 9
        test edi, edi
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x587d42f2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 0D CC 46 A2 58: mov ecx, dword ptr [0x58a246cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, -2
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 1C: jle 0x587d429d
        __asm _emit 0x7e
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 7C 18: jl 0x587d429d
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0F: je 0x587d429d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ecx + 18ch]
        add edx, dword ptr [esp + 28h]
        mov ebx, dword ptr [edx + ebp]
        ; Exact mapped bytes EB 02: jmp 0x587d429f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 508h]
        push 40h
        push 0
        push 0
        push 17ch
        push 18ah
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 E3 EE 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xee
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x587d42f4
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebx + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx + 14h]
        add ebx, 18h
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [ebx]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebx + 4]
        mov dword ptr [edi + 18h], eax
        mov ecx, dword ptr [ebx + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [ebx + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x587d42f4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 7fffh
        mov dword ptr [ebp], edi
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        push 54h
        mov dword ptr [esp + 40h], 0ffffffffh
        ; Exact mapped bytes E8 3F 89 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x89
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov dword ptr [esp + 3ch], 0ah
        test edi, edi
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x587d43aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 CC 46 A2 58: mov eax, dword ptr [0x58a246cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 14h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 1C: jle 0x587d4355
        __asm _emit 0x7e
        __asm _emit 0x1c
        test ecx, ecx
        ; Exact mapped bytes 7C 18: jl 0x587d4355
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0F: je 0x587d4355
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [eax + 18ch]
        add ecx, dword ptr [esp + 24h]
        mov ebx, dword ptr [ecx + ebp]
        ; Exact mapped bytes EB 02: jmp 0x587d4357
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 508h]
        push 40h
        push 0
        push 0
        push 159h
        push 1d0h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 2B EE 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xee
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x587d43ac
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebx + 10h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebx + 14h]
        add ebx, 18h
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebx]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebx + 4]
        mov dword ptr [edi + 18h], edx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edi + 1ch], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [edi + 20h], ecx
        ; Exact mapped bytes EB 02: jmp 0x587d43ac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov edx, 7fffh
        mov dword ptr [ebp + 8], edi
        ; Exact mapped bytes 66 21 57 24: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        push 54h
        mov dword ptr [esp + 40h], 0ffffffffh
        ; Exact mapped bytes E8 87 88 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x88
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov dword ptr [esp + 3ch], 0bh
        test edi, edi
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x587d4462
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 CC 46 A2 58: mov eax, dword ptr [0x58a246cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 14h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 1C: jle 0x587d440d
        __asm _emit 0x7e
        __asm _emit 0x1c
        test ecx, ecx
        ; Exact mapped bytes 7C 18: jl 0x587d440d
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0F: je 0x587d440d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        add eax, dword ptr [esp + 24h]
        mov ebx, dword ptr [eax + ebp]
        ; Exact mapped bytes EB 02: jmp 0x587d440f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 508h]
        push 40h
        push 0
        push 0
        push 177h
        push 224h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 73 ED 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xed
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x587d4464
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebx + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebx + 14h]
        add ebx, 18h
        mov dword ptr [edi + 10h], edx
        mov eax, dword ptr [ebx]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [ebx + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [ebx + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x587d4464
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, 7fffh
        mov dword ptr [ebp + 10h], edi
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        push 54h
        mov dword ptr [esp + 40h], 0ffffffffh
        ; Exact mapped bytes E8 CF 87 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x87
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov dword ptr [esp + 3ch], 0ch
        test edi, edi
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x587d451e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 0D CC 46 A2 58: mov ecx, dword ptr [0x58a246cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 2
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 1C: jle 0x587d44c9
        __asm _emit 0x7e
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 7C 18: jl 0x587d44c9
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0F: je 0x587d44c9
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ecx + 18ch]
        add edx, dword ptr [esp + 20h]
        mov ebx, dword ptr [edx + ebp]
        ; Exact mapped bytes EB 02: jmp 0x587d44cb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 508h]
        push 40h
        push 0
        push 0
        push 137h
        push 21ah
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 B7 EC 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xec
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x587d4520
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebx + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx + 14h]
        add ebx, 18h
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [ebx]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebx + 4]
        mov dword ptr [edi + 18h], eax
        mov ecx, dword ptr [ebx + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [ebx + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x587d4520
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 7fffh
        mov dword ptr [ebp + 18h], edi
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        push 54h
        mov dword ptr [esp + 40h], 0ffffffffh
        ; Exact mapped bytes E8 13 87 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x87
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov dword ptr [esp + 3ch], 0dh
        test edi, edi
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x587d45da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 0D CC 46 A2 58: mov ecx, dword ptr [0x58a246cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 2
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 1C: jle 0x587d4585
        __asm _emit 0x7e
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 7C 18: jl 0x587d4585
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0F: je 0x587d4585
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        add ecx, dword ptr [esp + 20h]
        mov ebx, dword ptr [ecx + ebp]
        ; Exact mapped bytes EB 02: jmp 0x587d4587
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 508h]
        push 40h
        push 0
        push 0
        push 152h
        push 270h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 FB EB 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xeb
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x587d45dc
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebx + 10h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebx + 14h]
        add ebx, 18h
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebx]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebx + 4]
        mov dword ptr [edi + 18h], edx
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edi + 1ch], eax
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [edi + 20h], ecx
        ; Exact mapped bytes EB 02: jmp 0x587d45dc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov edx, 7fffh
        mov dword ptr [ebp + 20h], edi
        ; Exact mapped bytes 66 21 57 24: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        push 54h
        mov dword ptr [esp + 40h], 0ffffffffh
        ; Exact mapped bytes E8 57 86 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x86
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov dword ptr [esp + 3ch], 0eh
        test edi, edi
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x587d4696
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 0D CC 46 A2 58: mov ecx, dword ptr [0x58a246cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 4
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 1C: jle 0x587d4641
        __asm _emit 0x7e
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 7C 18: jl 0x587d4641
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0F: je 0x587d4641
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ecx + 18ch]
        add eax, dword ptr [esp + 1ch]
        mov ebx, dword ptr [eax + ebp]
        ; Exact mapped bytes EB 02: jmp 0x587d4643
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 508h]
        push 40h
        push 0
        push 0
        push 145h
        push 311h
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 3F EB 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xeb
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x587d4698
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebx + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebx + 14h]
        add ebx, 18h
        mov dword ptr [edi + 10h], edx
        mov eax, dword ptr [ebx]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [ebx + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [ebx + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x587d4698
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, 7fffh
        mov dword ptr [ebp + 28h], edi
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        push 54h
        mov dword ptr [esp + 40h], 0ffffffffh
        ; Exact mapped bytes E8 9B 85 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov dword ptr [esp + 3ch], 0fh
        test edi, edi
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x587d4752
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 0D CC 46 A2 58: mov ecx, dword ptr [0x58a246cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 4
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 1C: jle 0x587d46fd
        __asm _emit 0x7e
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 7C 18: jl 0x587d46fd
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 0F: je 0x587d46fd
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ecx + 18ch]
        add edx, dword ptr [esp + 1ch]
        mov ebx, dword ptr [edx + ebp]
        ; Exact mapped bytes EB 02: jmp 0x587d46ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 508h]
        push 40h
        push 0
        push 0
        push 168h
        push 2cbh
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 83 EA 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x587d4754
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebx + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebx + 14h]
        add ebx, 18h
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [ebx]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebx + 4]
        mov dword ptr [edi + 18h], eax
        mov ecx, dword ptr [ebx + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [ebx + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x587d4754
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 7fffh
        mov dword ptr [ebp + 30h], edi
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov eax, 1
        add dword ptr [esp + 14h], eax
        add ebp, 4
        sub dword ptr [esp + 18h], eax
        mov dword ptr [esp + 3ch], 0ffffffffh
        ; Exact mapped bytes 0F 85 12 FA FF FF: jne 0x587d4190
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        lea edi, [esi + 58ch]
        lea ebx, [eax + 1]
        ; Exact mapped bytes EB 07: jmp 0x587d4790
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D4790 .. +0xA37 bytes.
extern "C" __declspec(naked) void FUN_587d3860_segment_02() {
    __asm {
        mov ecx, dword ptr [edi - 4]
        push 0fffffeffh
        ; Exact mapped bytes E8 83 E5 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xe5
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 101h
        ; Exact mapped bytes E8 77 E5 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe5
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 6A E5 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe5
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 10h]
        push 101h
        ; Exact mapped bytes E8 5D E5 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe5
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 1ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 50 E5 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe5
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 20h]
        push 101h
        ; Exact mapped bytes E8 43 E5 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe5
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 2ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 36 E5 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xe5
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        push 101h
        ; Exact mapped bytes E8 29 E5 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xe5
        __asm _emit 0x12
        __asm _emit 0x00
        add edi, 8
        sub ebx, 1
        ; Exact mapped bytes 75 91: jne 0x587d4790
        __asm _emit 0x75
        __asm _emit 0x91
        push 58h
        ; Exact mapped bytes E8 48 84 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        xor ebp, ebp
        mov dword ptr [esp + 3ch], 10h
        cmp edi, ebp
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x587d48a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 504h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0a0h
        ; Exact mapped bytes 7E 16: jle 0x587d4854
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x587d4854
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebx, dword ptr [eax + 190h]
        add ebx, 2800h
        ; Exact mapped bytes EB 02: jmp 0x587d4856
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, 7cfh
        ; Exact mapped bytes 66 03 46 26: add ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x26
        movzx eax, ax
        push eax
        push ebp
        push ebp
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 31 E9 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], ebp
        mov dword ptr [edi + 54h], ebx
        cmp ebx, ebp
        ; Exact mapped bytes 74 2A: je 0x587d48a9
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebx + 18h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebx + 1ch]
        add ebx, 20h
        mov dword ptr [edi + 10h], edx
        mov eax, dword ptr [ebx]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [ebx + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [ebx + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x587d48a9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov dword ptr [esp + 40h], 0ffffffffh
        mov dword ptr [esi + 4f4h], edi
        ; Exact mapped bytes E8 90 83 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x83
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov dword ptr [esp + 3ch], 11h
        cmp edi, ebp
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x587d495d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 504h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0a0h
        ; Exact mapped bytes 7E 16: jle 0x587d490a
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x587d490a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebx, dword ptr [eax + 190h]
        add ebx, 2800h
        ; Exact mapped bytes EB 02: jmp 0x587d490c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, 7cfh
        ; Exact mapped bytes 66 03 46 26: add ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x26
        movzx eax, ax
        push eax
        push ebp
        push ebp
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 7B E8 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], ebp
        mov dword ptr [edi + 54h], ebx
        cmp ebx, ebp
        ; Exact mapped bytes 74 2A: je 0x587d495f
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebx + 18h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebx + 1ch]
        add ebx, 20h
        mov dword ptr [edi + 10h], edx
        mov eax, dword ptr [ebx]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [ebx + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [ebx + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x587d495f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 4f4h]
        push 101h
        mov dword ptr [esp + 40h], 0ffffffffh
        mov dword ptr [esi + 4f8h], edi
        ; Exact mapped bytes E8 A3 E3 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe3
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4f4h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 4f8h]
        push 101h
        ; Exact mapped bytes E8 84 E3 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4f8h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 4f4h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 4f8h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 184h
        ; Exact mapped bytes E8 7E 82 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x82
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 3ch], 12h
        cmp eax, ebp
        ; Exact mapped bytes 74 3E: je 0x587d4a21
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ecx, dword ptr [esi + 4f8h]
        mov edx, dword ptr [ecx + 8]
        mov edi, dword ptr [ecx + 4]
        push 10101h
        push ebp
        push 16dc16h
        lea ebx, [edx - 1eh]
        push ebx
        lea ebx, [edi + 0c8h]
        push ebx
        add edx, -37h
        push edx
        ; Exact mapped bytes 8B 15 40 45 A2 58: mov edx, dword ptr [0x58a24540]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add edi, 21h
        push edi
        push edx
        push ebp
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 03 AA F8 FF: call 0x5875f420
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xaa
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x587d4a23
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 83eh
        ; Exact mapped bytes 66 03 46 26: add ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x26
        mov dword ptr [esi + 500h], edi
        mov ecx, dword ptr [edi + 40h]
        movzx eax, ax
        mov dword ptr [esp + 3ch], 0ffffffffh
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x587d4a4e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 02 E5 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe5
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x587d4a5b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 85 E4 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 500h]
        push 28h
        ; Exact mapped bytes E8 68 A6 F8 FF: call 0x5875f0d0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xa6
        __asm _emit 0xf8
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 DF 81 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x81
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov dword ptr [esp + 3ch], 13h
        cmp edi, ebp
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x587d4b08
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0d2h
        ; Exact mapped bytes 7E 16: jle 0x587d4aaf
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x587d4aaf
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebx, dword ptr [eax + 190h]
        add ebx, 3480h
        ; Exact mapped bytes EB 02: jmp 0x587d4ab1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, 7d0h
        ; Exact mapped bytes 66 03 4E 26: add cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4e
        __asm _emit 0x26
        movzx eax, cx
        push eax
        push ebp
        push ebp
        push 14h
        push 25dh
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D1 E6 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xe6
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], ebp
        mov dword ptr [edi + 54h], ebx
        cmp ebx, ebp
        ; Exact mapped bytes 74 2B: je 0x587d4b0a
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebx + 18h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebx + 1ch]
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebx + 20h]
        lea eax, [ebx + 20h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x587d4b0a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov dword ptr [esp + 40h], 0ffffffffh
        mov dword ptr [esi + 7a4h], edi
        ; Exact mapped bytes E8 2F 81 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x81
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov dword ptr [esp + 3ch], 14h
        cmp edi, ebp
        ; Exact mapped bytes 0F 84 7F 00 00 00: je 0x587d4bb7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0d3h
        ; Exact mapped bytes 7E 16: jle 0x587d4b5f
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x587d4b5f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebx, dword ptr [eax + 190h]
        add ebx, 34c0h
        ; Exact mapped bytes EB 02: jmp 0x587d4b61
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, 7cfh
        ; Exact mapped bytes 66 03 46 26: add ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, edi
        movzx eax, ax
        push eax
        push ebp
        push ebp
        push -28h
        push 25dh
        push esi
        ; Exact mapped bytes E8 21 E6 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe6
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], ebp
        mov dword ptr [edi + 54h], ebx
        cmp ebx, ebp
        ; Exact mapped bytes 74 2A: je 0x587d4bb9
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
        ; Exact mapped bytes EB 02: jmp 0x587d4bb9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 7a4h]
        push 101h
        mov dword ptr [esp + 40h], 0ffffffffh
        mov dword ptr [esi + 7a8h], edi
        ; Exact mapped bytes E8 49 E1 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xe1
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7a8h]
        push 0fffffeffh
        ; Exact mapped bytes E8 39 E1 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe1
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7a4h]
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 7a8h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, 1fa0h
        mov ebp, 92ch
        sub eax, esi
        mov dword ptr [esp + 28h], ebp
        lea ebx, [esi + 510h]
        mov dword ptr [esp + 2ch], eax
        mov dword ptr [esp + 24h], 19h
        push 54h
        ; Exact mapped bytes E8 23 80 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x80
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov dword ptr [esp + 3ch], 15h
        test edi, edi
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x587d4cc9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 1C: jle 0x587d4c6d
        __asm _emit 0x7e
        __asm _emit 0x1c
        test ebp, ebp
        ; Exact mapped bytes 7C 18: jl 0x587d4c6d
        __asm _emit 0x7c
        __asm _emit 0x18
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0F: je 0x587d4c6d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        add eax, dword ptr [esp + 2ch]
        mov ebp, dword ptr [eax + ebx]
        ; Exact mapped bytes EB 02: jmp 0x587d4c6f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, 7d0h
        ; Exact mapped bytes 66 03 4E 26: add cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4e
        __asm _emit 0x26
        movzx eax, cx
        push eax
        push 0
        push 0
        push 14h
        push 25dh
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 11 E5 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xe5
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 27: je 0x587d4cc3
        __asm _emit 0x74
        __asm _emit 0x27
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
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x587d4ccb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov dword ptr [esp + 40h], 0ffffffffh
        mov dword ptr [ebx], edi
        ; Exact mapped bytes E8 3F E0 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xe0
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        push 0
        ; Exact mapped bytes E8 F6 DF 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xdf
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        inc ebp
        add ebx, 4
        sub dword ptr [esp + 24h], 1
        mov dword ptr [esp + 28h], ebp
        ; Exact mapped bytes 0F 85 1C FF FF FF: jne 0x587d4c24
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea ebx, [esi + 148h]
        mov dword ptr [esp + 28h], 5
        push 54h
        ; Exact mapped bytes E8 31 7F 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x7f
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov dword ptr [esp + 3ch], 16h
        test edi, edi
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x587d4dbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 504h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 16bh
        ; Exact mapped bytes 7E 17: jle 0x587d4d6a
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x587d4d6a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 5ach]
        ; Exact mapped bytes EB 02: jmp 0x587d4d6c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, 7d1h
        ; Exact mapped bytes 66 03 46 26: add ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x26
        movzx eax, ax
        push eax
        push 0
        push 0
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 19 E4 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xe4
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x587d4dbe
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
        ; Exact mapped bytes EB 02: jmp 0x587d4dbe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0
        mov ecx, edi
        mov dword ptr [esp + 40h], 0ffffffffh
        mov dword ptr [ebx - 14h], edi
        ; Exact mapped bytes E8 4E DF 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xdf
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebx - 14h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebx - 14h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 5D 7E 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x7e
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov dword ptr [esp + 3ch], 17h
        test edi, edi
        ; Exact mapped bytes 0F 84 7F 00 00 00: je 0x587d4e89
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 504h]
        ; Exact mapped bytes 8B 15 A4 46 A2 58: mov edx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 164h], 165h
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes 7E 17: jle 0x587d4e3f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [edx + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x587d4e3f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [edx + 18ch]
        mov ebp, dword ptr [edx + 594h]
        ; Exact mapped bytes EB 02: jmp 0x587d4e41
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 7cfh
        push 0
        push 0
        push ecx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 4C E3 12 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe3
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x587d4e8b
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
        ; Exact mapped bytes EB 02: jmp 0x587d4e8b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov dword ptr [esp + 40h], 0ffffffffh
        mov dword ptr [ebx], edi
        ; Exact mapped bytes E8 7F DE 12 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xde
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebx]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        add ebx, 4
        sub dword ptr [esp + 28h], 1
        ; Exact mapped bytes 0F 85 51 FE FF FF: jne 0x587d4d16
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebp, ebp
        lea edi, [esi + 134h]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d0h]
        mov ecx, dword ptr [esi + 0c4h]
        imul eax, ebp
        mov edx, dword ptr [ecx + eax*8 + 24h]
        mov eax, dword ptr [ecx + eax*8 + 20h]
        mov ecx, dword ptr [edi]
        add edx, 300h
        push edx
        push eax
        ; Exact mapped bytes E8 9A E3 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe3
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 26: mov cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x26
        mov ebx, dword ptr [edi]
        ; Exact mapped bytes 66 03 CD: add cx, bp
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xcd
        mov edx, 7d5h
        ; Exact mapped bytes 66 03 CA: add cx, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xca
        movzx eax, cx
        mov ecx, dword ptr [ebx + 40h]
        ; Exact mapped bytes 66 89 43 26: mov word ptr [ebx + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587d4f1b
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 35 E0 12 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe0
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587d4f28
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 B8 DF 12 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xdf
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 8]
        mov ecx, dword ptr [edi + 14h]
        add eax, 4
        mov eax, dword ptr [eax]
        push edx
        push eax
        ; Exact mapped bytes E8 54 E3 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe3
        __asm _emit 0x12
        __asm _emit 0x00
        inc ebp
        add edi, 4
        cmp ebp, 5
        ; Exact mapped bytes 7C 8B: jl 0x587d4ed0
        __asm _emit 0x7c
        __asm _emit 0x8b
        ; Exact mapped bytes 83 3D 34 90 9C 58 00: cmp dword ptr [0x589c9034], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 48: je 0x587d4f96
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [esi + 60h], 0
        ; Exact mapped bytes 75 42: jne 0x587d4f96
        __asm _emit 0x75
        __asm _emit 0x42
        push 30h
        ; Exact mapped bytes E8 F3 7C 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x7c
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 3ch], 18h
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x587d4f88
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D E0 8F 9C 58: mov ecx, dword ptr [0x589c8fe0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x8f
        __asm _emit 0x9c
        __asm _emit 0x58
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 74 54 13 00: call 0x5890a3f0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x54
        __asm _emit 0x13
        __asm _emit 0x00
        or edi, 0ffffffffh
        mov dword ptr [esp + 3ch], edi
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes EB 11: jmp 0x587d4f99
        __asm _emit 0xeb
        __asm _emit 0x11
        xor eax, eax
        or edi, 0ffffffffh
        mov dword ptr [esp + 3ch], edi
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes EB 03: jmp 0x587d4f99
        __asm _emit 0xeb
        __asm _emit 0x03
        or edi, 0ffffffffh
        ; Exact mapped bytes 83 3D FC 44 A2 58 00: cmp dword ptr [0x58a244fc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        mov edx, dword ptr [esi + 60h]
        ; Exact mapped bytes 89 15 80 47 A2 58: mov dword ptr [0x58a24780], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 21: je 0x587d4fcc
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [esi + 60h]
        test ecx, ecx
        ; Exact mapped bytes 74 1A: je 0x587d4fcc
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 8B 15 D4 48 A2 58: mov edx, dword ptr [0x58a248d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 0ch]
        push edx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 60h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, esi
        ; Exact mapped bytes E8 8D 9B FF FF: call 0x587ceb60
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 80 45 A2 58: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 89 0D 7C 45 A2 58: mov dword ptr [0x58a2457c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 89 35 80 45 A2 58: mov dword ptr [0x58a24580], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, word ptr [esi + 0a06h]
        mov ecx, dword ptr [esi + edx*8 + 5c4h]
        lea eax, [esi + edx*8 + 5c0h]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esi + 504h]
        push edx
        ; Exact mapped bytes E8 87 E2 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe2
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 504h]
        ; Exact mapped bytes E8 9C 14 FE FF: call 0x587b64b0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 C3 DC 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xdc
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi + 508h]
        mov ecx, 0fffeh
        mov dword ptr [esi + 58h], 100h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 508h]
        push 0
        ; Exact mapped bytes E8 A0 DC 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xdc
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [esi + 508h]
        mov dword ptr [edx + 84h], 0
        ; Exact mapped bytes 8B 0D FC 47 A2 58: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 12ch
        ; Exact mapped bytes E8 40 BD 0E 00: call 0x588c0da0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xbd
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        mov edx, dword ptr [esi + 0bch]
        mov ebx, dword ptr [esi + 68h]
        mov eax, 0fffffffeh
        mov dword ptr [esi + 90h], eax
        mov dword ptr [esi + 94h], eax
        mov eax, dword ptr [esi + 784h]
        mov dword ptr [esi + 0dch], ecx
        mov dword ptr [esi + 788h], eax
        mov dword ptr [esi + 88h], edi
        mov dword ptr [esi + 8ch], edi
        mov dword ptr [esi + 98h], edi
        mov dword ptr [esi + 9ch], edi
        mov dword ptr [esi + 780h], 40000000h
        mov dword ptr [esi + 0e4h], 1
        mov dword ptr [esi + 0e0h], edx
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        mov edi, dword ptr [ecx + 8]
        mov ecx, dword ptr [esi + 74h]
        mov eax, edx
        sub eax, dword ptr [esi + 70h]
        sub ecx, edi
        mov ebp, eax
        imul ecx, ecx, 3e8h
        imul ebp, ebx
        cmp ecx, ebp
        ; Exact mapped bytes 7F 28: jg 0x587d5111
        __asm _emit 0x7f
        __asm _emit 0x28
        mov ebp, dword ptr [esi + 6ch]
        imul eax, ebp
        cmp ecx, eax
        ; Exact mapped bytes 7C 1E: jl 0x587d5111
        __asm _emit 0x7c
        __asm _emit 0x1e
        sub edx, dword ptr [esi + 78h]
        mov eax, dword ptr [esi + 7ch]
        sub eax, edi
        mov ecx, edx
        imul eax, eax, 3e8h
        imul ecx, ebp
        cmp eax, ecx
        ; Exact mapped bytes 7F 07: jg 0x587d5111
        __asm _emit 0x7f
        __asm _emit 0x07
        imul edx, ebx
        cmp eax, edx
        ; Exact mapped bytes 7D 0A: jge 0x587d511b
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov dword ptr [esi + 90h], 0fffffffeh
        xor ebx, ebx
        cmp dword ptr [esi + 9e8h], ebx
        ; Exact mapped bytes 7E 3C: jle 0x587d5161
        __asm _emit 0x7e
        __asm _emit 0x3c
        lea edi, [esi + 810h]
        mov ebp, 40000000h
        mov ecx, dword ptr [edi]
        push 0
        ; Exact mapped bytes E8 A7 DB 12 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xdb
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes E8 F8 7A 1A 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x7a
        __asm _emit 0x1a
        __asm _emit 0x00
        and eax, 8000007fh
        ; Exact mapped bytes 79 05: jns 0x587d514a
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0ffffff80h
        inc eax
        mov ecx, dword ptr [edi]
        sub eax, -80h
        inc ebx
        mov dword ptr [ecx + 7ch], eax
        mov dword ptr [ecx + 74h], ebp
        add edi, 4
        cmp ebx, dword ptr [esi + 9e8h]
        ; Exact mapped bytes 7C CF: jl 0x587d5130
        __asm _emit 0x7c
        __asm _emit 0xcf
        mov ecx, dword ptr [esi + 0adch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 0ab8h]
        push ecx
        ; Exact mapped bytes FF 15 84 C1 98 58: call dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        cmp dword ptr [esi + 0ae0h], 0
        ; Exact mapped bytes 74 13: je 0x587d5197
        __asm _emit 0x74
        __asm _emit 0x13
        push 64h
        mov ecx, esi
        ; Exact mapped bytes E8 03 BE FF FF: call 0x587d0f90
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0ae0h], 0
        ; Exact mapped bytes 8B 15 A8 45 A2 58: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0c4h
        add edx, 180h
        push 0
        push edx
        ; Exact mapped bytes E8 98 7A 1A 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x7a
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [esp + 34h]
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
        add esp, 2ch
        ret
    }
}
