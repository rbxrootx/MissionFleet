// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009A200 .. +0x15F4 bytes.
extern "C" __declspec(naked) void FUN_1009a200_1009A200() {
    __asm {
        sub esp, 20h
        ; Exact mapped bytes 0F BF 44 24 24: movsx eax, word ptr [esp + 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        push ebx
        push ebp
        push esi
        ; Exact mapped bytes 8B 35 F0 56 1C 10: mov esi, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, ecx
        cmp eax, 0eh
        mov ecx, dword ptr [esi + 0d44h]
        push edi
        mov dword ptr [esp + 10h], ebx
        mov dword ptr [esp + 2ch], ecx
        mov ebp, 1
        ; Exact mapped bytes 0F 87 01 15 00 00: ja 0x1009b731
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 F4 B7 09 10: jmp dword ptr [eax*4 + 0x1009b7f4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0x10
        mov eax, dword ptr [ebx + 214h]
        add ebx, 214h
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 75 13: jne 0x1009a25c
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, ebx
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009a250
        __asm _emit 0x75
        __asm _emit 0xf4
        mov esi, ebx
        mov edi, 2
        mov ecx, dword ptr [esi]
        push 0feh
        push 0aah
        ; Exact mapped bytes E8 5C 4A 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E9: jne 0x1009a263
        __asm _emit 0x75
        __asm _emit 0xe9
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 DA 4E 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x4e
        __asm _emit 0x06
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 10h]
        push 101h
        mov ecx, dword ptr [ebp + 218h]
        ; Exact mapped bytes E8 C6 4E 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x4e
        __asm _emit 0x06
        __asm _emit 0x00
        lea esi, [ebp + 21ch]
        mov edi, 5
        mov ebx, 0fffeh
        mov ecx, dword ptr [esi]
        mov dl, byte ptr [ecx + 24h]
        and dl, 1
        cmp dl, 1
        ; Exact mapped bytes 75 13: jne 0x1009a2ca
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009a2be
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 DA: jne 0x1009a2aa
        __asm _emit 0x75
        __asm _emit 0xda
        lea esi, [ebp + 244h]
        mov edi, 6
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 13: jne 0x1009a2fb
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009a2ef
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 DA: jne 0x1009a2db
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes E9 2B 14 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 0F 85 26 01 00 00: jne 0x1009a43d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 2fch]
        mov ecx, dword ptr [eax + 8]
        mov dl, byte ptr [ecx]
        and dl, 0fh
        cmp dl, 1
        ; Exact mapped bytes 0F 85 0F 01 00 00: jne 0x1009a43d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        mov edi, dword ptr [esp + 10h]
        mov eax, dword ptr [edi + ebx*8 + 214h]
        lea esi, [edi + ebx*8 + 214h]
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 75 30: jne 0x1009a378
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009a34f
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [esi]
        push 0fffffeffh
        ; Exact mapped bytes E8 F9 4D 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x4d
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + ebx*8 + 218h]
        push 101h
        ; Exact mapped bytes E8 E8 4D 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x06
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 75 28: jne 0x1009a3a4
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [esp + 10h]
        mov edi, 2
        lea esi, [ecx + 214h]
        mov ecx, dword ptr [esi]
        push 102h
        push 0a5h
        ; Exact mapped bytes E8 34 49 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x49
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E9: jne 0x1009a38b
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes EB 1C: jmp 0x1009a3c0
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edi, 2
        mov ecx, dword ptr [esi]
        push 181h
        push 202h
        ; Exact mapped bytes E8 16 49 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x49
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E9: jne 0x1009a3a9
        __asm _emit 0x75
        __asm _emit 0xe9
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 66 FF FF FF: jl 0x1009a330
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 10h]
        mov edi, 4
        lea esi, [edx + 224h]
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 15: jne 0x1009a3fb
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x1009a3ed
        __asm _emit 0x75
        __asm _emit 0xf2
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 D8: jne 0x1009a3d9
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [esp + 10h]
        mov edi, 6
        lea esi, [edx + 244h]
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 15: jne 0x1009a432
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x1009a424
        __asm _emit 0x75
        __asm _emit 0xf2
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 D8: jne 0x1009a410
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes E9 F4 12 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov edi, 6
        mov ebx, 0fffeh
        lea esi, [edx + 244h]
        mov eax, dword ptr [esi - 30h]
        lea ecx, [esi - 30h]
        mov dl, byte ptr [eax + 24h]
        and dl, 1
        cmp dl, 1
        ; Exact mapped bytes 75 11: jne 0x1009a473
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009a467
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 13: jne 0x1009a493
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009a487
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 B8: jne 0x1009a451
        __asm _emit 0x75
        __asm _emit 0xb8
        ; Exact mapped bytes E9 93 12 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 0F 85 FB 00 00 00: jne 0x1009a5aa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 2fch]
        mov edx, dword ptr [eax + 8]
        mov al, byte ptr [edx]
        and al, 0fh
        cmp al, 1
        ; Exact mapped bytes 0F 85 E6 00 00 00: jne 0x1009a5aa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 200h]
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 0F 85 CF 00 00 00: jne 0x1009a5aa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 244h]
        add ebx, 244h
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 75 13: jne 0x1009a500
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, ebx
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009a4f4
        __asm _emit 0x75
        __asm _emit 0xf4
        mov esi, ebx
        mov edi, 2
        mov ecx, dword ptr [esi]
        push 0cbh
        push 189h
        ; Exact mapped bytes E8 B8 47 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x47
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E9: jne 0x1009a507
        __asm _emit 0x75
        __asm _emit 0xe9
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 36 4C 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 10h]
        push 101h
        mov ecx, dword ptr [ebp + 248h]
        ; Exact mapped bytes E8 22 4C 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x00
        lea esi, [ebp + 214h]
        mov edi, 6
        mov ebx, 0fffeh
        mov ecx, dword ptr [esi]
        mov dl, byte ptr [ecx + 24h]
        and dl, 1
        cmp dl, 1
        ; Exact mapped bytes 75 13: jne 0x1009a56e
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009a562
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 DA: jne 0x1009a54e
        __asm _emit 0x75
        __asm _emit 0xda
        lea esi, [ebp + 24ch]
        mov edi, 5
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 13: jne 0x1009a59f
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009a593
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 DA: jne 0x1009a57f
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes E9 87 11 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov edi, 6
        mov ebx, 0fffeh
        lea esi, [edx + 244h]
        mov eax, dword ptr [esi - 30h]
        lea ecx, [esi - 30h]
        mov dl, byte ptr [eax + 24h]
        and dl, 1
        cmp dl, 1
        ; Exact mapped bytes 75 11: jne 0x1009a5e0
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009a5d4
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 13: jne 0x1009a600
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009a5f4
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 B8: jne 0x1009a5be
        __asm _emit 0x75
        __asm _emit 0xb8
        ; Exact mapped bytes E9 26 11 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 214h]
        add ebx, 214h
        test byte ptr [edx + 24h], 1
        ; Exact mapped bytes 75 13: jne 0x1009a630
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, ebx
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009a624
        __asm _emit 0x75
        __asm _emit 0xf4
        mov esi, ebx
        mov edi, 2
        mov ecx, dword ptr [esi]
        push 1d9h
        push 284h
        ; Exact mapped bytes E8 88 46 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x46
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E9: jne 0x1009a637
        __asm _emit 0x75
        __asm _emit 0xe9
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 06 4B 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x4b
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        push 101h
        mov ecx, dword ptr [eax + 218h]
        ; Exact mapped bytes E8 F2 4A 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        xor ebx, ebx
        mov edi, dword ptr [esp + 10h]
        mov ecx, dword ptr [edi + ebx*8 + 244h]
        lea esi, [edi + ebx*8 + 244h]
        test byte ptr [ecx + 24h], 1
        ; Exact mapped bytes 75 30: jne 0x1009a6b8
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009a68f
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [esi]
        push 0fffffeffh
        ; Exact mapped bytes E8 B9 4A 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + ebx*8 + 248h]
        push 101h
        ; Exact mapped bytes E8 A8 4A 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 75 28: jne 0x1009a6e4
        __asm _emit 0x75
        __asm _emit 0x28
        mov edx, dword ptr [esp + 10h]
        mov edi, 2
        lea esi, [edx + 244h]
        mov ecx, dword ptr [esi]
        push 148h
        push 295h
        ; Exact mapped bytes E8 F4 45 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x45
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E9: jne 0x1009a6cb
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes EB 1C: jmp 0x1009a700
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edi, 2
        mov ecx, dword ptr [esi]
        push 202h
        push 2e5h
        ; Exact mapped bytes E8 D6 45 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x45
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E9: jne 0x1009a6e9
        __asm _emit 0x75
        __asm _emit 0xe9
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 66 FF FF FF: jl 0x1009a670
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        mov edi, 5
        lea esi, [eax + 21ch]
        mov ecx, dword ptr [esi]
        mov dl, byte ptr [ecx + 24h]
        and dl, 1
        cmp dl, 1
        ; Exact mapped bytes 75 15: jne 0x1009a73b
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x1009a72d
        __asm _emit 0x75
        __asm _emit 0xf2
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 D8: jne 0x1009a719
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [esp + 10h]
        mov edi, 4
        lea esi, [eax + 254h]
        mov ecx, dword ptr [esi]
        mov dl, byte ptr [ecx + 24h]
        and dl, 1
        cmp dl, 1
        ; Exact mapped bytes 75 15: jne 0x1009a772
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x1009a764
        __asm _emit 0x75
        __asm _emit 0xf2
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 D8: jne 0x1009a750
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes E9 B4 0F 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d48h]
        xor edx, edx
        mov ecx, dword ptr [eax + 0a8h]
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 0F 85 CC 00 00 00: jne 0x1009a866
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 244h]
        add ebx, 244h
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 75 13: jne 0x1009a7bf
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, ebx
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009a7b3
        __asm _emit 0x75
        __asm _emit 0xf4
        mov esi, ebx
        mov edi, 2
        mov ecx, dword ptr [esi]
        push 32h
        push 17ch
        ; Exact mapped bytes E8 FC 44 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x1009a7c6
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 7A 49 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x49
        __asm _emit 0x06
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 10h]
        push 101h
        mov ecx, dword ptr [ebp + 248h]
        ; Exact mapped bytes E8 66 49 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x49
        __asm _emit 0x06
        __asm _emit 0x00
        lea esi, [ebp + 214h]
        mov edi, 6
        mov ebx, 0fffeh
        mov ecx, dword ptr [esi]
        mov dl, byte ptr [ecx + 24h]
        and dl, 1
        cmp dl, 1
        ; Exact mapped bytes 75 13: jne 0x1009a82a
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009a81e
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 DA: jne 0x1009a80a
        __asm _emit 0x75
        __asm _emit 0xda
        lea esi, [ebp + 24ch]
        mov edi, 5
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 13: jne 0x1009a85b
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009a84f
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 DA: jne 0x1009a83b
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes E9 CB 0E 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov edi, 6
        mov ebx, 0fffeh
        lea esi, [edx + 244h]
        mov eax, dword ptr [esi - 30h]
        lea ecx, [esi - 30h]
        mov dl, byte ptr [eax + 24h]
        and dl, 1
        cmp dl, 1
        ; Exact mapped bytes 75 11: jne 0x1009a89c
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009a890
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 13: jne 0x1009a8bc
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009a8b0
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 B8: jne 0x1009a87a
        __asm _emit 0x75
        __asm _emit 0xb8
        ; Exact mapped bytes E9 6A 0E 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov ebp, dword ptr [esi + 0d0ch]
        mov dword ptr [esp + 28h], ebp
        mov dword ptr [esp + 14h], 0
        mov eax, dword ptr [edx + 214h]
        lea ebx, [edx + 214h]
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 75 18: jne 0x1009a907
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, ebx
        mov edx, 2
        mov esi, 1
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009a8fb
        __asm _emit 0x75
        __asm _emit 0xf4
        mov edi, ebx
        mov esi, 2
        mov ecx, dword ptr [edi]
        push 1d9h
        push 284h
        ; Exact mapped bytes E8 B1 43 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x43
        __asm _emit 0x06
        __asm _emit 0x00
        add edi, 4
        dec esi
        ; Exact mapped bytes 75 E9: jne 0x1009a90e
        __asm _emit 0x75
        __asm _emit 0xe9
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 2F 48 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        push 101h
        mov ecx, dword ptr [ecx + 218h]
        ; Exact mapped bytes E8 1B 48 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 0F 84 E4 0D 00 00: je 0x1009b731
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8bch]
        mov dword ptr [esp + 24h], 0
        test eax, eax
        ; Exact mapped bytes 0F 8E E6 00 00 00: jle 0x1009aa49
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 10h]
        add eax, 83ch
        mov dword ptr [esp + 18h], 0e4h
        lea ebx, [edx + 244h]
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [ecx + 0d48h]
        mov ecx, dword ptr [esp + 1ch]
        mov edx, dword ptr [edx + eax]
        mov eax, dword ptr [ecx]
        test eax, eax
        ; Exact mapped bytes 75 76: jne 0x1009aa15
        __asm _emit 0x75
        __asm _emit 0x76
        mov eax, dword ptr [ebx]
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 75 18: jne 0x1009a9bf
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, ebx
        mov esi, 2
        mov edi, 1
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        dec esi
        ; Exact mapped bytes 75 F4: jne 0x1009a9b3
        __asm _emit 0x75
        __asm _emit 0xf4
        mov edi, dword ptr [edx + 4]
        mov ebp, dword ptr [edx + 8]
        sub edi, 1ah
        sub ebp, 6ch
        mov esi, ebx
        mov dword ptr [esp + 20h], 2
        mov ecx, dword ptr [esi]
        push ebp
        push edi
        ; Exact mapped bytes E8 F2 42 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x42
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esp + 20h]
        add esi, 4
        dec eax
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 75 E9: jne 0x1009a9d5
        __asm _emit 0x75
        __asm _emit 0xe9
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 68 47 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 4]
        push 101h
        ; Exact mapped bytes E8 5B 47 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x47
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        mov ebx, esi
        inc eax
        cmp eax, 6
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 74 34: je 0x1009aa49
        __asm _emit 0x74
        __asm _emit 0x34
        mov edi, dword ptr [esp + 18h]
        mov esi, dword ptr [esp + 1ch]
        mov eax, dword ptr [esp + 24h]
        mov ecx, 4
        add edi, ecx
        add esi, ecx
        mov ecx, dword ptr [esp + 28h]
        inc eax
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 18h], edi
        mov edx, dword ptr [ecx + 8bch]
        mov dword ptr [esp + 1ch], esi
        cmp eax, edx
        ; Exact mapped bytes 0F 8C 39 FF FF FF: jl 0x1009a982
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 10h]
        mov ebx, 5
        mov edi, 0fffeh
        lea esi, [edx + 21ch]
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 13: jne 0x1009aa7d
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009aa71
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec ebx
        ; Exact mapped bytes 75 DA: jne 0x1009aa5d
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [esp + 14h]
        cmp eax, 6
        ; Exact mapped bytes 0F 8D A1 0C 00 00: jge 0x1009b731
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov edi, 6
        sub edi, eax
        mov ebx, 0fffeh
        lea esi, [edx + eax*8 + 244h]
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 13: jne 0x1009aac7
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009aabb
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 DA: jne 0x1009aaa7
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes E9 5F 0C 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d0ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 51 0C 00 00: je 0x1009b731
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x51
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 0b50h]
        mov eax, dword ptr [ebx + 214h]
        lea ecx, [ebx + 214h]
        mov dword ptr [esp + 28h], edx
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 75 17: jne 0x1009ab13
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009ab01
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 35 F0 56 1C 10: mov esi, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 9ch]
        mov edx, dword ptr [esp + 10h]
        mov edi, 2
        mov ebx, dword ptr [ecx + 4]
        lea esi, [edx + 214h]
        mov ebp, dword ptr [ecx + 8]
        mov eax, dword ptr [esp + 28h]
        ; Exact mapped bytes 0F BF 48 0C: movsx ecx, word ptr [eax + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 0F BF 40 0A: movsx eax, word ptr [eax + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x40
        __asm _emit 0x0a
        lea edx, [ecx + ebp - 62h]
        lea ecx, [eax + ebx - 1ah]
        push edx
        push ecx
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 85 41 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 DD: jne 0x1009ab2e
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ebp, dword ptr [esp + 10h]
        push 0fffffeffh
        mov ecx, dword ptr [ebp + 214h]
        ; Exact mapped bytes E8 FB 45 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x45
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 218h]
        push 101h
        ; Exact mapped bytes E8 EB 45 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x45
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ecx, ecx
        mov eax, dword ptr [edx + 0d50h]
        mov cl, byte ptr [eax + 25h]
        and cl, 1fh
        cmp cl, 2
        ; Exact mapped bytes 75 2D: jne 0x1009abbb
        __asm _emit 0x75
        __asm _emit 0x2d
        mov edx, dword ptr [ebp + 21ch]
        lea ecx, [ebp + 21ch]
        mov al, byte ptr [edx + 24h]
        and al, 1
        cmp al, 1
        ; Exact mapped bytes 75 7E: jne 0x1009ac21
        __asm _emit 0x75
        __asm _emit 0x7e
        mov edx, 2
        mov edi, 0fffeh
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009abad
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes EB 6B: jmp 0x1009ac26
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp + 21ch]
        lea ebx, [ebp + 21ch]
        test byte ptr [ecx + 24h], 1
        ; Exact mapped bytes 75 54: jne 0x1009ac21
        __asm _emit 0x75
        __asm _emit 0x54
        mov esi, ebx
        mov edi, 2
        mov ebp, 1
        mov eax, dword ptr [esi]
        push 148h
        push 2c3h
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 E0 40 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E3: jne 0x1009abd9
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 5E 45 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x45
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        push 101h
        mov ecx, dword ptr [edx + 220h]
        ; Exact mapped bytes E8 4A 45 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x45
        __asm _emit 0x06
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 10h]
        mov edi, 0fffeh
        ; Exact mapped bytes EB 05: jmp 0x1009ac26
        __asm _emit 0xeb
        __asm _emit 0x05
        mov edi, 0fffeh
        lea esi, [ebp + 224h]
        mov ebx, 4
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 13: jne 0x1009ac51
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009ac45
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec ebx
        ; Exact mapped bytes 75 DA: jne 0x1009ac31
        __asm _emit 0x75
        __asm _emit 0xda
        lea esi, [ebp + 244h]
        mov ebx, 6
        mov edx, dword ptr [esi]
        mov al, byte ptr [edx + 24h]
        and al, 1
        cmp al, 1
        ; Exact mapped bytes 75 13: jne 0x1009ac80
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009ac74
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec ebx
        ; Exact mapped bytes 75 DC: jne 0x1009ac62
        __asm _emit 0x75
        __asm _emit 0xdc
        ; Exact mapped bytes E9 A6 0A 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 0F 85 26 01 00 00: jne 0x1009adc2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 2fch]
        mov ecx, dword ptr [eax + 8]
        mov dl, byte ptr [ecx]
        and dl, 0fh
        cmp dl, 3
        ; Exact mapped bytes 0F 85 0F 01 00 00: jne 0x1009adc2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        mov edi, dword ptr [esp + 10h]
        mov eax, dword ptr [edi + ebx*8 + 214h]
        lea esi, [edi + ebx*8 + 214h]
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 75 30: jne 0x1009acfd
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009acd4
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [esi]
        push 0fffffeffh
        ; Exact mapped bytes E8 74 44 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + ebx*8 + 218h]
        push 101h
        ; Exact mapped bytes E8 63 44 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 75 28: jne 0x1009ad29
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [esp + 10h]
        mov edi, 2
        lea esi, [ecx + 214h]
        mov ecx, dword ptr [esi]
        push 133h
        push 0d8h
        ; Exact mapped bytes E8 AF 3F 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x3f
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E9: jne 0x1009ad10
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes EB 1C: jmp 0x1009ad45
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edi, 2
        mov ecx, dword ptr [esi]
        push 181h
        push 202h
        ; Exact mapped bytes E8 91 3F 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x3f
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E9: jne 0x1009ad2e
        __asm _emit 0x75
        __asm _emit 0xe9
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 66 FF FF FF: jl 0x1009acb5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 10h]
        mov edi, 4
        lea esi, [edx + 224h]
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 15: jne 0x1009ad80
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x1009ad72
        __asm _emit 0x75
        __asm _emit 0xf2
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 D8: jne 0x1009ad5e
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [esp + 10h]
        mov edi, 6
        lea esi, [edx + 244h]
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 15: jne 0x1009adb7
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x1009ada9
        __asm _emit 0x75
        __asm _emit 0xf2
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 D8: jne 0x1009ad95
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes E9 6F 09 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov edi, 6
        mov ebx, 0fffeh
        lea esi, [edx + 244h]
        mov eax, dword ptr [esi - 30h]
        lea ecx, [esi - 30h]
        mov dl, byte ptr [eax + 24h]
        and dl, 1
        cmp dl, 1
        ; Exact mapped bytes 75 11: jne 0x1009adf8
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009adec
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 13: jne 0x1009ae18
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009ae0c
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 B8: jne 0x1009add6
        __asm _emit 0x75
        __asm _emit 0xb8
        ; Exact mapped bytes E9 0E 09 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 0F 85 26 01 00 00: jne 0x1009af5a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 2fch]
        mov ecx, dword ptr [eax + 8]
        mov dl, byte ptr [ecx]
        and dl, 0fh
        cmp dl, 2
        ; Exact mapped bytes 0F 85 0F 01 00 00: jne 0x1009af5a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        mov edi, dword ptr [esp + 10h]
        mov eax, dword ptr [edi + ebx*8 + 214h]
        lea esi, [edi + ebx*8 + 214h]
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 75 30: jne 0x1009ae95
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009ae6c
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [esi]
        push 0fffffeffh
        ; Exact mapped bytes E8 DC 42 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x42
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + ebx*8 + 218h]
        push 101h
        ; Exact mapped bytes E8 CB 42 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x42
        __asm _emit 0x06
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 75 28: jne 0x1009aec1
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [esp + 10h]
        mov edi, 2
        lea esi, [ecx + 214h]
        mov ecx, dword ptr [esi]
        push 15bh
        push 0d8h
        ; Exact mapped bytes E8 17 3E 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x3e
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E9: jne 0x1009aea8
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes EB 1C: jmp 0x1009aedd
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edi, 2
        mov ecx, dword ptr [esi]
        push 181h
        push 202h
        ; Exact mapped bytes E8 F9 3D 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E9: jne 0x1009aec6
        __asm _emit 0x75
        __asm _emit 0xe9
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 66 FF FF FF: jl 0x1009ae4d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 10h]
        mov edi, 4
        lea esi, [edx + 224h]
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 15: jne 0x1009af18
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x1009af0a
        __asm _emit 0x75
        __asm _emit 0xf2
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 D8: jne 0x1009aef6
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [esp + 10h]
        mov edi, 6
        lea esi, [edx + 244h]
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 15: jne 0x1009af4f
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x1009af41
        __asm _emit 0x75
        __asm _emit 0xf2
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 D8: jne 0x1009af2d
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes E9 D7 07 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov edi, 6
        mov ebx, 0fffeh
        lea esi, [edx + 244h]
        mov eax, dword ptr [esi - 30h]
        lea ecx, [esi - 30h]
        mov dl, byte ptr [eax + 24h]
        and dl, 1
        cmp dl, 1
        ; Exact mapped bytes 75 11: jne 0x1009af90
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009af84
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 13: jne 0x1009afb0
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009afa4
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 B8: jne 0x1009af6e
        __asm _emit 0x75
        __asm _emit 0xb8
        ; Exact mapped bytes E9 76 07 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 0F 85 26 01 00 00: jne 0x1009b0f2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 2fch]
        mov ecx, dword ptr [eax + 8]
        mov dl, byte ptr [ecx]
        and dl, 0fh
        cmp dl, 5
        ; Exact mapped bytes 0F 85 0F 01 00 00: jne 0x1009b0f2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        mov edi, dword ptr [esp + 10h]
        mov eax, dword ptr [edi + ebx*8 + 214h]
        lea esi, [edi + ebx*8 + 214h]
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 75 30: jne 0x1009b02d
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009b004
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [esi]
        push 0fffffeffh
        ; Exact mapped bytes E8 44 41 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x41
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + ebx*8 + 218h]
        push 101h
        ; Exact mapped bytes E8 33 41 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x41
        __asm _emit 0x06
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 75 28: jne 0x1009b059
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [esp + 10h]
        mov edi, 2
        lea esi, [ecx + 214h]
        mov ecx, dword ptr [esi]
        push 0fbh
        push 0d8h
        ; Exact mapped bytes E8 7F 3C 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E9: jne 0x1009b040
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes EB 1C: jmp 0x1009b075
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edi, 2
        mov ecx, dword ptr [esi]
        push 181h
        push 202h
        ; Exact mapped bytes E8 61 3C 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E9: jne 0x1009b05e
        __asm _emit 0x75
        __asm _emit 0xe9
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 66 FF FF FF: jl 0x1009afe5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 10h]
        mov edi, 4
        lea esi, [edx + 224h]
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 15: jne 0x1009b0b0
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x1009b0a2
        __asm _emit 0x75
        __asm _emit 0xf2
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 D8: jne 0x1009b08e
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [esp + 10h]
        mov edi, 6
        lea esi, [edx + 244h]
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 15: jne 0x1009b0e7
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x1009b0d9
        __asm _emit 0x75
        __asm _emit 0xf2
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 D8: jne 0x1009b0c5
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes E9 3F 06 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov edi, 6
        mov ebx, 0fffeh
        lea esi, [edx + 244h]
        mov eax, dword ptr [esi - 30h]
        lea ecx, [esi - 30h]
        mov dl, byte ptr [eax + 24h]
        and dl, 1
        cmp dl, 1
        ; Exact mapped bytes 75 11: jne 0x1009b128
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009b11c
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 13: jne 0x1009b148
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009b13c
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 B8: jne 0x1009b106
        __asm _emit 0x75
        __asm _emit 0xb8
        ; Exact mapped bytes E9 DE 05 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 214h]
        add ebx, 214h
        test byte ptr [edx + 24h], 1
        ; Exact mapped bytes 75 13: jne 0x1009b178
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, ebx
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009b16c
        __asm _emit 0x75
        __asm _emit 0xf4
        mov esi, ebx
        mov edi, 2
        mov ecx, dword ptr [esi]
        push 112h
        push 227h
        ; Exact mapped bytes E8 40 3B 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x3b
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E9: jne 0x1009b17f
        __asm _emit 0x75
        __asm _emit 0xe9
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 BE 3F 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x3f
        __asm _emit 0x06
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 10h]
        push 101h
        mov ecx, dword ptr [ebp + 218h]
        ; Exact mapped bytes E8 AA 3F 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x3f
        __asm _emit 0x06
        __asm _emit 0x00
        lea esi, [ebp + 21ch]
        mov edi, 5
        mov ebx, 0fffeh
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 13: jne 0x1009b1e6
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009b1da
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 DA: jne 0x1009b1c6
        __asm _emit 0x75
        __asm _emit 0xda
        lea esi, [ebp + 244h]
        mov edi, 6
        mov edx, dword ptr [esi]
        mov al, byte ptr [edx + 24h]
        and al, 1
        cmp al, 1
        ; Exact mapped bytes 75 13: jne 0x1009b215
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009b209
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 DC: jne 0x1009b1f7
        __asm _emit 0x75
        __asm _emit 0xdc
        ; Exact mapped bytes E9 11 05 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0d0ch]
        test edx, edx
        mov dword ptr [esp + 24h], edx
        ; Exact mapped bytes 0F 84 FF 04 00 00: je 0x1009b731
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx + 0b4ch]
        mov edi, dword ptr [edx + 0b50h]
        xor ebx, ebx
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 68 0A: mov bp, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x0a
        mov dword ptr [esp + 18h], ebx
        and ebp, 7c00h
        mov dword ptr [esp + 28h], ecx
        ; Exact mapped bytes 66 85 ED: test bp, bp
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 0F 86 14 01 00 00: jbe 0x1009b371
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 10h]
        add ebp, 214h
        add edi, 0eh
        mov dword ptr [esp + 20h], edi
        lea edi, [edx + 9cch]
        mov dword ptr [esp + 1ch], ebp
        mov dword ptr [esp + 14h], edi
        mov ebp, 0fffeh
        mov edi, 80000000h
        shr edi, cl
        test dword ptr [eax + 254h], edi
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x1009b33c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x1009b337
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        mov esi, dword ptr [esp + 1ch]
        mov edi, 2
        mov ebx, dword ptr [ecx + 4]
        mov ebp, dword ptr [ecx + 8]
        mov eax, dword ptr [esp + 20h]
        ; Exact mapped bytes 0F BF 50 40: movsx edx, word ptr [eax + 0x40]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x50
        __asm _emit 0x40
        lea ecx, [edx + ebp - 53h]
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [esi]
        lea eax, [edx + ebx - 1ah]
        push eax
        ; Exact mapped bytes E8 FE 39 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x39
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 DE: jne 0x1009b2b6
        __asm _emit 0x75
        __asm _emit 0xde
        mov edi, dword ptr [esp + 1ch]
        mov ecx, dword ptr [edi]
        test byte ptr [ecx + 24h], 1
        ; Exact mapped bytes 75 18: jne 0x1009b2fc
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, edi
        mov edx, 2
        mov ebx, 1
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009b2f0
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [edi]
        push 0fffffeffh
        ; Exact mapped bytes E8 58 3E 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x3e
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 4]
        push 101h
        ; Exact mapped bytes E8 4B 3E 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x3e
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 24h]
        inc eax
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes 8B 35 F0 56 1C 10: mov esi, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 18h], eax
        mov ebx, eax
        mov ebp, 0fffeh
        cmp ebx, 6
        ; Exact mapped bytes 74 3A: je 0x1009b376
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [esp + 20h]
        mov edi, dword ptr [esp + 14h]
        add eax, 2
        add edi, 4
        mov dword ptr [esp + 20h], eax
        mov eax, dword ptr [edx + 0b4ch]
        mov dword ptr [esp + 14h], edi
        inc ecx
        ; Exact mapped bytes 66 8B 78 0A: mov di, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x0a
        mov dword ptr [esp + 28h], ecx
        shr edi, 0ah
        and edi, 1fh
        cmp ecx, edi
        ; Exact mapped bytes 0F 8C 12 FF FF FF: jl 0x1009b281
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x1009b376
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ebp, 0fffeh
        mov edx, dword ptr [esp + 10h]
        mov edi, 6
        lea esi, [edx + 244h]
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 13: jne 0x1009b3a5
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009b399
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 DA: jne 0x1009b385
        __asm _emit 0x75
        __asm _emit 0xda
        cmp ebx, 6
        ; Exact mapped bytes 0F 8D 7D 03 00 00: jge 0x1009b731
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov edi, 6
        sub edi, ebx
        lea esi, [edx + ebx*8 + 214h]
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 13: jne 0x1009b3e6
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009b3da
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 DA: jne 0x1009b3c6
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes E9 40 03 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 214h]
        add ebx, 214h
        test byte ptr [edx + 24h], 1
        ; Exact mapped bytes 75 13: jne 0x1009b416
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, ebx
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009b40a
        __asm _emit 0x75
        __asm _emit 0xf4
        mov esi, ebx
        mov edi, 2
        mov ecx, dword ptr [esi]
        push 180h
        push 225h
        ; Exact mapped bytes E8 A2 38 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E9: jne 0x1009b41d
        __asm _emit 0x75
        __asm _emit 0xe9
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 20 3D 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 10h]
        push 101h
        mov ecx, dword ptr [ebp + 218h]
        ; Exact mapped bytes E8 0C 3D 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        lea esi, [ebp + 21ch]
        mov edi, 5
        mov ebx, 0fffeh
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 13: jne 0x1009b484
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009b478
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 DA: jne 0x1009b464
        __asm _emit 0x75
        __asm _emit 0xda
        lea esi, [ebp + 244h]
        mov edi, 6
        mov edx, dword ptr [esi]
        mov al, byte ptr [edx + 24h]
        and al, 1
        cmp al, 1
        ; Exact mapped bytes 75 13: jne 0x1009b4b3
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009b4a7
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 DC: jne 0x1009b495
        __asm _emit 0x75
        __asm _emit 0xdc
        ; Exact mapped bytes E9 73 02 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 0F 85 3C 01 00 00: jne 0x1009b60b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 2fch]
        mov ecx, dword ptr [eax + 8]
        mov dl, byte ptr [ecx]
        and dl, 0fh
        cmp dl, 0bh
        ; Exact mapped bytes 0F 85 25 01 00 00: jne 0x1009b60b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 10h]
        mov edi, 3
        lea esi, [ebx + 214h]
        mov eax, dword ptr [esi]
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 75 13: jne 0x1009b510
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009b504
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 DF: jne 0x1009b4f5
        __asm _emit 0x75
        __asm _emit 0xdf
        lea esi, [ebx + 21ch]
        mov edi, 2
        mov ecx, dword ptr [esi - 8]
        push 0fbh
        push 0d8h
        ; Exact mapped bytes E8 9D 37 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x37
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 87h
        push 26ah
        ; Exact mapped bytes E8 8C 37 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x37
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        push 181h
        push 202h
        ; Exact mapped bytes E8 7A 37 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x37
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 C5: jne 0x1009b521
        __asm _emit 0x75
        __asm _emit 0xc5
        xor ebp, ebp
        mov edi, dword ptr [esp + 10h]
        mov ebx, 3
        lea esi, [edi + 214h]
        lea edi, [edi + ebp*4 + 214h]
        test ebp, ebp
        ; Exact mapped bytes 75 09: jne 0x1009b581
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [esi]
        push 0fffffeffh
        ; Exact mapped bytes EB 07: jmp 0x1009b588
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, dword ptr [edi]
        push 101h
        ; Exact mapped bytes E8 D3 3B 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x3b
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 8
        add edi, 8
        dec ebx
        ; Exact mapped bytes 75 DE: jne 0x1009b574
        __asm _emit 0x75
        __asm _emit 0xde
        inc ebp
        cmp ebp, 2
        ; Exact mapped bytes 7C C2: jl 0x1009b55e
        __asm _emit 0x7c
        __asm _emit 0xc2
        mov ecx, dword ptr [esp + 10h]
        mov edi, 3
        lea esi, [ecx + 22ch]
        mov edx, dword ptr [esi]
        mov al, byte ptr [edx + 24h]
        and al, 1
        cmp al, 1
        ; Exact mapped bytes 75 15: jne 0x1009b5cb
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x1009b5bd
        __asm _emit 0x75
        __asm _emit 0xf2
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 DA: jne 0x1009b5ab
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [esp + 10h]
        mov edi, 6
        lea esi, [ecx + 244h]
        mov edx, dword ptr [esi]
        mov al, byte ptr [edx + 24h]
        and al, 1
        cmp al, 1
        ; Exact mapped bytes 75 15: jne 0x1009b600
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x1009b5f2
        __asm _emit 0x75
        __asm _emit 0xf2
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 DA: jne 0x1009b5e0
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes E9 26 01 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        mov edi, 6
        mov ebx, 0fffeh
        lea esi, [ecx + 244h]
        mov edx, dword ptr [esi - 30h]
        lea ecx, [esi - 30h]
        mov al, byte ptr [edx + 24h]
        and al, 1
        cmp al, 1
        ; Exact mapped bytes 75 11: jne 0x1009b63f
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009b633
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [esi]
        mov dl, byte ptr [ecx + 24h]
        and dl, 1
        cmp dl, 1
        ; Exact mapped bytes 75 13: jne 0x1009b65f
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009b653
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 BA: jne 0x1009b61f
        __asm _emit 0x75
        __asm _emit 0xba
        ; Exact mapped bytes E9 C7 00 00 00: jmp 0x1009b731
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 214h]
        add ebx, 214h
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 75 13: jne 0x1009b68f
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, ebx
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009b683
        __asm _emit 0x75
        __asm _emit 0xf4
        mov esi, ebx
        mov edi, 2
        mov ecx, dword ptr [esi]
        push 18ch
        push 2dh
        ; Exact mapped bytes E8 2C 36 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x36
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x1009b696
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 AA 3A 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x3a
        __asm _emit 0x06
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 10h]
        push 101h
        mov ecx, dword ptr [ebp + 218h]
        ; Exact mapped bytes E8 96 3A 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x3a
        __asm _emit 0x06
        __asm _emit 0x00
        lea esi, [ebp + 21ch]
        mov edi, 5
        mov ebx, 0fffeh
        mov ecx, dword ptr [esi]
        mov dl, byte ptr [ecx + 24h]
        and dl, 1
        cmp dl, 1
        ; Exact mapped bytes 75 13: jne 0x1009b6fa
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009b6ee
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 DA: jne 0x1009b6da
        __asm _emit 0x75
        __asm _emit 0xda
        lea esi, [ebp + 244h]
        mov edi, 6
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 13: jne 0x1009b72b
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009b71f
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 DA: jne 0x1009b70b
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes 66 8B 44 24 34: mov ax, word ptr [esp + 0x34]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x1009b7ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x1009b7ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 07 00: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x1009b7ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 09 00: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x1009b7ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 0B 00: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x1009b7ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 0D 00: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 74 7C: je 0x1009b7ea
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [esp + 2ch]
        xor edx, edx
        mov dl, byte ptr [eax + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 6B: jne 0x1009b7ea
        __asm _emit 0x75
        __asm _emit 0x6b
        mov ebp, dword ptr [esp + 10h]
        mov ebx, 6
        mov edi, 0fffeh
        lea esi, [ebp + 244h]
        mov ecx, dword ptr [esi]
        mov dl, byte ptr [ecx + 24h]
        and dl, 1
        cmp dl, 1
        ; Exact mapped bytes 75 13: jne 0x1009b7b3
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009b7a7
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec ebx
        ; Exact mapped bytes 75 DA: jne 0x1009b793
        __asm _emit 0x75
        __asm _emit 0xda
        lea esi, [ebp + 214h]
        mov ebx, 6
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 13: jne 0x1009b7e4
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1009b7d8
        __asm _emit 0x75
        __asm _emit 0xf4
        add esi, 8
        dec ebx
        ; Exact mapped bytes 75 DA: jne 0x1009b7c4
        __asm _emit 0x75
        __asm _emit 0xda
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
