// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 4619 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883F4C0 .. +0x120B bytes.
extern "C" __declspec(naked) void FUN_5883f4c0_segment_00() {
    __asm {
        push -1
        push 5898495eh
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
        ; Exact mapped bytes E8 8E 3C 0C 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        mov dword ptr [esi + 50h], ebx
        xor ebx, ebx
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        mov dword ptr [esi], 5899e378h
        ; Exact mapped bytes 8B 0D 68 47 A2 58: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 5ch
        mov dword ptr [esp + 28h], ebx
        mov dword ptr [esi + 60h], ecx
        ; Exact mapped bytes E8 05 D7 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xd7
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 1
        cmp eax, ebx
        ; Exact mapped bytes 74 10: je 0x5883f569
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F9 A9 F1 FF: call 0x58759f60
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xa9
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883f56b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 5ch
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 0cch], eax
        ; Exact mapped bytes E8 D2 D6 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xd6
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 2
        cmp eax, ebx
        ; Exact mapped bytes 74 10: je 0x5883f59c
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C6 A9 F1 FF: call 0x58759f60
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa9
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883f59e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 5ch
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 0d0h], eax
        ; Exact mapped bytes E8 9F D6 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd6
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 3
        cmp eax, ebx
        ; Exact mapped bytes 74 10: je 0x5883f5cf
        __asm _emit 0x74
        __asm _emit 0x10
        push 40h
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 93 A9 F1 FF: call 0x58759f60
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa9
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883f5d1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0d4h], eax
        lea eax, [esi + 64h]
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esp + 38h], 173h
        mov dword ptr [esp + 2ch], eax
        mov dword ptr [esp + 3ch], 5cch
        push 54h
        ; Exact mapped bytes E8 55 D6 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xd6
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 18h], edi
        mov byte ptr [esp + 24h], 4
        cmp edi, ebx
        ; Exact mapped bytes 74 79: je 0x5883f684
        __asm _emit 0x74
        __asm _emit 0x79
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esp + 38h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 17: jle 0x5883f631
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, ebx
        ; Exact mapped bytes 7C 13: jl 0x5883f631
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x5883f631
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esp + 3ch]
        mov ebp, dword ptr [edx + eax]
        ; Exact mapped bytes EB 02: jmp 0x5883f633
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [esi + 0cch]
        push 40h
        push ebx
        push ebx
        push ecx
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 51 3B 0C 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x3b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2A: je 0x5883f686
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
        ; Exact mapped bytes EB 02: jmp 0x5883f686
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 2ch]
        dec dword ptr [esp + 38h]
        mov dword ptr [eax], edi
        add eax, 4
        mov dword ptr [esp + 2ch], eax
        mov eax, dword ptr [esp + 3ch]
        sub eax, 4
        cmp eax, 5c4h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes 0F 8F 41 FF FF FF: jg 0x5883f5f2
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 6ch]
        mov dword ptr [esp + 38h], 177h
        mov dword ptr [esp + 2ch], eax
        mov dword ptr [esp + 3ch], 5dch
        push 54h
        ; Exact mapped bytes E8 7F D5 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xd5
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 18h], edi
        mov byte ptr [esp + 24h], 5
        cmp edi, ebx
        ; Exact mapped bytes 74 7A: je 0x5883f75b
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esp + 38h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 17: jle 0x5883f707
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, ebx
        ; Exact mapped bytes 7C 13: jl 0x5883f707
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x5883f707
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 3ch]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x5883f709
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 30h]
        mov eax, dword ptr [esi + 0d0h]
        push 40h
        push ebx
        push ebx
        push edx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 7B 3A 0C 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x3a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2B: je 0x5883f75d
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
        ; Exact mapped bytes EB 02: jmp 0x5883f75d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 2ch]
        dec dword ptr [esp + 38h]
        mov dword ptr [eax], edi
        add eax, 4
        mov dword ptr [esp + 2ch], eax
        mov eax, dword ptr [esp + 3ch]
        sub eax, 4
        cmp eax, 5d4h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes 0F 8F 40 FF FF FF: jg 0x5883f6c8
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 74h]
        mov dword ptr [esp + 38h], 175h
        mov dword ptr [esp + 2ch], eax
        mov dword ptr [esp + 3ch], 5d4h
        nop
        push 54h
        ; Exact mapped bytes E8 A7 D4 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xd4
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 18h], edi
        mov byte ptr [esp + 24h], 6
        cmp edi, ebx
        ; Exact mapped bytes 74 7A: je 0x5883f833
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esp + 38h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 17: jle 0x5883f7df
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, ebx
        ; Exact mapped bytes 7C 13: jl 0x5883f7df
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x5883f7df
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 3ch]
        mov ebp, dword ptr [ecx + eax]
        ; Exact mapped bytes EB 02: jmp 0x5883f7e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 30h]
        mov eax, dword ptr [esi + 0d4h]
        push 40h
        push ebx
        push ebx
        push edx
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 A3 39 0C 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x39
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2B: je 0x5883f835
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
        ; Exact mapped bytes EB 02: jmp 0x5883f835
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 2ch]
        dec dword ptr [esp + 38h]
        mov dword ptr [eax], edi
        add eax, 4
        mov dword ptr [esp + 2ch], eax
        mov eax, dword ptr [esp + 3ch]
        sub eax, 4
        cmp eax, 5cch
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes 0F 8F 40 FF FF FF: jg 0x5883f7a0
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 64h]
        push 0fffffeffh
        ; Exact mapped bytes E8 B3 34 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x34
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        push 101h
        ; Exact mapped bytes E8 A6 34 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x34
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 99 34 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x34
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        push 101h
        ; Exact mapped bytes E8 8C 34 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x34
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        push 0fffffeffh
        ; Exact mapped bytes E8 7F 34 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x34
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        push 101h
        ; Exact mapped bytes E8 72 34 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x34
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 96 D3 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xd3
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 7
        cmp eax, ebx
        ; Exact mapped bytes 74 4E: je 0x5883f916
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 48h
        ; Exact mapped bytes 7E 12: jle 0x5883f8e6
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x5883f8e6
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1200h
        ; Exact mapped bytes EB 02: jmp 0x5883f8e8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov ebp, dword ptr [esp + 34h]
        mov edi, dword ptr [esp + 30h]
        push 40h
        lea edx, [ebp + 14ch]
        push edx
        lea edx, [edi + 41h]
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
        ; Exact mapped bytes E8 8C E4 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe4
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x5883f920
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edi, dword ptr [esp + 30h]
        mov ebp, dword ptr [esp + 34h]
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 1D D3 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xd3
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 8
        cmp eax, ebx
        ; Exact mapped bytes 74 49: je 0x5883f98a
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 49h
        ; Exact mapped bytes 7E 12: jle 0x5883f95f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x5883f95f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1240h
        ; Exact mapped bytes EB 02: jmp 0x5883f961
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebp + 14ch]
        push edx
        lea edx, [edi + 80h]
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
        ; Exact mapped bytes E8 18 E4 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xe4
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883f98c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 AE D2 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xd2
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 9
        cmp eax, ebx
        ; Exact mapped bytes 74 43: je 0x5883f9f3
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 47h
        ; Exact mapped bytes 7E 12: jle 0x5883f9ce
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x5883f9ce
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 11c0h
        ; Exact mapped bytes EB 02: jmp 0x5883f9d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebp + 46h]
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
        ; Exact mapped bytes E8 AF E3 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xe3
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883f9f5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 45 D2 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xd2
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 0ah
        cmp eax, ebx
        ; Exact mapped bytes 74 46: je 0x5883fa5f
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 46h
        ; Exact mapped bytes 7E 12: jle 0x5883fa37
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x5883fa37
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1180h
        ; Exact mapped bytes EB 02: jmp 0x5883fa39
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebp + 46h]
        push edx
        lea edx, [edi + 0b4h]
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
        ; Exact mapped bytes E8 43 E3 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe3
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883fa61
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 D9 D1 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd1
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 0bh
        cmp eax, ebx
        ; Exact mapped bytes 74 46: je 0x5883facb
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 3dh
        ; Exact mapped bytes 7E 12: jle 0x5883faa3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x5883faa3
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0f40h
        ; Exact mapped bytes EB 02: jmp 0x5883faa5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebp + 69h]
        push edx
        lea edx, [edi + 82h]
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
        ; Exact mapped bytes E8 D7 E2 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xe2
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883facd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes E8 6D D1 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xd1
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 0ch
        cmp eax, ebx
        ; Exact mapped bytes 74 46: je 0x5883fb37
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 3dh
        ; Exact mapped bytes 7E 12: jle 0x5883fb0f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x5883fb0f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0f40h
        ; Exact mapped bytes EB 02: jmp 0x5883fb11
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebp + 69h]
        push edx
        lea edx, [edi + 12ah]
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
        ; Exact mapped bytes E8 6B E2 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xe2
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883fb39
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes E8 01 D1 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd1
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 0dh
        cmp eax, ebx
        ; Exact mapped bytes 74 46: je 0x5883fba3
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 3dh
        ; Exact mapped bytes 7E 12: jle 0x5883fb7b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x5883fb7b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0f40h
        ; Exact mapped bytes EB 02: jmp 0x5883fb7d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebp + 69h]
        push edx
        lea edx, [edi + 1f0h]
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
        ; Exact mapped bytes E8 FF E1 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xe1
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883fba5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes E8 95 D0 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xd0
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 0eh
        cmp eax, ebx
        ; Exact mapped bytes 74 49: je 0x5883fc12
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 4ah
        ; Exact mapped bytes 7E 12: jle 0x5883fbe7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x5883fbe7
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1280h
        ; Exact mapped bytes EB 02: jmp 0x5883fbe9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebp + 14ch]
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
        ; Exact mapped bytes E8 90 E1 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe1
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883fc14
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 98h], eax
        ; Exact mapped bytes E8 26 D0 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xd0
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 0fh
        cmp eax, ebx
        ; Exact mapped bytes 74 49: je 0x5883fc81
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 4bh
        ; Exact mapped bytes 7E 12: jle 0x5883fc56
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x5883fc56
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 12c0h
        ; Exact mapped bytes EB 02: jmp 0x5883fc58
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebp + 14ch]
        push edx
        lea edx, [edi + 0e6h]
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
        ; Exact mapped bytes E8 21 E1 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe1
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883fc83
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes E8 B7 CF 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xcf
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 10h
        cmp eax, ebx
        ; Exact mapped bytes 74 49: je 0x5883fcf0
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 54h
        ; Exact mapped bytes 7E 12: jle 0x5883fcc5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x5883fcc5
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1500h
        ; Exact mapped bytes EB 02: jmp 0x5883fcc7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebp + 14ch]
        push edx
        lea edx, [edi + 1d1h]
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
        ; Exact mapped bytes E8 B2 E0 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe0
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883fcf2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 100h], eax
        ; Exact mapped bytes E8 48 CF 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xcf
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 11h
        cmp eax, ebx
        ; Exact mapped bytes 74 49: je 0x5883fd5f
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 53h
        ; Exact mapped bytes 7E 12: jle 0x5883fd34
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x5883fd34
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 14c0h
        ; Exact mapped bytes EB 02: jmp 0x5883fd36
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        add ebp, 14ch
        push ebp
        lea edx, [edi + 1f4h]
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
        ; Exact mapped bytes E8 43 E0 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe0
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883fd61
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0fch], eax
        lea eax, [esi + 104h]
        add edi, 1edh
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 3ch], edi
        mov dword ptr [esp + 2ch], 2
        push 58h
        ; Exact mapped bytes E8 C0 CE 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xce
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 18h], edi
        mov byte ptr [esp + 24h], 12h
        cmp edi, ebx
        ; Exact mapped bytes 74 74: je 0x5883fe14
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], 55h
        ; Exact mapped bytes 7E 12: jle 0x5883fdbe
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x5883fdbe
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 1540h]
        ; Exact mapped bytes EB 02: jmp 0x5883fdc0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 3ch]
        push 40h
        push ebx
        push ebx
        add ecx, 14fh
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C4 33 0C 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x33
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2A: je 0x5883fe16
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
        ; Exact mapped bytes EB 02: jmp 0x5883fe16
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        sub dword ptr [esp + 3ch], 0ah
        mov dword ptr [eax], edi
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        add eax, 4
        sub dword ptr [esp + 2ch], 1
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 85 47 FF FF FF: jne 0x5883fd87
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 7ch]
        push 101h
        ; Exact mapped bytes E8 D3 2E 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x2e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        push 101h
        ; Exact mapped bytes E8 C3 2E 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x2e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        push 101h
        ; Exact mapped bytes E8 B3 2E 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x2e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push 101h
        ; Exact mapped bytes E8 A3 2E 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x2e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        push 101h
        ; Exact mapped bytes E8 93 2E 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x2e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push 101h
        ; Exact mapped bytes E8 83 2E 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x2e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 101h
        ; Exact mapped bytes E8 73 2E 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x2e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        push 101h
        ; Exact mapped bytes E8 63 2E 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x2e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        push 101h
        ; Exact mapped bytes E8 53 2E 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x2e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 100h]
        push 101h
        ; Exact mapped bytes E8 43 2E 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x2e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0fch]
        push 101h
        ; Exact mapped bytes E8 33 2E 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x2e
        __asm _emit 0x0c
        __asm _emit 0x00
        push 90h
        ; Exact mapped bytes E8 57 CD 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xcd
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov ebp, dword ptr [esp + 34h]
        mov edi, dword ptr [esp + 30h]
        mov byte ptr [esp + 24h], 13h
        cmp eax, ebx
        ; Exact mapped bytes 74 2E: je 0x5883ff3d
        __asm _emit 0x74
        __asm _emit 0x2e
        push ebx
        push ebx
        push 0ffffffh
        lea edx, [ebp + 140h]
        push edx
        lea ecx, [edi + 9bh]
        push ecx
        lea edx, [ebp + 7eh]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [edi + 48h]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 45 A3 F4 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa3
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883ff3f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes E8 FB CC 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xcc
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 14h
        cmp eax, ebx
        ; Exact mapped bytes 74 31: je 0x5883ff94
        __asm _emit 0x74
        __asm _emit 0x31
        push ebx
        push ebx
        push 0ffffffh
        lea ecx, [ebp + 140h]
        push ecx
        lea edx, [edi + 181h]
        push edx
        lea ecx, [ebp + 7eh]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [edi + 0aah]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 EE A2 F4 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xa2
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883ff96
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes E8 A4 CC 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xcc
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 15h
        cmp eax, ebx
        ; Exact mapped bytes 74 31: je 0x5883ffeb
        __asm _emit 0x74
        __asm _emit 0x31
        push ebx
        push ebx
        push 0ffffffh
        lea edx, [ebp + 140h]
        push edx
        lea ecx, [edi + 212h]
        push ecx
        lea edx, [ebp + 7eh]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [edi + 18ah]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 97 A2 F4 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xa2
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5883ffed
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E8 4D CC 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xcc
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 16h
        cmp eax, ebx
        ; Exact mapped bytes 74 2E: je 0x5884003f
        __asm _emit 0x74
        __asm _emit 0x2e
        push ebx
        push ebx
        push 0ffffffh
        lea ecx, [ebp + 96h]
        push ecx
        lea edx, [edi + 9bh]
        push edx
        lea ecx, [ebp + 7eh]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [edi + 48h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 43 A2 F4 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa2
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58840041
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes E8 F9 CB 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xcb
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 17h
        cmp eax, ebx
        ; Exact mapped bytes 74 31: je 0x58840096
        __asm _emit 0x74
        __asm _emit 0x31
        push ebx
        push ebx
        push 0ffffffh
        lea edx, [ebp + 96h]
        push edx
        lea ecx, [edi + 181h]
        push ecx
        lea edx, [ebp + 7eh]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [edi + 0aah]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 EC A1 F4 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58840098
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E8 A2 CB 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xcb
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 18h
        cmp eax, ebx
        ; Exact mapped bytes 74 31: je 0x588400ed
        __asm _emit 0x74
        __asm _emit 0x31
        push ebx
        push ebx
        push 0ffffffh
        lea ecx, [ebp + 96h]
        push ecx
        lea edx, [edi + 212h]
        push edx
        lea ecx, [ebp + 7eh]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [edi + 18ah]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 95 A1 F4 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588400ef
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 0b4h], eax
        ; Exact mapped bytes E8 4B CB 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xcb
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 19h
        cmp eax, ebx
        ; Exact mapped bytes 74 2E: je 0x58840141
        __asm _emit 0x74
        __asm _emit 0x2e
        push ebx
        push ebx
        push 0ffffffh
        lea edx, [ebp + 140h]
        push edx
        lea ecx, [edi + 9bh]
        push ecx
        lea edx, [ebp + 7eh]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [edi + 48h]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 41 A1 F4 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58840143
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 0b8h], eax
        ; Exact mapped bytes E8 F7 CA 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xca
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 1ah
        cmp eax, ebx
        ; Exact mapped bytes 74 31: je 0x58840198
        __asm _emit 0x74
        __asm _emit 0x31
        push ebx
        push ebx
        push 0ffffffh
        lea ecx, [ebp + 140h]
        push ecx
        lea edx, [edi + 181h]
        push edx
        lea ecx, [ebp + 7eh]
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [edi + 0aah]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 EA A0 F4 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xa0
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5884019a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 0bch], eax
        ; Exact mapped bytes E8 A0 CA 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xca
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 1bh
        cmp eax, ebx
        ; Exact mapped bytes 74 31: je 0x588401ef
        __asm _emit 0x74
        __asm _emit 0x31
        push ebx
        push ebx
        push 0ffffffh
        lea edx, [ebp + 140h]
        push edx
        lea ecx, [edi + 212h]
        push ecx
        lea edx, [ebp + 7eh]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [edi + 18ah]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 93 A0 F4 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa0
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588401f1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 0c0h], eax
        ; Exact mapped bytes E8 49 CA 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xca
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 1ch
        cmp eax, ebx
        ; Exact mapped bytes 74 31: je 0x58840246
        __asm _emit 0x74
        __asm _emit 0x31
        push ebx
        push ebx
        push 0ffffffh
        lea ecx, [ebp + 140h]
        push ecx
        lea edx, [edi + 212h]
        push edx
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ecx, [ebp + 9bh]
        push ecx
        add edi, 48h
        push edi
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 3C A0 F4 FF: call 0x5878a280
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xa0
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58840248
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0c4h], eax
        mov dword ptr [eax + 5ch], 14h
        mov eax, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [eax + 18h]
        lea ecx, [edx + ecx*8]
        ; Exact mapped bytes 66 8B 54 24 40: mov dx, word ptr [esp + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        mov dword ptr [eax + 20h], ecx
        mov edi, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [edi + 40h]
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x58840287
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C9 2C 0C 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x2c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x58840294
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 4C 2C 0C 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x2c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        mov dword ptr [eax + 6ch], 999999h
        mov eax, dword ptr [esi + 0a0h]
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ach]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b8h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b0h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0bch]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b4h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c0h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 36 C9 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xc9
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 24h], 1dh
        cmp edi, ebx
        ; Exact mapped bytes 74 75: je 0x5884039f
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 40h
        ; Exact mapped bytes 7E 12: jle 0x58840348
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x58840348
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 100h]
        ; Exact mapped bytes EB 02: jmp 0x5884034a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 30h]
        push 40h
        push ebx
        push ebx
        sub edx, -80h
        push edx
        add eax, 45h
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 3A 2E 0C 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x2e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 26: je 0x58840399
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
        mov ebp, dword ptr [esp + 34h]
        ; Exact mapped bytes EB 02: jmp 0x588403a1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0a0h
        mov ecx, edi
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 0c8h], edi
        ; Exact mapped bytes E8 29 29 0C 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x29
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c8h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 84h
        ; Exact mapped bytes E8 7E C8 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc8
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov edi, dword ptr [esp + 30h]
        mov byte ptr [esp + 24h], 1eh
        cmp eax, ebx
        ; Exact mapped bytes 74 16: je 0x588403fa
        __asm _emit 0x74
        __asm _emit 0x16
        push 40h
        push ebx
        push ebx
        lea edx, [ebp + 32h]
        push edx
        lea ecx, [edi + 32h]
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A8 B4 00 00: call 0x5884b8a0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588403fc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, 0fff0h
        mov dword ptr [esi + 0d8h], eax
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 14h
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes E8 38 C8 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xc8
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 1fh
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x5884042f
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 03 98 F4 FF: call 0x58789c30
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x98
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58840431
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 0dch], eax
        ; Exact mapped bytes E8 09 C8 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xc8
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 20h
        cmp eax, ebx
        ; Exact mapped bytes 74 47: je 0x5884049c
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D 28 47 A2 58: mov ecx, dword ptr [0x58a24728]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0ch
        ; Exact mapped bytes 7E 16: jle 0x5884047a
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5884047a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 300h
        ; Exact mapped bytes EB 02: jmp 0x5884047c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 40h]
        push ecx
        lea ecx, [ebp + 96h]
        push ecx
        lea ecx, [edi + 216h]
        push ecx
        push edx
        push esi
        push ebx
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 06 D9 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xd9
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5884049e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 0e4h], eax
        ; Exact mapped bytes E8 9C C7 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xc7
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 24h], 21h
        cmp eax, ebx
        ; Exact mapped bytes 74 47: je 0x58840509
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D 28 47 A2 58: mov ecx, dword ptr [0x58a24728]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0dh
        ; Exact mapped bytes 7E 16: jle 0x588404e7
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x588404e7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 340h
        ; Exact mapped bytes EB 02: jmp 0x588404e9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 40h]
        push ecx
        add ebp, 138h
        push ebp
        add edi, 216h
        push edi
        push edx
        push esi
        push ebx
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 99 D8 F1 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd8
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5884050b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0e4h]
        push 101h
        mov byte ptr [esp + 28h], bl
        mov dword ptr [esi + 0e8h], eax
        ; Exact mapped bytes E8 FB 27 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x27
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e8h]
        push 101h
        ; Exact mapped bytes E8 EB 27 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x27
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e4h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e8h]
        mov ecx, edx
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
        mov eax, dword ptr [esi + 0e8h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 58h
        ; Exact mapped bytes E8 DC C6 13 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc6
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 24h], 22h
        cmp edi, ebx
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x5884060b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 28 47 A2 58: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0bh
        ; Exact mapped bytes 7E 16: jle 0x588405ac
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x588405ac
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebp, dword ptr [eax + 190h]
        add ebp, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x588405ae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 30h]
        push edx
        push ebx
        push ebx
        add eax, 0a2h
        push eax
        add ecx, 216h
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 CE 2B 0C 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x2b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2B: je 0x5884060d
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebp + 20h]
        lea eax, [ebp + 20h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x5884060d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0ech], edi
        mov eax, 0fffbh
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0ech]
        push 101h
        mov byte ptr [esp + 28h], bl
        ; Exact mapped bytes E8 F0 26 0C 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x26
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ech]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ech]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov edx, 0e5ffh
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
        mov ecx, 1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov dword ptr [esi + 0f0h], ecx
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0cch]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov eax, dword ptr [esi + 0d0h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov dword ptr [esi + 0f4h], ecx
        mov dword ptr [esi + 0f8h], ebx
        mov dword ptr [esi + 10ch], ecx
        mov dword ptr [esi + 110h], ecx
        mov dword ptr [esi + 114h], ebx
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
