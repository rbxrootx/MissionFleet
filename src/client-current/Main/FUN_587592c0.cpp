// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 3019 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587592C0 .. +0xBCB bytes.
extern "C" __declspec(naked) void FUN_587592c0_segment_00() {
    __asm {
        sub esp, 40h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 3ch], eax
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 8]
        xor ecx, ecx
        xor eax, eax
        ; Exact mapped bytes 66 89 4C 24 09: mov word ptr [esp + 9], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x09
        mov byte ptr [esp + 0bh], cl
        mov dword ptr [esp + 0ch], ebx
        test ebx, ebx
        ; Exact mapped bytes 0F 84 8C 0B 00 00: je 0x58759e7a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 0cc0h]
        movzx ecx, word ptr [edx + 4]
        mov eax, ecx
        and eax, 1fh
        push ebp
        push edi
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 0F 85 B9 01 00 00: jne 0x587594c2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebx
        mov eax, dword ptr [eax + 0cc0h]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        mov byte ptr [esp + 10h], cl
        mov cl, byte ptr [eax + 10h]
        mov byte ptr [esp + 11h], cl
        xor dl, dl
        mov dword ptr [esp + 1ch], 0bh
        mov dword ptr [esp + 18h], 0efch
        mov dword ptr [esp + 20h], 4
        mov edi, edi
        mov eax, dword ptr [esp + 18h]
        cmp dword ptr [ebx + eax - 34ch], 0
        ; Exact mapped bytes 0F 84 18 01 00 00: je 0x5875946a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebp, [ebx + 5bch]
        mov dword ptr [esp + 14h], 9
        lea esi, [ebp - 400h]
        mov ecx, 8
        lea edi, [esp + 2ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        test ebp, ebp
        ; Exact mapped bytes 74 3D: je 0x587593b2
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [esp + 2ch]
        cmp al, 5
        ; Exact mapped bytes 72 35: jb 0x587593b2
        __asm _emit 0x72
        __asm _emit 0x35
        movzx ecx, al
        shl ecx, 5
        movzx ecx, byte ptr [ecx + ebx + 51eh]
        cmp ecx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 75 21: jne 0x587593b2
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 0d78h]
        mov esi, dword ptr [esp + 18h]
        cmp dword ptr [esi + ecx], 1
        ; Exact mapped bytes 75 0B: jne 0x587593b2
        __asm _emit 0x75
        __asm _emit 0x0b
        shr eax, 8
        xor al, 0aah
        cmp al, dl
        ; Exact mapped bytes 76 02: jbe 0x587593b2
        __asm _emit 0x76
        __asm _emit 0x02
        mov dl, al
        lea eax, [ebp + 20h]
        lea esi, [ebp - 3e0h]
        mov ecx, 8
        lea edi, [esp + 2ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x58759407
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [esp + 2ch]
        cmp al, 5
        ; Exact mapped bytes 72 35: jb 0x58759407
        __asm _emit 0x72
        __asm _emit 0x35
        movzx ecx, al
        shl ecx, 5
        movzx ecx, byte ptr [ecx + ebx + 51eh]
        cmp ecx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 75 21: jne 0x58759407
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 0d78h]
        mov esi, dword ptr [esp + 18h]
        cmp dword ptr [esi + ecx], 1
        ; Exact mapped bytes 75 0B: jne 0x58759407
        __asm _emit 0x75
        __asm _emit 0x0b
        shr eax, 8
        xor al, 0aah
        cmp al, dl
        ; Exact mapped bytes 76 02: jbe 0x58759407
        __asm _emit 0x76
        __asm _emit 0x02
        mov dl, al
        lea eax, [ebp + 40h]
        lea esi, [ebp - 3c0h]
        mov ecx, 8
        lea edi, [esp + 2ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x5875945c
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [esp + 2ch]
        cmp al, 5
        ; Exact mapped bytes 72 35: jb 0x5875945c
        __asm _emit 0x72
        __asm _emit 0x35
        movzx ecx, al
        shl ecx, 5
        movzx ecx, byte ptr [ecx + ebx + 51eh]
        cmp ecx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 75 21: jne 0x5875945c
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 0d78h]
        mov esi, dword ptr [esp + 18h]
        cmp dword ptr [esi + ecx], 1
        ; Exact mapped bytes 75 0B: jne 0x5875945c
        __asm _emit 0x75
        __asm _emit 0x0b
        shr eax, 8
        xor al, 0aah
        cmp al, dl
        ; Exact mapped bytes 76 02: jbe 0x5875945c
        __asm _emit 0x76
        __asm _emit 0x02
        mov dl, al
        add ebp, 60h
        sub dword ptr [esp + 14h], 1
        ; Exact mapped bytes 0F 85 F6 FE FF FF: jne 0x58759360
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add dword ptr [esp + 18h], 4
        mov eax, 1
        add dword ptr [esp + 1ch], eax
        sub dword ptr [esp + 20h], eax
        ; Exact mapped bytes 0F 85 BE FE FF FF: jne 0x58759340
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 0cc0h]
        ; Exact mapped bytes 66 8B 40 08: mov ax, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x08
        movzx esi, byte ptr [esp + 11h]
        movzx ecx, byte ptr [esp + 10h]
        ; Exact mapped bytes 66 C1 E8 06: shr ax, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        movzx edx, dl
        movzx eax, al
        shl edx, 8
        pop edi
        shl esi, 10h
        or eax, edx
        pop ebp
        or eax, esi
        shl ecx, 18h
        pop esi
        or eax, ecx
        pop ebx
        mov ecx, dword ptr [esp + 3ch]
        xor ecx, esp
        ; Exact mapped bytes E8 1C 37 22 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x37
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 40h
        ret
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 0F 85 67 03 00 00: jne 0x58759833
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x67
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        mov edx, 0b44h
        mov byte ptr [esp + 10h], al
        mov byte ptr [esp + 13h], 0
        mov dword ptr [esp + 18h], 0
        xor eax, eax
        mov dword ptr [esp + 1ch], edx
        mov ecx, dword ptr [edx + ebx - 4]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x5875958a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F B6 09: movzx cx, byte ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x09
        movzx ecx, cx
        ; Exact mapped bytes 66 83 F9 06: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 7D 00 00 00: jne 0x5875958a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [esi + eax + 18ch]
        movzx ecx, byte ptr [esi + eax + 1ach]
        lea edi, [ecx + edx*2 + 1]
        mov ebp, ebx
        mov edx, dword ptr [ebp + 0cc0h]
        mov edx, dword ptr [edx + 268h]
        mov ecx, 1fh
        sub ecx, eax
        shr edx, cl
        test dl, 1
        ; Exact mapped bytes 74 45: je 0x58759582
        __asm _emit 0x74
        __asm _emit 0x45
        shl edi, 5
        lea edx, [edi + ebx]
        lea ecx, [edx + 51ch]
        test ecx, ecx
        ; Exact mapped bytes 74 35: je 0x58759582
        __asm _emit 0x74
        __asm _emit 0x35
        cmp byte ptr [edx + 51eh], 1
        ; Exact mapped bytes 75 2C: jne 0x58759582
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [esp + 1ch]
        cmp dword ptr [ecx + ebp - 4], 0
        ; Exact mapped bytes 74 21: je 0x58759582
        __asm _emit 0x74
        __asm _emit 0x21
        mov edi, dword ptr [ebx + 100h]
        mov ecx, eax
        shl edi, cl
        test edi, edi
        ; Exact mapped bytes 79 13: jns 0x58759582
        __asm _emit 0x79
        __asm _emit 0x13
        mov cl, byte ptr [edx + 11dh]
        xor cl, 0aah
        cmp cl, byte ptr [esp + 13h]
        ; Exact mapped bytes 76 04: jbe 0x58759582
        __asm _emit 0x76
        __asm _emit 0x04
        mov byte ptr [esp + 13h], cl
        inc dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1ch]
        mov ecx, dword ptr [ebx + edx]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x58759623
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F B6 09: movzx cx, byte ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x09
        movzx ecx, cx
        ; Exact mapped bytes 66 83 F9 06: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 7D 00 00 00: jne 0x58759623
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [esi + eax + 18dh]
        movzx ecx, byte ptr [esi + eax + 1adh]
        lea edi, [ecx + edx*2 + 1]
        mov ebp, ebx
        mov edx, dword ptr [ebp + 0cc0h]
        mov edx, dword ptr [edx + 268h]
        mov ecx, 1eh
        sub ecx, eax
        shr edx, cl
        test dl, 1
        ; Exact mapped bytes 74 45: je 0x5875961b
        __asm _emit 0x74
        __asm _emit 0x45
        shl edi, 5
        lea edx, [edi + ebx]
        lea ecx, [edx + 51ch]
        test ecx, ecx
        ; Exact mapped bytes 74 35: je 0x5875961b
        __asm _emit 0x74
        __asm _emit 0x35
        cmp byte ptr [edx + 51eh], 1
        ; Exact mapped bytes 75 2C: jne 0x5875961b
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [esp + 1ch]
        cmp dword ptr [ecx + ebp], 0
        ; Exact mapped bytes 74 22: je 0x5875961b
        __asm _emit 0x74
        __asm _emit 0x22
        mov edi, dword ptr [ebx + 100h]
        lea ecx, [eax + 1]
        shl edi, cl
        test edi, edi
        ; Exact mapped bytes 79 13: jns 0x5875961b
        __asm _emit 0x79
        __asm _emit 0x13
        mov cl, byte ptr [edx + 11dh]
        xor cl, 0aah
        cmp cl, byte ptr [esp + 13h]
        ; Exact mapped bytes 76 04: jbe 0x5875961b
        __asm _emit 0x76
        __asm _emit 0x04
        mov byte ptr [esp + 13h], cl
        inc dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1ch]
        mov ecx, dword ptr [edx + ebx + 4]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x587596be
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F B6 09: movzx cx, byte ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x09
        movzx ecx, cx
        ; Exact mapped bytes 66 83 F9 06: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 7E 00 00 00: jne 0x587596be
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [esi + eax + 18eh]
        movzx ecx, byte ptr [esi + eax + 1aeh]
        lea edi, [ecx + edx*2 + 1]
        mov ebp, ebx
        mov edx, dword ptr [ebp + 0cc0h]
        mov edx, dword ptr [edx + 268h]
        mov ecx, 1dh
        sub ecx, eax
        shr edx, cl
        test dl, 1
        ; Exact mapped bytes 74 46: je 0x587596b6
        __asm _emit 0x74
        __asm _emit 0x46
        shl edi, 5
        lea edx, [edi + ebx]
        lea ecx, [edx + 51ch]
        test ecx, ecx
        ; Exact mapped bytes 74 36: je 0x587596b6
        __asm _emit 0x74
        __asm _emit 0x36
        cmp byte ptr [edx + 51eh], 1
        ; Exact mapped bytes 75 2D: jne 0x587596b6
        __asm _emit 0x75
        __asm _emit 0x2d
        mov ecx, dword ptr [esp + 1ch]
        cmp dword ptr [ecx + ebp + 4], 0
        ; Exact mapped bytes 74 22: je 0x587596b6
        __asm _emit 0x74
        __asm _emit 0x22
        mov edi, dword ptr [ebx + 100h]
        lea ecx, [eax + 2]
        shl edi, cl
        test edi, edi
        ; Exact mapped bytes 79 13: jns 0x587596b6
        __asm _emit 0x79
        __asm _emit 0x13
        mov cl, byte ptr [edx + 11dh]
        xor cl, 0aah
        cmp cl, byte ptr [esp + 13h]
        ; Exact mapped bytes 76 04: jbe 0x587596b6
        __asm _emit 0x76
        __asm _emit 0x04
        mov byte ptr [esp + 13h], cl
        inc dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1ch]
        mov ecx, dword ptr [edx + ebx + 8]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x58759759
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F B6 09: movzx cx, byte ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x09
        movzx ecx, cx
        ; Exact mapped bytes 66 83 F9 06: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 7E 00 00 00: jne 0x58759759
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [esi + eax + 18fh]
        movzx ecx, byte ptr [esi + eax + 1afh]
        lea edi, [ecx + edx*2 + 1]
        mov ebp, ebx
        mov edx, dword ptr [ebp + 0cc0h]
        mov edx, dword ptr [edx + 268h]
        mov ecx, 1ch
        sub ecx, eax
        shr edx, cl
        test dl, 1
        ; Exact mapped bytes 74 46: je 0x58759751
        __asm _emit 0x74
        __asm _emit 0x46
        shl edi, 5
        lea edx, [edi + ebx]
        lea ecx, [edx + 51ch]
        test ecx, ecx
        ; Exact mapped bytes 74 36: je 0x58759751
        __asm _emit 0x74
        __asm _emit 0x36
        cmp byte ptr [edx + 51eh], 1
        ; Exact mapped bytes 75 2D: jne 0x58759751
        __asm _emit 0x75
        __asm _emit 0x2d
        mov ecx, dword ptr [esp + 1ch]
        cmp dword ptr [ecx + ebp + 8], 0
        ; Exact mapped bytes 74 22: je 0x58759751
        __asm _emit 0x74
        __asm _emit 0x22
        mov edi, dword ptr [ebx + 100h]
        lea ecx, [eax + 3]
        shl edi, cl
        test edi, edi
        ; Exact mapped bytes 79 13: jns 0x58759751
        __asm _emit 0x79
        __asm _emit 0x13
        mov cl, byte ptr [edx + 11dh]
        xor cl, 0aah
        cmp cl, byte ptr [esp + 13h]
        ; Exact mapped bytes 76 04: jbe 0x58759751
        __asm _emit 0x76
        __asm _emit 0x04
        mov byte ptr [esp + 13h], cl
        inc dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1ch]
        add edx, 10h
        add eax, 4
        cmp edx, 0bc4h
        mov dword ptr [esp + 1ch], edx
        ; Exact mapped bytes 0F 8C 81 FD FF FF: jl 0x587594f0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebx + 0cc0h]
        ; Exact mapped bytes D9 05 98 D7 98 58: fld dword ptr [0x5898d798]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        movzx ebp, word ptr [edx + 0ch]
        ; Exact mapped bytes D9 5C 24 1C: fstp dword ptr [esp + 0x1c]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        shr ebp, 0ah
        xor edi, edi
        and ebp, 1fh
        ; Exact mapped bytes 7E 46: jle 0x587597d3
        __asm _emit 0x7e
        __asm _emit 0x46
        mov ebx, 0b40h
        mov eax, dword ptr [esp + 14h]
        mov eax, dword ptr [ebx + eax]
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x587597cb
        __asm _emit 0x74
        __asm _emit 0x2e
        movzx eax, byte ptr [eax]
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 25: jne 0x587597cb
        __asm _emit 0x75
        __asm _emit 0x25
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 B2 EB FF FF: call 0x58758360
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D9 5C 24 20: fstp dword ptr [esp + 0x20]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes D9 44 24 20: fld dword ptr [esp + 0x20]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes D9 44 24 1C: fld dword ptr [esp + 0x1c]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes D8 D9: fcomp st(1)
        __asm _emit 0xd8
        __asm _emit 0xd9
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 06: jne 0x587597c9
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes D9 5C 24 1C: fstp dword ptr [esp + 0x1c]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes EB 02: jmp 0x587597cb
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        inc edi
        add ebx, 4
        cmp edi, ebp
        ; Exact mapped bytes 7C BF: jl 0x58759792
        __asm _emit 0x7c
        __asm _emit 0xbf
        ; Exact mapped bytes D9 44 24 1C: fld dword ptr [esp + 0x1c]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        movzx edx, byte ptr [esp + 18h]
        ; Exact mapped bytes DC 0D 90 D7 98 58: fmul qword ptr [0x5898d790]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        movzx ecx, byte ptr [esp + 10h]
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        movzx eax, word ptr [esp + 14h]
        or eax, 0c00h
        mov dword ptr [esp + 20h], eax
        pop edi
        ; Exact mapped bytes D9 6C 24 1C: fldcw word ptr [esp + 0x1c]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        shl edx, 10h
        pop ebp
        shl ecx, 18h
        ; Exact mapped bytes DB 5C 24 18: fistp dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        mov al, byte ptr [esp + 18h]
        movzx esi, al
        movzx eax, byte ptr [esp + 0bh]
        ; Exact mapped bytes D9 6C 24 0C: fldcw word ptr [esp + 0xc]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x0c
        shl esi, 8
        or eax, esi
        or eax, edx
        pop esi
        or eax, ecx
        pop ebx
        mov ecx, dword ptr [esp + 3ch]
        xor ecx, esp
        ; Exact mapped bytes E8 AB 33 22 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x33
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 40h
        ret
        and ecx, 3e0h
        cmp ecx, 20h
        ; Exact mapped bytes 0F 85 DC 02 00 00: jne 0x58759b1e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        mov byte ptr [esp + 10h], al
        mov byte ptr [esp + 11h], 0
        xor edx, edx
        mov edi, 0b44h
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + ebx - 4]
        test eax, eax
        ; Exact mapped bytes 74 63: je 0x587598cb
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes 66 0F B6 08: movzx cx, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x08
        movzx eax, cx
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 56: jne 0x587598cb
        __asm _emit 0x75
        __asm _emit 0x56
        movzx ecx, byte ptr [esi + edx + 1ach]
        movzx eax, byte ptr [esi + edx + 18ch]
        lea eax, [ecx + eax*2 + 1]
        shl eax, 5
        mov ecx, ebx
        lea ebp, [eax + ecx + 51ch]
        test ebp, ebp
        ; Exact mapped bytes 74 32: je 0x587598cb
        __asm _emit 0x74
        __asm _emit 0x32
        cmp byte ptr [eax + ebx + 51eh], 1
        ; Exact mapped bytes 75 28: jne 0x587598cb
        __asm _emit 0x75
        __asm _emit 0x28
        cmp dword ptr [edi + ecx - 4], 0
        ; Exact mapped bytes 74 21: je 0x587598cb
        __asm _emit 0x74
        __asm _emit 0x21
        mov ebp, dword ptr [ebx + 100h]
        mov ecx, edx
        shl ebp, cl
        test ebp, ebp
        ; Exact mapped bytes 79 13: jns 0x587598cb
        __asm _emit 0x79
        __asm _emit 0x13
        mov al, byte ptr [eax + ebx + 11dh]
        xor al, 0aah
        cmp al, byte ptr [esp + 11h]
        ; Exact mapped bytes 76 04: jbe 0x587598cb
        __asm _emit 0x76
        __asm _emit 0x04
        mov byte ptr [esp + 11h], al
        mov eax, dword ptr [edi + ebx]
        test eax, eax
        ; Exact mapped bytes 74 63: je 0x58759935
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes 66 0F B6 00: movzx ax, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x00
        movzx eax, ax
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 56: jne 0x58759935
        __asm _emit 0x75
        __asm _emit 0x56
        movzx ecx, byte ptr [esi + edx + 18dh]
        movzx eax, byte ptr [esi + edx + 1adh]
        lea eax, [eax + ecx*2 + 1]
        shl eax, 5
        mov ecx, ebx
        lea ebp, [eax + ecx + 51ch]
        test ebp, ebp
        ; Exact mapped bytes 74 32: je 0x58759935
        __asm _emit 0x74
        __asm _emit 0x32
        cmp byte ptr [eax + ebx + 51eh], 1
        ; Exact mapped bytes 75 28: jne 0x58759935
        __asm _emit 0x75
        __asm _emit 0x28
        cmp dword ptr [edi + ecx], 0
        ; Exact mapped bytes 74 22: je 0x58759935
        __asm _emit 0x74
        __asm _emit 0x22
        mov ebp, dword ptr [ebx + 100h]
        lea ecx, [edx + 1]
        shl ebp, cl
        test ebp, ebp
        ; Exact mapped bytes 79 13: jns 0x58759935
        __asm _emit 0x79
        __asm _emit 0x13
        mov al, byte ptr [eax + ebx + 11dh]
        xor al, 0aah
        cmp al, byte ptr [esp + 11h]
        ; Exact mapped bytes 76 04: jbe 0x58759935
        __asm _emit 0x76
        __asm _emit 0x04
        mov byte ptr [esp + 11h], al
        mov eax, dword ptr [edi + ebx + 4]
        test eax, eax
        ; Exact mapped bytes 74 64: je 0x587599a1
        __asm _emit 0x74
        __asm _emit 0x64
        ; Exact mapped bytes 66 0F B6 08: movzx cx, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x08
        movzx eax, cx
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 57: jne 0x587599a1
        __asm _emit 0x75
        __asm _emit 0x57
        movzx ecx, byte ptr [esi + edx + 1aeh]
        movzx eax, byte ptr [esi + edx + 18eh]
        lea eax, [ecx + eax*2 + 1]
        shl eax, 5
        mov ecx, ebx
        lea ebp, [eax + ecx + 51ch]
        test ebp, ebp
        ; Exact mapped bytes 74 33: je 0x587599a1
        __asm _emit 0x74
        __asm _emit 0x33
        cmp byte ptr [eax + ebx + 51eh], 1
        ; Exact mapped bytes 75 29: jne 0x587599a1
        __asm _emit 0x75
        __asm _emit 0x29
        cmp dword ptr [edi + ecx + 4], 0
        ; Exact mapped bytes 74 22: je 0x587599a1
        __asm _emit 0x74
        __asm _emit 0x22
        mov ebp, dword ptr [ebx + 100h]
        lea ecx, [edx + 2]
        shl ebp, cl
        test ebp, ebp
        ; Exact mapped bytes 79 13: jns 0x587599a1
        __asm _emit 0x79
        __asm _emit 0x13
        mov al, byte ptr [eax + ebx + 11dh]
        xor al, 0aah
        cmp al, byte ptr [esp + 11h]
        ; Exact mapped bytes 76 04: jbe 0x587599a1
        __asm _emit 0x76
        __asm _emit 0x04
        mov byte ptr [esp + 11h], al
        mov eax, dword ptr [edi + ebx + 8]
        test eax, eax
        ; Exact mapped bytes 74 64: je 0x58759a0d
        __asm _emit 0x74
        __asm _emit 0x64
        ; Exact mapped bytes 66 0F B6 00: movzx ax, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x00
        movzx eax, ax
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 57: jne 0x58759a0d
        __asm _emit 0x75
        __asm _emit 0x57
        movzx ecx, byte ptr [esi + edx + 18fh]
        movzx eax, byte ptr [esi + edx + 1afh]
        lea eax, [eax + ecx*2 + 1]
        shl eax, 5
        mov ecx, ebx
        lea ebp, [eax + ecx + 51ch]
        test ebp, ebp
        ; Exact mapped bytes 74 33: je 0x58759a0d
        __asm _emit 0x74
        __asm _emit 0x33
        cmp byte ptr [eax + ebx + 51eh], 1
        ; Exact mapped bytes 75 29: jne 0x58759a0d
        __asm _emit 0x75
        __asm _emit 0x29
        cmp dword ptr [edi + ecx + 8], 0
        ; Exact mapped bytes 74 22: je 0x58759a0d
        __asm _emit 0x74
        __asm _emit 0x22
        mov ebp, dword ptr [ebx + 100h]
        lea ecx, [edx + 3]
        shl ebp, cl
        test ebp, ebp
        ; Exact mapped bytes 79 13: jns 0x58759a0d
        __asm _emit 0x79
        __asm _emit 0x13
        mov al, byte ptr [eax + ebx + 11dh]
        xor al, 0aah
        cmp al, byte ptr [esp + 11h]
        ; Exact mapped bytes 76 04: jbe 0x58759a0d
        __asm _emit 0x76
        __asm _emit 0x04
        mov byte ptr [esp + 11h], al
        add edi, 10h
        add edx, 4
        cmp edi, 0bc4h
        ; Exact mapped bytes 0F 8C 41 FE FF FF: jl 0x58759860
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 0cc0h]
        ; Exact mapped bytes D9 05 98 D7 98 58: fld dword ptr [0x5898d798]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        movzx edi, word ptr [ecx + 0ch]
        ; Exact mapped bytes D9 5C 24 18: fstp dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        shr edi, 0ah
        xor ebp, ebp
        and edi, 1fh
        ; Exact mapped bytes 7E 4A: jle 0x58759a87
        __asm _emit 0x7e
        __asm _emit 0x4a
        mov ebx, 0b40h
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [ebx + edx]
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x58759a7b
        __asm _emit 0x74
        __asm _emit 0x2e
        movzx eax, byte ptr [eax]
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 25: jne 0x58759a7b
        __asm _emit 0x75
        __asm _emit 0x25
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 02 E9 FF FF: call 0x58758360
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D9 5C 24 20: fstp dword ptr [esp + 0x20]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes D9 44 24 20: fld dword ptr [esp + 0x20]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes D9 44 24 18: fld dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D8 D9: fcomp st(1)
        __asm _emit 0xd8
        __asm _emit 0xd9
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 06: jne 0x58759a79
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes D9 5C 24 18: fstp dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes EB 02: jmp 0x58759a7b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        inc ebp
        add ebx, 4
        cmp ebp, edi
        ; Exact mapped bytes 7C BF: jl 0x58759a42
        __asm _emit 0x7c
        __asm _emit 0xbf
        mov ebx, dword ptr [esp + 14h]
        ; Exact mapped bytes D9 44 24 18: fld dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DC 0D 90 D7 98 58: fmul qword ptr [0x5898d790]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D9 7C 24 14: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        movzx eax, word ptr [esp + 14h]
        or eax, 0c00h
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes D9 6C 24 20: fldcw word ptr [esp + 0x20]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DB 5C 24 20: fistp dword ptr [esp + 0x20]
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        mov al, byte ptr [esp + 20h]
        mov byte ptr [esp + 12h], al
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        test edi, edi
        ; Exact mapped bytes 7E 2D: jle 0x58759ae8
        __asm _emit 0x7e
        __asm _emit 0x2d
        mov eax, 0b40h
        mov ecx, dword ptr [eax + ebx]
        test ecx, ecx
        ; Exact mapped bytes 74 19: je 0x58759ae0
        __asm _emit 0x74
        __asm _emit 0x19
        movzx ecx, byte ptr [ecx]
        ; Exact mapped bytes 66 83 F9 06: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 75 10: jne 0x58759ae0
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [eax + ebx]
        mov dl, byte ptr [ecx + 98h]
        and dl, 0fh
        add byte ptr [esp + 13h], dl
        add eax, 4
        sub edi, 1
        ; Exact mapped bytes 75 D8: jne 0x58759ac0
        __asm _emit 0x75
        __asm _emit 0xd8
        movzx esi, byte ptr [esp + 12h]
        movzx edx, byte ptr [esp + 11h]
        movzx eax, byte ptr [esp + 13h]
        movzx ecx, byte ptr [esp + 10h]
        shl esi, 8
        pop edi
        or eax, esi
        shl edx, 10h
        pop ebp
        shl ecx, 18h
        or eax, edx
        pop esi
        or eax, ecx
        pop ebx
        mov ecx, dword ptr [esp + 3ch]
        xor ecx, esp
        ; Exact mapped bytes E8 C0 30 22 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x30
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 40h
        ret
        movzx ebx, word ptr [edx + 0eh]
        and ebx, 0fffffff0h
        shl ebx, 14h
        xor eax, eax
        mov dword ptr [esp + 10h], 0b44h
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 10h]
        mov ecx, dword ptr [ecx + edx - 4]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x58759bea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F B6 09: movzx cx, byte ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x09
        movzx ecx, cx
        ; Exact mapped bytes 66 83 F9 05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x58759bea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [esi + eax + 18ch]
        movzx ecx, byte ptr [esi + eax + 1ach]
        mov ebp, dword ptr [esi + 8]
        lea edi, [ecx + edx*2 + 1]
        mov edx, dword ptr [ebp + 0cc0h]
        mov edx, dword ptr [edx + 268h]
        mov ecx, 1fh
        sub ecx, eax
        shr edx, cl
        test dl, 1
        ; Exact mapped bytes 75 62: jne 0x58759bea
        __asm _emit 0x75
        __asm _emit 0x62
        mov ecx, dword ptr [esp + 14h]
        shl edi, 5
        lea edx, [edi + ecx]
        lea ecx, [edx + 51ch]
        test ecx, ecx
        ; Exact mapped bytes 74 4E: je 0x58759bea
        __asm _emit 0x74
        __asm _emit 0x4e
        cmp byte ptr [edx + 51eh], 1
        ; Exact mapped bytes 75 45: jne 0x58759bea
        __asm _emit 0x75
        __asm _emit 0x45
        mov ecx, dword ptr [esp + 10h]
        cmp dword ptr [ecx + ebp - 4], 0
        ; Exact mapped bytes 74 3A: je 0x58759bea
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [esp + 14h]
        mov edi, dword ptr [ecx + 100h]
        mov ecx, eax
        shl edi, cl
        test edi, edi
        ; Exact mapped bytes 79 28: jns 0x58759bea
        __asm _emit 0x79
        __asm _emit 0x28
        mov cl, byte ptr [edx + 11dh]
        xor cl, 0aah
        mov edx, ebx
        shr edx, 10h
        movzx ecx, cl
        and edx, 0ffh
        cmp ecx, edx
        ; Exact mapped bytes 76 0D: jbe 0x58759bea
        __asm _emit 0x76
        __asm _emit 0x0d
        and ebx, 0ff00ffffh
        shl ecx, 10h
        or ecx, ebx
        mov ebx, ecx
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 10h]
        mov ecx, dword ptr [ecx + edx]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x58759ca1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F B6 09: movzx cx, byte ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x09
        movzx ecx, cx
        ; Exact mapped bytes 66 83 F9 05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x58759ca1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [esi + eax + 18dh]
        movzx ecx, byte ptr [esi + eax + 1adh]
        mov ebp, dword ptr [esi + 8]
        lea edi, [ecx + edx*2 + 1]
        mov edx, dword ptr [ebp + 0cc0h]
        mov edx, dword ptr [edx + 268h]
        mov ecx, 1eh
        sub ecx, eax
        shr edx, cl
        test dl, 1
        ; Exact mapped bytes 75 62: jne 0x58759ca1
        __asm _emit 0x75
        __asm _emit 0x62
        mov ecx, dword ptr [esp + 14h]
        shl edi, 5
        lea edx, [edi + ecx]
        lea ecx, [edx + 51ch]
        test ecx, ecx
        ; Exact mapped bytes 74 4E: je 0x58759ca1
        __asm _emit 0x74
        __asm _emit 0x4e
        cmp byte ptr [edx + 51eh], 1
        ; Exact mapped bytes 75 45: jne 0x58759ca1
        __asm _emit 0x75
        __asm _emit 0x45
        mov ecx, dword ptr [esp + 10h]
        cmp dword ptr [ecx + ebp], 0
        ; Exact mapped bytes 74 3B: je 0x58759ca1
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edi, dword ptr [esp + 14h]
        mov edi, dword ptr [edi + 100h]
        lea ecx, [eax + 1]
        shl edi, cl
        test edi, edi
        ; Exact mapped bytes 79 28: jns 0x58759ca1
        __asm _emit 0x79
        __asm _emit 0x28
        mov cl, byte ptr [edx + 11dh]
        xor cl, 0aah
        mov edx, ebx
        shr edx, 10h
        movzx ecx, cl
        and edx, 0ffh
        cmp ecx, edx
        ; Exact mapped bytes 76 0D: jbe 0x58759ca1
        __asm _emit 0x76
        __asm _emit 0x0d
        and ebx, 0ff00ffffh
        shl ecx, 10h
        or ecx, ebx
        mov ebx, ecx
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 10h]
        mov ecx, dword ptr [ecx + edx + 4]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x58759d5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F B6 09: movzx cx, byte ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x09
        movzx ecx, cx
        ; Exact mapped bytes 66 83 F9 05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x58759d5a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [esi + eax + 18eh]
        movzx ecx, byte ptr [esi + eax + 1aeh]
        mov ebp, dword ptr [esi + 8]
        lea edi, [ecx + edx*2 + 1]
        mov edx, dword ptr [ebp + 0cc0h]
        mov edx, dword ptr [edx + 268h]
        mov ecx, 1dh
        sub ecx, eax
        shr edx, cl
        test dl, 1
        ; Exact mapped bytes 75 63: jne 0x58759d5a
        __asm _emit 0x75
        __asm _emit 0x63
        mov ecx, dword ptr [esp + 14h]
        shl edi, 5
        lea edx, [edi + ecx]
        lea ecx, [edx + 51ch]
        test ecx, ecx
        ; Exact mapped bytes 74 4F: je 0x58759d5a
        __asm _emit 0x74
        __asm _emit 0x4f
        cmp byte ptr [edx + 51eh], 1
        ; Exact mapped bytes 75 46: jne 0x58759d5a
        __asm _emit 0x75
        __asm _emit 0x46
        mov ecx, dword ptr [esp + 10h]
        cmp dword ptr [ecx + ebp + 4], 0
        ; Exact mapped bytes 74 3B: je 0x58759d5a
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edi, dword ptr [esp + 14h]
        mov edi, dword ptr [edi + 100h]
        lea ecx, [eax + 2]
        shl edi, cl
        test edi, edi
        ; Exact mapped bytes 79 28: jns 0x58759d5a
        __asm _emit 0x79
        __asm _emit 0x28
        mov cl, byte ptr [edx + 11dh]
        xor cl, 0aah
        mov edx, ebx
        shr edx, 10h
        movzx ecx, cl
        and edx, 0ffh
        cmp ecx, edx
        ; Exact mapped bytes 76 0D: jbe 0x58759d5a
        __asm _emit 0x76
        __asm _emit 0x0d
        and ebx, 0ff00ffffh
        shl ecx, 10h
        or ecx, ebx
        mov ebx, ecx
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 10h]
        mov ecx, dword ptr [ecx + edx + 8]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x58759e13
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F B6 09: movzx cx, byte ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x09
        movzx ecx, cx
        ; Exact mapped bytes 66 83 F9 05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x58759e13
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [esi + eax + 18fh]
        movzx ecx, byte ptr [esi + eax + 1afh]
        mov ebp, dword ptr [esi + 8]
        lea edi, [ecx + edx*2 + 1]
        mov edx, dword ptr [ebp + 0cc0h]
        mov edx, dword ptr [edx + 268h]
        mov ecx, 1ch
        sub ecx, eax
        shr edx, cl
        test dl, 1
        ; Exact mapped bytes 75 63: jne 0x58759e13
        __asm _emit 0x75
        __asm _emit 0x63
        mov ecx, dword ptr [esp + 14h]
        shl edi, 5
        lea edx, [edi + ecx]
        lea ecx, [edx + 51ch]
        test ecx, ecx
        ; Exact mapped bytes 74 4F: je 0x58759e13
        __asm _emit 0x74
        __asm _emit 0x4f
        cmp byte ptr [edx + 51eh], 1
        ; Exact mapped bytes 75 46: jne 0x58759e13
        __asm _emit 0x75
        __asm _emit 0x46
        mov ecx, dword ptr [esp + 10h]
        cmp dword ptr [ecx + ebp + 8], 0
        ; Exact mapped bytes 74 3B: je 0x58759e13
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edi, dword ptr [esp + 14h]
        mov edi, dword ptr [edi + 100h]
        lea ecx, [eax + 3]
        shl edi, cl
        test edi, edi
        ; Exact mapped bytes 79 28: jns 0x58759e13
        __asm _emit 0x79
        __asm _emit 0x28
        mov cl, byte ptr [edx + 11dh]
        xor cl, 0aah
        mov edx, ebx
        shr edx, 10h
        movzx ecx, cl
        and edx, 0ffh
        cmp ecx, edx
        ; Exact mapped bytes 76 0D: jbe 0x58759e13
        __asm _emit 0x76
        __asm _emit 0x0d
        and ebx, 0ff00ffffh
        shl ecx, 10h
        or ecx, ebx
        mov ebx, ecx
        mov ecx, dword ptr [esp + 10h]
        add ecx, 10h
        add eax, 4
        cmp ecx, 0bc4h
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 0F 8C 05 FD FF FF: jl 0x58759b32
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebp, ebp
        xor edi, edi
        push edi
        lea eax, [esp + 24h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 62 F2 FF FF: call 0x587590a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        cmp ecx, eax
        ; Exact mapped bytes 7E 02: jle 0x58759e49
        __asm _emit 0x7e
        __asm _emit 0x02
        mov eax, ecx
        cmp eax, ebp
        ; Exact mapped bytes 7E 02: jle 0x58759e4f
        __asm _emit 0x7e
        __asm _emit 0x02
        mov ebp, eax
        inc edi
        cmp edi, 20h
        ; Exact mapped bytes 7C DC: jl 0x58759e31
        __asm _emit 0x7c
        __asm _emit 0xdc
        mov ecx, dword ptr [esi + 8]
        movzx eax, word ptr [ecx + 88h]
        shr eax, 4
        and ebp, 0fffh
        shl ebp, 4
        and eax, 0fh
        or eax, ebp
        and ebx, 0ffff0000h
        pop edi
        or eax, ebx
        pop ebp
        mov ecx, dword ptr [esp + 44h]
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 53 2D 22 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x2d
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 40h
        ret
    }
}
