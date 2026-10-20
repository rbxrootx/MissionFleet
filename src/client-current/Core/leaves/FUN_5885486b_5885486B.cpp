// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885486B .. +0x3F2 bytes.
extern "C" __declspec(naked) void FUN_5885486b_5885486B() {
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
        ; Exact mapped bytes 0F BE 46 2D: movsx eax, byte ptr [esi + 0x2d]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x46
        __asm _emit 0x2d
        xor ebx, ebx
        push 2
        pop ecx
        cmp eax, 64h
        ; Exact mapped bytes 7F 6C: jg 0x58854914
        __asm _emit 0x7f
        __asm _emit 0x6c
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x5885493c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 53h
        ; Exact mapped bytes 7F 2D: jg 0x588548e0
        __asm _emit 0x7f
        __asm _emit 0x2d
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x58854969
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 41h
        ; Exact mapped bytes 74 16: je 0x588548d4
        __asm _emit 0x74
        __asm _emit 0x16
        sub eax, ecx
        ; Exact mapped bytes 74 34: je 0x588548f6
        __asm _emit 0x74
        __asm _emit 0x34
        sub eax, ecx
        ; Exact mapped bytes 74 0E: je 0x588548d4
        __asm _emit 0x74
        __asm _emit 0x0e
        sub eax, 1
        ; Exact mapped bytes 74 09: je 0x588548d4
        __asm _emit 0x74
        __asm _emit 0x09
        sub eax, 1
        ; Exact mapped bytes 0F 85 A9 00 00 00: jne 0x5885497d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 17 0E 00 00: call 0x588556f2
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x58854979
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 58h
        ; Exact mapped bytes 74 24: je 0x58854909
        __asm _emit 0x74
        __asm _emit 0x24
        sub eax, ecx
        ; Exact mapped bytes 74 17: je 0x58854900
        __asm _emit 0x74
        __asm _emit 0x17
        sub eax, 7
        ; Exact mapped bytes 74 E6: je 0x588548d4
        __asm _emit 0x74
        __asm _emit 0xe6
        sub eax, ecx
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x5885497d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 78 11 00 00: call 0x58855a76
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 79: jmp 0x58854979
        __asm _emit 0xeb
        __asm _emit 0x79
        mov ecx, esi
        ; Exact mapped bytes E8 04 0D 00 00: call 0x5885560b
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 70: jmp 0x58854979
        __asm _emit 0xeb
        __asm _emit 0x70
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 F2 E2 FF FF: call 0x58852c04
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 65: jmp 0x58854979
        __asm _emit 0xeb
        __asm _emit 0x65
        cmp eax, 6fh
        ; Exact mapped bytes 7F 3A: jg 0x58854953
        __asm _emit 0x7f
        __asm _emit 0x3a
        ; Exact mapped bytes 74 2F: je 0x5885494a
        __asm _emit 0x74
        __asm _emit 0x2f
        sub eax, 65h
        ; Exact mapped bytes 74 B4: je 0x588548d4
        __asm _emit 0x74
        __asm _emit 0xb4
        sub eax, 1
        ; Exact mapped bytes 74 AF: je 0x588548d4
        __asm _emit 0x74
        __asm _emit 0xaf
        sub eax, 1
        ; Exact mapped bytes 74 AA: je 0x588548d4
        __asm _emit 0x74
        __asm _emit 0xaa
        sub eax, ecx
        ; Exact mapped bytes 74 0E: je 0x5885493c
        __asm _emit 0x74
        __asm _emit 0x0e
        sub eax, 5
        ; Exact mapped bytes 75 4A: jne 0x5885497d
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, esi
        ; Exact mapped bytes E8 6D 12 00 00: call 0x58855ba7
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3D: jmp 0x58854979
        __asm _emit 0xeb
        __asm _emit 0x3d
        or dword ptr [esi + 1ch], 10h
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 9D DF FF FF: call 0x588528e5
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 2F: jmp 0x58854979
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, esi
        ; Exact mapped bytes E8 DB 12 00 00: call 0x58855c2c
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 26: jmp 0x58854979
        __asm _emit 0xeb
        __asm _emit 0x26
        sub eax, 70h
        ; Exact mapped bytes 74 1A: je 0x58854972
        __asm _emit 0x74
        __asm _emit 0x1a
        sub eax, 3
        ; Exact mapped bytes 74 0C: je 0x58854969
        __asm _emit 0x74
        __asm _emit 0x0c
        sub eax, ecx
        ; Exact mapped bytes 74 DF: je 0x58854940
        __asm _emit 0x74
        __asm _emit 0xdf
        sub eax, 3
        ; Exact mapped bytes 75 17: jne 0x5885497d
        __asm _emit 0x75
        __asm _emit 0x17
        push ebx
        ; Exact mapped bytes EB A2: jmp 0x5885490b
        __asm _emit 0xeb
        __asm _emit 0xa2
        mov ecx, esi
        ; Exact mapped bytes E8 22 13 00 00: call 0x58855c92
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x58854979
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 ED 12 00 00: call 0x58855c66
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 75 07: jne 0x58854984
        __asm _emit 0x75
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 BF 02 00 00: jmp 0x58854c43
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi + 2ch], bl
        ; Exact mapped bytes 0F 85 B4 02 00 00: jne 0x58854c41
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 1ch]
        xor ecx, ecx
        mov eax, edx
        ; Exact mapped bytes 66 89 5D DC: mov word ptr [ebp - 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xdc
        shr eax, 4
        inc ecx
        mov byte ptr [ebp - 22h], bl
        mov edi, ebx
        and al, cl
        ; Exact mapped bytes 74 2A: je 0x588549cf
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, edx
        shr eax, 6
        and al, cl
        ; Exact mapped bytes 74 06: je 0x588549b4
        __asm _emit 0x74
        __asm _emit 0x06
        mov byte ptr [ebp - 24h], 2dh
        ; Exact mapped bytes EB 19: jmp 0x588549cd
        __asm _emit 0xeb
        __asm _emit 0x19
        mov al, byte ptr [esi + 1ch]
        and al, cl
        ; Exact mapped bytes 74 06: je 0x588549c1
        __asm _emit 0x74
        __asm _emit 0x06
        mov byte ptr [ebp - 24h], 2bh
        ; Exact mapped bytes EB 0C: jmp 0x588549cd
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, edx
        shr eax, 1
        and al, cl
        ; Exact mapped bytes 74 06: je 0x588549cf
        __asm _emit 0x74
        __asm _emit 0x06
        mov byte ptr [ebp - 24h], 20h
        mov edi, ecx
        mov cl, byte ptr [esi + 2dh]
        cmp cl, 78h
        ; Exact mapped bytes 74 05: je 0x588549dc
        __asm _emit 0x74
        __asm _emit 0x05
        cmp cl, 58h
        ; Exact mapped bytes 75 0B: jne 0x588549e7
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, edx
        shr eax, 5
        mov ah, 1
        and al, 1
        ; Exact mapped bytes 75 02: jne 0x588549e9
        __asm _emit 0x75
        __asm _emit 0x02
        mov ah, bl
        cmp cl, 61h
        ; Exact mapped bytes 74 07: je 0x588549f5
        __asm _emit 0x74
        __asm _emit 0x07
        mov al, bl
        cmp cl, 41h
        ; Exact mapped bytes 75 02: jne 0x588549f7
        __asm _emit 0x75
        __asm _emit 0x02
        mov al, 1
        test ah, ah
        ; Exact mapped bytes 75 04: jne 0x588549ff
        __asm _emit 0x75
        __asm _emit 0x04
        test al, al
        ; Exact mapped bytes 74 1D: je 0x58854a1c
        __asm _emit 0x74
        __asm _emit 0x1d
        mov byte ptr [ebp + edi - 24h], 30h
        cmp cl, 58h
        ; Exact mapped bytes 74 09: je 0x58854a12
        __asm _emit 0x74
        __asm _emit 0x09
        cmp cl, 41h
        ; Exact mapped bytes 74 04: je 0x58854a12
        __asm _emit 0x74
        __asm _emit 0x04
        mov al, 78h
        ; Exact mapped bytes EB 03: jmp 0x58854a15
        __asm _emit 0xeb
        __asm _emit 0x03
        push 58h
        pop eax
        mov byte ptr [ebp + edi - 23h], al
        add edi, 2
        mov eax, dword ptr [esi + 20h]
        sub eax, dword ptr [esi + 34h]
        sub eax, edi
        mov dword ptr [ebp - 2ch], eax
        test dl, 0ch
        ; Exact mapped bytes 75 4A: jne 0x58854a76
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 28h], ebx
        test eax, eax
        ; Exact mapped bytes 7E 3D: jle 0x58854a76
        __asm _emit 0x7e
        __asm _emit 0x3d
        lea eax, [esi + 448h]
        push ecx
        push 20h
        mov ecx, eax
        ; Exact mapped bytes E8 DF 15 00 00: call 0x58856028
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 25: je 0x58854a72
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [esi + 14h]
        lea eax, [ecx + 1]
        mov dword ptr [esi + 14h], eax
        cmp ecx, -2
        ; Exact mapped bytes 74 1B: je 0x58854a76
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 18h]
        inc eax
        cmp eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 28h], eax
        lea eax, [esi + 448h]
        ; Exact mapped bytes 7C CF: jl 0x58854a3f
        __asm _emit 0x7c
        __asm _emit 0xcf
        ; Exact mapped bytes EB 04: jmp 0x58854a76
        __asm _emit 0xeb
        __asm _emit 0x04
        or dword ptr [esi + 14h], 0ffffffffh
        push dword ptr [esi + 8]
        lea eax, [esi + 14h]
        push eax
        push edi
        lea eax, [ebp - 24h]
        lea ecx, [esi + 448h]
        push eax
        ; Exact mapped bytes E8 D5 15 00 00: call 0x58856062
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1ch]
        lea edi, [esi + 14h]
        mov eax, ecx
        shr eax, 3
        test al, 1
        ; Exact mapped bytes 74 48: je 0x58854ae4
        __asm _emit 0x74
        __asm _emit 0x48
        shr ecx, 2
        test cl, 1
        ; Exact mapped bytes 75 40: jne 0x58854ae4
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [esi + 8]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 28h], ebx
        cmp dword ptr [ebp - 2ch], ebx
        ; Exact mapped bytes 7E 32: jle 0x58854ae4
        __asm _emit 0x7e
        __asm _emit 0x32
        push eax
        push 30h
        lea ecx, [esi + 448h]
        ; Exact mapped bytes E8 68 15 00 00: call 0x58856028
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 1D: je 0x58854ae1
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [edi]
        lea eax, [ecx + 1]
        mov dword ptr [edi], eax
        cmp ecx, -2
        ; Exact mapped bytes 74 14: je 0x58854ae4
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 28h]
        inc eax
        cmp eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 7C D3: jl 0x58854ab2
        __asm _emit 0x7c
        __asm _emit 0xd3
        ; Exact mapped bytes EB 03: jmp 0x58854ae4
        __asm _emit 0xeb
        __asm _emit 0x03
        or dword ptr [edi], 0ffffffffh
        cmp byte ptr [esi + 38h], 0
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 0F 84 E9 00 00 00: je 0x58854bda
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 34h], ebx
        ; Exact mapped bytes 0F 8E E0 00 00 00: jle 0x58854bda
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov dword ptr [ebp - 18h], eax
        cmp byte ptr [eax + 14h], 0
        ; Exact mapped bytes 75 0A: jne 0x58854b10
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, eax
        ; Exact mapped bytes E8 93 13 00 00: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax + 0ch]
        mov ecx, dword ptr [esi + 30h]
        mov edx, dword ptr [esi + 34h]
        cmp dword ptr [eax + 8], 0fde9h
        ; Exact mapped bytes 75 5F: jne 0x58854b81
        __asm _emit 0x75
        __asm _emit 0x5f
        mov dword ptr [ebp - 24h], ebx
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 13 45 E0: movlpd qword ptr [ebp - 0x20], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xe0
        test edx, edx
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x58854bef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ecx]
        add ecx, 2
        push dword ptr [esi + 8]
        mov dword ptr [ebp - 28h], ecx
        lea ecx, [ebp - 20h]
        push ecx
        push eax
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 83 94 01 00: call 0x5886dfd2
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 10h
        cmp eax, -1
        ; Exact mapped bytes 74 25: je 0x58854b7c
        __asm _emit 0x74
        __asm _emit 0x25
        push dword ptr [esi + 8]
        lea ecx, [esi + 448h]
        push edi
        push eax
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 F7 14 00 00: call 0x58856062
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 28h]
        inc eax
        mov dword ptr [ebp - 24h], eax
        cmp eax, dword ptr [esi + 34h]
        ; Exact mapped bytes 75 BB: jne 0x58854b35
        __asm _emit 0x75
        __asm _emit 0xbb
        ; Exact mapped bytes EB 73: jmp 0x58854bef
        __asm _emit 0xeb
        __asm _emit 0x73
        or dword ptr [edi], 0ffffffffh
        ; Exact mapped bytes EB 6E: jmp 0x58854bef
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov dword ptr [ebp - 18h], ebx
        test edx, edx
        ; Exact mapped bytes 74 67: je 0x58854bef
        __asm _emit 0x74
        __asm _emit 0x67
        push dword ptr [esi + 8]
        movzx eax, word ptr [ecx]
        add ecx, 2
        push eax
        push 6
        lea eax, [ebp - 20h]
        mov dword ptr [ebp - 24h], ebx
        push eax
        lea eax, [ebp - 24h]
        mov dword ptr [ebp - 28h], ecx
        push eax
        ; Exact mapped bytes E8 65 8F 01 00: call 0x5886db0c
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        test eax, eax
        ; Exact mapped bytes 75 CE: jne 0x58854b7c
        __asm _emit 0x75
        __asm _emit 0xce
        cmp dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 74 C9: je 0x58854b7c
        __asm _emit 0x74
        __asm _emit 0xc9
        push dword ptr [esi + 8]
        lea eax, [ebp - 20h]
        push edi
        push dword ptr [ebp - 24h]
        lea ecx, [esi + 448h]
        push eax
        ; Exact mapped bytes E8 99 14 00 00: call 0x58856062
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 28h]
        inc eax
        mov dword ptr [ebp - 18h], eax
        cmp eax, dword ptr [esi + 34h]
        ; Exact mapped bytes 75 B0: jne 0x58854b88
        __asm _emit 0x75
        __asm _emit 0xb0
        ; Exact mapped bytes EB 15: jmp 0x58854bef
        __asm _emit 0xeb
        __asm _emit 0x15
        push dword ptr [esi + 8]
        lea ecx, [esi + 448h]
        push edi
        push dword ptr [esi + 34h]
        push dword ptr [esi + 30h]
        ; Exact mapped bytes E8 73 14 00 00: call 0x58856062
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 14h], ebx
        ; Exact mapped bytes 7C 4D: jl 0x58854c41
        __asm _emit 0x7c
        __asm _emit 0x4d
        mov eax, dword ptr [esi + 1ch]
        shr eax, 2
        test al, 1
        ; Exact mapped bytes 74 43: je 0x58854c41
        __asm _emit 0x74
        __asm _emit 0x43
        mov edi, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [ebp - 18h], ecx
        test edi, edi
        ; Exact mapped bytes 7E 36: jle 0x58854c41
        __asm _emit 0x7e
        __asm _emit 0x36
        lea eax, [esi + 448h]
        push ecx
        push 20h
        mov ecx, eax
        ; Exact mapped bytes E8 0D 14 00 00: call 0x58856028
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 1E: je 0x58854c3d
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [esi + 14h]
        lea eax, [ecx + 1]
        mov dword ptr [esi + 14h], eax
        cmp ecx, -2
        ; Exact mapped bytes 74 14: je 0x58854c41
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 18h]
        lea eax, [esi + 448h]
        inc ebx
        cmp ebx, edi
        ; Exact mapped bytes 7C D6: jl 0x58854c11
        __asm _emit 0x7c
        __asm _emit 0xd6
        ; Exact mapped bytes EB 04: jmp 0x58854c41
        __asm _emit 0xeb
        __asm _emit 0x04
        or dword ptr [esi + 14h], 0ffffffffh
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
        ; Exact mapped bytes E8 F5 C3 FD FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        leave
        ret
    }
}
