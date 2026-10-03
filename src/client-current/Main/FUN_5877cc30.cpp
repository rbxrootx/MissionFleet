// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 4348 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877CC30 .. +0x10FC bytes.
extern "C" __declspec(naked) void FUN_5877cc30_segment_00() {
    __asm {
        push -1
        push 5897f457h
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
        mov ebp, ecx
        mov dword ptr [esp + 14h], ebp
        push 40h
        xor ebx, ebx
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 37 65 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x65
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp], 5898c500h
        ; Exact mapped bytes 66 83 4D 24 20: or word ptr [ebp + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4d
        __asm _emit 0x24
        __asm _emit 0x20
        mov dword ptr [ebp], 5899689ch
        mov eax, 0bfffh
        ; Exact mapped bytes 66 21 45 24: and word ptr [ebp + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x45
        __asm _emit 0x24
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 4D 24: and word ptr [ebp + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4d
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 40h]
        mov edx, 3e8h
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes 66 89 55 26: mov word ptr [ebp + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5877cca8
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 A8 62 18 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x62
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5877ccb5
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 2B 62 18 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x62
        __asm _emit 0x18
        __asm _emit 0x00
        mov esi, dword ptr [esp + 28h]
        mov eax, 0aah
        lea edi, [ebp + 50h]
        mov ecx, 60h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 31 45 58: xor word ptr [ebp + 0x58], ax
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x45
        __asm _emit 0x58
        mov ecx, eax
        ; Exact mapped bytes 66 31 4D 5A: xor word ptr [ebp + 0x5a], cx
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x4d
        __asm _emit 0x5a
        mov edx, eax
        ; Exact mapped bytes 66 31 55 5C: xor word ptr [ebp + 0x5c], dx
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x55
        __asm _emit 0x5c
        lea ecx, [ebp + 7ch]
        lea eax, [ebp + 64h]
        mov edx, 0ch
        mov esi, 0aah
        ; Exact mapped bytes 66 31 30: xor word ptr [eax], si
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x30
        xor byte ptr [ecx], 0aah
        add eax, 2
        inc ecx
        sub edx, 1
        ; Exact mapped bytes 75 EC: jne 0x5877cce3
        __asm _emit 0x75
        __asm _emit 0xec
        movzx eax, word ptr [ebp + 5eh]
        xor eax, 0aa0h
        ; Exact mapped bytes 66 89 45 5E: mov word ptr [ebp + 0x5e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x5e
        mov eax, esi
        ; Exact mapped bytes 66 31 85 A0 00 00 00: xor word ptr [ebp + 0xa0], ax
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0aaaaaaaah
        xor dword ptr [ebp + 0a8h], eax
        xor dword ptr [ebp + 0ach], eax
        push 0ach
        mov dword ptr [ebp + 240h], ebx
        mov dword ptr [ebp + 244h], ebx
        ; Exact mapped bytes E8 1A FF 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 1
        cmp eax, ebx
        ; Exact mapped bytes 74 54: je 0x5877cd98
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 16: jle 0x5877cd69
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5877cd69
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x5877cd6b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 55 26: mov dx, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C2 64: add dx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x64
        movzx edx, dx
        push edx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov edx, dword ptr [ebp + 4]
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 0A 10 FE FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5877cd9a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 1dch], eax
        ; Exact mapped bytes E8 70 5F 18 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x5f
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1dch]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 85 FE 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 2
        cmp eax, ebx
        ; Exact mapped bytes 74 5A: je 0x5877ce33
        __asm _emit 0x74
        __asm _emit 0x5a
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 16: jle 0x5877cdfe
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5877cdfe
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x5877ce00
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 55 26: mov dx, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C2 64: add dx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x64
        movzx edx, dx
        push edx
        mov edx, dword ptr [ebp + 8]
        add edx, 55h
        push edx
        mov edx, dword ptr [ebp + 4]
        add edx, 2ch
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 6F 0F FE FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5877ce35
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 210h], eax
        ; Exact mapped bytes E8 D5 5E 18 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x5e
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 210h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 210h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 210h]
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 CC FD 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 3
        cmp eax, ebx
        ; Exact mapped bytes 74 5A: je 0x5877ceec
        __asm _emit 0x74
        __asm _emit 0x5a
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 16: jle 0x5877ceb7
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5877ceb7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 100h
        ; Exact mapped bytes EB 02: jmp 0x5877ceb9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 55 26: mov dx, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C2 64: add dx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x64
        movzx edx, dx
        push edx
        mov edx, dword ptr [ebp + 8]
        add edx, 55h
        push edx
        mov edx, dword ptr [ebp + 4]
        add edx, 18h
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 B6 0E FE FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5877ceee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 214h], eax
        ; Exact mapped bytes E8 1C 5E 18 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x5e
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 214h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 214h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 214h]
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0ach
        ; Exact mapped bytes E8 13 FD 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 4
        cmp eax, ebx
        ; Exact mapped bytes 74 5A: je 0x5877cfa5
        __asm _emit 0x74
        __asm _emit 0x5a
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2bh
        ; Exact mapped bytes 7E 16: jle 0x5877cf70
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5877cf70
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0ac0h
        ; Exact mapped bytes EB 02: jmp 0x5877cf72
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 55 26: mov dx, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C2 64: add dx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x64
        movzx edx, dx
        push edx
        mov edx, dword ptr [ebp + 8]
        add edx, 55h
        push edx
        mov edx, dword ptr [ebp + 4]
        add edx, 4
        push edx
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 FD 0D FE FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x0d
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5877cfa7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 20ch], eax
        ; Exact mapped bytes E8 63 5D 18 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x5d
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 20ch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 20ch]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 20ch]
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 5D FC 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xfc
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        mov byte ptr [esp + 20h], 5
        cmp esi, ebx
        ; Exact mapped bytes 74 78: je 0x5877d07b
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 9ch
        ; Exact mapped bytes 7E 16: jle 0x5877d02a
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x5877d02a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov edi, dword ptr [edx + 270h]
        ; Exact mapped bytes EB 02: jmp 0x5877d02c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        push ebx
        push ebx
        add eax, 9
        add ecx, 7
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 5A 61 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x61
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], edi
        cmp edi, ebx
        ; Exact mapped bytes 74 2A: je 0x5877d07d
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [edi + 10h]
        mov dword ptr [esi + 0ch], eax
        mov ecx, dword ptr [edi + 14h]
        lea eax, [edi + 18h]
        mov dword ptr [esi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [esi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [esi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [esi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [esi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x5877d07d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 0fffffeffh
        mov ecx, esi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 1fch], esi
        ; Exact mapped bytes E8 8D 5C 18 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1fch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 58h
        ; Exact mapped bytes E8 A5 FB 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfb
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        mov byte ptr [esp + 20h], 6
        cmp esi, ebx
        ; Exact mapped bytes 74 72: je 0x5877d12d
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 10: jle 0x5877d0d8
        __asm _emit 0x7e
        __asm _emit 0x10
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 08: je 0x5877d0d8
        __asm _emit 0x74
        __asm _emit 0x08
        mov edi, dword ptr [eax + 190h]
        ; Exact mapped bytes EB 02: jmp 0x5877d0da
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        push ebx
        push ebx
        add eax, 9
        add ecx, 7
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 AC 60 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x60
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [esi], 5898ca74h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], edi
        cmp edi, ebx
        ; Exact mapped bytes 74 2B: je 0x5877d12f
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [edi + 18h]
        mov dword ptr [esi + 0ch], edx
        mov eax, dword ptr [edi + 1ch]
        mov dword ptr [esi + 10h], eax
        mov ecx, dword ptr [edi + 20h]
        lea eax, [edi + 20h]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [esi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x5877d12f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, 0fffbh
        mov dword ptr [ebp + 1e8h], esi
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        push 54h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes E8 05 FB 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfb
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        mov byte ptr [esp + 20h], 7
        cmp esi, ebx
        ; Exact mapped bytes 74 22: je 0x5877d17d
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        push ebx
        push ebx
        add eax, 4
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 2E 60 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x60
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x5877d17f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 0fffffeffh
        mov ecx, esi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 1f0h], esi
        ; Exact mapped bytes E8 8B 5B 18 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x5b
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1f0h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 A3 FA 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xfa
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        mov byte ptr [esp + 20h], 8
        cmp esi, ebx
        ; Exact mapped bytes 74 22: je 0x5877d1df
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        push ebx
        push ebx
        add eax, 4
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 CC 5F 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x5f
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x5877d1e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 58h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 1ech], esi
        ; Exact mapped bytes E8 5C FA 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfa
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        mov byte ptr [esp + 20h], 9
        cmp esi, ebx
        ; Exact mapped bytes 74 28: je 0x5877d22c
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        push ebx
        push ebx
        add eax, 2
        add ecx, 2
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 82 5F 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x5f
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [esi], 5898ca74h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x5877d22e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 0fffffeffh
        mov ecx, esi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 1e4h], esi
        ; Exact mapped bytes E8 DC 5A 18 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x5a
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1e4h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 1e4h]
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 58h
        ; Exact mapped bytes E8 E5 F9 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf9
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        mov byte ptr [esp + 20h], 0ah
        cmp esi, ebx
        ; Exact mapped bytes 74 28: je 0x5877d2a3
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        push ebx
        push ebx
        add eax, 2
        add ecx, 2
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 0B 5F 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x5f
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [esi], 5898ca74h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x5877d2a5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov edx, 0fffbh
        mov dword ptr [ebp + 1e0h], esi
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        push 54h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes E8 8F F9 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf9
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        mov byte ptr [esp + 20h], 0bh
        cmp esi, ebx
        ; Exact mapped bytes 74 22: je 0x5877d2f3
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        push ebx
        push ebx
        add eax, 4
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 B8 5E 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x5e
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x5877d2f5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 0fffffeffh
        mov ecx, esi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 1f8h], esi
        ; Exact mapped bytes E8 15 5A 18 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x5a
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1f8h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 2D F9 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xf9
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        mov byte ptr [esp + 20h], 0ch
        cmp esi, ebx
        ; Exact mapped bytes 74 22: je 0x5877d355
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        push ebx
        push ebx
        add eax, 4
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 56 5E 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x5e
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x5877d357
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 1f4h], esi
        ; Exact mapped bytes E8 E6 F8 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        mov byte ptr [esp + 20h], 0dh
        cmp esi, ebx
        ; Exact mapped bytes 74 75: je 0x5877d3ef
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3dh
        ; Exact mapped bytes 7E 16: jle 0x5877d39e
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x5877d39e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov edi, dword ptr [edx + 0f4h]
        ; Exact mapped bytes EB 02: jmp 0x5877d3a0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        push ebx
        push ebx
        add eax, 2
        sub ecx, 2dh
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 E6 5D 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x5d
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], edi
        cmp edi, ebx
        ; Exact mapped bytes 74 2A: je 0x5877d3f1
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [edi + 10h]
        mov dword ptr [esi + 0ch], eax
        mov ecx, dword ptr [edi + 14h]
        lea eax, [edi + 18h]
        mov dword ptr [esi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [esi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [esi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [esi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [esi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x5877d3f1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 26ch], esi
        ; Exact mapped bytes E8 4C F8 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        mov byte ptr [esp + 20h], 0eh
        cmp esi, ebx
        ; Exact mapped bytes 74 76: je 0x5877d48a
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3ch
        ; Exact mapped bytes 7E 16: jle 0x5877d438
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x5877d438
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov edi, dword ptr [ecx + 0f0h]
        ; Exact mapped bytes EB 02: jmp 0x5877d43a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        push ebx
        push ebx
        add eax, 2
        sub ecx, 2dh
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 4C 5D 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x5d
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], edi
        cmp edi, ebx
        ; Exact mapped bytes 74 2B: je 0x5877d48c
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [edi + 10h]
        mov dword ptr [esi + 0ch], edx
        mov eax, dword ptr [edi + 14h]
        mov dword ptr [esi + 10h], eax
        mov ecx, dword ptr [edi + 18h]
        lea eax, [edi + 18h]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [esi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x5877d48c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 270h], esi
        ; Exact mapped bytes E8 B1 F7 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf7
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        mov byte ptr [esp + 20h], 0fh
        cmp esi, ebx
        ; Exact mapped bytes 74 75: je 0x5877d524
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3fh
        ; Exact mapped bytes 7E 16: jle 0x5877d4d3
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x5877d4d3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov edi, dword ptr [eax + 0fch]
        ; Exact mapped bytes EB 02: jmp 0x5877d4d5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        push ebx
        push ebx
        add eax, 2
        sub ecx, 23h
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 B1 5C 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x5c
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], edi
        cmp edi, ebx
        ; Exact mapped bytes 74 2A: je 0x5877d526
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [edi + 10h]
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [edi + 14h]
        lea eax, [edi + 18h]
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [esi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x5877d526
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 274h], esi
        ; Exact mapped bytes E8 17 F7 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf7
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        mov byte ptr [esp + 20h], 10h
        cmp esi, ebx
        ; Exact mapped bytes 74 75: je 0x5877d5be
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 3eh
        ; Exact mapped bytes 7E 16: jle 0x5877d56d
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x5877d56d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov edi, dword ptr [eax + 0f8h]
        ; Exact mapped bytes EB 02: jmp 0x5877d56f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        push ebx
        push ebx
        add eax, 2
        sub ecx, 23h
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 17 5C 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x5c
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], edi
        cmp edi, ebx
        ; Exact mapped bytes 74 2A: je 0x5877d5c0
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [edi + 10h]
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [edi + 14h]
        lea eax, [edi + 18h]
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [esi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x5877d5c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov ecx, dword ptr [ebp + 270h]
        push 0fffffeffh
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 278h], esi
        ; Exact mapped bytes E8 46 57 18 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x57
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 278h]
        push 0fffffeffh
        ; Exact mapped bytes E8 36 57 18 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x57
        __asm _emit 0x18
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 5D F6 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf6
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        mov byte ptr [esp + 20h], 11h
        cmp esi, ebx
        ; Exact mapped bytes 74 6C: je 0x5877d66f
        __asm _emit 0x74
        __asm _emit 0x6c
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 1ch
        ; Exact mapped bytes 7E 13: jle 0x5877d624
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0B: je 0x5877d624
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 18ch]
        mov edi, dword ptr [eax + 70h]
        ; Exact mapped bytes EB 02: jmp 0x5877d626
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        push ebx
        push ebx
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 66 5B 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x5b
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], edi
        cmp edi, ebx
        ; Exact mapped bytes 74 2A: je 0x5877d671
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [edi + 10h]
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [edi + 14h]
        lea eax, [edi + 18h]
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [esi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x5877d671
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [ebp + 208h], esi
        mov eax, 7fffh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 208h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 208h]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [eax + 20h]
        sub ecx, dword ptr [eax + 14h]
        sub edx, dword ptr [eax + 18h]
        mov eax, dword ptr [ebp + 14h]
        add eax, ecx
        mov ecx, dword ptr [ebp + 18h]
        add ecx, edx
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 1ch], eax
        mov dword ptr [ebp + 20h], ecx
        ; Exact mapped bytes E8 92 F5 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xf5
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        mov byte ptr [esp + 20h], 12h
        cmp esi, ebx
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x5877d754
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 38ah
        ; Exact mapped bytes 7E 16: jle 0x5877d6f9
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x5877d6f9
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov edi, dword ptr [edx + 0e28h]
        ; Exact mapped bytes EB 02: jmp 0x5877d6fb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 45 26: mov ax, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 4]
        ; Exact mapped bytes 66 83 C0 32: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x32
        movzx edx, ax
        mov eax, dword ptr [ebp + 8]
        push edx
        push ebx
        push ebx
        add eax, 34h
        add ecx, 7
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 81 5A 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x5a
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], edi
        cmp edi, ebx
        ; Exact mapped bytes 74 2A: je 0x5877d756
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [edi + 10h]
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [edi + 14h]
        lea eax, [edi + 18h]
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [esi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x5877d756
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 0fffffeffh
        mov ecx, esi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 204h], esi
        ; Exact mapped bytes E8 B4 55 18 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x55
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 204h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 CC F4 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf4
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        mov byte ptr [esp + 20h], 13h
        cmp esi, ebx
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x5877d81a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 389h
        ; Exact mapped bytes 7E 16: jle 0x5877d7bf
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x5877d7bf
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov edi, dword ptr [edx + 0e24h]
        ; Exact mapped bytes EB 02: jmp 0x5877d7c1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 45 26: mov ax, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 4]
        ; Exact mapped bytes 66 83 C0 32: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x32
        movzx edx, ax
        mov eax, dword ptr [ebp + 8]
        push edx
        push ebx
        push ebx
        add eax, 34h
        add ecx, 7
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 BB 59 18 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x59
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], edi
        cmp edi, ebx
        ; Exact mapped bytes 74 2A: je 0x5877d81c
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [edi + 10h]
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [edi + 14h]
        lea eax, [edi + 18h]
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [esi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x5877d81c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 74h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 200h], esi
        ; Exact mapped bytes E8 21 F4 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf4
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 14h
        cmp eax, ebx
        ; Exact mapped bytes 74 56: je 0x5877d893
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 38bh
        ; Exact mapped bytes 7E 16: jle 0x5877d865
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x5877d865
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 0e2ch]
        ; Exact mapped bytes EB 02: jmp 0x5877d867
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 55 26: mov dx, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C2 32: add dx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x32
        movzx edx, dx
        push edx
        mov edx, dword ptr [ebp + 8]
        add edx, 36h
        push edx
        mov edx, dword ptr [ebp + 4]
        add edx, 0ah
        push edx
        push ecx
        push ebp
        push ebx
        push 0ffh
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 6F 0F 00 00: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5877d895
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 74h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 230h], eax
        ; Exact mapped bytes E8 A8 F3 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf3
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 15h
        cmp eax, ebx
        ; Exact mapped bytes 74 56: je 0x5877d90c
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 38dh
        ; Exact mapped bytes 7E 16: jle 0x5877d8de
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x5877d8de
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 0e34h]
        ; Exact mapped bytes EB 02: jmp 0x5877d8e0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 55 26: mov dx, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C2 33: add dx, 0x33
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x33
        movzx edx, dx
        push edx
        mov edx, dword ptr [ebp + 8]
        add edx, 36h
        push edx
        mov edx, dword ptr [ebp + 4]
        add edx, 0ah
        push edx
        push ecx
        push ebp
        push ebx
        push 0ffh
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 F6 0E 00 00: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5877d90e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 74h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 22ch], eax
        ; Exact mapped bytes E8 2F F3 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf3
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 16h
        cmp eax, ebx
        ; Exact mapped bytes 74 56: je 0x5877d985
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 38ch
        ; Exact mapped bytes 7E 16: jle 0x5877d957
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x5877d957
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 0e30h]
        ; Exact mapped bytes EB 02: jmp 0x5877d959
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 55 26: mov dx, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C2 34: add dx, 0x34
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x34
        movzx edx, dx
        push edx
        mov edx, dword ptr [ebp + 8]
        add edx, 36h
        push edx
        mov edx, dword ptr [ebp + 4]
        add edx, 0ah
        push edx
        push ecx
        push ebp
        push ebx
        push 0ffh
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 7D 0E 00 00: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5877d987
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 228h], eax
        ; Exact mapped bytes E8 B3 F2 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xf2
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 17h
        cmp eax, ebx
        ; Exact mapped bytes 74 45: je 0x5877d9f0
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 16: jle 0x5877d9d3
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5877d9d3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x5877d9d5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [ebp + 8]
        add ecx, 3ch
        push ecx
        mov ecx, dword ptr [ebp + 4]
        add ecx, 20h
        push ecx
        push 3
        push edx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 12 97 18 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x97
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5877d9f2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 220h], eax
        ; Exact mapped bytes E8 4B F2 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf2
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 18h
        cmp eax, ebx
        ; Exact mapped bytes 74 29: je 0x5877da3c
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp + 4]
        push ebx
        push ebx
        push 0ffffffh
        push edx
        lea ecx, [esi + 46h]
        push ecx
        add edx, -0dh
        push edx
        ; Exact mapped bytes 8B 15 30 45 A2 58: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push edx
        push ebx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 46 58 FB FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5877da3e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp + 23ch], eax
        mov edi, 1
        mov dword ptr [eax + 68h], edi
        ; Exact mapped bytes 66 8B 45 26: mov ax, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x26
        mov esi, dword ptr [ebp + 23ch]
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 83 C0 64: add ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x64
        movzx eax, ax
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5877da72
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 DE 54 18 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x54
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x5877da7f
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 61 54 18 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x54
        __asm _emit 0x18
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 C5 F1 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xf1
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 19h
        cmp eax, ebx
        ; Exact mapped bytes 74 5A: je 0x5877daf3
        __asm _emit 0x74
        __asm _emit 0x5a
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2eh
        ; Exact mapped bytes 7E 16: jle 0x5877dabe
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5877dabe
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x5877dac0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 66 8B 4D 26: mov cx, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C1 64: add cx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x64
        movzx ecx, cx
        push ecx
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 10h
        push ecx
        mov ecx, dword ptr [ebp + 4]
        sub ecx, 2
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
        push ebp
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 AF 02 FE FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5877daf5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 248h], eax
        ; Exact mapped bytes E8 15 52 18 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x52
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 248h]
        push ebx
        ; Exact mapped bytes E8 C9 51 18 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x51
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 248h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 248h]
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        cmp dword ptr [ebp + 0b8h], -1
        mov ecx, dword ptr [ebp + 248h]
        setne al
        dec al
        and al, 0fh
        and al, 0fh
        ; Exact mapped bytes 66 0F B6 D0: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd0
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        mov esi, 0fff0h
        ; Exact mapped bytes 66 23 C6: and ax, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc6
        ; Exact mapped bytes 66 0B D0: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd0
        push 74h
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes E8 E5 F0 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf0
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 1ah
        cmp eax, ebx
        ; Exact mapped bytes 74 53: je 0x5877dbcc
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 2bh
        ; Exact mapped bytes 7E 16: jle 0x5877db9e
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x5877db9e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes EB 02: jmp 0x5877dba0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 55 26: mov dx, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C2 32: add dx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x32
        movzx edx, dx
        push edx
        mov edx, dword ptr [ebp + 8]
        add edx, 4ch
        push edx
        mov edx, dword ptr [ebp + 4]
        add edx, 18h
        push edx
        push ecx
        push ebp
        push ebx
        push 0ffh
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 36 0C 00 00: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5877dbce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push ebx
        mov ecx, ebp
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 238h], eax
        ; Exact mapped bytes E8 E0 D1 FF FF: call 0x5877adc0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        push 20h
        ; Exact mapped bytes E8 67 F0 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf0
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 1bh
        cmp eax, ebx
        ; Exact mapped bytes 74 36: je 0x5877dc2d
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D F0 46 A2 58: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 170h], 2
        ; Exact mapped bytes 7E 1B: jle 0x5877dc21
        __asm _emit 0x7e
        __asm _emit 0x1b
        cmp dword ptr [ecx + 194h], ebx
        ; Exact mapped bytes 74 13: je 0x5877dc21
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ecx + 194h]
        mov ecx, dword ptr [ecx + 8]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 31 97 03 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x5877dc2f
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 25 97 03 00: call 0x587b7350
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5877dc2f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, ebp
        mov byte ptr [esp + 20h], bl
        mov dword ptr [ebp + 1d8h], eax
        ; Exact mapped bytes E8 B0 D5 FF FF: call 0x5877b1f0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        push 88h
        mov dword ptr [ebp + 24ch], ebx
        mov dword ptr [ebp + 254h], ebx
        mov dword ptr [ebp + 250h], ebx
        ; Exact mapped bytes E8 F2 EF 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xef
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov byte ptr [esp + 20h], 1ch
        cmp eax, ebx
        ; Exact mapped bytes 74 14: je 0x5877dc80
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 14h]
        push edx
        push ecx
        push 0ah
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 02 42 FD FF: call 0x58751e80
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x42
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5877dc82
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp + 260h], eax
        mov dword ptr [eax + 6ch], 32h
        mov dword ptr [eax + 70h], 48h
        mov eax, dword ptr [ebp + 260h]
        mov dword ptr [eax + 78h], edi
        push 1ch
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 25ch], ebx
        mov dword ptr [ebp + 258h], ebx
        ; Exact mapped bytes E8 98 EF 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xef
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        mov byte ptr [esp + 20h], 1dh
        cmp esi, ebx
        ; Exact mapped bytes 74 3B: je 0x5877dd03
        __asm _emit 0x74
        __asm _emit 0x3b
        xor ecx, ecx
        mov eax, 80h
        mov dword ptr [esi + 4], eax
        mov edx, 4
        mul edx
        seto cl
        mov dword ptr [esi], 58996894h
        mov dword ptr [esi + 18h], ebx
        mov dword ptr [esi + 8], ebx
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 3C 38 1F 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x38
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 14h], eax
        mov dword ptr [esi + 0ch], ebx
        mov dword ptr [esi + 10h], ebx
        mov dword ptr [esi + 8], ebx
        ; Exact mapped bytes EB 02: jmp 0x5877dd05
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        xor eax, eax
        ; Exact mapped bytes 66 89 85 68 02 00 00: mov word ptr [ebp + 0x268], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 264h], esi
        mov eax, ebp
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
