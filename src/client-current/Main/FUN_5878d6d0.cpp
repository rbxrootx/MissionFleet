// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878D6D0 .. +0xBF4 bytes.
extern "C" __declspec(naked) void FUN_5878d6d0() {
    __asm {
        push -1
        push 589801d8h
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
        ; Exact mapped bytes E8 80 5A 17 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x5a
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        mov dword ptr [esi + 50h], ebp
        xor ebp, ebp
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebp
        mov dword ptr [esi + 60h], 58996be8h
        lea ecx, [esi + 11f64h]
        mov dword ptr [esp + 20h], ebp
        mov dword ptr [esi], 58996bfch
        mov dword ptr [esi + 60h], 58996bf0h
        ; Exact mapped bytes E8 80 9E 03 00: call 0x587c75e0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9e
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, 0fff0h
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        push 54h
        mov byte ptr [esp + 24h], 1
        ; Exact mapped bytes E8 D9 F4 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf4
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 20h], 2
        cmp edi, ebp
        ; Exact mapped bytes 74 1B: je 0x5878d7a2
        __asm _emit 0x74
        __asm _emit 0x1b
        lea ecx, [ebx - 0fh]
        push ecx
        push ebp
        push ebp
        push ebp
        push ebp
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 09 5A 17 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x5a
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes EB 02: jmp 0x5878d7a4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 68h
        lea eax, [esi + 1209ch]
        mov edx, 0fffeh
        push ebp
        mov dword ptr [esi + 121a0h], edi
        ; Exact mapped bytes 66 21 57 24: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        push eax
        mov byte ptr [esp + 2ch], 1
        ; Exact mapped bytes E8 81 F4 1E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf4
        __asm _emit 0x1e
        __asm _emit 0x00
        push 198h
        ; Exact mapped bytes E8 7D F4 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf4
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 3
        cmp eax, ebp
        ; Exact mapped bytes 74 11: je 0x5878d7f2
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push ebp
        push 58997208h
        mov ecx, eax
        ; Exact mapped bytes E8 80 65 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x65
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878d7f4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes 8B 0D C4 84 A2 58: mov ecx, dword ptr [0x58a284c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        push ecx
        mov byte ptr [esp + 28h], 1
        ; Exact mapped bytes E8 B9 F3 1E 00: call 0x5897cbc2
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf3
        __asm _emit 0x1e
        __asm _emit 0x00
        push 198h
        mov dword ptr [esi + 12130h], eax
        ; Exact mapped bytes E8 35 F4 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 4
        cmp eax, ebp
        ; Exact mapped bytes 74 0F: je 0x5878d838
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebp
        push 589971f4h
        mov ecx, eax
        ; Exact mapped bytes E8 AA 95 17 00: call 0x58906de0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x95
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878d83a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov byte ptr [esp + 24h], 1
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 02 F4 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf4
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 5
        cmp eax, ebp
        ; Exact mapped bytes 74 0F: je 0x5878d86b
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebp
        push 589971e0h
        mov ecx, eax
        ; Exact mapped bytes E8 77 95 17 00: call 0x58906de0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x95
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878d86d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 6ch
        mov byte ptr [esp + 24h], 1
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 D2 F3 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf3
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 6
        cmp eax, ebp
        ; Exact mapped bytes 74 0E: je 0x5878d89a
        __asm _emit 0x74
        __asm _emit 0x0e
        push ebx
        push ebp
        push ebp
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 58 67 00 00: call 0x58793ff0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878d89c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, 0bfffh
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        mov byte ptr [esp + 24h], 1
        ; Exact mapped bytes E8 97 F3 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xf3
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 20h], 7
        cmp edi, ebp
        ; Exact mapped bytes 74 18: je 0x5878d8e1
        __asm _emit 0x74
        __asm _emit 0x18
        push ebx
        push ebp
        push ebp
        push ebp
        push ebp
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 CA 58 17 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes EB 02: jmp 0x5878d8e3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], 1
        mov dword ptr [esi + 0b0h], edi
        ; Exact mapped bytes E8 59 F3 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf3
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 20h], 8
        cmp edi, ebp
        ; Exact mapped bytes 74 1B: je 0x5878d922
        __asm _emit 0x74
        __asm _emit 0x1b
        add ebx, -5
        push ebx
        push ebp
        push ebp
        push ebp
        push ebp
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 89 58 17 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes EB 02: jmp 0x5878d924
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        lea ebx, [esi + 0c0h]
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esi + 0b4h], edi
        mov dword ptr [esp + 38h], ebx
        mov dword ptr [esp + 34h], 2
        push 54h
        ; Exact mapped bytes E8 06 F3 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf3
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        mov byte ptr [esp + 20h], 9
        cmp edi, ebp
        ; Exact mapped bytes 74 24: je 0x5878d97e
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [esp + 3ch]
        add eax, -0ah
        push eax
        push ebp
        push ebp
        push 69h
        push 0a5h
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 2D 58 17 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes EB 02: jmp 0x5878d980
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [eax], edi
        add eax, 4
        sub dword ptr [esp + 34h], 1
        mov byte ptr [esp + 20h], 1
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 75 A8: jne 0x5878d941
        __asm _emit 0x75
        __asm _emit 0xa8
        mov ecx, dword ptr [esi + 0b0h]
        push 101h
        ; Exact mapped bytes E8 77 53 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push ebp
        ; Exact mapped bytes E8 2B 53 17 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push 0fffffeffh
        ; Exact mapped bytes E8 5B 53 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 4F 53 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 101h
        ; Exact mapped bytes E8 3F 53 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push ebp
        ; Exact mapped bytes E8 F3 52 17 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b4h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, ebx
        mov edx, 2
        nop
        mov eax, dword ptr [ecx]
        mov edi, 7fffh
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x5878da10
        __asm _emit 0x75
        __asm _emit 0xed
        mov dword ptr [esi + 12114h], ebp
        mov eax, 0fffeh
        mov dword ptr [esi + 1210ch], ebp
        mov dword ptr [esi + 12110h], ebp
        mov dword ptr [esi + 1211ch], ebp
        mov dword ptr [esi + 12118h], ebp
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        push 54h
        mov dword ptr [esi + 12114h], ebp
        mov dword ptr [esi + 94h], 40000000h
        mov dword ptr [esi + 8ch], ebp
        mov dword ptr [esi + 90h], ebp
        mov dword ptr [esi + 9ch], ebp
        mov dword ptr [esi + 0a0h], ebp
        mov dword ptr [esi + 70h], ebp
        mov dword ptr [esi + 12108h], ebp
        mov dword ptr [esi + 12134h], ebp
        mov dword ptr [esi + 12138h], ebp
        mov dword ptr [esi + 0a4h], ebp
        mov dword ptr [esi + 0a8h], ebp
        ; Exact mapped bytes E8 B4 F1 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf1
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 20h], 0ah
        cmp edi, ebp
        ; Exact mapped bytes 74 1C: je 0x5878dac8
        __asm _emit 0x74
        __asm _emit 0x1c
        push 2710h
        push ebp
        push ebp
        push ebp
        push ebp
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E3 56 17 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x56
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes EB 02: jmp 0x5878daca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, 0fffeh
        mov dword ptr [esi + 0cch], edi
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        push 54h
        mov byte ptr [esp + 24h], 1
        ; Exact mapped bytes E8 69 F1 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf1
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 20h], 0bh
        cmp edi, ebp
        ; Exact mapped bytes 74 1E: je 0x5878db15
        __asm _emit 0x74
        __asm _emit 0x1e
        push 2710h
        push ebp
        push ebp
        push ebp
        push ebp
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 98 56 17 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        mov eax, edi
        ; Exact mapped bytes EB 02: jmp 0x5878db17
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, 0fffeh
        mov dword ptr [esi + 0d0h], eax
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 10ch
        mov byte ptr [esp + 24h], 1
        ; Exact mapped bytes E8 19 F1 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf1
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0ch
        mov ebx, 10101h
        cmp eax, ebp
        ; Exact mapped bytes 74 2D: je 0x5878db77
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D 48 45 A2 58: mov ecx, dword ptr [0x58a24548]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push ebp
        push 0ffffffh
        push 260h
        push 221h
        push 254h
        push 154h
        push ecx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 1B 35 FD FF: call 0x58761090
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x35
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5878db79
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 9ch
        mov byte ptr [esp + 24h], 1
        mov dword ptr [esi + 12124h], eax
        ; Exact mapped bytes E8 C0 F0 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xf0
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0dh
        cmp eax, ebp
        ; Exact mapped bytes 74 2C: je 0x5878dbca
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 15 48 45 A2 58: mov edx, dword ptr [0x58a24548]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        push 0ffffffh
        push 260h
        push 271h
        push 254h
        push 200h
        push edx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E8 C9 17 00: call 0x5890a5b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878dbcc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 12128h], eax
        mov dword ptr [eax + 68h], ebx
        mov edi, dword ptr [esi + 12124h]
        mov ecx, dword ptr [edi + 40h]
        mov eax, 4e20h
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x5878dbf6
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 5A 53 17 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x5878dc03
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 DD 52 17 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x00
        mov edi, dword ptr [esi + 12128h]
        mov ecx, 4e20h
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x5878dc1f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 31 53 17 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x5878dc2c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B4 52 17 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 12124h]
        push 18h
        ; Exact mapped bytes E8 07 B2 FB FF: call 0x58748e40
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xb2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 12128h]
        mov dword ptr [eax + 8ch], 1eh
        mov eax, dword ptr [esi + 12124h]
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12128h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12124h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12128h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 184h
        ; Exact mapped bytes E8 C5 EF 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xef
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0eh
        cmp eax, ebp
        ; Exact mapped bytes 74 2F: je 0x5878dcc8
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        push ebp
        push 0dcdcdch
        push 21ch
        push 320h
        push 1f8h
        push 122h
        push edx
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5C 17 FD FF: call 0x5875f420
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x17
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x5878dcca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 1212ch], edi
        mov ecx, dword ptr [edi + 40h]
        mov eax, 2710h
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x5878dceb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 65 52 17 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x5878dcf8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E8 51 17 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1212ch]
        push 32h
        ; Exact mapped bytes E8 CB 13 FD FF: call 0x5875f0d0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        push 90h
        ; Exact mapped bytes E8 3F EF 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xef
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 0fh
        cmp eax, ebp
        ; Exact mapped bytes 74 2C: je 0x5878dd4b
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        push ebp
        push 0ffffffh
        push 245h
        push 2deh
        push 1f9h
        push 123h
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 87 A2 17 00: call 0x58907fd0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xa2
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878dd4d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 12140h], eax
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12140h]
        mov dword ptr [eax + 68h], ebx
        mov eax, dword ptr [esi + 12140h]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edi, dword ptr [esi + 12140h]
        mov ecx, dword ptr [edi + 40h]
        mov edx, 2710h
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x5878dd95
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BB 51 17 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x5878dda2
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 3E 51 17 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x00
        lea ebx, [esi + 1201ch]
        mov dword ptr [esp + 38h], 20h
        push 54h
        ; Exact mapped bytes E8 97 EE 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xee
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 20h], 10h
        cmp edi, ebp
        ; Exact mapped bytes 74 22: je 0x5878ddeb
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [esp + 28h]
        push 2711h
        push ebp
        push ebp
        push ebp
        push ebp
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 C2 53 17 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        mov eax, edi
        ; Exact mapped bytes EB 02: jmp 0x5878dded
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebx], eax
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 1
        ; Exact mapped bytes E8 17 4F 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x4f
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        push 80h
        ; Exact mapped bytes E8 CB 4E 17 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x4e
        __asm _emit 0x17
        __asm _emit 0x00
        add ebx, 4
        sub dword ptr [esp + 38h], 1
        ; Exact mapped bytes 75 91: jne 0x5878ddb0
        __asm _emit 0x75
        __asm _emit 0x91
        lea eax, [esi + 11b64h]
        mov ecx, 80h
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 200h], ebp
        mov dword ptr [eax], ebp
        add eax, 4
        sub ecx, 1
        ; Exact mapped bytes 75 F0: jne 0x5878de30
        __asm _emit 0x75
        __asm _emit 0xf0
        push 198h
        mov dword ptr [esi + 248h], 0ffffffffh
        ; Exact mapped bytes E8 FA ED 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xed
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 11h
        cmp eax, ebp
        ; Exact mapped bytes 74 11: je 0x5878de75
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push ebp
        push 589971cch
        mov ecx, eax
        ; Exact mapped bytes E8 FD 5E 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x5e
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878de77
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov byte ptr [esp + 24h], 1
        ; Exact mapped bytes A3 A4 46 A2 58: mov dword ptr [0x58a246a4], eax
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 ED 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xed
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 12h
        cmp eax, ebp
        ; Exact mapped bytes 74 11: je 0x5878deac
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        push ebp
        push 589971b8h
        mov ecx, eax
        ; Exact mapped bytes E8 C6 5E 16 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x5e
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5878deae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 90h
        mov byte ptr [esp + 24h], 1
        mov dword ptr [esi + 121a4h], eax
        ; Exact mapped bytes E8 8B ED 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xed
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        mov byte ptr [esp + 20h], 13h
        cmp eax, ebp
        ; Exact mapped bytes 74 47: je 0x5878df1a
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0abh
        ; Exact mapped bytes 7E 16: jle 0x5878defb
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x5878defb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 2ac0h
        ; Exact mapped bytes EB 02: jmp 0x5878defd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 28h]
        push 40h
        push 2bch
        push 1e3h
        push ecx
        push edx
        push 20h
        mov ecx, eax
        ; Exact mapped bytes E8 F8 05 FE FF: call 0x5876e510
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5878df1c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 58h
        mov byte ptr [esp + 24h], 1
        mov dword ptr [esi + 12120h], eax
        ; Exact mapped bytes E8 20 ED 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xed
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 20h], 14h
        cmp edi, ebp
        ; Exact mapped bytes 74 74: je 0x5878dfb4
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [esi + 121a4h]
        cmp dword ptr [eax + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x5878df61
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x5878df61
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 1c0h]
        ; Exact mapped bytes EB 02: jmp 0x5878df63
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 3ch]
        add eax, -0bh
        push eax
        push ebp
        push ebp
        push 0fch
        push 50h
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 24 52 17 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], ebp
        mov dword ptr [edi + 54h], ebx
        cmp ebx, ebp
        ; Exact mapped bytes 74 2A: je 0x5878dfb6
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
        ; Exact mapped bytes EB 02: jmp 0x5878dfb6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 24h], 1
        mov dword ptr [esi + 121a8h], edi
        ; Exact mapped bytes E8 86 EC 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 20h], 15h
        cmp edi, ebp
        ; Exact mapped bytes 74 74: je 0x5878e04e
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [esi + 121a4h]
        cmp dword ptr [eax + 160h], 6
        ; Exact mapped bytes 7E 12: jle 0x5878dffb
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x5878dffb
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [eax + 180h]
        ; Exact mapped bytes EB 02: jmp 0x5878dffd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esp + 3ch]
        add eax, -0bh
        push eax
        push ebp
        push ebp
        push 0fch
        push 50h
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 8A 51 17 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], ebp
        mov dword ptr [edi + 54h], ebx
        cmp ebx, ebp
        ; Exact mapped bytes 74 2A: je 0x5878e050
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
        ; Exact mapped bytes EB 02: jmp 0x5878e050
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 121a8h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], 1
        mov dword ptr [esi + 121ach], edi
        ; Exact mapped bytes E8 B5 4C 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x4c
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 121ach]
        push 101h
        ; Exact mapped bytes E8 A5 4C 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x4c
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 121a8h]
        push ebp
        ; Exact mapped bytes E8 59 4C 17 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x4c
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 121ach]
        push ebp
        ; Exact mapped bytes E8 4D 4C 17 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x4c
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [esi + 121a8h]
        ; Exact mapped bytes 66 83 48 24 04: or word ptr [eax + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x04
        mov eax, dword ptr [esi + 121a8h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 121ach]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 12120h]
        push 101h
        ; Exact mapped bytes E8 57 4C 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x4c
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [esi + 12120h]
        mov dword ptr [eax + 80h], 101h
        mov eax, dword ptr [esi + 12120h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 12120h]
        push ebp
        ; Exact mapped bytes E8 EC 4B 17 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x4b
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [esi + 12120h]
        mov dword ptr [eax + 84h], ebp
        mov ecx, dword ptr [esi + 12120h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 78h]
        mov dword ptr [esi + 128h], 4bh
        mov eax, dword ptr [ecx + 164h]
        xor ebx, ebx
        xor edx, edx
        ; Exact mapped bytes 66 89 86 20 01 00 00: mov word ptr [esi + 0x120], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 3ch], ebx
        ; Exact mapped bytes 66 3B D0: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 83 F0 00 00 00: jae 0x5878e228
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ffffff20h
        sub eax, esi
        lea ebp, [esi + 0e0h]
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 F7 EA 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xea
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        mov byte ptr [esp + 20h], 18h
        test edi, edi
        ; Exact mapped bytes 74 7C: je 0x5878e1e5
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [esi + 78h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 19: jle 0x5878e18d
        __asm _emit 0x7e
        __asm _emit 0x19
        test ebx, ebx
        ; Exact mapped bytes 7C 15: jl 0x5878e18d
        __asm _emit 0x7c
        __asm _emit 0x15
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x5878e18d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [esp + 38h]
        add eax, ecx
        mov ebx, dword ptr [eax + ebp]
        ; Exact mapped bytes EB 02: jmp 0x5878e18f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 28h]
        push 2711h
        push 0
        push 0
        push 0
        push 0
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 F8 4F 17 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x4f
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 26: je 0x5878e1db
        __asm _emit 0x74
        __asm _emit 0x26
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
        mov ebx, dword ptr [esp + 3ch]
        mov eax, edi
        xor edi, edi
        ; Exact mapped bytes EB 04: jmp 0x5878e1e9
        __asm _emit 0xeb
        __asm _emit 0x04
        xor edi, edi
        xor eax, eax
        mov dword ptr [ebp], eax
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp]
        push edi
        mov byte ptr [esp + 24h], 1
        ; Exact mapped bytes E8 DD 4A 17 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x4a
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        movzx eax, word ptr [esi + 120h]
        inc ebx
        add ebp, 4
        cmp ebx, eax
        mov dword ptr [esp + 3ch], ebx
        ; Exact mapped bytes 0F 8C 2A FF FF FF: jl 0x5878e150
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5878e22a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        movzx eax, word ptr [esi + 120h]
        cmp eax, 10h
        ; Exact mapped bytes 7D 14: jge 0x5878e24a
        __asm _emit 0x7d
        __asm _emit 0x14
        mov ecx, 10h
        sub ecx, eax
        lea edi, [esi + eax*4 + 0e0h]
        xor eax, eax
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        xor edi, edi
        xor ecx, ecx
        mov dword ptr [esi + 124h], edi
        mov dword ptr [esi + 6ch], edi
        mov dword ptr [esi + 68h], edi
        mov dword ptr [esi + 12190h], edi
        ; Exact mapped bytes 66 89 8E 94 21 01 00: mov word ptr [esi + 0x12194], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esi + 134h], edi
        mov dword ptr [esi + 140h], edi
        mov dword ptr [esi + 13ch], edi
        ; Exact mapped bytes 39 3D 14 48 A2 58: cmp dword ptr [0x58a24814], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 27: jne 0x5878e2a6
        __asm _emit 0x75
        __asm _emit 0x27
        push 34h
        ; Exact mapped bytes E8 C8 E9 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 19h
        cmp eax, edi
        ; Exact mapped bytes 74 09: je 0x5878e29f
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 63 CD FC FF: call 0x5875b000
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xcd
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5878e2a1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes A3 14 48 A2 58: mov dword ptr [0x58a24814], eax
        __asm _emit 0xa3
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, esi
        mov dword ptr [esi + 138h], edi
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
        ret 18h
    }
}
