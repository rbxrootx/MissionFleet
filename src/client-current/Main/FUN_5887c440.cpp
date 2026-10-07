// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 1203 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887C440 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_5887c440_segment_00() {
    __asm {
        sub esp, 130h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 12ch], eax
        mov eax, dword ptr [esp + 134h]
        ; Exact mapped bytes 66 83 78 08 02: cmp word ptr [eax + 8], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x02
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes 0F 85 7E 01 00 00: jne 0x5887c5ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 39 E4 FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 264h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        lea ebx, [esi + 1c8h]
        mov ebp, 0bh
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x5887c4c7
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, 5898c922h
        mov edi, 80h
        lea ecx, [edi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887c4bf
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887c4bf
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887c4a4
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887c4c3
        __asm _emit 0xeb
        __asm _emit 0x04
        test edi, edi
        ; Exact mapped bytes 75 01: jne 0x5887c4c4
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        add ebx, 4
        sub ebp, 1
        ; Exact mapped bytes 75 C2: jne 0x5887c491
        __asm _emit 0x75
        __asm _emit 0xc2
        push 5899f274h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 1f0h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 F7 57 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x57
        __asm _emit 0xeb
        __asm _emit 0xff
        lea ecx, [esi + 1f4h]
        lea edx, [ebp + 3]
        mov eax, dword ptr [ecx]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x5887c4f2
        __asm _emit 0x75
        __asm _emit 0xed
        lea ecx, [esi + 20ch]
        mov edx, 9
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 F1: jne 0x5887c510
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, dword ptr [esi + 0c0h]
        sub ecx, dword ptr [esi + 0bch]
        mov eax, 78787879h
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        xor edi, edi
        add eax, edx
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x5887c5ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        ; Exact mapped bytes EB 08: jmp 0x5887c550
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887C550 .. +0x3AB bytes.
extern "C" __declspec(naked) void FUN_5887c440_segment_01() {
    __asm {
        mov ecx, dword ptr [esi + 0c0h]
        sub ecx, dword ptr [esi + 0bch]
        mov eax, 78787879h
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        cmp edi, ecx
        ; Exact mapped bytes 72 05: jb 0x5887c576
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 FC 06 10 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 144h]
        mov edx, dword ptr [esi + 0bch]
        ; Exact mapped bytes 66 8B 45 04: mov ax, word ptr [ebp + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 66 3B 44 1A 04: cmp ax, word ptr [edx + ebx + 4]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x44
        __asm _emit 0x1a
        __asm _emit 0x04
        ; Exact mapped bytes 75 33: jne 0x5887c5c1
        __asm _emit 0x75
        __asm _emit 0x33
        mov ecx, dword ptr [esi + 0c0h]
        sub ecx, edx
        mov eax, 78787879h
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        cmp edi, ecx
        ; Exact mapped bytes 72 05: jb 0x5887c5b0
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 C2 06 10 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0bch]
        ; Exact mapped bytes 66 8B 45 06: mov ax, word ptr [ebp + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x06
        ; Exact mapped bytes 66 3B 44 13 06: cmp ax, word ptr [ebx + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x06
        ; Exact mapped bytes 74 46: je 0x5887c607
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 0c0h]
        sub ecx, dword ptr [esi + 0bch]
        mov eax, 78787879h
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 1fh
        inc edi
        add ecx, edx
        add ebx, 22h
        cmp edi, ecx
        ; Exact mapped bytes 0F 82 66 FF FF FF: jb 0x5887c550
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [esp + 13ch]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 DC 05 10 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 130h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [esi + 1c8h]
        mov edx, 0bh
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 F1: jne 0x5887c612
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, dword ptr [esi + 0c0h]
        sub ecx, dword ptr [esi + 0bch]
        mov eax, 78787879h
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp edi, eax
        ; Exact mapped bytes 72 05: jb 0x5887c647
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 2B 06 10 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0bch]
        mov ecx, dword ptr [esi + 0c0h]
        sub ecx, dword ptr [esi + 0bch]
        mov ebx, edi
        shl ebx, 4
        add ebx, edi
        add ebx, ebx
        add eax, ebx
        mov dword ptr [esp + 34h], eax
        mov eax, 78787879h
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        cmp edi, ecx
        ; Exact mapped bytes 72 05: jb 0x5887c682
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 F0 05 10 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0bch]
        mov ecx, dword ptr [esi + 0c0h]
        sub ecx, dword ptr [esi + 0bch]
        add eax, ebx
        mov dword ptr [esp + 38h], eax
        mov eax, 78787879h
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp edi, eax
        ; Exact mapped bytes 72 05: jb 0x5887c6b4
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 BE 05 10 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0bch]
        mov ecx, dword ptr [esi + 0c0h]
        sub ecx, dword ptr [esi + 0bch]
        add eax, ebx
        mov dword ptr [esp + 30h], eax
        mov eax, 78787879h
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        cmp edi, ecx
        ; Exact mapped bytes 72 05: jb 0x5887c6e6
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 8C 05 10 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        sub ecx, dword ptr [esi + 0bch]
        mov ebp, dword ptr [esi + 0bch]
        mov eax, 78787879h
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        add ebp, ebx
        cmp edi, eax
        ; Exact mapped bytes 72 05: jb 0x5887c714
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 5E 05 10 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 34h]
        movzx edx, word ptr [ecx + 14h]
        mov eax, dword ptr [esp + 38h]
        movzx ecx, word ptr [eax + 12h]
        push edx
        mov edx, dword ptr [esp + 34h]
        movzx eax, word ptr [edx + 0ah]
        mov edx, dword ptr [esi + 0bch]
        push ecx
        movzx ecx, word ptr [ebp + 10h]
        push eax
        movzx eax, word ptr [ebx + edx + 0ch]
        push ecx
        push eax
        lea ecx, [esp + 50h]
        push 5899f25ch
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + 234h]
        mov eax, dword ptr [eax + 6ch]
        add esp, 1ch
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x5887c793
        __asm _emit 0x74
        __asm _emit 0x33
        lea edx, [esp + 3ch]
        mov ebp, 80h
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887c78b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887c78b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub ebp, 1
        ; Exact mapped bytes 75 E7: jne 0x5887c770
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887c78f
        __asm _emit 0xeb
        __asm _emit 0x04
        test ebp, ebp
        ; Exact mapped bytes 75 01: jne 0x5887c790
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov ecx, dword ptr [esi + 0c0h]
        sub ecx, dword ptr [esi + 0bch]
        mov eax, 78787879h
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp edi, eax
        ; Exact mapped bytes 72 05: jb 0x5887c7b9
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 B9 04 10 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        mov edi, dword ptr [ecx + ebx + 0ah]
        mov edx, dword ptr [ecx + ebx + 0eh]
        mov ebp, dword ptr [ecx + ebx + 12h]
        mov eax, dword ptr [ecx + ebx + 16h]
        lea ebx, [ecx + ebx + 0ah]
        lea ecx, [esp + 20h]
        push ecx
        mov dword ptr [esp + 14h], edi
        mov dword ptr [esp + 18h], edx
        mov dword ptr [esp + 1ch], ebp
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes E8 E3 88 F1 FF: call 0x587950d0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x88
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 44 24 24: mov ax, word ptr [esp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        add esp, 4
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 82 F3 00 00 00: jb 0x5887c8f1
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 A5 00 00 00: jne 0x5887c8a9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 44 24 22: mov ax, word ptr [esp + 0x22]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x22
        ; Exact mapped bytes 66 8B 4C 24 12: mov cx, word ptr [esp + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x12
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 82 DA 00 00 00: jb 0x5887c8f1
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x5887c8a9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 44 24 26: mov ax, word ptr [esp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x26
        ; Exact mapped bytes 66 8B 4C 24 16: mov cx, word ptr [esp + 0x16]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x16
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 82 C1 00 00 00: jb 0x5887c8f1
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 54 24 28: mov dx, word ptr [esp + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 75 09: jne 0x5887c840
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 66 3B D5: cmp dx, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 82 B1 00 00 00: jb 0x5887c8f1
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 7C 24 1A: mov di, word ptr [esp + 0x1a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1a
        ; Exact mapped bytes 66 8B 5C 24 2A: mov bx, word ptr [esp + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x2a
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 5A: jne 0x5887c8a9
        __asm _emit 0x75
        __asm _emit 0x5a
        ; Exact mapped bytes 66 3B D5: cmp dx, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd5
        ; Exact mapped bytes 75 09: jne 0x5887c85d
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 66 3B DF: cmp bx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xdf
        ; Exact mapped bytes 0F 82 94 00 00 00: jb 0x5887c8f1
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 47: jne 0x5887c8a9
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes 66 3B D5: cmp dx, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd5
        ; Exact mapped bytes 75 1B: jne 0x5887c882
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 66 3B DF: cmp bx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xdf
        ; Exact mapped bytes 75 16: jne 0x5887c882
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 66 8B 7C 24 1C: mov di, word ptr [esp + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 66 39 7C 24 2C: cmp word ptr [esp + 0x2c], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 72 79: jb 0x5887c8f1
        __asm _emit 0x72
        __asm _emit 0x79
        ; Exact mapped bytes 66 8B 7C 24 1A: mov di, word ptr [esp + 0x1a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1a
        ; Exact mapped bytes 66 8B 5C 24 2A: mov bx, word ptr [esp + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x2a
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 22: jne 0x5887c8a9
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes 66 3B D5: cmp dx, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd5
        ; Exact mapped bytes 75 1D: jne 0x5887c8a9
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 66 3B DF: cmp bx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xdf
        ; Exact mapped bytes 75 18: jne 0x5887c8a9
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 66 8B 54 24 1C: mov dx, word ptr [esp + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 66 39 54 24 2C: cmp word ptr [esp + 0x2c], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 75 0C: jne 0x5887c8a9
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 44 24 2E: mov ax, word ptr [esp + 0x2e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2e
        ; Exact mapped bytes 66 3B 44 24 1E: cmp ax, word ptr [esp + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1e
        ; Exact mapped bytes 72 48: jb 0x5887c8f1
        __asm _emit 0x72
        __asm _emit 0x48
        lea ecx, [esi + 20ch]
        mov edx, 9
        mov eax, dword ptr [ecx]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x5887c8b4
        __asm _emit 0x75
        __asm _emit 0xed
        mov ecx, 0bh
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1f4h]
        mov edx, edi
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        sub ecx, 1
        ; Exact mapped bytes 75 EF: jne 0x5887c8d0
        __asm _emit 0x75
        __asm _emit 0xef
        push ecx
        push ecx
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 C4 DF FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F9 FC FF FF: jmp 0x5887c5ea
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes E9 F1 FC FF FF: jmp 0x5887c5ec
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
