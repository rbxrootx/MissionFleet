// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 7107 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587808A0 .. +0x1DD bytes.
extern "C" __declspec(naked) void FUN_587808a0_segment_00() {
    __asm {
        push -1
        push 5897f7aah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ch
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
        lea eax, [esp + 20h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 18h], esi
        mov ebx, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 34h]
        push 40h
        xor ebp, ebp
        push ebp
        push ebp
        push ebx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 B7 28 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x28
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [esp + 40h]
        cmp eax, ebp
        mov edx, dword ptr [esp + 30h]
        mov dword ptr [esp + 28h], ebp
        mov dword ptr [esi], 58996a4ch
        mov dword ptr [esi + 50h], edx
        mov dword ptr [esi + 0bch], ebp
        mov byte ptr [esi + 0c4h], 0
        mov byte ptr [esi + 0cch], 0
        mov byte ptr [esi + 0ceh], 0
        mov dword ptr [esi + 0d0h], ebp
        ; Exact mapped bytes 0F 8D D7 06 00 00: jge 0x58780ffe
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ffffff9ch
        mov dword ptr [esi + 14h], eax
        mov dword ptr [esi + 18h], eax
        mov eax, 64h
        push 58h
        mov dword ptr [esi + 1ch], eax
        mov dword ptr [esi + 20h], eax
        ; Exact mapped bytes E8 0A C3 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xc3
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 1
        cmp edi, ebp
        ; Exact mapped bytes 74 26: je 0x5878097c
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [esp + 38h]
        push 1f3h
        push ebp
        push ebp
        push ebx
        add eax, -0ah
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 32 28 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x28
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], ebp
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes EB 02: jmp 0x5878097e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 54h], edi
        lea ebp, [esi + 68h]
        mov dword ptr [esp + 14h], 8
        mov dword ptr [esp + 34h], 2
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 A7 C2 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc2
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 1ch], edi
        mov byte ptr [esp + 28h], 2
        test edi, edi
        ; Exact mapped bytes 74 25: je 0x587809de
        __asm _emit 0x74
        __asm _emit 0x25
        push 1f3h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D2 27 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x27
        __asm _emit 0x18
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], eax
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes EB 02: jmp 0x587809e0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp], edi
        add ebp, 4
        sub dword ptr [esp + 34h], 1
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 75 AE: jne 0x587809a0
        __asm _emit 0x75
        __asm _emit 0xae
        sub dword ptr [esp + 14h], 1
        ; Exact mapped bytes 75 98: jne 0x58780991
        __asm _emit 0x75
        __asm _emit 0x98
        mov ecx, dword ptr [esp + 38h]
        add ecx, -37h
        mov dword ptr [esp + 34h], ecx
        lea edi, [esi + 68h]
        mov ebp, 2
        mov edx, dword ptr [esp + 34h]
        mov ecx, dword ptr [edi]
        lea eax, [ebx - 32h]
        push eax
        push edx
        ; Exact mapped bytes E8 74 28 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x28
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x58780a0c
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ebp, dword ptr [esp + 38h]
        lea edi, [esi + 70h]
        mov dword ptr [esp + 34h], 2
        mov ecx, dword ptr [edi]
        lea eax, [ebx - 23h]
        push eax
        push ebp
        ; Exact mapped bytes E8 51 28 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x28
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub dword ptr [esp + 34h], 1
        ; Exact mapped bytes 75 EA: jne 0x58780a33
        __asm _emit 0x75
        __asm _emit 0xea
        lea edi, [esi + 78h]
        mov dword ptr [esp + 34h], 2
        mov ecx, dword ptr [edi]
        lea eax, [ebx - 14h]
        push eax
        lea eax, [ebp + 37h]
        push eax
        ; Exact mapped bytes E8 2D 28 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x28
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub dword ptr [esp + 34h], 1
        ; Exact mapped bytes 75 E7: jne 0x58780a54
        __asm _emit 0x75
        __asm _emit 0xe7
        lea edi, [esi + 80h]
        mov dword ptr [esp + 34h], 2
        ; Exact mapped bytes EB 03: jmp 0x58780a80
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58780A80 .. +0x19E6 bytes.
extern "C" __declspec(naked) void FUN_587808a0_segment_01() {
    __asm {
        mov ecx, dword ptr [edi]
        lea eax, [ebx + 0ah]
        push eax
        lea eax, [ebp - 46h]
        push eax
        ; Exact mapped bytes E8 01 28 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x28
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub dword ptr [esp + 34h], 1
        ; Exact mapped bytes 75 E7: jne 0x58780a80
        __asm _emit 0x75
        __asm _emit 0xe7
        lea edi, [esi + 88h]
        mov dword ptr [esp + 34h], 2
        mov ecx, dword ptr [edi]
        push ebx
        push ebp
        ; Exact mapped bytes E8 E0 27 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x27
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub dword ptr [esp + 34h], 1
        ; Exact mapped bytes 75 ED: jne 0x58780aa7
        __asm _emit 0x75
        __asm _emit 0xed
        lea edi, [esi + 90h]
        mov dword ptr [esp + 34h], 2
        mov ecx, dword ptr [edi]
        push ebx
        lea eax, [ebp + 23h]
        push eax
        ; Exact mapped bytes E8 BC 27 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub dword ptr [esp + 34h], 1
        ; Exact mapped bytes 75 EA: jne 0x58780ac8
        __asm _emit 0x75
        __asm _emit 0xea
        add ebx, 23h
        add ebp, -3ch
        mov dword ptr [esp + 34h], ebp
        lea edi, [esi + 98h]
        mov ebp, 2
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [edi]
        push ebx
        push eax
        ; Exact mapped bytes E8 90 27 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x27
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 EB: jne 0x58780af3
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ebx, dword ptr [esp + 3ch]
        add ebx, 2dh
        lea edi, [esi + 0a0h]
        mov ebp, 2
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [edi]
        push ebx
        add eax, 41h
        push eax
        ; Exact mapped bytes E8 60 27 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x27
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x58780b20
        __asm _emit 0x75
        __asm _emit 0xe8
        mov eax, dword ptr [esp + 40h]
        push 58h
        cmp eax, -1
        ; Exact mapped bytes 0F 85 45 01 00 00: jne 0x58780c8c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 02 C1 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc1
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 3
        test edi, edi
        ; Exact mapped bytes 74 78: je 0x58780bd6
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes A1 40 46 A2 58: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0ah
        ; Exact mapped bytes 7E 16: jle 0x58780b82
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x58780b82
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebp, dword ptr [eax + 190h]
        add ebp, 280h
        ; Exact mapped bytes EB 02: jmp 0x58780b84
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 1f3h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 07 26 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x26
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x58780bd8
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
        ; Exact mapped bytes EB 02: jmp 0x58780bd8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0b0h], edi
        ; Exact mapped bytes E8 64 C0 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xc0
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 4
        test edi, edi
        ; Exact mapped bytes 74 75: je 0x58780c71
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 40 46 A2 58: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0c1h
        ; Exact mapped bytes 7E 17: jle 0x58780c24
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58780c24
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [ecx + 304h]
        ; Exact mapped bytes EB 02: jmp 0x58780c26
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push 0
        push 0
        push 1f2h
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 65 25 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x25
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x58780c73
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
        ; Exact mapped bytes EB 02: jmp 0x58780c73
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ebp, dword ptr [esp + 38h]
        mov dword ptr [esi + 0b8h], 1
        add ebp, 0ffffff4ch
        ; Exact mapped bytes E9 B6 02 00 00: jmp 0x58780f42
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, -6
        ; Exact mapped bytes 0F 84 7C 01 00 00: je 0x58780e11
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B4 BF 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xbf
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 5
        mov ebx, 6
        test edi, edi
        ; Exact mapped bytes 74 78: je 0x58780d29
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes A1 40 46 A2 58: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 17: jle 0x58780cd5
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58780cd5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebp, dword ptr [eax + 190h]
        add ebp, 180h
        ; Exact mapped bytes EB 02: jmp 0x58780cd7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 1f3h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B4 24 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x58780d2b
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
        ; Exact mapped bytes EB 02: jmp 0x58780d2b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 2ch], 0
        mov dword ptr [esi + 0b0h], edi
        ; Exact mapped bytes E8 11 BF 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xbf
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], bl
        test edi, edi
        ; Exact mapped bytes 74 75: je 0x58780dc3
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 40 46 A2 58: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0c2h
        ; Exact mapped bytes 7E 17: jle 0x58780d76
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58780d76
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [edx + 308h]
        ; Exact mapped bytes EB 02: jmp 0x58780d78
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push 0
        push 0
        push 1f2h
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 13 24 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x58780dc5
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
        ; Exact mapped bytes EB 02: jmp 0x58780dc5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ebp, dword ptr [esp + 38h]
        mov ecx, dword ptr [esi + 0b0h]
        mov dword ptr [esi + 0b4h], edi
        mov edi, dword ptr [esp + 3ch]
        add edi, 0ffffff74h
        push edi
        add ebp, -6eh
        push ebp
        mov byte ptr [esp + 30h], 0
        mov dword ptr [esi + 0b8h], 2
        ; Exact mapped bytes E8 98 24 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push edi
        push ebp
        ; Exact mapped bytes E8 8B 24 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        mov byte ptr [esi + 0c4h], 1
        ; Exact mapped bytes E9 60 01 00 00: jmp 0x58780f71
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 38 BE 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xbe
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        xor ebx, ebx
        mov byte ptr [esp + 28h], 7
        cmp edi, ebx
        ; Exact mapped bytes 74 70: je 0x58780e9a
        __asm _emit 0x74
        __asm _emit 0x70
        ; Exact mapped bytes A1 40 46 A2 58: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 9
        ; Exact mapped bytes 7E 16: jle 0x58780e4e
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58780e4e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ebp, dword ptr [eax + 190h]
        add ebp, 240h
        ; Exact mapped bytes EB 02: jmp 0x58780e50
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 1f3h
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 3F 23 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x23
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2B: je 0x58780e9c
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
        ; Exact mapped bytes EB 02: jmp 0x58780e9c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 2ch], bl
        mov dword ptr [esi + 0b0h], edi
        ; Exact mapped bytes E8 A1 BD 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xbd
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 8
        cmp edi, ebx
        ; Exact mapped bytes 74 71: je 0x58780f30
        __asm _emit 0x74
        __asm _emit 0x71
        ; Exact mapped bytes A1 40 46 A2 58: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0c1h
        ; Exact mapped bytes 7E 16: jle 0x58780ee6
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x58780ee6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 304h]
        ; Exact mapped bytes EB 02: jmp 0x58780ee8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 40h
        push ebx
        push ebx
        push 1f2h
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A6 22 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x22
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2B: je 0x58780f32
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
        ; Exact mapped bytes EB 02: jmp 0x58780f32
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ebp, dword ptr [esp + 38h]
        mov dword ptr [esi + 0b8h], ebx
        add ebp, 0ffffff51h
        mov ecx, dword ptr [esi + 0b0h]
        mov dword ptr [esi + 0b4h], edi
        mov edi, dword ptr [esp + 3ch]
        add edi, 0ffffff1ah
        push edi
        push ebp
        mov byte ptr [esp + 30h], 0
        ; Exact mapped bytes E8 2C 23 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x23
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push edi
        push ebp
        ; Exact mapped bytes E8 1F 23 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x23
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        mov dword ptr [esi + 0c0h], 14h
        mov dword ptr [eax + 50h], 0
        mov eax, dword ptr [esi + 0b0h]
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b0h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b4h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c0h]
        mov edx, eax
        imul edx, eax
        push edx
        ; Exact mapped bytes E8 6B 05 1F 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        mov edx, ecx
        imul edx, ecx
        push edx
        push 0
        push eax
        mov dword ptr [esi + 0bch], eax
        ; Exact mapped bytes E8 6B BC 1F 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xbc
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c0h]
        push 2
        push eax
        push eax
        mov eax, dword ptr [esi + 0bch]
        push eax
        ; Exact mapped bytes E8 ED B7 FE FF: call 0x5876c7e0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 5ch]
        mov eax, dword ptr [esp + 60h]
        add esp, 20h
        cmp eax, 1
        ; Exact mapped bytes 0F 85 7A 05 00 00: jne 0x58781581
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, word ptr [ecx + 0a06h]
        dec eax
        cmp eax, 15h
        ; Exact mapped bytes 0F 87 74 03 00 00: ja 0x58781392
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [eax + 5878248ch]
        ; Exact mapped bytes FF 24 95 68 24 78 58: jmp dword ptr [edx*4 + 0x58782468]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x78
        __asm _emit 0x58
        push 58h
        ; Exact mapped bytes E8 1B BC 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xbc
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 9
        test edi, edi
        ; Exact mapped bytes 0F 84 3F 03 00 00: je 0x58781388
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov eax, dword ptr [eax + 4]
        cmp dword ptr [eax + 160h], 0f6h
        ; Exact mapped bytes 7E 12: jle 0x5878106e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x5878106e
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 3d80h
        ; Exact mapped bytes EB 02: jmp 0x58781070
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 38h]
        push 1f3h
        push 0
        push 0
        push ebx
        add ecx, -0ah
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 16 21 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x21
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 0F 84 E8 02 00 00: je 0x5878138a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebp + 20h]
        add ebp, 20h
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], ecx
        ; Exact mapped bytes E9 BC 02 00 00: jmp 0x5878138a
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 79 BB 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xbb
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 0ah
        test edi, edi
        ; Exact mapped bytes 0F 84 9D 02 00 00: je 0x58781388
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [edx + 4]
        cmp dword ptr [eax + 160h], 0eah
        ; Exact mapped bytes 0F 8E 2D 02 00 00: jle 0x5878132f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 1F 02 00 00: je 0x5878132f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add ebp, 3a80h
        ; Exact mapped bytes E9 16 02 00 00: jmp 0x58781331
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 2C BB 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xbb
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 0bh
        test edi, edi
        ; Exact mapped bytes 0F 84 50 02 00 00: je 0x58781388
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 30h]
        mov eax, dword ptr [ecx + 4]
        cmp dword ptr [eax + 160h], 0f9h
        ; Exact mapped bytes 7E 12: jle 0x5878115d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x5878115d
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 3e40h
        ; Exact mapped bytes EB 02: jmp 0x5878115f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        push 1f3h
        push 0
        push 0
        push ebx
        add edx, -0ah
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 27 20 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x20
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 0F 84 F9 01 00 00: je 0x5878138a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [ebp + 20h]
        add ebp, 20h
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes E9 CD 01 00 00: jmp 0x5878138a
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 8A BA 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xba
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 0ch
        test edi, edi
        ; Exact mapped bytes 0F 84 AE 01 00 00: je 0x58781388
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov eax, dword ptr [eax + 4]
        cmp dword ptr [eax + 160h], 0f3h
        ; Exact mapped bytes 0F 8E 7D FE FF FF: jle 0x5878106e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 6F FE FF FF: je 0x5878106e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add ebp, 3cc0h
        ; Exact mapped bytes E9 66 FE FF FF: jmp 0x58781070
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 3D BA 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xba
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 0dh
        test edi, edi
        ; Exact mapped bytes 0F 84 61 01 00 00: je 0x58781388
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [edx + 4]
        cmp dword ptr [eax + 160h], 0e1h
        ; Exact mapped bytes 0F 8E F1 00 00 00: jle 0x5878132f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x5878132f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add ebp, 3840h
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x58781331
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 F0 B9 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xb9
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 0eh
        test edi, edi
        ; Exact mapped bytes 0F 84 14 01 00 00: je 0x58781388
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 30h]
        mov eax, dword ptr [ecx + 4]
        cmp dword ptr [eax + 160h], 0e4h
        ; Exact mapped bytes 0F 8E D2 FE FF FF: jle 0x5878115d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 C4 FE FF FF: je 0x5878115d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add ebp, 3900h
        ; Exact mapped bytes E9 BB FE FF FF: jmp 0x5878115f
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 A3 B9 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xb9
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 0fh
        test edi, edi
        ; Exact mapped bytes 0F 84 C7 00 00 00: je 0x58781388
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov eax, dword ptr [eax + 4]
        cmp dword ptr [eax + 160h], 0e7h
        ; Exact mapped bytes 0F 8E 96 FD FF FF: jle 0x5878106e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 88 FD FF FF: je 0x5878106e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add ebp, 39c0h
        ; Exact mapped bytes E9 7F FD FF FF: jmp 0x58781070
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 56 B9 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xb9
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 10h
        test edi, edi
        ; Exact mapped bytes 74 7E: je 0x58781388
        __asm _emit 0x74
        __asm _emit 0x7e
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [edx + 4]
        cmp dword ptr [eax + 160h], 0e7h
        ; Exact mapped bytes 7E 12: jle 0x5878132f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x5878132f
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 39c0h
        ; Exact mapped bytes EB 02: jmp 0x58781331
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 38h]
        push 1f3h
        push 0
        push 0
        push ebx
        add eax, -0ah
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 55 1E 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x1e
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x5878138a
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [edi + 10h], edx
        mov eax, dword ptr [ebp + 20h]
        add ebp, 20h
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x5878138a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 54h], edi
        mov byte ptr [esp + 28h], 0
        lea ebp, [esi + 68h]
        mov dword ptr [esp + 30h], 8
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ebx, 2
        push 58h
        ; Exact mapped bytes E8 A2 B8 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 11h
        test edi, edi
        ; Exact mapped bytes 74 25: je 0x587813e3
        __asm _emit 0x74
        __asm _emit 0x25
        push 1f3h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 CD 1D 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], eax
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes EB 02: jmp 0x587813e5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp], edi
        add ebp, 4
        sub ebx, 1
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 75 B0: jne 0x587813a5
        __asm _emit 0x75
        __asm _emit 0xb0
        sub dword ptr [esp + 30h], 1
        ; Exact mapped bytes 75 A4: jne 0x587813a0
        __asm _emit 0x75
        __asm _emit 0xa4
        mov ebp, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        add ebp, 0bh
        add ecx, -29h
        mov dword ptr [esp + 30h], ecx
        lea edi, [esi + 68h]
        mov ebx, 2
        mov edx, dword ptr [esp + 30h]
        mov ecx, dword ptr [edi]
        push ebp
        push edx
        ; Exact mapped bytes E8 6D 1E 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x1e
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EB: jne 0x58781416
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ebx, dword ptr [esp + 3ch]
        add ebx, -10h
        lea edi, [esi + 70h]
        mov ebp, 2
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [edi]
        push ebx
        add eax, -1dh
        push eax
        ; Exact mapped bytes E8 40 1E 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x1e
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x58781440
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ebp, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 38h]
        add ebp, -6
        add eax, 20h
        mov dword ptr [esp + 30h], eax
        lea edi, [esi + 78h]
        mov ebx, 2
        mov ecx, dword ptr [esp + 30h]
        push ebp
        push ecx
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 11 1E 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x1e
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EB: jne 0x58781472
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ebx, dword ptr [esp + 3ch]
        add ebx, 1fh
        lea edi, [esi + 80h]
        mov ebp, 2
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [edi]
        push ebx
        add eax, 19h
        push eax
        ; Exact mapped bytes E8 E0 1D 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x587814a0
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ebp, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 38h]
        add ebp, 2bh
        add edx, -30h
        mov dword ptr [esp + 30h], edx
        lea edi, [esi + 88h]
        mov ebx, 2
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [edi]
        push ebp
        push eax
        ; Exact mapped bytes E8 AE 1D 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EB: jne 0x587814d5
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ebx, dword ptr [esp + 3ch]
        dec ebx
        lea edi, [esi + 90h]
        mov ebp, 2
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [edi]
        push ebx
        add eax, -11h
        push eax
        ; Exact mapped bytes E8 80 1D 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x58781500
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ebp, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        add ebp, 22h
        add ecx, -26h
        mov dword ptr [esp + 30h], ecx
        lea edi, [esi + 98h]
        mov ebx, 2
        mov edx, dword ptr [esp + 30h]
        mov ecx, dword ptr [edi]
        push ebp
        push edx
        ; Exact mapped bytes E8 4E 1D 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EB: jne 0x58781535
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ebx, dword ptr [esp + 3ch]
        add ebx, 23h
        lea edi, [esi + 0a0h]
        mov ebp, 2
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [edi]
        push ebx
        add eax, 7
        push eax
        ; Exact mapped bytes E8 20 1D 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x58781560
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ebx, dword ptr [esp + 3ch]
        ; Exact mapped bytes E9 17 0D 00 00: jmp 0x58782298
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 77 05 00 00: jne 0x58781b01
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 45 A2 58: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, word ptr [eax + 0a06h]
        dec eax
        cmp eax, 15h
        ; Exact mapped bytes 0F 87 74 03 00 00: ja 0x58781914
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [eax + 587824c8h]
        ; Exact mapped bytes FF 24 8D A4 24 78 58: jmp dword ptr [ecx*4 + 0x587824a4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x78
        __asm _emit 0x58
        push 58h
        ; Exact mapped bytes E8 99 B6 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xb6
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 12h
        test edi, edi
        ; Exact mapped bytes 0F 84 3F 03 00 00: je 0x5878190a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [edx + 4]
        cmp dword ptr [eax + 160h], 0f7h
        ; Exact mapped bytes 7E 12: jle 0x587815f0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x587815f0
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 3dc0h
        ; Exact mapped bytes EB 02: jmp 0x587815f2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 38h]
        push 1f3h
        push 0
        push 0
        push ebx
        add eax, -0ah
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 94 1B 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x1b
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 0F 84 E8 02 00 00: je 0x5878190c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [edi + 10h], edx
        mov eax, dword ptr [ebp + 20h]
        add ebp, 20h
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes E9 BC 02 00 00: jmp 0x5878190c
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 F7 B5 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xb5
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 13h
        test edi, edi
        ; Exact mapped bytes 0F 84 9D 02 00 00: je 0x5878190a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 30h]
        mov eax, dword ptr [ecx + 4]
        cmp dword ptr [eax + 160h], 0ebh
        ; Exact mapped bytes 0F 8E 2D 02 00 00: jle 0x587818b1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 1F 02 00 00: je 0x587818b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add ebp, 3ac0h
        ; Exact mapped bytes E9 16 02 00 00: jmp 0x587818b3
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 AA B5 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xb5
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 14h
        test edi, edi
        ; Exact mapped bytes 0F 84 50 02 00 00: je 0x5878190a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov eax, dword ptr [eax + 4]
        cmp dword ptr [eax + 160h], 0fah
        ; Exact mapped bytes 7E 12: jle 0x587816df
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x587816df
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 3e80h
        ; Exact mapped bytes EB 02: jmp 0x587816e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 38h]
        push 1f3h
        push 0
        push 0
        push ebx
        add ecx, -0ah
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A5 1A 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x1a
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 0F 84 F9 01 00 00: je 0x5878190c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebp + 20h]
        add ebp, 20h
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], ecx
        ; Exact mapped bytes E9 CD 01 00 00: jmp 0x5878190c
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 08 B5 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xb5
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 15h
        test edi, edi
        ; Exact mapped bytes 0F 84 AE 01 00 00: je 0x5878190a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [edx + 4]
        cmp dword ptr [eax + 160h], 0f4h
        ; Exact mapped bytes 0F 8E 7D FE FF FF: jle 0x587815f0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 6F FE FF FF: je 0x587815f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add ebp, 3d00h
        ; Exact mapped bytes E9 66 FE FF FF: jmp 0x587815f2
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 BB B4 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb4
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 16h
        test edi, edi
        ; Exact mapped bytes 0F 84 61 01 00 00: je 0x5878190a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 30h]
        mov eax, dword ptr [ecx + 4]
        cmp dword ptr [eax + 160h], 0e2h
        ; Exact mapped bytes 0F 8E F1 00 00 00: jle 0x587818b1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x587818b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add ebp, 3880h
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x587818b3
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 6E B4 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb4
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 17h
        test edi, edi
        ; Exact mapped bytes 0F 84 14 01 00 00: je 0x5878190a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov eax, dword ptr [eax + 4]
        cmp dword ptr [eax + 160h], 0e5h
        ; Exact mapped bytes 0F 8E D2 FE FF FF: jle 0x587816df
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 C4 FE FF FF: je 0x587816df
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add ebp, 3940h
        ; Exact mapped bytes E9 BB FE FF FF: jmp 0x587816e1
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 21 B4 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb4
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 18h
        test edi, edi
        ; Exact mapped bytes 0F 84 C7 00 00 00: je 0x5878190a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [edx + 4]
        cmp dword ptr [eax + 160h], 0e8h
        ; Exact mapped bytes 0F 8E 96 FD FF FF: jle 0x587815f0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 88 FD FF FF: je 0x587815f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add ebp, 3a00h
        ; Exact mapped bytes E9 7F FD FF FF: jmp 0x587815f2
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 D4 B3 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb3
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 19h
        test edi, edi
        ; Exact mapped bytes 74 7E: je 0x5878190a
        __asm _emit 0x74
        __asm _emit 0x7e
        mov ecx, dword ptr [esp + 30h]
        mov eax, dword ptr [ecx + 4]
        cmp dword ptr [eax + 160h], 0e8h
        ; Exact mapped bytes 7E 12: jle 0x587818b1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x587818b1
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 3a00h
        ; Exact mapped bytes EB 02: jmp 0x587818b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        push 1f3h
        push 0
        push 0
        push ebx
        add edx, -0ah
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D3 18 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x5878190c
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [ebp + 20h]
        add ebp, 20h
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x5878190c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 54h], edi
        mov byte ptr [esp + 28h], 0
        lea ebp, [esi + 68h]
        mov dword ptr [esp + 30h], 8
        nop
        mov ebx, 2
        push 58h
        ; Exact mapped bytes E8 22 B3 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xb3
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 1ah
        test edi, edi
        ; Exact mapped bytes 74 25: je 0x58781963
        __asm _emit 0x74
        __asm _emit 0x25
        push 1f3h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 4D 18 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], eax
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes EB 02: jmp 0x58781965
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp], edi
        add ebp, 4
        sub ebx, 1
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 75 B0: jne 0x58781925
        __asm _emit 0x75
        __asm _emit 0xb0
        sub dword ptr [esp + 30h], 1
        ; Exact mapped bytes 75 A4: jne 0x58781920
        __asm _emit 0x75
        __asm _emit 0xa4
        mov ebp, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 38h]
        add ebp, 16h
        add eax, 23h
        mov dword ptr [esp + 30h], eax
        lea edi, [esi + 68h]
        mov ebx, 2
        mov ecx, dword ptr [esp + 30h]
        push ebp
        push ecx
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 ED 18 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EB: jne 0x58781996
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ebx, dword ptr [esp + 3ch]
        add ebx, 1fh
        lea edi, [esi + 70h]
        mov ebp, 2
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [edi]
        push ebx
        add eax, 0ah
        push eax
        ; Exact mapped bytes E8 C0 18 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x587819c0
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ebp, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 38h]
        add ebp, -17h
        add edx, -1ah
        mov dword ptr [esp + 30h], edx
        lea edi, [esi + 78h]
        mov ebx, 2
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [edi]
        push ebp
        push eax
        ; Exact mapped bytes E8 91 18 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EB: jne 0x587819f2
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ebx, dword ptr [esp + 3ch]
        add ebx, -24h
        lea edi, [esi + 80h]
        mov ebp, 2
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [edi]
        push ebx
        add eax, 7
        push eax
        ; Exact mapped bytes E8 60 18 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x58781a20
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ebp, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        add ebp, -2
        add ecx, 4ah
        mov dword ptr [esp + 30h], ecx
        lea edi, [esi + 88h]
        mov ebx, 2
        mov edx, dword ptr [esp + 30h]
        mov ecx, dword ptr [edi]
        push ebp
        push edx
        ; Exact mapped bytes E8 2E 18 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EB: jne 0x58781a55
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ebx, dword ptr [esp + 3ch]
        add ebx, 0ah
        lea edi, [esi + 90h]
        mov ebp, 2
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [edi]
        push ebx
        add eax, 5
        push eax
        ; Exact mapped bytes E8 00 18 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x58781a80
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ebp, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 38h]
        add ebp, -1bh
        add eax, 11h
        mov dword ptr [esp + 30h], eax
        lea edi, [esi + 98h]
        mov ebx, 2
        mov ecx, dword ptr [esp + 30h]
        push ebp
        push ecx
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 CE 17 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x17
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EB: jne 0x58781ab5
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ebx, dword ptr [esp + 3ch]
        add ebx, -3
        lea edi, [esi + 0a0h]
        mov ebp, 2
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [edi]
        push ebx
        add eax, 37h
        push eax
        ; Exact mapped bytes E8 A0 17 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x17
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x58781ae0
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ebx, dword ptr [esp + 3ch]
        ; Exact mapped bytes E9 97 07 00 00: jmp 0x58782298
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 0F 85 6E 05 00 00: jne 0x58782078
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 A0 45 A2 58: mov edx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, word ptr [edx + 0a06h]
        dec eax
        cmp eax, 15h
        ; Exact mapped bytes 0F 87 74 03 00 00: ja 0x58781e95
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [eax + 58782504h]
        ; Exact mapped bytes FF 24 85 E0 24 78 58: jmp dword ptr [eax*4 + 0x587824e0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x24
        __asm _emit 0x78
        __asm _emit 0x58
        push 58h
        ; Exact mapped bytes E8 18 B1 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xb1
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 1bh
        test edi, edi
        ; Exact mapped bytes 0F 84 3F 03 00 00: je 0x58781e8b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 30h]
        mov eax, dword ptr [ecx + 4]
        cmp dword ptr [eax + 160h], 0f8h
        ; Exact mapped bytes 7E 12: jle 0x58781b71
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x58781b71
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 3e00h
        ; Exact mapped bytes EB 02: jmp 0x58781b73
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 38h]
        push 1f3h
        push 0
        push 0
        push ebx
        add edx, -0ah
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 13 16 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x16
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 0F 84 E8 02 00 00: je 0x58781e8d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [ebp + 20h]
        add ebp, 20h
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes E9 BC 02 00 00: jmp 0x58781e8d
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 76 B0 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xb0
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 1ch
        test edi, edi
        ; Exact mapped bytes 0F 84 9D 02 00 00: je 0x58781e8b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov eax, dword ptr [eax + 4]
        cmp dword ptr [eax + 160h], 0ech
        ; Exact mapped bytes 0F 8E 2D 02 00 00: jle 0x58781e32
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 1F 02 00 00: je 0x58781e32
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add ebp, 3b00h
        ; Exact mapped bytes E9 16 02 00 00: jmp 0x58781e34
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 29 B0 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xb0
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 1dh
        test edi, edi
        ; Exact mapped bytes 0F 84 50 02 00 00: je 0x58781e8b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [edx + 4]
        cmp dword ptr [eax + 160h], 0fbh
        ; Exact mapped bytes 7E 12: jle 0x58781c60
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x58781c60
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 3ec0h
        ; Exact mapped bytes EB 02: jmp 0x58781c62
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 38h]
        push 1f3h
        push 0
        push 0
        push ebx
        add eax, -0ah
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 24 15 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 0F 84 F9 01 00 00: je 0x58781e8d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [edi + 10h], edx
        mov eax, dword ptr [ebp + 20h]
        add ebp, 20h
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes E9 CD 01 00 00: jmp 0x58781e8d
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 87 AF 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xaf
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 1eh
        test edi, edi
        ; Exact mapped bytes 0F 84 AE 01 00 00: je 0x58781e8b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 30h]
        mov eax, dword ptr [ecx + 4]
        cmp dword ptr [eax + 160h], 0f5h
        ; Exact mapped bytes 0F 8E 7D FE FF FF: jle 0x58781b71
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 6F FE FF FF: je 0x58781b71
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add ebp, 3d40h
        ; Exact mapped bytes E9 66 FE FF FF: jmp 0x58781b73
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 3A AF 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xaf
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 1fh
        test edi, edi
        ; Exact mapped bytes 0F 84 61 01 00 00: je 0x58781e8b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov eax, dword ptr [eax + 4]
        cmp dword ptr [eax + 160h], 0e3h
        ; Exact mapped bytes 0F 8E F1 00 00 00: jle 0x58781e32
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x58781e32
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add ebp, 38c0h
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x58781e34
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 ED AE 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xae
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 20h
        test edi, edi
        ; Exact mapped bytes 0F 84 14 01 00 00: je 0x58781e8b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [edx + 4]
        cmp dword ptr [eax + 160h], 0e6h
        ; Exact mapped bytes 0F 8E D2 FE FF FF: jle 0x58781c60
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 C4 FE FF FF: je 0x58781c60
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add ebp, 3980h
        ; Exact mapped bytes E9 BB FE FF FF: jmp 0x58781c62
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 A0 AE 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xae
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 21h
        test edi, edi
        ; Exact mapped bytes 0F 84 C7 00 00 00: je 0x58781e8b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 30h]
        mov eax, dword ptr [ecx + 4]
        cmp dword ptr [eax + 160h], 0e9h
        ; Exact mapped bytes 0F 8E 96 FD FF FF: jle 0x58781b71
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 88 FD FF FF: je 0x58781b71
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add ebp, 3a40h
        ; Exact mapped bytes E9 7F FD FF FF: jmp 0x58781b73
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 53 AE 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xae
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 22h
        test edi, edi
        ; Exact mapped bytes 74 7E: je 0x58781e8b
        __asm _emit 0x74
        __asm _emit 0x7e
        mov eax, dword ptr [esp + 30h]
        mov eax, dword ptr [eax + 4]
        cmp dword ptr [eax + 160h], 0e9h
        ; Exact mapped bytes 7E 12: jle 0x58781e32
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x58781e32
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 3a40h
        ; Exact mapped bytes EB 02: jmp 0x58781e34
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 38h]
        push 1f3h
        push 0
        push 0
        push ebx
        add ecx, -0ah
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 52 13 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x13
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x58781e8d
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebp + 20h]
        add ebp, 20h
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [edi + 18h], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edi + 1ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edi + 20h], ecx
        ; Exact mapped bytes EB 02: jmp 0x58781e8d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 54h], edi
        mov byte ptr [esp + 28h], 0
        lea ebp, [esi + 68h]
        mov dword ptr [esp + 30h], 8
        mov ebx, 2
        push 58h
        ; Exact mapped bytes E8 A2 AD 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xad
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 23h
        test edi, edi
        ; Exact mapped bytes 74 25: je 0x58781ee3
        __asm _emit 0x74
        __asm _emit 0x25
        push 1f3h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 CD 12 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x12
        __asm _emit 0x18
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], eax
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes EB 02: jmp 0x58781ee5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp], edi
        add ebp, 4
        sub ebx, 1
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 75 B0: jne 0x58781ea5
        __asm _emit 0x75
        __asm _emit 0xb0
        sub dword ptr [esp + 30h], 1
        ; Exact mapped bytes 75 A4: jne 0x58781ea0
        __asm _emit 0x75
        __asm _emit 0xa4
        mov ebp, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 38h]
        add ebp, -18h
        add edx, -2eh
        mov dword ptr [esp + 30h], edx
        lea edi, [esi + 68h]
        mov ebx, 2
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [edi]
        push ebp
        push eax
        ; Exact mapped bytes E8 6D 13 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x13
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EB: jne 0x58781f16
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ebx, dword ptr [esp + 3ch]
        add ebx, 0dh
        lea edi, [esi + 70h]
        mov ebp, 2
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [edi]
        push ebx
        add eax, -23h
        push eax
        ; Exact mapped bytes E8 40 13 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x13
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x58781f40
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ebp, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        add ebp, 0ah
        add ecx, 0dh
        mov dword ptr [esp + 30h], ecx
        lea edi, [esi + 78h]
        mov ebx, 2
        mov edx, dword ptr [esp + 30h]
        mov ecx, dword ptr [edi]
        push ebp
        push edx
        ; Exact mapped bytes E8 11 13 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x13
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EB: jne 0x58781f72
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ebx, dword ptr [esp + 3ch]
        add ebx, -5
        lea edi, [esi + 80h]
        mov ebp, 2
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [edi]
        push ebx
        add eax, 1ch
        push eax
        ; Exact mapped bytes E8 E0 12 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x12
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x58781fa0
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ebp, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 38h]
        add ebp, -19h
        add eax, 14h
        mov dword ptr [esp + 30h], eax
        lea edi, [esi + 88h]
        mov ebx, 2
        mov ecx, dword ptr [esp + 30h]
        push ebp
        push ecx
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 AE 12 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x12
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EB: jne 0x58781fd5
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ebx, dword ptr [esp + 3ch]
        add ebx, -21h
        lea edi, [esi + 90h]
        mov ebp, 2
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [edi]
        push ebx
        add eax, -21h
        push eax
        ; Exact mapped bytes E8 80 12 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x12
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x58782000
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ebp, dword ptr [esp + 3ch]
        add ebp, -29h
        lea edi, [esi + 98h]
        mov ebx, 2
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 38h]
        mov ecx, dword ptr [edi]
        push ebp
        push edx
        ; Exact mapped bytes E8 53 12 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x12
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EB: jne 0x58782030
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ebp, dword ptr [esp + 38h]
        add ebp, 6
        lea edi, [esi + 0a0h]
        mov ebx, 2
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [edi]
        add eax, -5
        push eax
        push ebp
        ; Exact mapped bytes E8 29 12 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x12
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 E8: jne 0x58782057
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ebx, dword ptr [esp + 3ch]
        ; Exact mapped bytes E9 20 02 00 00: jmp 0x58782298
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 0F 85 17 02 00 00: jne 0x58782298
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 C6 AB 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xab
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 28h], 24h
        test edi, edi
        ; Exact mapped bytes 74 7E: je 0x58782118
        __asm _emit 0x74
        __asm _emit 0x7e
        mov eax, dword ptr [esp + 30h]
        mov eax, dword ptr [eax + 4]
        cmp dword ptr [eax + 160h], 0edh
        ; Exact mapped bytes 7E 12: jle 0x587820bf
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebp, dword ptr [eax + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 08: je 0x587820bf
        __asm _emit 0x74
        __asm _emit 0x08
        add ebp, 3b40h
        ; Exact mapped bytes EB 02: jmp 0x587820c1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 38h]
        push 1f3h
        push 0
        push 0
        push ebx
        add ecx, -0ah
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 C5 10 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x10
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x5878211a
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
        ; Exact mapped bytes EB 02: jmp 0x5878211a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov byte ptr [esp + 28h], 0
        mov dword ptr [esi + 54h], edi
        lea ebp, [esi + 68h]
        mov dword ptr [esp + 30h], 8
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov dword ptr [esp + 3ch], 2
        push 58h
        ; Exact mapped bytes E8 0F AB 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xab
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 28h], 25h
        test edi, edi
        ; Exact mapped bytes 74 25: je 0x58782176
        __asm _emit 0x74
        __asm _emit 0x25
        push 1f3h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 3A 10 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x10
        __asm _emit 0x18
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], eax
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes EB 02: jmp 0x58782178
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebp], edi
        mov eax, 1
        add ebp, 4
        sub dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 28h], 0
        ; Exact mapped bytes 75 AA: jne 0x58782138
        __asm _emit 0x75
        __asm _emit 0xaa
        sub dword ptr [esp + 30h], eax
        ; Exact mapped bytes 75 9C: jne 0x58782130
        __asm _emit 0x75
        __asm _emit 0x9c
        mov ebp, dword ptr [esp + 38h]
        lea edi, [esi + 68h]
        mov dword ptr [esp + 3ch], 2
        mov ecx, dword ptr [edi]
        push ebx
        push ebp
        ; Exact mapped bytes E8 E4 10 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x10
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub dword ptr [esp + 3ch], 1
        ; Exact mapped bytes 75 ED: jne 0x587821a3
        __asm _emit 0x75
        __asm _emit 0xed
        lea edi, [esi + 70h]
        mov dword ptr [esp + 3ch], 2
        mov ecx, dword ptr [edi]
        push ebx
        push ebp
        ; Exact mapped bytes E8 C6 10 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x10
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub dword ptr [esp + 3ch], 1
        ; Exact mapped bytes 75 ED: jne 0x587821c1
        __asm _emit 0x75
        __asm _emit 0xed
        lea edi, [esi + 78h]
        mov dword ptr [esp + 3ch], 2
        nop
        mov ecx, dword ptr [edi]
        push ebx
        push ebp
        ; Exact mapped bytes E8 A7 10 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x10
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub dword ptr [esp + 3ch], 1
        ; Exact mapped bytes 75 ED: jne 0x587821e0
        __asm _emit 0x75
        __asm _emit 0xed
        lea edi, [esi + 80h]
        mov dword ptr [esp + 3ch], 2
        mov ecx, dword ptr [edi]
        push ebx
        push ebp
        ; Exact mapped bytes E8 86 10 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub dword ptr [esp + 3ch], 1
        ; Exact mapped bytes 75 ED: jne 0x58782201
        __asm _emit 0x75
        __asm _emit 0xed
        lea edi, [esi + 88h]
        mov dword ptr [esp + 3ch], 2
        mov ecx, dword ptr [edi]
        push ebx
        push ebp
        ; Exact mapped bytes E8 65 10 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x10
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub dword ptr [esp + 3ch], 1
        ; Exact mapped bytes 75 ED: jne 0x58782222
        __asm _emit 0x75
        __asm _emit 0xed
        lea edi, [esi + 90h]
        mov dword ptr [esp + 3ch], 2
        mov ecx, dword ptr [edi]
        push ebx
        push ebp
        ; Exact mapped bytes E8 44 10 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub dword ptr [esp + 3ch], 1
        ; Exact mapped bytes 75 ED: jne 0x58782243
        __asm _emit 0x75
        __asm _emit 0xed
        lea edi, [esi + 98h]
        mov dword ptr [esp + 3ch], 2
        mov ecx, dword ptr [edi]
        push ebx
        push ebp
        ; Exact mapped bytes E8 23 10 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x10
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub dword ptr [esp + 3ch], 1
        ; Exact mapped bytes 75 ED: jne 0x58782264
        __asm _emit 0x75
        __asm _emit 0xed
        lea edi, [esi + 0a0h]
        mov dword ptr [esp + 3ch], 2
        mov ecx, dword ptr [edi]
        push ebx
        push ebp
        ; Exact mapped bytes E8 02 10 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x10
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub dword ptr [esp + 3ch], 1
        ; Exact mapped bytes 75 ED: jne 0x58782285
        __asm _emit 0x75
        __asm _emit 0xed
        lea edi, [esi + 6ch]
        mov ebp, 8
        mov ecx, dword ptr [edi - 4]
        push 0fffffeffh
        ; Exact mapped bytes E8 73 0A 18 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x0a
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 101h
        ; Exact mapped bytes E8 67 0A 18 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x0a
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 8
        sub ebp, 1
        ; Exact mapped bytes 75 DF: jne 0x587822a0
        __asm _emit 0x75
        __asm _emit 0xdf
        push 54h
        ; Exact mapped bytes E8 86 A9 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xa9
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 28h], 26h
        test edi, edi
        ; Exact mapped bytes 74 79: je 0x58782353
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 78 47 A2 58: mov eax, dword ptr [0x58a24778]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 135h
        ; Exact mapped bytes 7E 16: jle 0x58782301
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x58782301
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 4d4h]
        ; Exact mapped bytes EB 02: jmp 0x58782303
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 38h]
        push 1f3h
        push 0
        push 0
        push ebx
        add ecx, -0ah
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 83 0E 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x0e
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 2B: je 0x58782355
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
        ; Exact mapped bytes EB 02: jmp 0x58782355
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [esi + 58h], edi
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 58h]
        push 101h
        mov byte ptr [esp + 2ch], 0
        ; Exact mapped bytes E8 AA 09 18 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        xor eax, eax
        mov dword ptr [esi + 5dh], eax
        mov dword ptr [esi + 61h], eax
        ; Exact mapped bytes A1 A8 45 A2 58: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        xor ebx, ebx
        ; Exact mapped bytes 66 83 B8 04 02 00 00 0F: cmp word ptr [eax + 0x204], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes 75 40: jne 0x587823db
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [esp + 40h]
        cmp eax, -1
        ; Exact mapped bytes 74 1E: je 0x587823c2
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp eax, -6
        ; Exact mapped bytes 74 19: je 0x587823c2
        __asm _emit 0x74
        __asm _emit 0x19
        mov dword ptr [esi + 0a8h], 4e20h
        mov dword ptr [esi + 0ach], ebx
        mov byte ptr [esi + 0cdh], 1
        ; Exact mapped bytes EB 37: jmp 0x587823f9
        __asm _emit 0xeb
        __asm _emit 0x37
        mov dword ptr [esi + 0a8h], 0fde8h
        mov dword ptr [esi + 0ach], ebx
        mov byte ptr [esi + 0cdh], 1
        ; Exact mapped bytes EB 1E: jmp 0x587823f9
        __asm _emit 0xeb
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D D4 AD A0 58: mov ecx, dword ptr [0x58a0add4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        mov dword ptr [esi + 0a8h], ecx
        ; Exact mapped bytes 8B 15 D4 AD A0 58: mov edx, dword ptr [0x58a0add4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 2B 15 D8 AD A0 58: sub edx, dword ptr [0x58a0add8]
        __asm _emit 0x2b
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        mov dword ptr [esi + 0ach], edx
        mov eax, 0aaaaaaabh
        mul dword ptr [esi + 0ach]
        mov ecx, edx
        shr ecx, 1
        mov dword ptr [esi + 0ach], ecx
        mov byte ptr [esi + 5ch], 0
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [eax + 10910h]
        mov eax, 0bacf914dh
        mul edi
        mov eax, edi
        sub eax, edx
        shr eax, 1
        add eax, edx
        mov edx, dword ptr [esi + 4]
        shr eax, 5
        imul eax, eax, 25h
        sub edx, eax
        add edx, edi
        push edx
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 EE DE FF FF: call 0x58780330
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0d4h], ebx
        mov dword ptr [esi + 0d8h], ebx
        mov eax, esi
        mov ecx, dword ptr [esp + 20h]
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
        add esp, 18h
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
