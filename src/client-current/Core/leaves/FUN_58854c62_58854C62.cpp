// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58854C62 .. +0x43A bytes.
extern "C" __declspec(naked) void FUN_58854c62_58854C62() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push -1
        push 58892d50h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 24h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push ebx
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [ebp - 18h], esi
        ; Exact mapped bytes 0F BE 46 2D: movsx eax, byte ptr [esi + 0x2d]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x46
        __asm _emit 0x2d
        xor ebx, ebx
        push 2
        pop ecx
        cmp eax, 64h
        ; Exact mapped bytes 7F 6C: jg 0x58854d0e
        __asm _emit 0x7f
        __asm _emit 0x6c
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x58854d36
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 53h
        ; Exact mapped bytes 7F 2D: jg 0x58854cda
        __asm _emit 0x7f
        __asm _emit 0x2d
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x58854d63
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 41h
        ; Exact mapped bytes 74 16: je 0x58854cce
        __asm _emit 0x74
        __asm _emit 0x16
        sub eax, ecx
        ; Exact mapped bytes 74 34: je 0x58854cf0
        __asm _emit 0x74
        __asm _emit 0x34
        sub eax, ecx
        ; Exact mapped bytes 74 0E: je 0x58854cce
        __asm _emit 0x74
        __asm _emit 0x0e
        sub eax, 1
        ; Exact mapped bytes 74 09: je 0x58854cce
        __asm _emit 0x74
        __asm _emit 0x09
        sub eax, 1
        ; Exact mapped bytes 0F 85 A9 00 00 00: jne 0x58854d77
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 1D 0A 00 00: call 0x588556f2
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x58854d73
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 58h
        ; Exact mapped bytes 74 24: je 0x58854d03
        __asm _emit 0x74
        __asm _emit 0x24
        sub eax, ecx
        ; Exact mapped bytes 74 17: je 0x58854cfa
        __asm _emit 0x74
        __asm _emit 0x17
        sub eax, 7
        ; Exact mapped bytes 74 E6: je 0x58854cce
        __asm _emit 0x74
        __asm _emit 0xe6
        sub eax, ecx
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x58854d77
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 7E 0D 00 00: call 0x58855a76
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 79: jmp 0x58854d73
        __asm _emit 0xeb
        __asm _emit 0x79
        mov ecx, esi
        ; Exact mapped bytes E8 0A 09 00 00: call 0x5885560b
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 70: jmp 0x58854d73
        __asm _emit 0xeb
        __asm _emit 0x70
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 F8 DE FF FF: call 0x58852c04
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 65: jmp 0x58854d73
        __asm _emit 0xeb
        __asm _emit 0x65
        cmp eax, 6fh
        ; Exact mapped bytes 7F 3A: jg 0x58854d4d
        __asm _emit 0x7f
        __asm _emit 0x3a
        ; Exact mapped bytes 74 2F: je 0x58854d44
        __asm _emit 0x74
        __asm _emit 0x2f
        sub eax, 65h
        ; Exact mapped bytes 74 B4: je 0x58854cce
        __asm _emit 0x74
        __asm _emit 0xb4
        sub eax, 1
        ; Exact mapped bytes 74 AF: je 0x58854cce
        __asm _emit 0x74
        __asm _emit 0xaf
        sub eax, 1
        ; Exact mapped bytes 74 AA: je 0x58854cce
        __asm _emit 0x74
        __asm _emit 0xaa
        sub eax, ecx
        ; Exact mapped bytes 74 0E: je 0x58854d36
        __asm _emit 0x74
        __asm _emit 0x0e
        sub eax, 5
        ; Exact mapped bytes 75 4A: jne 0x58854d77
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, esi
        ; Exact mapped bytes E8 73 0E 00 00: call 0x58855ba7
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3D: jmp 0x58854d73
        __asm _emit 0xeb
        __asm _emit 0x3d
        or dword ptr [esi + 1ch], 10h
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 A3 DB FF FF: call 0x588528e5
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 2F: jmp 0x58854d73
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, esi
        ; Exact mapped bytes E8 E1 0E 00 00: call 0x58855c2c
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 26: jmp 0x58854d73
        __asm _emit 0xeb
        __asm _emit 0x26
        sub eax, 70h
        ; Exact mapped bytes 74 1A: je 0x58854d6c
        __asm _emit 0x74
        __asm _emit 0x1a
        sub eax, 3
        ; Exact mapped bytes 74 0C: je 0x58854d63
        __asm _emit 0x74
        __asm _emit 0x0c
        sub eax, ecx
        ; Exact mapped bytes 74 DF: je 0x58854d3a
        __asm _emit 0x74
        __asm _emit 0xdf
        sub eax, 3
        ; Exact mapped bytes 75 17: jne 0x58854d77
        __asm _emit 0x75
        __asm _emit 0x17
        push ebx
        ; Exact mapped bytes EB A2: jmp 0x58854d05
        __asm _emit 0xeb
        __asm _emit 0xa2
        mov ecx, esi
        ; Exact mapped bytes E8 28 0F 00 00: call 0x58855c92
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x58854d73
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 F3 0E 00 00: call 0x58855c66
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 75 07: jne 0x58854d7e
        __asm _emit 0x75
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 04 03 00 00: jmp 0x58855082
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi + 2ch], bl
        ; Exact mapped bytes 0F 85 F9 02 00 00: jne 0x58855080
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1ch]
        xor edx, edx
        shr eax, 4
        inc edx
        ; Exact mapped bytes 66 89 5D E0: mov word ptr [ebp - 0x20], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xe0
        mov ecx, ebx
        mov byte ptr [ebp - 1eh], bl
        mov dword ptr [ebp - 1ch], ecx
        and al, dl
        ; Exact mapped bytes 74 34: je 0x58854dd4
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [esi + 1ch]
        shr eax, 6
        and al, dl
        ; Exact mapped bytes 74 06: je 0x58854db0
        __asm _emit 0x74
        __asm _emit 0x06
        mov byte ptr [ebp - 20h], 2dh
        ; Exact mapped bytes EB 0B: jmp 0x58854dbb
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov al, byte ptr [esi + 1ch]
        and al, dl
        ; Exact mapped bytes 74 0B: je 0x58854dc2
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [ebp - 20h], 2bh
        mov ecx, edx
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 12: jmp 0x58854dd4
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [esi + 1ch]
        shr eax, 1
        and al, dl
        ; Exact mapped bytes 74 09: je 0x58854dd4
        __asm _emit 0x74
        __asm _emit 0x09
        mov byte ptr [ebp - 20h], 20h
        mov ecx, edx
        mov dword ptr [ebp - 1ch], edx
        mov dl, byte ptr [esi + 2dh]
        cmp dl, 78h
        ; Exact mapped bytes 74 05: je 0x58854de1
        __asm _emit 0x74
        __asm _emit 0x05
        cmp dl, 58h
        ; Exact mapped bytes 75 0C: jne 0x58854ded
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 1ch]
        shr eax, 5
        mov ah, 1
        and al, 1
        ; Exact mapped bytes 75 02: jne 0x58854def
        __asm _emit 0x75
        __asm _emit 0x02
        mov ah, bl
        cmp dl, 61h
        ; Exact mapped bytes 74 07: je 0x58854dfb
        __asm _emit 0x74
        __asm _emit 0x07
        mov al, bl
        cmp dl, 41h
        ; Exact mapped bytes 75 02: jne 0x58854dfd
        __asm _emit 0x75
        __asm _emit 0x02
        mov al, 1
        test ah, ah
        ; Exact mapped bytes 75 04: jne 0x58854e05
        __asm _emit 0x75
        __asm _emit 0x04
        test al, al
        ; Exact mapped bytes 74 20: je 0x58854e25
        __asm _emit 0x74
        __asm _emit 0x20
        mov byte ptr [ebp + ecx - 20h], 30h
        cmp dl, 58h
        ; Exact mapped bytes 74 09: je 0x58854e18
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dl, 41h
        ; Exact mapped bytes 74 04: je 0x58854e18
        __asm _emit 0x74
        __asm _emit 0x04
        mov al, 78h
        ; Exact mapped bytes EB 03: jmp 0x58854e1b
        __asm _emit 0xeb
        __asm _emit 0x03
        push 58h
        pop eax
        mov byte ptr [ebp + ecx - 1fh], al
        add ecx, 2
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [esi + 20h]
        sub edx, dword ptr [esi + 34h]
        sub edx, ecx
        test byte ptr [esi + 1ch], 0ch
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes 75 5A: jne 0x58854e90
        __asm _emit 0x75
        __asm _emit 0x5a
        mov dword ptr [ebp - 24h], ebx
        test edx, edx
        ; Exact mapped bytes 7E 53: jle 0x58854e90
        __asm _emit 0x7e
        __asm _emit 0x53
        mov ebx, dword ptr [esi + 14h]
        mov ecx, dword ptr [ebp - 24h]
        mov edi, dword ptr [esi + 448h]
        mov eax, dword ptr [edi + 8]
        cmp eax, dword ptr [edi + 4]
        ; Exact mapped bytes 75 11: jne 0x58854e62
        __asm _emit 0x75
        __asm _emit 0x11
        cmp byte ptr [edi + 0ch], 0
        ; Exact mapped bytes 74 03: je 0x58854e5a
        __asm _emit 0x74
        __asm _emit 0x03
        inc ebx
        ; Exact mapped bytes EB 03: jmp 0x58854e5d
        __asm _emit 0xeb
        __asm _emit 0x03
        or ebx, 0ffffffffh
        mov dword ptr [esi + 14h], ebx
        ; Exact mapped bytes EB 1C: jmp 0x58854e7e
        __asm _emit 0xeb
        __asm _emit 0x1c
        lea eax, [ebx + 1]
        mov dword ptr [esi + 14h], eax
        inc dword ptr [edi + 8]
        mov eax, dword ptr [esi + 448h]
        mov eax, dword ptr [eax]
        mov byte ptr [eax], 20h
        mov eax, dword ptr [esi + 448h]
        inc dword ptr [eax]
        mov ebx, dword ptr [esi + 14h]
        cmp ebx, -1
        ; Exact mapped bytes 74 05: je 0x58854e8b
        __asm _emit 0x74
        __asm _emit 0x05
        inc ecx
        cmp ecx, edx
        ; Exact mapped bytes 7C B8: jl 0x58854e43
        __asm _emit 0x7c
        __asm _emit 0xb8
        mov ecx, dword ptr [ebp - 1ch]
        xor ebx, ebx
        push dword ptr [esi + 8]
        lea edi, [esi + 14h]
        push edi
        push ecx
        lea eax, [esi + 448h]
        lea ecx, [ebp - 20h]
        mov dword ptr [ebp - 1ch], eax
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 E2 11 00 00: call 0x5885608e
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1ch]
        mov eax, ecx
        shr eax, 3
        test al, 1
        ; Exact mapped bytes 74 5B: je 0x58854f13
        __asm _emit 0x74
        __asm _emit 0x5b
        shr ecx, 2
        test cl, 1
        ; Exact mapped bytes 75 53: jne 0x58854f13
        __asm _emit 0x75
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 24h], ebx
        test ecx, ecx
        ; Exact mapped bytes 7E 49: jle 0x58854f13
        __asm _emit 0x7e
        __asm _emit 0x49
        mov esi, dword ptr [edi]
        mov edx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [edx]
        mov eax, dword ptr [edx + 8]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 75 13: jne 0x58854eec
        __asm _emit 0x75
        __asm _emit 0x13
        cmp byte ptr [edx + 0ch], 0
        ; Exact mapped bytes 74 03: je 0x58854ee2
        __asm _emit 0x74
        __asm _emit 0x03
        inc esi
        ; Exact mapped bytes EB 03: jmp 0x58854ee5
        __asm _emit 0xeb
        __asm _emit 0x03
        or esi, 0ffffffffh
        mov dword ptr [edi], esi
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes EB 16: jmp 0x58854f02
        __asm _emit 0xeb
        __asm _emit 0x16
        lea eax, [esi + 1]
        mov dword ptr [edi], eax
        inc dword ptr [edx + 8]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov eax, dword ptr [eax]
        mov byte ptr [eax], 30h
        mov eax, dword ptr [edx]
        inc dword ptr [eax]
        mov esi, dword ptr [edi]
        cmp esi, -1
        ; Exact mapped bytes 74 05: je 0x58854f0e
        __asm _emit 0x74
        __asm _emit 0x05
        inc ebx
        cmp ebx, ecx
        ; Exact mapped bytes 7C C1: jl 0x58854ecf
        __asm _emit 0x7c
        __asm _emit 0xc1
        mov esi, dword ptr [ebp - 18h]
        xor ebx, ebx
        cmp byte ptr [esi + 38h], 0
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 0F 84 E9 00 00 00: je 0x58855009
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 34h], ebx
        ; Exact mapped bytes 0F 8E E0 00 00 00: jle 0x58855009
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov dword ptr [ebp - 18h], eax
        cmp byte ptr [eax + 14h], 0
        ; Exact mapped bytes 75 0A: jne 0x58854f3f
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, eax
        ; Exact mapped bytes E8 64 0F 00 00: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax + 0ch]
        mov ecx, dword ptr [esi + 30h]
        mov edx, dword ptr [esi + 34h]
        cmp dword ptr [eax + 8], 0fde9h
        ; Exact mapped bytes 75 5F: jne 0x58854fb0
        __asm _emit 0x75
        __asm _emit 0x5f
        mov dword ptr [ebp - 1ch], ebx
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 13 45 D8: movlpd qword ptr [ebp - 0x28], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xd8
        test edx, edx
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x5885501e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ecx]
        add ecx, 2
        push dword ptr [esi + 8]
        mov dword ptr [ebp - 20h], ecx
        lea ecx, [ebp - 28h]
        push ecx
        push eax
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 54 90 01 00: call 0x5886dfd2
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 10h
        cmp eax, -1
        ; Exact mapped bytes 74 25: je 0x58854fab
        __asm _emit 0x74
        __asm _emit 0x25
        push dword ptr [esi + 8]
        lea ecx, [esi + 448h]
        push edi
        push eax
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 F4 10 00 00: call 0x5885608e
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 20h]
        inc eax
        mov dword ptr [ebp - 1ch], eax
        cmp eax, dword ptr [esi + 34h]
        ; Exact mapped bytes 75 BB: jne 0x58854f64
        __asm _emit 0x75
        __asm _emit 0xbb
        ; Exact mapped bytes EB 73: jmp 0x5885501e
        __asm _emit 0xeb
        __asm _emit 0x73
        or dword ptr [edi], 0ffffffffh
        ; Exact mapped bytes EB 6E: jmp 0x5885501e
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov dword ptr [ebp - 24h], ebx
        test edx, edx
        ; Exact mapped bytes 74 67: je 0x5885501e
        __asm _emit 0x74
        __asm _emit 0x67
        push dword ptr [esi + 8]
        movzx eax, word ptr [ecx]
        add ecx, 2
        push eax
        push 6
        lea eax, [ebp - 18h]
        mov dword ptr [ebp - 1ch], ebx
        push eax
        lea eax, [ebp - 1ch]
        mov dword ptr [ebp - 20h], ecx
        push eax
        ; Exact mapped bytes E8 36 8B 01 00: call 0x5886db0c
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        test eax, eax
        ; Exact mapped bytes 75 CE: jne 0x58854fab
        __asm _emit 0x75
        __asm _emit 0xce
        cmp dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 74 C9: je 0x58854fab
        __asm _emit 0x74
        __asm _emit 0xc9
        push dword ptr [esi + 8]
        lea eax, [ebp - 18h]
        push edi
        push dword ptr [ebp - 1ch]
        lea ecx, [esi + 448h]
        push eax
        ; Exact mapped bytes E8 96 10 00 00: call 0x5885608e
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        inc eax
        mov dword ptr [ebp - 24h], eax
        cmp eax, dword ptr [esi + 34h]
        ; Exact mapped bytes 75 B0: jne 0x58854fb7
        __asm _emit 0x75
        __asm _emit 0xb0
        ; Exact mapped bytes EB 15: jmp 0x5885501e
        __asm _emit 0xeb
        __asm _emit 0x15
        push dword ptr [esi + 8]
        lea ecx, [esi + 448h]
        push edi
        push dword ptr [esi + 34h]
        push dword ptr [esi + 30h]
        ; Exact mapped bytes E8 70 10 00 00: call 0x5885608e
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 14h]
        test ecx, ecx
        ; Exact mapped bytes 78 5B: js 0x58855080
        __asm _emit 0x78
        __asm _emit 0x5b
        mov eax, dword ptr [esi + 1ch]
        shr eax, 2
        test al, 1
        ; Exact mapped bytes 74 51: je 0x58855080
        __asm _emit 0x74
        __asm _emit 0x51
        cmp dword ptr [ebp - 30h], 0
        lea edi, [esi + 14h]
        ; Exact mapped bytes 7E 48: jle 0x58855080
        __asm _emit 0x7e
        __asm _emit 0x48
        mov edx, dword ptr [esi + 448h]
        mov eax, dword ptr [edx + 8]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 75 12: jne 0x58855058
        __asm _emit 0x75
        __asm _emit 0x12
        cmp byte ptr [edx + 0ch], 0
        mov eax, edi
        ; Exact mapped bytes 74 03: je 0x58855051
        __asm _emit 0x74
        __asm _emit 0x03
        inc ecx
        ; Exact mapped bytes EB 03: jmp 0x58855054
        __asm _emit 0xeb
        __asm _emit 0x03
        or ecx, 0ffffffffh
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 1B: jmp 0x58855073
        __asm _emit 0xeb
        __asm _emit 0x1b
        lea eax, [ecx + 1]
        mov dword ptr [edi], eax
        inc dword ptr [edx + 8]
        mov eax, dword ptr [esi + 448h]
        mov eax, dword ptr [eax]
        mov byte ptr [eax], 20h
        mov eax, dword ptr [esi + 448h]
        inc dword ptr [eax]
        mov ecx, dword ptr [edi]
        cmp ecx, -1
        ; Exact mapped bytes 74 06: je 0x58855080
        __asm _emit 0x74
        __asm _emit 0x06
        inc ebx
        cmp ebx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 7C B8: jl 0x58855038
        __asm _emit 0x7c
        __asm _emit 0xb8
        mov al, 1
        mov ecx, dword ptr [ebp - 0ch]
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
        pop ebx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 B6 BF FD FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        leave
        ret
    }
}
