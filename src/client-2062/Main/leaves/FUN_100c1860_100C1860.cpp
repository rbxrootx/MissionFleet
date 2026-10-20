// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C1860 .. +0x4C3 bytes.
extern "C" __declspec(naked) void FUN_100c1860_100C1860() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 B0 04 00 00: je 0x100c1d20
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        push ebx
        and ecx, 1f00h
        ; Exact mapped bytes 66 81 F9 00 02: cmp cx, 0x200
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 34 04 00 00: jne 0x100c1cb8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 0b74h]
        test al, al
        ; Exact mapped bytes 0F 84 C3 03 00 00: je 0x100c1c55
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 B6 04 00 00: call 0x100c1d50
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov bl, al
        mov al, byte ptr [esi + 0b74h]
        cmp bl, al
        ; Exact mapped bytes 0F 84 6B 01 00 00: je 0x100c1a15
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov ebp, 0fffeh
        xor eax, eax
        xor edx, edx
        mov al, byte ptr [esi + 0b74h]
        mov dl, byte ptr [esi + 0b75h]
        shl eax, 5
        add eax, edx
        lea eax, [ecx + eax*2]
        mov eax, dword ptr [esi + eax*4 + 74h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c18d5
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        inc ecx
        cmp ecx, 2
        ; Exact mapped bytes 7C D6: jl 0x100c18b1
        __asm _emit 0x7c
        __asm _emit 0xd6
        mov byte ptr [esi + 0b75h], 0
        mov byte ptr [esi + 0b74h], bl
        mov dword ptr [esi + 0b78h], 0
        lea eax, [esi + 0a74h]
        mov edi, 20h
        mov edx, 2
        mov ecx, dword ptr [eax - 100h]
        add eax, 4
        ; Exact mapped bytes 66 21 69 24: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        mov ecx, dword ptr [eax - 4]
        ; Exact mapped bytes 66 21 69 24: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 E9: jne 0x100c1902
        __asm _emit 0x75
        __asm _emit 0xe9
        dec edi
        ; Exact mapped bytes 75 E1: jne 0x100c18fd
        __asm _emit 0x75
        __asm _emit 0xe1
        mov al, byte ptr [esi + 0b74h]
        cmp al, 3
        ; Exact mapped bytes 75 50: jne 0x100c1976
        __asm _emit 0x75
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 34: je 0x100c1967
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ecx + 0b58h]
        test edx, edx
        ; Exact mapped bytes 74 2A: je 0x100c1967
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ecx + 0b54h]
        test edx, edx
        ; Exact mapped bytes 74 20: je 0x100c1967
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ecx + 83ch]
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x100c1967
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ecx + 4ch]
        xor edx, 0aaaaaaaah
        ; Exact mapped bytes 75 1A: jne 0x100c1976
        __asm _emit 0x75
        __asm _emit 0x1a
        mov cl, byte ptr [esi + 0b75h]
        add cl, 7
        ; Exact mapped bytes EB 09: jmp 0x100c1970
        __asm _emit 0xeb
        __asm _emit 0x09
        mov cl, byte ptr [esi + 0b75h]
        add cl, 5
        mov byte ptr [esi + 0b75h], cl
        and eax, 0ffh
        xor ecx, ecx
        mov cl, byte ptr [esi + 0b75h]
        mov edi, 1
        shl eax, 5
        mov dl, byte ptr [eax + ecx + 101a7e0ch]
        test dl, dl
        ; Exact mapped bytes 76 2C: jbe 0x100c19c2
        __asm _emit 0x76
        __asm _emit 0x2c
        xor ecx, ecx
        xor edx, edx
        xor eax, eax
        mov dl, byte ptr [esi + 0b74h]
        mov al, byte ptr [esi + 0b75h]
        shl edx, 5
        add edx, eax
        lea edx, [ecx + edx*2]
        mov eax, dword ptr [esi + edx*4 + 74h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c19bc
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        inc ecx
        cmp ecx, 2
        ; Exact mapped bytes 7C D6: jl 0x100c1998
        __asm _emit 0x7c
        __asm _emit 0xd6
        cmp byte ptr [esi + 0b74h], 4
        ; Exact mapped bytes 75 1B: jne 0x100c19e6
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes A1 F8 56 1C 10: mov eax, dword ptr [0x101c56f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov edi, dword ptr [eax + 9a4h]
        mov ecx, edi
        ; Exact mapped bytes E8 22 D5 03 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xd5
        __asm _emit 0x03
        __asm _emit 0x00
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 BA D5 03 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd5
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        cmp bl, 2
        ; Exact mapped bytes 75 13: jne 0x100c1a02
        __asm _emit 0x75
        __asm _emit 0x13
        test al, 1
        ; Exact mapped bytes 0F 84 AE 01 00 00: je 0x100c1ba5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, ebp
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E9 A3 01 00 00: jmp 0x100c1ba5
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test al, 1
        ; Exact mapped bytes 0F 85 9B 01 00 00: jne 0x100c1ba5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        or al, 1
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E9 90 01 00 00: jmp 0x100c1ba5
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b78h]
        and eax, 0ffh
        xor edx, edx
        inc ecx
        mov dl, byte ptr [esi + 0b75h]
        mov dword ptr [esi + 0b78h], ecx
        shl eax, 5
        add eax, edx
        mov eax, dword ptr [eax*4 + 101a7f2ch]
        cmp ecx, eax
        ; Exact mapped bytes 0F 82 91 00 00 00: jb 0x100c1ad4
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64h]
        lea edi, [esi + 64h]
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 0F 84 52 01 00 00: je 0x100c1ba5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov ebp, 0fffeh
        xor edx, edx
        xor eax, eax
        mov dl, byte ptr [esi + 0b74h]
        mov al, byte ptr [esi + 0b75h]
        shl edx, 5
        add edx, eax
        lea eax, [ecx + edx*2]
        mov eax, dword ptr [esi + eax*4 + 74h]
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x100c1a88
        __asm _emit 0x74
        __asm _emit 0x0e
        mov bl, byte ptr [edx + 101a7e0ch]
        test bl, bl
        ; Exact mapped bytes 74 04: je 0x100c1a88
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [edi]
        add edi, 4
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        inc ecx
        cmp ecx, 2
        ; Exact mapped bytes 7C C3: jl 0x100c1a5a
        __asm _emit 0x7c
        __asm _emit 0xc3
        mov ecx, dword ptr [esi + 0b88h]
        mov dword ptr [ecx + 50h], 5
        mov al, byte ptr [esi + 0b74h]
        cmp al, 8
        ; Exact mapped bytes 0F 85 F3 00 00 00: jne 0x100c1ba5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [esi + 0b75h]
        mov al, byte ptr [edx + 101a7f0dh]
        test al, al
        ; Exact mapped bytes 0F 85 DD 00 00 00: jne 0x100c1ba5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x100c1ba5
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebp, ebp
        cmp ecx, 19h
        ; Exact mapped bytes 73 09: jae 0x100c1ae4
        __asm _emit 0x73
        __asm _emit 0x09
        lea ecx, [ecx + ecx*4]
        lea ebp, [ecx + ecx + 0fh]
        ; Exact mapped bytes EB 10: jmp 0x100c1af4
        __asm _emit 0xeb
        __asm _emit 0x10
        lea edx, [eax - 19h]
        cmp ecx, edx
        ; Exact mapped bytes 72 09: jb 0x100c1af4
        __asm _emit 0x72
        __asm _emit 0x09
        sub eax, ecx
        lea eax, [eax + eax*4]
        lea ebp, [eax + eax + 5]
        mov edx, dword ptr [esi + 64h]
        lea ecx, [esi + 64h]
        mov edi, 1
        test byte ptr [edx + 24h], 1
        ; Exact mapped bytes 75 1A: jne 0x100c1b1f
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100c1b0a
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [esi + 0b88h]
        mov dword ptr [eax + 50h], edi
        test ebp, ebp
        ; Exact mapped bytes 74 30: je 0x100c1b53
        __asm _emit 0x74
        __asm _emit 0x30
        xor edi, edi
        xor ecx, ecx
        xor edx, edx
        mov cl, byte ptr [esi + 0b74h]
        mov dl, byte ptr [esi + 0b75h]
        shl ecx, 5
        add ecx, edx
        lea eax, [edi + ecx*2]
        mov ecx, dword ptr [esi + eax*4 + 74h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100c1b4b
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 D5 D5 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xd5
        __asm _emit 0x03
        __asm _emit 0x00
        inc edi
        cmp edi, 2
        ; Exact mapped bytes 7C D4: jl 0x100c1b25
        __asm _emit 0x7c
        __asm _emit 0xd4
        ; Exact mapped bytes EB 52: jmp 0x100c1ba5
        __asm _emit 0xeb
        __asm _emit 0x52
        cmp dword ptr [esi + 0b78h], 19h
        ; Exact mapped bytes 75 49: jne 0x100c1ba5
        __asm _emit 0x75
        __asm _emit 0x49
        xor eax, eax
        mov al, byte ptr [esi + 0b74h]
        dec eax
        cmp eax, 7
        ; Exact mapped bytes 77 3B: ja 0x100c1ba5
        __asm _emit 0x77
        __asm _emit 0x3b
        ; Exact mapped bytes FF 24 85 24 1D 0C 10: jmp dword ptr [eax*4 + 0x100c1d24]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x1d
        __asm _emit 0x0c
        __asm _emit 0x10
        mov ecx, esi
        ; Exact mapped bytes E8 A8 03 00 00: call 0x100c1f20
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2B: jmp 0x100c1ba5
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov ecx, esi
        ; Exact mapped bytes E8 9F 06 00 00: call 0x100c2220
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x100c1ba5
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, esi
        ; Exact mapped bytes E8 A6 09 00 00: call 0x100c2530
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 19: jmp 0x100c1ba5
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, esi
        ; Exact mapped bytes E8 ED 0B 00 00: call 0x100c2780
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x100c1ba5
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, esi
        ; Exact mapped bytes E8 B4 0D 00 00: call 0x100c2950
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x100c1ba5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 3B 15 00 00: call 0x100c30e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 0b75h]
        pop ebp
        test al, al
        ; Exact mapped bytes 76 37: jbe 0x100c1be7
        __asm _emit 0x76
        __asm _emit 0x37
        xor ecx, ecx
        and eax, 0ffh
        mov cl, byte ptr [esi + 0b74h]
        shl ecx, 5
        mov dl, byte ptr [ecx + eax + 101a7e0bh]
        mov eax, dword ptr [esi + 0b80h]
        test dl, dl
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes 76 0D: jbe 0x100c1be1
        __asm _emit 0x76
        __asm _emit 0x0d
        test ecx, ecx
        ; Exact mapped bytes 75 23: jne 0x100c1bfb
        __asm _emit 0x75
        __asm _emit 0x23
        mov dword ptr [eax + 50h], 1
        ; Exact mapped bytes EB 1A: jmp 0x100c1bfb
        __asm _emit 0xeb
        __asm _emit 0x1a
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x100c1bfb
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes EB 0D: jmp 0x100c1bf4
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [esi + 0b80h]
        mov ecx, dword ptr [eax + 50h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x100c1bfb
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [eax + 50h], 0
        xor edx, edx
        xor eax, eax
        mov dl, byte ptr [esi + 0b74h]
        mov al, byte ptr [esi + 0b75h]
        shl edx, 5
        mov cl, byte ptr [edx + eax + 101a7e0dh]
        test cl, cl
        ; Exact mapped bytes 76 1D: jbe 0x100c1c36
        __asm _emit 0x76
        __asm _emit 0x1d
        mov eax, dword ptr [esi + 0b84h]
        mov ecx, dword ptr [eax + 50h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 D1 00 00 00: jne 0x100c1cfb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 50h], 1
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x100c1cfb
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 100c32b0h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x100c1cfb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0b84h]
        mov dword ptr [edx + 50h], 0
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x100c1cfb
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 F4 00 00 00: call 0x100c1d50
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        mov byte ptr [esi + 0b74h], al
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x100c1cfb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        xor ecx, ecx
        mov cl, byte ptr [esi + 0b75h]
        shl eax, 5
        mov dl, byte ptr [eax + ecx + 101a7e0ch]
        test dl, dl
        ; Exact mapped bytes 76 76: jbe 0x100c1cfb
        __asm _emit 0x76
        __asm _emit 0x76
        xor ecx, ecx
        mov edx, 1
        xor eax, eax
        xor ebx, ebx
        mov al, byte ptr [esi + 0b74h]
        mov bl, byte ptr [esi + 0b75h]
        shl eax, 5
        add eax, ebx
        lea eax, [ecx + eax*2]
        mov eax, dword ptr [esi + eax*4 + 74h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c1cb0
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        inc ecx
        cmp ecx, 2
        ; Exact mapped bytes 7C D6: jl 0x100c1c8c
        __asm _emit 0x7c
        __asm _emit 0xd6
        ; Exact mapped bytes EB 43: jmp 0x100c1cfb
        __asm _emit 0xeb
        __asm _emit 0x43
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 29: jne 0x100c1ce8
        __asm _emit 0x75
        __asm _emit 0x29
        and eax, 0e2ffh
        lea ecx, [esi + 6ch]
        or eax, 202h
        mov edx, 2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov edi, 1
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100c1cda
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes EB 13: jmp 0x100c1cfb
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 0C: jne 0x100c1cfb
        __asm _emit 0x75
        __asm _emit 0x0c
        and eax, 0e5fah
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3ch]
        pop ebx
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x100c1d20
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x100c1d1b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x100c1d03
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
