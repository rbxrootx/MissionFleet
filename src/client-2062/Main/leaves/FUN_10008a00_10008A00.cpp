// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10008A00 .. +0x44B bytes.
extern "C" __declspec(naked) void FUN_10008a00_10008A00() {
    __asm {
        mov eax, dword ptr [esp + 0ch]
        push ebx
        mov ebx, ecx
        push ebp
        xor ebp, ebp
        push esi
        ; Exact mapped bytes 66 81 63 24 FA FF: and word ptr [ebx + 0x24], 0xfffa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x63
        __asm _emit 0x24
        __asm _emit 0xfa
        __asm _emit 0xff
        mov esi, dword ptr [esp + 14h]
        mov dword ptr [ebx + 7ch], eax
        mov dword ptr [ebx + 4b8h], 0ffffffffh
        push edi
        mov dword ptr [ebx + 33ch], ebp
        mov dword ptr [ebx + 320h], ebp
        lea edi, [ebx + 228h]
        mov ecx, 35h
        mov dword ptr [ebx + 324h], ebp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 83 BB C0 02 00 00 02: cmp word ptr [ebx + 0x2c0], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 75 58: jne 0x10008aa4
        __asm _emit 0x75
        __asm _emit 0x58
        xor eax, eax
        ; Exact mapped bytes 66 8B 83 D2 02 00 00: mov ax, word ptr [ebx + 0x2d2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + eax*2]
        shl ecx, 3
        sub ecx, eax
        mov eax, 51eb851fh
        lea ecx, [ecx + ecx*4]
        imul ecx
        sar edx, 5
        mov ecx, edx
        xor eax, eax
        shr ecx, 1fh
        add edx, ecx
        ; Exact mapped bytes 66 89 93 D2 02 00 00: mov word ptr [ebx + 0x2d2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 83 C2 02 00 00: mov ax, word ptr [ebx + 0x2c2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [eax + eax*4]
        lea eax, [eax + edx*2]
        lea ecx, [eax + eax*4]
        mov eax, 51eb851fh
        shl ecx, 1
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        ; Exact mapped bytes 66 89 93 C2 02 00 00: mov word ptr [ebx + 0x2c2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 83 D0 02 00 00: mov ax, word ptr [ebx + 0x2d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 83 1C 05 00 00: mov word ptr [ebx + 0x51c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 524h]
        and eax, 0ffffh
        push eax
        push eax
        ; Exact mapped bytes E8 8C 18 02 00: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 528h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 83 1C 05 00 00: mov ax, word ptr [ebx + 0x51c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push eax
        ; Exact mapped bytes E8 76 18 02 00: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 524h]
        mov edi, 0fffeh
        mov esi, dword ptr [esp + 24h]
        xor ecx, ecx
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 528h]
        xor edx, edx
        push ebp
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 520h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 4E 0E: mov cx, word ptr [esi + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 93 C2 02 00 00: mov dx, word ptr [ebx + 0x2c2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add ecx, 64h
        imul ecx, edx
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        xor ecx, ecx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        ; Exact mapped bytes 66 89 93 C2 02 00 00: mov word ptr [ebx + 0x2c2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 10: mov cx, word ptr [esi + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x10
        xor edx, edx
        add ecx, 64h
        ; Exact mapped bytes 66 8B 93 CC 02 00 00: mov dx, word ptr [ebx + 0x2cc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, edx
        imul ecx
        sar edx, 5
        mov eax, edx
        xor ecx, ecx
        shr eax, 1fh
        add edx, eax
        mov eax, 66666667h
        ; Exact mapped bytes 66 89 93 CC 02 00 00: mov word ptr [ebx + 0x2cc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 AB CA 02 00 00: mov word ptr [ebx + 0x2ca], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xab
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 12: mov cx, word ptr [esi + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x12
        mov dword ptr [ebx + 4b4h], ecx
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8B D6 02 00 00: mov cx, word ptr [ebx + 0x2d6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ecx + ecx*2]
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov dword ptr [ebx + 0ach], edx
        mov edx, ecx
        shl edx, 7
        add edx, ecx
        shl edx, 1
        imul edx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [ebx + 4fch]
        mov dword ptr [ebx + 0b0h], edx
        ; Exact mapped bytes E8 63 6B 0F 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x6b
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 4]
        cmp eax, ebp
        ; Exact mapped bytes 74 1D: je 0x10008be7
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebx + 74h]
        mov dl, byte ptr [eax + 330h]
        cmp dl, byte ptr [ecx + 330h]
        ; Exact mapped bytes 74 0C: je 0x10008be7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebx + 4fch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes EB 6D: jmp 0x10008c54
        __asm _emit 0xeb
        __asm _emit 0x6d
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 25h
        ; Exact mapped bytes 7E 11: jle 0x10008c06
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 07: je 0x10008c06
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 940h
        ; Exact mapped bytes EB 02: jmp 0x10008c08
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 4ech]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10008c3d
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebx + 4ech]
        mov edx, dword ptr [esp + 1ch]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [ebx + 4fch]
        or byte ptr [eax + 24h], 1
        ; Exact mapped bytes 8B 0D 58 57 1C 10: mov ecx, dword ptr [0x101c5758]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 83 2C 02 00 00: mov ax, word ptr [ebx + 0x22c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x10008c80
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp eax, ebp
        ; Exact mapped bytes 7C 11: jl 0x10008c80
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 07: je 0x10008c80
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x10008c82
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 4e4h]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10008cb7
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes 8B 0D 58 57 1C 10: mov ecx, dword ptr [0x101c5758]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 83 2C 02 00 00: mov ax, word ptr [ebx + 0x22c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 160h]
        inc eax
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x10008ce6
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp eax, ebp
        ; Exact mapped bytes 7C 11: jl 0x10008ce6
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 07: je 0x10008ce6
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x10008ce8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 4e8h]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10008d1d
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes 8B 0D 58 57 1C 10: mov ecx, dword ptr [0x101c5758]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 83 2C 02 00 00: mov ax, word ptr [ebx + 0x22c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 160h]
        add eax, 6
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x10008d4e
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp eax, ebp
        ; Exact mapped bytes 7C 11: jl 0x10008d4e
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 07: je 0x10008d4e
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x10008d50
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 4f4h]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10008d85
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes 66 8B 83 D2 02 00 00: mov ax, word ptr [ebx + 0x2d2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 6B C0 0F: imul ax, ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x0f
        ; Exact mapped bytes 66 89 83 D2 02 00 00: mov word ptr [ebx + 0x2d2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffffh
        xor ecx, ecx
        mov dword ptr [ebx + 224h], eax
        ; Exact mapped bytes 66 8B 8B C6 02 00 00: mov cx, word ptr [ebx + 0x2c6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 74h]
        mov dword ptr [ebx + 4b0h], ecx
        mov dword ptr [ebx + 340h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebx + 4], ecx
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [ebx + 32ch]
        mov dword ptr [ebx + 8], edx
        mov ecx, dword ptr [ebx + 4]
        lea eax, [eax + eax*4]
        mov dword ptr [ebx + 4c8h], ebp
        mov dword ptr [ebx + 4cch], 0ffffffffh
        mov dword ptr [ebx + 454h], ebp
        lea eax, [eax + eax*4]
        mov dword ptr [ebx + 460h], ebp
        mov dword ptr [ebx + 468h], ebp
        mov dword ptr [ebx + 344h], ebp
        lea eax, [eax + eax*4]
        mov dword ptr [ebx + 31ch], ebp
        shl eax, 3
        mov dword ptr [ebx + 334h], eax
        mov dword ptr [ebx + 318h], eax
        mov eax, edx
        mov dword ptr [ebx + 310h], ebp
        push eax
        push ecx
        mov ecx, dword ptr [ebx + 510h]
        mov dword ptr [ebx + 30ch], ebp
        mov dword ptr [ebx + 4d4h], ebp
        mov dword ptr [ebx + 4c4h], 0ah
        ; Exact mapped bytes E8 DC FB 03 00: call 0x10048a20
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xfb
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
