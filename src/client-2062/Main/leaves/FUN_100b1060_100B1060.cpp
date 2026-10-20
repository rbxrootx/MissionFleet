// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B1060 .. +0x33E bytes.
extern "C" __declspec(naked) void FUN_100b1060_100B1060() {
    __asm {
        sub esp, 0ch
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 84h]
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x100b109e
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ebx, 83ch
        mov eax, dword ptr [esi + 84h]
        mov edi, dword ptr [ebx + eax]
        test edi, edi
        ; Exact mapped bytes 74 0E: je 0x100b1093
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, edi
        ; Exact mapped bytes E8 D4 DF 04 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xdf
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 1D E0 04 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        add ebx, 4
        cmp ebx, 8bch
        ; Exact mapped bytes 7C DA: jl 0x100b1078
        __asm _emit 0x7c
        __asm _emit 0xda
        mov ebp, dword ptr [esp + 20h]
        test ebp, ebp
        mov dword ptr [esi + 84h], ebp
        ; Exact mapped bytes 0F 84 C8 02 00 00: je 0x100b1378
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0b50h]
        ; Exact mapped bytes 0F BF 48 0C: movsx ecx, word ptr [eax + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 0F BF 50 0A: movsx edx, word ptr [eax + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x50
        __asm _emit 0x0a
        add ecx, 168h
        add edx, 190h
        push ecx
        mov ecx, dword ptr [esi + 0e4h]
        push edx
        ; Exact mapped bytes E8 F9 DB 04 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xdb
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e4h]
        mov ebx, 0fh
        mov edi, 0fff0h
        xor edx, edx
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e8h]
        mov dword ptr [esp + 20h], edx
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ech]
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0f0h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0f4h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 84h]
        mov eax, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        and ecx, 7c00h
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 86 7B 01 00 00: jbe 0x100b12bf
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 0eh
        mov ecx, 1fh
        sub ecx, edx
        mov edx, dword ptr [eax + 25ch]
        shr edx, cl
        test dl, 1
        ; Exact mapped bytes 0F 85 2A 01 00 00: jne 0x100b128b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 254h]
        mov eax, dword ptr [eax + 258h]
        shr edx, cl
        shr eax, cl
        mov ebx, 1
        and edx, ebx
        and eax, ebx
        test edx, edx
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x100b1215
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x100b11d1
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [esp + 18h]
        test ecx, ecx
        ; Exact mapped bytes 75 3B: jne 0x100b11c9
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, dword ptr [ebp + 0b50h]
        ; Exact mapped bytes 0F BF 4C 07 40: movsx ecx, word ptr [edi + eax + 0x40]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x40
        ; Exact mapped bytes 0F BF 14 07: movsx edx, word ptr [edi + eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x07
        add ecx, 168h
        add edx, 190h
        push ecx
        mov ecx, dword ptr [esi + 0f4h]
        push edx
        ; Exact mapped bytes E8 1A DB 04 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xdb
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f4h]
        mov dword ptr [esp + 18h], ebx
        or byte ptr [eax + 24h], 0fh
        ; Exact mapped bytes E9 C2 00 00 00: jmp 0x100b128b
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 BA 00 00 00: jne 0x100b128b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 0F 85 AE 00 00 00: jne 0x100b128b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0b50h]
        ; Exact mapped bytes 0F BF 4C 07 40: movsx ecx, word ptr [edi + eax + 0x40]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x40
        ; Exact mapped bytes 0F BF 14 07: movsx edx, word ptr [edi + eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x07
        add ecx, 168h
        add edx, 190h
        push ecx
        mov ecx, dword ptr [esi + 0f0h]
        push edx
        ; Exact mapped bytes E8 CB DA 04 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xda
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f0h]
        mov dword ptr [esp + 14h], ebx
        or byte ptr [eax + 24h], 0fh
        ; Exact mapped bytes EB 76: jmp 0x100b128b
        __asm _emit 0xeb
        __asm _emit 0x76
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x100b124d
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp + 0b50h]
        ; Exact mapped bytes 0F BF 4C 07 40: movsx ecx, word ptr [edi + eax + 0x40]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x40
        ; Exact mapped bytes 0F BF 14 07: movsx edx, word ptr [edi + eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x07
        add ecx, 168h
        add edx, 190h
        push ecx
        mov ecx, dword ptr [esi + 0ech]
        push edx
        ; Exact mapped bytes E8 8F DA 04 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xda
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ech]
        or byte ptr [eax + 24h], 0fh
        ; Exact mapped bytes EB 3E: jmp 0x100b128b
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov eax, dword ptr [esp + 20h]
        test eax, eax
        ; Exact mapped bytes 75 36: jne 0x100b128b
        __asm _emit 0x75
        __asm _emit 0x36
        mov eax, dword ptr [ebp + 0b50h]
        ; Exact mapped bytes 0F BF 4C 07 40: movsx ecx, word ptr [edi + eax + 0x40]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x40
        ; Exact mapped bytes 0F BF 14 07: movsx edx, word ptr [edi + eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x07
        add ecx, 168h
        add edx, 190h
        push ecx
        mov ecx, dword ptr [esi + 0e8h]
        push edx
        ; Exact mapped bytes E8 53 DA 04 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xda
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e8h]
        mov dword ptr [esp + 20h], ebx
        or byte ptr [eax + 24h], 0fh
        mov eax, dword ptr [esi + 84h]
        mov edx, dword ptr [esp + 10h]
        inc edx
        add edi, 2
        mov eax, dword ptr [eax + 0b4ch]
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        shr ecx, 0ah
        and ecx, 1fh
        cmp edx, ecx
        ; Exact mapped bytes 0F 8C 94 FE FF FF: jl 0x100b1149
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, 0fff0h
        mov ebx, 0fh
        mov ecx, dword ptr [esi + 84h]
        xor ebp, ebp
        mov edx, 20h
        lea eax, [ecx + 83ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 01: je 0x100b12d8
        __asm _emit 0x74
        __asm _emit 0x01
        inc ebp
        add eax, 4
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100b12d2
        __asm _emit 0x75
        __asm _emit 0xf4
        mov edx, dword ptr [ecx + 0b4ch]
        mov eax, 5
        mov cl, byte ptr [edx + 0ch]
        and ecx, ebx
        add ecx, eax
        cmp ecx, eax
        ; Exact mapped bytes 7E 2D: jle 0x100b1321
        __asm _emit 0x7e
        __asm _emit 0x2d
        lea edx, [esi + 0f8h]
        mov ecx, dword ptr [edx]
        add edx, 4
        ; Exact mapped bytes 66 09 59 24: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 84h]
        inc eax
        mov ecx, dword ptr [ecx + 0b4ch]
        mov cl, byte ptr [ecx + 0ch]
        and ecx, ebx
        add ecx, 5
        cmp eax, ecx
        ; Exact mapped bytes 7C DE: jl 0x100b12fa
        __asm _emit 0x7c
        __asm _emit 0xde
        cmp eax, 20h
        ; Exact mapped bytes 7D 1A: jge 0x100b133b
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, 20h
        lea ecx, [esi + eax*4 + 0e4h]
        sub edx, eax
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100b132f
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [esi + 0d0h]
        push ebp
        ; Exact mapped bytes E8 D9 E3 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe3
        __asm _emit 0x04
        __asm _emit 0x00
        xor edx, edx
        xor eax, eax
        mov dl, byte ptr [esi + 16ah]
        mov al, byte ptr [esi + 165h]
        lea ecx, [edx + eax + 1]
        push ecx
        mov ecx, dword ptr [esi + 0d4h]
        ; Exact mapped bytes E8 B9 E3 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xe3
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 72 FB FF FF: call 0x100b0ee0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        add esi, 0e4h
        mov ecx, 20h
        mov edx, 0fff0h
        mov eax, dword ptr [esi]
        add esi, 4
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        dec ecx
        ; Exact mapped bytes 75 F4: jne 0x100b1388
        __asm _emit 0x75
        __asm _emit 0xf4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
