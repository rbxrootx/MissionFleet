// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10025B10 .. +0xE60 bytes.
extern "C" __declspec(naked) void FUN_10025b10_10025B10() {
    __asm {
        push -1
        push 1016da5eh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        push 40h
        push ebx
        push ebx
        push ebx
        mov ebp, ecx
        push ebx
        push ebx
        mov dword ptr [esp + 24h], ebp
        ; Exact mapped bytes E8 71 8E 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x8e
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp], 1017566ch
        or byte ptr [ebp + 24h], 20h
        mov dword ptr [ebp], 10175650h
        ; Exact mapped bytes 66 81 65 24 FF 3F: and word ptr [ebp + 0x24], 0x3fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x65
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x3f
        ; Exact mapped bytes 66 C7 45 26 E8 03: mov word ptr [ebp + 0x26], 0x3e8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0x03
        mov ecx, dword ptr [ebp + 40h]
        cmp ecx, ebx
        mov dword ptr [esp + 1ch], ebx
        ; Exact mapped bytes 74 06: je 0x10025b6e
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 32 94 0D 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10025b7b
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 85 93 0D 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, dword ptr [esp + 24h]
        push edi
        lea edi, [ebp + 50h]
        mov ecx, 0dfh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov esi, 0aah
        mov edx, 0ffffff84h
        ; Exact mapped bytes 66 31 75 58: xor word ptr [ebp + 0x58], si
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x75
        __asm _emit 0x58
        ; Exact mapped bytes 66 31 75 5A: xor word ptr [ebp + 0x5a], si
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x75
        __asm _emit 0x5a
        ; Exact mapped bytes 66 31 75 5C: xor word ptr [ebp + 0x5c], si
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x75
        __asm _emit 0x5c
        lea eax, [ebp + 7ch]
        lea ecx, [ebp + 64h]
        sub edx, ebp
        ; Exact mapped bytes 66 31 31: xor word ptr [ecx], si
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x31
        xor byte ptr [eax], 0aah
        add ecx, 2
        inc eax
        lea edi, [edx + eax]
        cmp edi, 0ch
        ; Exact mapped bytes 7C EE: jl 0x10025ba8
        __asm _emit 0x7c
        __asm _emit 0xee
        mov edi, dword ptr [ebp + 60h]
        mov eax, 0aaaaaaaah
        xor edi, 0aa0h
        push 0a0h
        mov dword ptr [ebp + 60h], edi
        ; Exact mapped bytes 66 31 B5 A0 00 00 00: xor word ptr [ebp + 0xa0], si
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0xb5
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0a8h]
        xor ecx, eax
        mov dword ptr [ebp + 0a8h], ecx
        mov edi, dword ptr [ebp + 0ach]
        xor edi, eax
        mov dword ptr [ebp + 0ach], edi
        ; Exact mapped bytes E8 A8 6B 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x6b
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes 74 4D: je 0x10025c55
        __asm _emit 0x74
        __asm _emit 0x4d
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 12: jle 0x10025c29
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10025c29
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x10025c2b
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
        push edx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov edx, dword ptr [ebp + 4]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 6D 16 FF FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10025c57
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 3d8h], eax
        ; Exact mapped bytes E8 F3 94 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 3d8h]
        push 0a0h
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E8 1D 6B 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x6b
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 2
        ; Exact mapped bytes 74 53: je 0x10025ce6
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 12: jle 0x10025cb4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10025cb4
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x10025cb6
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
        push edx
        mov edx, dword ptr [ebp + 8]
        add edx, 55h
        push edx
        mov edx, dword ptr [ebp + 4]
        add edx, 2ch
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 DC 15 FF FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10025ce8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 40ch], eax
        ; Exact mapped bytes E8 62 94 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 40ch]
        mov edi, 7fffh
        mov esi, 0bfffh
        push 0a0h
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 40ch]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 40ch]
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes E8 6E 6A 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x6a
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 3
        ; Exact mapped bytes 74 53: je 0x10025d95
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x10025d63
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10025d63
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 100h
        ; Exact mapped bytes EB 02: jmp 0x10025d65
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
        push edx
        mov edx, dword ptr [ebp + 8]
        add edx, 55h
        push edx
        mov edx, dword ptr [ebp + 4]
        add edx, 18h
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 2D 15 FF FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10025d97
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 410h], eax
        ; Exact mapped bytes E8 B3 93 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x93
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 410h]
        push 0a0h
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 410h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 410h]
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes E8 C9 69 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x69
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 4
        ; Exact mapped bytes 74 53: je 0x10025e3a
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2bh
        ; Exact mapped bytes 7E 12: jle 0x10025e08
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10025e08
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0ac0h
        ; Exact mapped bytes EB 02: jmp 0x10025e0a
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
        push edx
        mov edx, dword ptr [ebp + 8]
        add edx, 55h
        push edx
        mov edx, dword ptr [ebp + 4]
        add edx, 4
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 88 14 FF FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10025e3c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 408h], eax
        ; Exact mapped bytes E8 0E 93 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x93
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 408h]
        push 0a0h
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 408h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 408h]
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes E8 24 69 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x69
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 5
        ; Exact mapped bytes 74 53: je 0x10025edf
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D 18 58 1C 10: mov ecx, dword ptr [0x101c5818]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 12: jle 0x10025ead
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10025ead
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x10025eaf
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
        push edx
        mov edx, dword ptr [ebp + 8]
        add edx, 55h
        push edx
        mov edx, dword ptr [ebp + 4]
        add edx, 4
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 E3 13 FF FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10025ee1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 414h], eax
        ; Exact mapped bytes E8 69 92 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x92
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 414h]
        push 0a0h
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 414h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 414h]
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes E8 7F 68 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        mov ecx, 6
        cmp eax, ebx
        mov byte ptr [esp + 20h], cl
        ; Exact mapped bytes 74 52: je 0x10025f87
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 18 58 1C 10: mov edx, dword ptr [0x101c5818]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x10025f55
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [edx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10025f55
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 180h
        ; Exact mapped bytes EB 02: jmp 0x10025f57
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
        push edx
        mov edx, dword ptr [ebp + 8]
        add edx, 55h
        push edx
        mov edx, dword ptr [ebp + 4]
        add edx, 23h
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 3B 13 FF FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10025f89
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 418h], eax
        ; Exact mapped bytes E8 C1 91 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x91
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 418h]
        push 54h
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 418h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 418h]
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes E8 DA 67 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x14
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        cmp esi, ebx
        mov byte ptr [esp + 20h], 7
        ; Exact mapped bytes 74 7C: je 0x10026054
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 9ch
        ; Exact mapped bytes 7E 12: jle 0x10025ffb
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10025ffb
        __asm _emit 0x74
        __asm _emit 0x08
        mov edi, dword ptr [eax + 270h]
        ; Exact mapped bytes EB 02: jmp 0x10025ffd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        add eax, 9
        push ebx
        add ecx, 7
        push ebx
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 99 89 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        cmp edi, ebx
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], edi
        ; Exact mapped bytes 74 29: je 0x1002604d
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [edi + 10h]
        add edi, 18h
        mov dword ptr [esi + 0ch], eax
        mov ecx, dword ptr [edi - 4]
        mov dword ptr [esi + 10h], ecx
        mov eax, dword ptr [edi]
        lea edx, [esi + 14h]
        mov dword ptr [esi + 14h], eax
        mov ecx, dword ptr [edi + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [edi + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [edi + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov edi, 7fffh
        ; Exact mapped bytes EB 02: jmp 0x10026056
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 0fffffeffh
        mov ecx, esi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 3f8h], esi
        ; Exact mapped bytes E8 F4 90 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x90
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 3f8h]
        push 58h
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes E8 23 67 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x67
        __asm _emit 0x14
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        cmp esi, ebx
        mov byte ptr [esp + 20h], 8
        ; Exact mapped bytes 74 6E: je 0x100260fd
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 0A: jle 0x100260a6
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov edi, dword ptr [eax + 190h]
        cmp edi, ebx
        ; Exact mapped bytes 75 02: jne 0x100260a8
        __asm _emit 0x75
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        add eax, 9
        push ebx
        add ecx, 7
        push ebx
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 EE 88 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x00
        cmp edi, ebx
        mov dword ptr [esi], 101751f8h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], edi
        ; Exact mapped bytes 74 2D: je 0x100260ff
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [edi + 18h]
        add edi, 20h
        mov dword ptr [esi + 0ch], edx
        mov eax, dword ptr [edi - 4]
        mov dword ptr [esi + 10h], eax
        mov edx, dword ptr [edi]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov eax, dword ptr [edi + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [edi + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [edi + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100260ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov edi, 0fffbh
        mov dword ptr [ebp + 3e4h], esi
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        push 54h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes E8 87 66 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x66
        __asm _emit 0x14
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        cmp esi, ebx
        mov byte ptr [esp + 20h], 9
        ; Exact mapped bytes 74 22: je 0x1002614d
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        add eax, 4
        push ebx
        push ebx
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 6E 88 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x1002614f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 0fffffeffh
        mov ecx, esi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 3ech], esi
        ; Exact mapped bytes E8 FB 8F 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x8f
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 3ech]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 28 66 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x66
        __asm _emit 0x14
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        cmp esi, ebx
        mov byte ptr [esp + 20h], 0ah
        ; Exact mapped bytes 74 22: je 0x100261ac
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        add eax, 4
        push ebx
        push ebx
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 0F 88 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100261ae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 58h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 3e8h], esi
        ; Exact mapped bytes E8 E1 65 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x65
        __asm _emit 0x14
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        cmp esi, ebx
        mov byte ptr [esp + 20h], 0bh
        ; Exact mapped bytes 74 2A: je 0x100261fb
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        add eax, 2
        push ebx
        add ecx, 2
        push ebx
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 C5 87 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x87
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [esi], 101751f8h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebx
        mov ecx, esi
        ; Exact mapped bytes EB 02: jmp 0x100261fd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 3e0h], ecx
        ; Exact mapped bytes E8 4F 8F 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x8f
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 3e0h]
        push 58h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [ebp + 3e0h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes E8 72 65 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x65
        __asm _emit 0x14
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        cmp esi, ebx
        mov byte ptr [esp + 20h], 0ch
        ; Exact mapped bytes 74 28: je 0x10026268
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        add eax, 2
        push ebx
        add ecx, 2
        push ebx
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 56 87 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x87
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [esi], 101751f8h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x1002626a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [ebp + 3dch], esi
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        push 54h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes E8 21 65 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x65
        __asm _emit 0x14
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        cmp esi, ebx
        mov byte ptr [esp + 20h], 0dh
        ; Exact mapped bytes 74 22: je 0x100262b3
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        add eax, 4
        push ebx
        push ebx
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 08 87 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x87
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100262b5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 0fffffeffh
        mov ecx, esi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 3f4h], esi
        ; Exact mapped bytes E8 95 8E 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x8e
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 3f4h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 C2 64 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x64
        __asm _emit 0x14
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        cmp esi, ebx
        mov byte ptr [esp + 20h], 0eh
        ; Exact mapped bytes 74 22: je 0x10026312
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        add eax, 4
        push ebx
        push ebx
        push eax
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 A9 86 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x86
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10026314
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 3f0h], esi
        ; Exact mapped bytes E8 7B 64 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x64
        __asm _emit 0x14
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        cmp esi, ebx
        mov byte ptr [esp + 20h], 0fh
        ; Exact mapped bytes 74 6D: je 0x100263a4
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1ch
        ; Exact mapped bytes 7E 0F: jle 0x10026354
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x10026354
        __asm _emit 0x74
        __asm _emit 0x05
        mov edi, dword ptr [eax + 70h]
        ; Exact mapped bytes EB 02: jmp 0x10026356
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
        ; Exact mapped bytes E8 46 86 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x86
        __asm _emit 0x0d
        __asm _emit 0x00
        cmp edi, ebx
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], edi
        ; Exact mapped bytes 74 29: je 0x100263a0
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [edi + 10h]
        add edi, 18h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [edi - 4]
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [edi]
        lea eax, [esi + 14h]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [edi + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [edi + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edi + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, esi
        ; Exact mapped bytes EB 02: jmp 0x100263a6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp + 404h], eax
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [ebp + 404h]
        push 54h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 404h]
        mov eax, dword ptr [ecx + 20h]
        mov esi, dword ptr [ecx + 18h]
        mov edx, dword ptr [ecx + 1ch]
        mov edi, dword ptr [ecx + 14h]
        mov ecx, dword ptr [ebp + 14h]
        sub eax, esi
        mov esi, dword ptr [ebp + 18h]
        sub edx, edi
        add ecx, edx
        add eax, esi
        mov dword ptr [ebp + 1ch], ecx
        mov dword ptr [ebp + 20h], eax
        ; Exact mapped bytes E8 B1 63 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x63
        __asm _emit 0x14
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        cmp esi, ebx
        mov byte ptr [esp + 20h], 10h
        ; Exact mapped bytes 74 7E: je 0x1002647f
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 38ah
        ; Exact mapped bytes 7E 12: jle 0x10026424
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10026424
        __asm _emit 0x74
        __asm _emit 0x08
        mov edi, dword ptr [eax + 0e28h]
        ; Exact mapped bytes EB 02: jmp 0x10026426
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 45 26: mov ax, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 4]
        ; Exact mapped bytes 66 05 32 00: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        push eax
        add ecx, 34h
        push ebx
        add edx, 7
        push ebx
        push ecx
        push edx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 69 85 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x00
        cmp edi, ebx
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], edi
        ; Exact mapped bytes 74 2D: je 0x10026481
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [edi + 10h]
        add edi, 18h
        mov dword ptr [esi + 0ch], edx
        mov eax, dword ptr [edi - 4]
        mov dword ptr [esi + 10h], eax
        mov edx, dword ptr [edi]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov eax, dword ptr [edi + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [edi + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [edi + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x10026481
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 0fffffeffh
        mov ecx, esi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 400h], esi
        ; Exact mapped bytes E8 C9 8C 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x8c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 400h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 F6 62 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x62
        __asm _emit 0x14
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        cmp esi, ebx
        mov byte ptr [esp + 20h], 11h
        ; Exact mapped bytes 74 7E: je 0x1002653a
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 389h
        ; Exact mapped bytes 7E 12: jle 0x100264df
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100264df
        __asm _emit 0x74
        __asm _emit 0x08
        mov edi, dword ptr [eax + 0e24h]
        ; Exact mapped bytes EB 02: jmp 0x100264e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 66 8B 45 26: mov ax, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 4]
        ; Exact mapped bytes 66 05 32 00: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        push eax
        add ecx, 34h
        push ebx
        add edx, 7
        push ebx
        push ecx
        push edx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 AE 84 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x00
        cmp edi, ebx
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], edi
        ; Exact mapped bytes 74 2D: je 0x1002653c
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [edi + 10h]
        add edi, 18h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [edi - 4]
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [edi]
        lea eax, [esi + 14h]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [edi + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [edi + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edi + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x1002653c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 74h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 3fch], esi
        ; Exact mapped bytes E8 53 62 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x62
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 12h
        ; Exact mapped bytes 74 4F: je 0x100265ac
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 38bh
        ; Exact mapped bytes 7E 12: jle 0x10026581
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10026581
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 0e2ch]
        ; Exact mapped bytes EB 02: jmp 0x10026583
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
        ; Exact mapped bytes E8 B6 39 00 00: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100265ae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 74h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 42ch], eax
        ; Exact mapped bytes E8 E1 61 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x61
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 13h
        ; Exact mapped bytes 74 4F: je 0x1002661e
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 38dh
        ; Exact mapped bytes 7E 12: jle 0x100265f3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100265f3
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 0e34h]
        ; Exact mapped bytes EB 02: jmp 0x100265f5
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
        ; Exact mapped bytes E8 44 39 00 00: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10026620
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 74h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 428h], eax
        ; Exact mapped bytes E8 6F 61 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x61
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 14h
        ; Exact mapped bytes 74 4F: je 0x10026690
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 38ch
        ; Exact mapped bytes 7E 12: jle 0x10026665
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10026665
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 0e30h]
        ; Exact mapped bytes EB 02: jmp 0x10026667
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
        ; Exact mapped bytes E8 D2 38 00 00: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10026692
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 424h], eax
        ; Exact mapped bytes E8 FA 60 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x60
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 15h
        ; Exact mapped bytes 74 41: je 0x100266f7
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 12: jle 0x100266da
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100266da
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 32c0h]
        ; Exact mapped bytes EB 02: jmp 0x100266dc
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
        ; Exact mapped bytes E8 9B 8B 0D 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100266f9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 70h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 41ch], eax
        ; Exact mapped bytes E8 96 60 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x60
        __asm _emit 0x14
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 14h], esi
        cmp esi, ebx
        mov byte ptr [esp + 20h], 16h
        ; Exact mapped bytes 74 68: je 0x10026784
        __asm _emit 0x74
        __asm _emit 0x68
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        push 40h
        push eax
        lea edx, [ecx + 46h]
        lea edi, [eax - 0dh]
        mov dword ptr [esp + 30h], edi
        ; Exact mapped bytes 8B 3D 98 56 1C 10: mov edi, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        mov edx, dword ptr [esp + 34h]
        push edx
        push ecx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 6C 82 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x82
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 60h], 0ffffffh
        mov dword ptr [esi + 64h], ebx
        mov dword ptr [esi + 68h], ebx
        mov dword ptr [esi + 58h], 8
        mov dword ptr [esi + 5ch], 10h
        mov dword ptr [esi + 54h], ebx
        push 80h
        mov byte ptr [esp + 24h], 17h
        mov dword ptr [esi], 10175338h
        ; Exact mapped bytes E8 26 60 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x60
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [esi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 02: jmp 0x10026786
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov edi, 1
        mov dword ptr [ebp + 438h], esi
        mov dword ptr [esi + 68h], edi
        mov esi, dword ptr [ebp + 438h]
        ; Exact mapped bytes 66 8B 45 26: mov ax, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x26
        mov byte ptr [esp + 20h], bl
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 05 64 00: add ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x00
        cmp ecx, ebx
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100267b7
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 E9 87 0D 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100267c4
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 3C 87 0D 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x87
        __asm _emit 0x0d
        __asm _emit 0x00
        push 74h
        ; Exact mapped bytes E8 D5 5F 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x5f
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 18h
        ; Exact mapped bytes 74 4C: je 0x10026827
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 2bh
        ; Exact mapped bytes 7E 12: jle 0x100267fc
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100267fc
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes EB 02: jmp 0x100267fe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 66 8B 4D 26: mov cx, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C1 32: add cx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x32
        push ecx
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4ch
        push ecx
        mov ecx, dword ptr [ebp + 4]
        add ecx, 18h
        push ecx
        push edx
        push ebp
        push ebx
        push 0ffh
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 3B 37 00 00: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10026829
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push ebx
        mov ecx, ebp
        mov byte ptr [esp + 24h], bl
        mov dword ptr [ebp + 434h], eax
        ; Exact mapped bytes E8 25 2B 00 00: call 0x10029360
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        ; Exact mapped bytes E8 5E 5F 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x5f
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 19h
        ; Exact mapped bytes 74 32: je 0x10026884
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D E8 57 1C 10: mov ecx, dword ptr [0x101c57e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 2
        ; Exact mapped bytes 7E 17: jle 0x10026878
        __asm _emit 0x7e
        __asm _emit 0x17
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0D: je 0x10026878
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ecx + 8]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 8A 20 02 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x10026886
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 7E 20 02 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10026886
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, ebp
        mov byte ptr [esp + 20h], bl
        mov dword ptr [ebp + 3d4h], eax
        ; Exact mapped bytes E8 29 04 00 00: call 0x10026cc0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 88h
        mov dword ptr [ebp + 43ch], ebx
        mov dword ptr [ebp + 444h], ebx
        mov dword ptr [ebp + 440h], ebx
        ; Exact mapped bytes E8 ED 5E 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x5e
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 1ah
        ; Exact mapped bytes 74 14: je 0x100268d7
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 14h]
        push edx
        push ecx
        push 0ah
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 EB AF FE FF: call 0x100118c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100268d9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp + 450h], eax
        mov dword ptr [eax + 6ch], 32h
        mov dword ptr [eax + 70h], 48h
        mov eax, dword ptr [ebp + 450h]
        push 1ch
        mov byte ptr [esp + 24h], bl
        mov dword ptr [eax + 78h], edi
        mov dword ptr [ebp + 44ch], ebx
        mov dword ptr [ebp + 448h], ebx
        ; Exact mapped bytes E8 93 5E 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x5e
        __asm _emit 0x14
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        cmp esi, ebx
        mov byte ptr [esp + 20h], 1bh
        pop edi
        ; Exact mapped bytes 74 2B: je 0x1002694b
        __asm _emit 0x74
        __asm _emit 0x2b
        push 50h
        mov dword ptr [esi], 1017564ch
        mov dword ptr [esi + 18h], ebx
        mov dword ptr [esi + 4], 14h
        mov dword ptr [esi + 8], ebx
        ; Exact mapped bytes E8 66 5E 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x5e
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 14h], eax
        mov dword ptr [esi + 0ch], ebx
        mov dword ptr [esi + 10h], ebx
        mov dword ptr [esi + 8], ebx
        ; Exact mapped bytes EB 02: jmp 0x1002694d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [ebp + 454h], esi
        ; Exact mapped bytes 66 89 9D 58 04 00 00: mov word ptr [ebp + 0x458], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
