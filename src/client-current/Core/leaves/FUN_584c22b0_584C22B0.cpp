// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C22B0 .. +0xE83 bytes.
extern "C" __declspec(naked) void FUN_584c22b0_584C22B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 170h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov dword ptr [ebp - 58h], ecx
        mov dword ptr [ebp - 90h], 0
        xor eax, eax
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 58h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 0F 84 3D 0E 00 00: je 0x584c3121
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 F1 26 FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x26
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 8
        ; Exact mapped bytes 0F 85 A7 02 00 00: jne 0x584c25aa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 D2 26 FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x26
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 1
        imul ecx, edx, 0
        mov byte ptr [ebp + ecx - 5ch], al
        mov edx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 AB 26 FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x26
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 48 10: and cx, word ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x48
        __asm _emit 0x10
        mov edx, 1
        shl edx, 0
        mov byte ptr [ebp + edx - 5ch], cl
        mov eax, 1
        shl eax, 1
        mov dword ptr [ebp - 0c0h], eax
        cmp dword ptr [ebp - 0c0h], 4
        ; Exact mapped bytes 73 02: jae 0x584c2362
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 06: jmp 0x584c2368
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes E8 42 EE 36 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xee
        __asm _emit 0x36
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0c0h]
        mov byte ptr [ebp + ecx - 5ch], 0
        mov byte ptr [ebp - 64h], 0
        mov dword ptr [ebp - 80h], 1ch
        ; Exact mapped bytes EB 09: jmp 0x584c2389
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 80h]
        add edx, 1
        mov dword ptr [ebp - 80h], edx
        cmp dword ptr [ebp - 80h], 20h
        ; Exact mapped bytes 0F 8D 34 01 00 00: jge 0x584c24c7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 124h], ecx
        mov edx, dword ptr [ebp - 80h]
        push edx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 92 AC FC FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        cmp dword ptr [ebp - 158h], 0
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x584c24c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 98h], 5
        ; Exact mapped bytes EB 0F: jmp 0x584c23dc
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 98h]
        add eax, 1
        mov dword ptr [ebp - 98h], eax
        cmp dword ptr [ebp - 98h], 20h
        ; Exact mapped bytes 0F 8D D9 00 00 00: jge 0x584c24c2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 15ch], edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 59 07 FE FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, 8
        mov esi, eax
        lea edi, [ebp - 54h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 160h], edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 5F FE FF FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x584c24bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [ebp - 54h]
        cmp ecx, 5
        ; Exact mapped bytes 7C 7B: jl 0x584c24bd
        __asm _emit 0x7c
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 164h], eax
        movzx ecx, byte ptr [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 32 FE FF FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 2]
        mov eax, dword ptr [ebp - 80h]
        sub eax, 11h
        cmp edx, eax
        ; Exact mapped bytes 75 51: jne 0x584c24bd
        __asm _emit 0x75
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 25 FC FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x25
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        mov ecx, dword ptr [ebp - 80h]
        push ecx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 44 D6 FE FF: call 0x584afad0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 2C: jne 0x584c24bd
        __asm _emit 0x75
        __asm _emit 0x2c
        movzx edx, byte ptr [ebp - 53h]
        xor edx, 55h
        mov byte ptr [ebp - 64h], dl
        movzx eax, byte ptr [ebp - 64h]
        mov ecx, 1
        shl ecx, 1
        movzx edx, byte ptr [ebp + ecx - 5ch]
        cmp eax, edx
        ; Exact mapped bytes 7E 0E: jle 0x584c24bd
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, 1
        shl eax, 1
        mov cl, byte ptr [ebp - 64h]
        mov byte ptr [ebp + eax - 5ch], cl
        ; Exact mapped bytes E9 0B FF FF FF: jmp 0x584c23cd
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B9 FE FF FF: jmp 0x584c2380
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 0E 25 FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x25
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 08: mov ax, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x08
        ; Exact mapped bytes 66 C1 E8 06: shr ax, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 1
        imul ecx, edx, 3
        mov byte ptr [ebp + ecx - 5ch], al
        mov edx, 1
        imul eax, edx, 0
        movzx ecx, byte ptr [ebp + eax - 5ch]
        and ecx, 0ffh
        shl ecx, 18h
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ebp + eax - 34h], ecx
        mov ecx, 1
        shl ecx, 0
        movzx edx, byte ptr [ebp + ecx - 5ch]
        and edx, 0ffh
        shl edx, 10h
        mov eax, 4
        shl eax, 0
        mov dword ptr [ebp + eax - 34h], edx
        mov ecx, 1
        shl ecx, 1
        movzx edx, byte ptr [ebp + ecx - 5ch]
        and edx, 0ffh
        shl edx, 8
        mov eax, 4
        shl eax, 1
        mov dword ptr [ebp + eax - 34h], edx
        mov ecx, 1
        imul edx, ecx, 3
        movzx eax, byte ptr [ebp + edx - 5ch]
        and eax, 0ffh
        mov ecx, 4
        imul edx, ecx, 3
        mov dword ptr [ebp + edx - 34h], eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp + ecx - 34h]
        or eax, dword ptr [ebp + edx - 34h]
        mov ecx, 4
        shl ecx, 1
        or eax, dword ptr [ebp + ecx - 34h]
        mov edx, 4
        imul ecx, edx, 3
        or eax, dword ptr [ebp + ecx - 34h]
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes E9 77 0B 00 00: jmp 0x584c3121
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 2B 24 FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 9
        ; Exact mapped bytes 0F 85 AE 03 00 00: jne 0x584c2977
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 0C 24 FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 1
        imul ecx, edx, 0
        mov byte ptr [ebp + ecx - 5ch], al
        mov edx, 1
        imul eax, edx, 3
        mov dword ptr [ebp - 0c4h], eax
        cmp dword ptr [ebp - 0c4h], 4
        ; Exact mapped bytes 73 02: jae 0x584c2609
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 06: jmp 0x584c260f
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes E8 9B EB 36 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xeb
        __asm _emit 0x36
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0c4h]
        mov byte ptr [ebp + ecx - 5ch], 0
        mov dword ptr [ebp - 0c8h], 0
        xor edx, edx
        ; Exact mapped bytes 66 89 55 84: mov word ptr [ebp - 0x7c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x84
        mov dword ptr [ebp - 0a4h], 0
        xor eax, eax
        ; Exact mapped bytes 66 89 85 7C FF FF FF: mov word ptr [ebp - 0x84], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 61h], 0
        mov dword ptr [ebp - 70h], 0
        ; Exact mapped bytes EB 09: jmp 0x584c2653
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 70h]
        add ecx, 1
        mov dword ptr [ebp - 70h], ecx
        cmp dword ptr [ebp - 70h], 20h
        ; Exact mapped bytes 0F 8D 78 01 00 00: jge 0x584c27d5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 0e8h], eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 E8 A9 FC FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 7C FF FF FF: mov word ptr [ebp - 0x84], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 84h]
        cmp edx, 6
        ; Exact mapped bytes 0F 85 41 01 00 00: jne 0x584c27d0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0ech], ecx
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 96 A9 FC FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xa9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 25 23 FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x23
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [eax + 268h]
        shr edx, cl
        and edx, 1
        mov dword ptr [ebp - 0c8h], edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 80 0A 00 00: call 0x584c3160
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        movzx esi, al
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 51 0A 00 00: call 0x584c3140
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, al
        lea eax, [edx + esi*2 + 1]
        mov dword ptr [ebp - 0a4h], eax
        cmp dword ptr [ebp - 0c8h], 1
        ; Exact mapped bytes 0F 85 BB 00 00 00: jne 0x584c27c4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 0f0h], edx
        mov eax, dword ptr [ebp - 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 69 FB FF FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x584c27c4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 0f4h], edx
        mov eax, dword ptr [ebp - 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 43 FB FF FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 2]
        cmp ecx, 1
        ; Exact mapped bytes 75 6E: jne 0x584c27c4
        __asm _emit 0x75
        __asm _emit 0x6e
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 65: je 0x584c27c4
        __asm _emit 0x74
        __asm _emit 0x65
        mov edx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 C6 D4 FD FF: call 0x5849fc30
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp - 70h]
        shl eax, cl
        and eax, 80000000h
        ; Exact mapped bytes 74 4C: je 0x584c27c4
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 0fch], edx
        mov eax, dword ptr [ebp - 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 CA 03 FE FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 1]
        xor ecx, 55h
        mov byte ptr [ebp - 61h], cl
        movzx edx, byte ptr [ebp - 61h]
        mov eax, 1
        imul ecx, eax, 3
        movzx eax, byte ptr [ebp + ecx - 5ch]
        cmp edx, eax
        ; Exact mapped bytes 7E 0F: jle 0x584c27c4
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, 1
        imul edx, ecx, 3
        mov al, byte ptr [ebp - 61h]
        mov byte ptr [ebp + edx - 5ch], al
        ; Exact mapped bytes 66 8B 4D 84: mov cx, word ptr [ebp - 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x84
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D 84: mov word ptr [ebp - 0x7c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x84
        ; Exact mapped bytes E9 75 FE FF FF: jmp 0x584c264a
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 1
        shl edx, 0
        mov al, byte ptr [ebp - 7ch]
        mov byte ptr [ebp + edx - 5ch], al
        ; Exact mapped bytes F3 0F 10 05 B8 5A 89 58: movss xmm0, dword ptr [0x58895ab8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 85 50 FF FF FF: movss dword ptr [ebp - 0xb0], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 85 44 FF FF FF: movss dword ptr [ebp - 0xbc], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], 0
        ; Exact mapped bytes EB 0F: jmp 0x584c281a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 94h]
        add ecx, 1
        mov dword ptr [ebp - 94h], ecx
        mov edx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 BB 21 FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x21
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0C: mov ax, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E8 0A: shr ax, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp dword ptr [ebp - 94h], ecx
        ; Exact mapped bytes 7D 61: jge 0x584c289d
        __asm _emit 0x7d
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 100h], eax
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 06 A8 FC FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xa8
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 6
        ; Exact mapped bytes 75 36: jne 0x584c2898
        __asm _emit 0x75
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 7F EC FF FF: call 0x584c14f0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D9 9D 44 FF FF FF: fstp dword ptr [ebp - 0xbc]
        __asm _emit 0xd9
        __asm _emit 0x9d
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 10 85 50 FF FF FF: movss xmm0, dword ptr [ebp - 0xb0]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 2F 85 44 FF FF FF: comiss xmm0, dword ptr [ebp - 0xbc]
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 76 10: jbe 0x584c2898
        __asm _emit 0x76
        __asm _emit 0x10
        ; Exact mapped bytes F3 0F 10 85 44 FF FF FF: movss xmm0, dword ptr [ebp - 0xbc]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 11 85 50 FF FF FF: movss dword ptr [ebp - 0xb0], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 6E FF FF FF: jmp 0x584c280b
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 10 85 50 FF FF FF: movss xmm0, dword ptr [ebp - 0xb0]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 5E 05 B0 5A 89 58: divss xmm0, dword ptr [0x58895ab0]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 2C C8: cvttss2si ecx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        mov edx, 1
        shl edx, 1
        mov byte ptr [ebp + edx - 5ch], cl
        mov eax, 1
        imul ecx, eax, 0
        movzx edx, byte ptr [ebp + ecx - 5ch]
        and edx, 0ffh
        shl edx, 18h
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [ebp + ecx - 24h], edx
        mov edx, 1
        shl edx, 0
        movzx eax, byte ptr [ebp + edx - 5ch]
        and eax, 0ffh
        shl eax, 10h
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [ebp + ecx - 24h], eax
        mov edx, 1
        shl edx, 1
        movzx eax, byte ptr [ebp + edx - 5ch]
        and eax, 0ffh
        shl eax, 8
        mov ecx, 4
        shl ecx, 1
        mov dword ptr [ebp + ecx - 24h], eax
        mov edx, 1
        imul eax, edx, 3
        movzx ecx, byte ptr [ebp + eax - 5ch]
        and ecx, 0ffh
        mov edx, 4
        imul eax, edx, 3
        mov dword ptr [ebp + eax - 24h], ecx
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp + edx - 24h]
        or ecx, dword ptr [ebp + eax - 24h]
        mov edx, 4
        shl edx, 1
        or ecx, dword ptr [ebp + edx - 24h]
        mov eax, 4
        imul edx, eax, 3
        or ecx, dword ptr [ebp + edx - 24h]
        mov dword ptr [ebp - 90h], ecx
        ; Exact mapped bytes E9 AA 07 00 00: jmp 0x584c3121
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 5E 20 FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 0F 85 15 04 00 00: jne 0x584c2daf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 3B 20 FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xff
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
        mov edx, 0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 1
        imul edx, eax, 0
        mov byte ptr [ebp + edx - 5ch], cl
        mov dword ptr [ebp - 0cch], 1
        cmp dword ptr [ebp - 0cch], 4
        ; Exact mapped bytes 73 02: jae 0x584c29d6
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 06: jmp 0x584c29dc
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes E8 CE E7 36 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe7
        __asm _emit 0x36
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 0cch]
        mov byte ptr [ebp + eax - 5ch], 0
        mov dword ptr [ebp - 10ch], 0
        mov dword ptr [ebp - 9ch], 0
        xor ecx, ecx
        ; Exact mapped bytes 66 89 8D 78 FF FF FF: mov word ptr [ebp - 0x88], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 62h], 0
        mov dword ptr [ebp - 74h], 0
        ; Exact mapped bytes EB 09: jmp 0x584c2a1a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 74h]
        add edx, 1
        mov dword ptr [ebp - 74h], edx
        cmp dword ptr [ebp - 74h], 20h
        ; Exact mapped bytes 0F 8D 5F 01 00 00: jge 0x584c2b83
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 104h], ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 21 A6 FC FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xa6
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 78 FF FF FF: mov word ptr [ebp - 0x88], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 88h]
        cmp eax, 6
        ; Exact mapped bytes 0F 85 28 01 00 00: jne 0x584c2b7e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 108h], edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 CF A5 FC FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xa5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        mov ecx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 5E 1F FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x1f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [eax + 268h]
        shr edx, cl
        and edx, 1
        mov dword ptr [ebp - 10ch], edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 B9 06 00 00: call 0x584c3160
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx esi, al
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 8A 06 00 00: call 0x584c3140
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, al
        lea eax, [edx + esi*2 + 1]
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 110h], edx
        mov eax, dword ptr [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 AF F7 FF FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x584c2b7e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 114h], edx
        mov eax, dword ptr [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 89 F7 FF FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 2]
        cmp ecx, 1
        ; Exact mapped bytes 75 6E: jne 0x584c2b7e
        __asm _emit 0x75
        __asm _emit 0x6e
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 65: je 0x584c2b7e
        __asm _emit 0x74
        __asm _emit 0x65
        mov edx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 0C D1 FD FF: call 0x5849fc30
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp - 74h]
        shl eax, cl
        and eax, 80000000h
        ; Exact mapped bytes 74 4C: je 0x584c2b7e
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 11ch], edx
        mov eax, dword ptr [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 10 00 FE FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 1]
        xor ecx, 55h
        mov byte ptr [ebp - 62h], cl
        movzx edx, byte ptr [ebp - 62h]
        mov eax, 1
        shl eax, 0
        movzx ecx, byte ptr [ebp + eax - 5ch]
        cmp edx, ecx
        ; Exact mapped bytes 7E 0F: jle 0x584c2b7e
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edx, 1
        shl edx, 0
        mov al, byte ptr [ebp - 62h]
        mov byte ptr [ebp + edx - 5ch], al
        ; Exact mapped bytes E9 8E FE FF FF: jmp 0x584c2a11
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 10 05 B8 5A 89 58: movss xmm0, dword ptr [0x58895ab8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 85 48 FF FF FF: movss dword ptr [ebp - 0xb8], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 85 4C FF FF FF: movss dword ptr [ebp - 0xb4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584c2bb0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 6ch]
        add ecx, 1
        mov dword ptr [ebp - 6ch], ecx
        mov edx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 25 1E FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x1e
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0C: mov ax, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E8 0A: shr ax, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp dword ptr [ebp - 6ch], ecx
        ; Exact mapped bytes 7D 58: jge 0x584c2c27
        __asm _emit 0x7d
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 120h], eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 76 A4 FC FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 6
        ; Exact mapped bytes 75 33: jne 0x584c2c25
        __asm _emit 0x75
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 F2 E8 FF FF: call 0x584c14f0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D9 9D 4C FF FF FF: fstp dword ptr [ebp - 0xb4]
        __asm _emit 0xd9
        __asm _emit 0x9d
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 10 85 48 FF FF FF: movss xmm0, dword ptr [ebp - 0xb8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 2F 85 4C FF FF FF: comiss xmm0, dword ptr [ebp - 0xb4]
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 76 10: jbe 0x584c2c25
        __asm _emit 0x76
        __asm _emit 0x10
        ; Exact mapped bytes F3 0F 10 85 4C FF FF FF: movss xmm0, dword ptr [ebp - 0xb4]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 11 85 48 FF FF FF: movss dword ptr [ebp - 0xb8], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 80: jmp 0x584c2ba7
        __asm _emit 0xeb
        __asm _emit 0x80
        ; Exact mapped bytes F3 0F 10 85 48 FF FF FF: movss xmm0, dword ptr [ebp - 0xb8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 5E 05 B0 5A 89 58: divss xmm0, dword ptr [0x58895ab0]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 2C C8: cvttss2si ecx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        mov edx, 1
        shl edx, 1
        mov byte ptr [ebp + edx - 5ch], cl
        mov dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584c2c58
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 6ch]
        add eax, 1
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 7D 1D FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x1d
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 EA 0A: shr dx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes 7D 7C: jge 0x584c2cf3
        __asm _emit 0x7d
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 148h], edx
        mov eax, dword ptr [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 CE A3 FC FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 6
        ; Exact mapped bytes 75 54: jne 0x584c2cee
        __asm _emit 0x75
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 8B A3 FC FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 90 98 00 00 00: mov dx, word ptr [eax + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        mov dword ptr [ebp - 12ch], eax
        mov ecx, 1
        imul edx, ecx, 3
        mov al, byte ptr [ebp + edx - 5ch]
        mov byte ptr [ebp - 75h], al
        movzx ecx, byte ptr [ebp - 75h]
        add ecx, dword ptr [ebp - 12ch]
        mov edx, 1
        imul eax, edx, 3
        mov byte ptr [ebp + eax - 5ch], cl
        ; Exact mapped bytes E9 5C FF FF FF: jmp 0x584c2c4f
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 1
        imul edx, ecx, 0
        movzx eax, byte ptr [ebp + edx - 5ch]
        and eax, 0ffh
        shl eax, 18h
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [ebp + edx - 14h], eax
        mov eax, 1
        shl eax, 0
        movzx ecx, byte ptr [ebp + eax - 5ch]
        and ecx, 0ffh
        shl ecx, 10h
        mov edx, 4
        shl edx, 0
        mov dword ptr [ebp + edx - 14h], ecx
        mov eax, 1
        shl eax, 1
        movzx ecx, byte ptr [ebp + eax - 5ch]
        and ecx, 0ffh
        shl ecx, 8
        mov edx, 4
        shl edx, 1
        mov dword ptr [ebp + edx - 14h], ecx
        mov eax, 1
        imul ecx, eax, 3
        movzx edx, byte ptr [ebp + ecx - 5ch]
        and edx, 0ffh
        mov eax, 4
        imul ecx, eax, 3
        mov dword ptr [ebp + ecx - 14h], edx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp + eax - 14h]
        or edx, dword ptr [ebp + ecx - 14h]
        mov eax, 4
        shl eax, 1
        or edx, dword ptr [ebp + eax - 14h]
        mov ecx, 4
        imul eax, ecx, 3
        or edx, dword ptr [ebp + eax - 14h]
        mov dword ptr [ebp - 90h], edx
        ; Exact mapped bytes E9 72 03 00 00: jmp 0x584c3121
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        and ecx, 0ffffffh
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 60h]
        and edx, 0ff00ffffh
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 60h]
        and eax, 0ffff000fh
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 60h]
        and ecx, 0fffffff0h
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 FA 1B FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x1b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        mov eax, dword ptr [ebp - 130h]
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
        mov edx, 0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        movzx eax, cx
        and eax, 0ffh
        shl eax, 18h
        mov ecx, dword ptr [ebp - 60h]
        and ecx, 0ffffffh
        or ecx, eax
        mov dword ptr [ebp - 60h], ecx
        mov dword ptr [ebp - 0d0h], 1
        cmp dword ptr [ebp - 0d0h], 4
        ; Exact mapped bytes 73 02: jae 0x584c2e30
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 06: jmp 0x584c2e36
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes E8 74 E3 36 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xe3
        __asm _emit 0x36
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 0d0h]
        mov byte ptr [ebp + edx - 5ch], 0
        mov dword ptr [ebp - 0d4h], 0
        mov dword ptr [ebp - 0a0h], 0
        xor eax, eax
        ; Exact mapped bytes 66 89 85 74 FF FF FF: mov word ptr [ebp - 0x8c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 63h], 0
        mov dword ptr [ebp - 68h], 0
        ; Exact mapped bytes EB 09: jmp 0x584c2e74
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 68h]
        add ecx, 1
        mov dword ptr [ebp - 68h], ecx
        cmp dword ptr [ebp - 68h], 20h
        ; Exact mapped bytes 0F 8D 76 01 00 00: jge 0x584c2ff4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 C7 A1 FC FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 74 FF FF FF: mov word ptr [ebp - 0x8c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 8ch]
        cmp edx, 5
        ; Exact mapped bytes 0F 85 3F 01 00 00: jne 0x584c2fef
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 138h], ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 75 A1 FC FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 04 1B FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x1b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 68h]
        mov edx, dword ptr [eax + 268h]
        shr edx, cl
        and edx, 1
        mov dword ptr [ebp - 0d4h], edx
        mov eax, dword ptr [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 5F 02 00 00: call 0x584c3160
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx esi, al
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 30 02 00 00: call 0x584c3140
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, al
        lea eax, [edx + esi*2 + 1]
        mov dword ptr [ebp - 0a0h], eax
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 0F 85 C5 00 00 00: jne 0x584c2fef
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 13ch], edx
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 48 F3 FF FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x584c2fef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 140h], edx
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 22 F3 FF FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 2]
        cmp ecx, 1
        ; Exact mapped bytes 75 78: jne 0x584c2fef
        __asm _emit 0x75
        __asm _emit 0x78
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 74 6F: je 0x584c2fef
        __asm _emit 0x74
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 A5 CC FD FF: call 0x5849fc30
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp - 68h]
        shl eax, cl
        and eax, 80000000h
        ; Exact mapped bytes 74 56: je 0x584c2fef
        __asm _emit 0x74
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 168h], edx
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 A9 FB FD FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 1]
        xor ecx, 55h
        mov byte ptr [ebp - 63h], cl
        movzx edx, byte ptr [ebp - 63h]
        mov eax, dword ptr [ebp - 60h]
        shr eax, 10h
        and eax, 0ffh
        cmp edx, eax
        ; Exact mapped bytes 76 1B: jbe 0x584c2fef
        __asm _emit 0x76
        __asm _emit 0x1b
        movzx ecx, byte ptr [ebp - 63h]
        and ecx, 0ffh
        shl ecx, 10h
        mov edx, dword ptr [ebp - 60h]
        and edx, 0ff00ffffh
        or edx, ecx
        mov dword ptr [ebp - 60h], edx
        ; Exact mapped bytes E9 77 FE FF FF: jmp 0x584c2e6b
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], 0
        mov dword ptr [ebp - 150h], 0
        lea eax, [ebp - 14ch]
        push eax
        lea ecx, [ebp - 150h]
        push ecx
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 2F DE FD FF: call 0x584a0e50
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xde
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ach], 0
        mov dword ptr [ebp - 0a8h], 0
        mov dword ptr [ebp - 68h], 0
        ; Exact mapped bytes EB 09: jmp 0x584c3048
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 68h]
        add edx, 1
        mov dword ptr [ebp - 68h], edx
        cmp dword ptr [ebp - 68h], 20h
        ; Exact mapped bytes 7D 70: jge 0x584c30be
        __asm _emit 0x7d
        __asm _emit 0x70
        mov eax, dword ptr [ebp - 68h]
        push eax
        lea ecx, [ebp - 170h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 EF E0 FF FF: call 0x584c1150
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 83 E3 FD FF: call 0x584a13f0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 0e0h]
        cmp edx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes 7E 0E: jle 0x584c308a
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0C: jmp 0x584c3096
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 0d8h], ecx
        mov edx, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 0a8h], edx
        mov eax, dword ptr [ebp - 0a8h]
        cmp eax, dword ptr [ebp - 0ach]
        ; Exact mapped bytes 7E 0C: jle 0x584c30bc
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 0ach], ecx
        ; Exact mapped bytes EB 81: jmp 0x584c303f
        __asm _emit 0xeb
        __asm _emit 0x81
        mov edx, dword ptr [ebp - 0ach]
        and edx, 0fffh
        shl edx, 4
        mov eax, dword ptr [ebp - 60h]
        and eax, 0ffff000fh
        or eax, edx
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 7B 19 FC FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x19
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        mov edx, dword ptr [ebp - 154h]
        movzx eax, word ptr [edx + 40h]
        cdq
        and edx, 0fh
        add eax, edx
        sar eax, 4
        and eax, 0fh
        mov ecx, dword ptr [ebp - 60h]
        and ecx, 0fffffff0h
        or ecx, eax
        mov dword ptr [ebp - 60h], ecx
        push 4
        lea edx, [ebp - 60h]
        push edx
        lea eax, [ebp - 90h]
        push eax
        ; Exact mapped bytes E8 72 97 38 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x97
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 90h]
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 1D DF 36 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xdf
        __asm _emit 0x36
        __asm _emit 0x00
    }
}
