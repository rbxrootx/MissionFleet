// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 2999 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588AB550 .. +0xBB7 bytes.
extern "C" __declspec(naked) void FUN_588ab550_segment_00() {
    __asm {
        push -1
        push 58987e24h
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
        mov ebx, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push edi
        push ebx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 00 7C 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x7c
        __asm _emit 0x05
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
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], eax
        mov dword ptr [esi], 589a0784h
        ; Exact mapped bytes 8B 0D 68 47 A2 58: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esi + 60h], ecx
        lea ebx, [esi + 78h]
        mov dword ptr [esp + 38h], 5
        push 54h
        ; Exact mapped bytes E8 6C 16 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x16
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 20h], 1
        test edi, edi
        ; Exact mapped bytes 74 78: je 0x588ab66c
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes A1 68 47 A2 58: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 195h
        ; Exact mapped bytes 7E 17: jle 0x588ab61c
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588ab61c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [edx + 654h]
        ; Exact mapped bytes EB 02: jmp 0x588ab61e
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
        ; Exact mapped bytes E8 6A 7B 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x588ab66e
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
        ; Exact mapped bytes EB 02: jmp 0x588ab66e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [ebx - 14h], edi
        ; Exact mapped bytes E8 D1 15 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x15
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 20h], 2
        test edi, edi
        ; Exact mapped bytes 74 79: je 0x588ab708
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 68 47 A2 58: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 196h
        ; Exact mapped bytes 7E 17: jle 0x588ab6b7
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588ab6b7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 658h]
        ; Exact mapped bytes EB 02: jmp 0x588ab6b9
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
        ; Exact mapped bytes E8 CF 7A 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 26: je 0x588ab704
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
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x588ab70a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        mov dword ptr [ebx], ecx
        ; Exact mapped bytes E8 05 76 05 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x76
        __asm _emit 0x05
        __asm _emit 0x00
        add ebx, 4
        sub dword ptr [esp + 38h], 1
        ; Exact mapped bytes 0F 85 B2 FE FF FF: jne 0x588ab5db
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 1E 15 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x15
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 20h], 3
        test edi, edi
        ; Exact mapped bytes 74 71: je 0x588ab7b3
        __asm _emit 0x74
        __asm _emit 0x71
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 197h
        ; Exact mapped bytes 7E 12: jle 0x588ab763
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x588ab763
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 65ch]
        ; Exact mapped bytes EB 02: jmp 0x588ab765
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ebx, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 23 7A 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2F: je 0x588ab7b9
        __asm _emit 0x74
        __asm _emit 0x2f
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
        ; Exact mapped bytes EB 06: jmp 0x588ab7b9
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, dword ptr [esp + 30h]
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 8ch], edi
        ; Exact mapped bytes E8 83 14 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 20h], 4
        test edi, edi
        ; Exact mapped bytes 74 6C: je 0x588ab849
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 198h
        ; Exact mapped bytes 7E 12: jle 0x588ab7fe
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x588ab7fe
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 660h]
        ; Exact mapped bytes EB 02: jmp 0x588ab800
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 8C 79 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x588ab84b
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
        ; Exact mapped bytes EB 02: jmp 0x588ab84b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 90h], edi
        ; Exact mapped bytes E8 F1 13 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x13
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 20h], 5
        test edi, edi
        ; Exact mapped bytes 74 6C: je 0x588ab8db
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 199h
        ; Exact mapped bytes 7E 12: jle 0x588ab890
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x588ab890
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 664h]
        ; Exact mapped bytes EB 02: jmp 0x588ab892
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 FA 78 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x588ab8dd
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
        ; Exact mapped bytes EB 02: jmp 0x588ab8dd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 94h], edi
        ; Exact mapped bytes E8 5F 13 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x13
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 20h], 6
        test edi, edi
        ; Exact mapped bytes 74 6C: je 0x588ab96d
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 19ah
        ; Exact mapped bytes 7E 12: jle 0x588ab922
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x588ab922
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 668h]
        ; Exact mapped bytes EB 02: jmp 0x588ab924
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 68 78 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x588ab96f
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
        ; Exact mapped bytes EB 02: jmp 0x588ab96f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 90h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 98h], edi
        ; Exact mapped bytes E8 96 73 05 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        push 0fffffeffh
        ; Exact mapped bytes E8 86 73 05 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 AD 12 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x12
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 20h], 7
        test edi, edi
        ; Exact mapped bytes 74 6C: je 0x588aba1f
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 197h
        ; Exact mapped bytes 7E 12: jle 0x588ab9d4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x588ab9d4
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 65ch]
        ; Exact mapped bytes EB 02: jmp 0x588ab9d6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B6 77 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x77
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x588aba21
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
        ; Exact mapped bytes EB 02: jmp 0x588aba21
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0b8h], edi
        ; Exact mapped bytes E8 1B 12 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x12
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 20h], 8
        test edi, edi
        ; Exact mapped bytes 74 6C: je 0x588abab1
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 198h
        ; Exact mapped bytes 7E 12: jle 0x588aba66
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x588aba66
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 660h]
        ; Exact mapped bytes EB 02: jmp 0x588aba68
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 24 77 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x77
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x588abab3
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
        ; Exact mapped bytes EB 02: jmp 0x588abab3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0bch], edi
        ; Exact mapped bytes E8 89 11 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x11
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 20h], 9
        test edi, edi
        ; Exact mapped bytes 74 6C: je 0x588abb43
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 199h
        ; Exact mapped bytes 7E 12: jle 0x588abaf8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x588abaf8
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 664h]
        ; Exact mapped bytes EB 02: jmp 0x588abafa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 92 76 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x76
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x588abb45
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
        ; Exact mapped bytes EB 02: jmp 0x588abb45
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0c0h], edi
        ; Exact mapped bytes E8 F7 10 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 20h], 0ah
        test edi, edi
        ; Exact mapped bytes 74 6C: je 0x588abbd5
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], 19ah
        ; Exact mapped bytes 7E 12: jle 0x588abb8a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x588abb8a
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 668h]
        ; Exact mapped bytes EB 02: jmp 0x588abb8c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push 0
        push 0
        push ebx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 00 76 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x588abbd7
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
        ; Exact mapped bytes EB 02: jmp 0x588abbd7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 0bch]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0c4h], edi
        ; Exact mapped bytes E8 2E 71 05 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 0fffffeffh
        ; Exact mapped bytes E8 1E 71 05 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 42 10 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0bh
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x588abc5b
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 4dh
        ; Exact mapped bytes 7E 12: jle 0x588abc3a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588abc3a
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1340h
        ; Exact mapped bytes EB 02: jmp 0x588abc3c
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
        push 0
        push 0
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
        ; Exact mapped bytes E8 47 21 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x21
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588abc5d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0c8h], eax
        ; Exact mapped bytes E8 DC 0F 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x0f
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0ch
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x588abcc1
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 4eh
        ; Exact mapped bytes 7E 12: jle 0x588abca0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588abca0
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1380h
        ; Exact mapped bytes EB 02: jmp 0x588abca2
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
        push 0
        push 0
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
        ; Exact mapped bytes E8 E1 20 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x20
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588abcc3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0cch], eax
        ; Exact mapped bytes E8 76 0F 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x0f
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0dh
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x588abd27
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 4fh
        ; Exact mapped bytes 7E 12: jle 0x588abd06
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588abd06
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 13c0h
        ; Exact mapped bytes EB 02: jmp 0x588abd08
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
        push 0
        push 0
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
        ; Exact mapped bytes E8 7B 20 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x20
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588abd29
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0d0h], eax
        ; Exact mapped bytes E8 10 0F 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x0f
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0eh
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x588abd8d
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 52h
        ; Exact mapped bytes 7E 12: jle 0x588abd6c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588abd6c
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1480h
        ; Exact mapped bytes EB 02: jmp 0x588abd6e
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
        push 0
        push 0
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
        ; Exact mapped bytes E8 15 20 EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588abd8f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes E8 AA 0E 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x0e
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0fh
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x588abdf3
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 50h
        ; Exact mapped bytes 7E 12: jle 0x588abdd2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588abdd2
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1400h
        ; Exact mapped bytes EB 02: jmp 0x588abdd4
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
        push 0
        push 0
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
        ; Exact mapped bytes E8 AF 1F EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x1f
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588abdf5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0ach
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi + 0d8h], eax
        ; Exact mapped bytes E8 44 0E 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x0e
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 10h
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x588abe59
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 51h
        ; Exact mapped bytes 7E 12: jle 0x588abe38
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588abe38
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 1440h
        ; Exact mapped bytes EB 02: jmp 0x588abe3a
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
        push 0
        push 0
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
        ; Exact mapped bytes E8 49 1F EB FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x1f
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588abe5b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0dch], eax
        mov eax, dword ptr [esp + 3ch]
        add eax, 3e8h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esp + 38h], eax
        lea ebx, [esi + 128h]
        mov dword ptr [esp + 3ch], 3
        push 54h
        ; Exact mapped bytes E8 C6 0D 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x0d
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 20h], 11h
        test edi, edi
        ; Exact mapped bytes 74 77: je 0x588abf11
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 68 47 A2 58: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 195h
        ; Exact mapped bytes 7E 17: jle 0x588abec2
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588abec2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [ecx + 654h]
        ; Exact mapped bytes EB 02: jmp 0x588abec4
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
        ; Exact mapped bytes E8 C4 72 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x588abf13
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
        ; Exact mapped bytes EB 02: jmp 0x588abf13
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [ebx - 8ch], edi
        ; Exact mapped bytes E8 29 0D 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x0d
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 20h], 12h
        test edi, edi
        ; Exact mapped bytes 74 79: je 0x588abfb0
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 68 47 A2 58: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 196h
        ; Exact mapped bytes 7E 17: jle 0x588abf5f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588abf5f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 658h]
        ; Exact mapped bytes EB 02: jmp 0x588abf61
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
        ; Exact mapped bytes E8 27 72 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 26: je 0x588abfac
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
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x588abfb2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 24h], 0
        mov dword ptr [ebx - 80h], ecx
        ; Exact mapped bytes E8 5C 6D 05 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x6d
        __asm _emit 0x05
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 83 0C 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 20h], 13h
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x588ac009
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [esp + 30h]
        push 0
        push 0
        push 0ffffffh
        lea edx, [ecx + 14h]
        push edx
        mov edx, dword ptr [esp + 3ch]
        lea edi, [edx + 78h]
        push edi
        push ecx
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 79 72 E8 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x72
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588ac00b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebx], eax
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov edi, dword ptr [ebx]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 8B 44 24 38: mov ax, word ptr [esp + 0x38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ac033
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 1D 6F 05 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588ac040
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A0 6E 05 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        add ebx, 4
        sub dword ptr [esp + 3ch], 1
        ; Exact mapped bytes 0F 85 33 FE FF FF: jne 0x588abe81
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 F9 0B 0D 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x0b
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 14h
        test edi, edi
        ; Exact mapped bytes 74 77: je 0x588ac0de
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 68 47 A2 58: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 1a7h
        ; Exact mapped bytes 7E 17: jle 0x588ac08f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588ac08f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [ecx + 69ch]
        ; Exact mapped bytes EB 02: jmp 0x588ac091
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
        ; Exact mapped bytes E8 F7 70 05 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x70
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2A: je 0x588ac0e0
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
        ; Exact mapped bytes EB 02: jmp 0x588ac0e0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 0fffeh
        mov dword ptr [esi + 0b4h], edi
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
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
