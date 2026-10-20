// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007B530 .. +0xE3B bytes.
extern "C" __declspec(naked) void FUN_1007b530_1007B530() {
    __asm {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 16ch]
        or byte ptr [eax + 24h], 2
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes E8 55 69 07 00: call 0x100f1ea0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x69
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov edi, 0fffeh
        mov ebx, 1
        mov eax, dword ptr [eax + 0b5ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 63 01 00 00: je 0x1007b6cc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + 78h]
        mov eax, dword ptr [esi + 0d8h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1007b585
        __asm _emit 0x74
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007b585
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 100h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 104h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0cch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 110h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 134h]
        test byte ptr [ecx + 24h], 1
        ; Exact mapped bytes 74 0A: je 0x1007b5cd
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 124h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov edx, dword ptr [esi + 198h]
        xor ecx, ecx
        mov eax, 66666667h
        ; Exact mapped bytes 66 8B 4A 7A: mov cx, word ptr [edx + 0x7a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x7a
        imul ecx
        sar edx, 2
        mov ecx, dword ptr [esi + 100h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        ; Exact mapped bytes E8 2A 41 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 41 7A: mov ax, word ptr [ecx + 0x7a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x7a
        mov ecx, 0ah
        cdq
        idiv ecx
        mov ecx, dword ptr [esi + 104h]
        push edx
        ; Exact mapped bytes E8 0A 41 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        xor ecx, ecx
        mov edx, dword ptr [eax + 0b5ch]
        mov cl, byte ptr [edx + 98h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 50 7A: mov dx, word ptr [eax + 0x7a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x7a
        mov eax, 51eb851fh
        imul ecx, edx
        imul ecx
        sar edx, 5
        mov ecx, dword ptr [esi + 0c8h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        ; Exact mapped bytes E8 D0 40 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        xor edx, edx
        mov ecx, dword ptr [eax + 0b5ch]
        mov dl, byte ptr [ecx + 99h]
        mov ecx, edx
        xor edx, edx
        ; Exact mapped bytes 66 8B 50 7A: mov dx, word ptr [eax + 0x7a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x7a
        mov eax, 51eb851fh
        imul ecx, edx
        imul ecx
        sar edx, 5
        mov ecx, dword ptr [esi + 0cch]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        ; Exact mapped bytes E8 94 40 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        xor edx, edx
        mov ecx, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B 91 0C 01 00 00: mov dx, word ptr [ecx + 0x10c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0b5ch]
        imul edx, dword ptr [ecx + 24h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 7A: mov cx, word ptr [eax + 0x7a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x7a
        mov eax, 10624dd3h
        imul edx, ecx
        mul edx
        mov ecx, dword ptr [esi + 110h]
        shr edx, 6
        push edx
        ; Exact mapped bytes E8 56 40 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 5A: jmp 0x1007b726
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov eax, dword ptr [esi + 0d8h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x1007b6ea
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, 101a858ch
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x1007b6ea
        __asm _emit 0x74
        __asm _emit 0x08
        push edx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 100h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 104h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0cch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 110h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 124h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov edi, dword ptr [esi + 198h]
        mov ecx, dword ptr [esi + 17ch]
        push ebp
        mov eax, dword ptr [edi + 0b5ch]
        cmp eax, ecx
        ; Exact mapped bytes 74 5C: je 0x1007b799
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, dword ptr [edi + 0b4ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 8C 01 00 00: mov ax, word ptr [esi + 0x18c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebp, ebp
        ; Exact mapped bytes 66 8B A9 0C 01 00 00: mov bp, word ptr [ecx + 0x10c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xa9
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 19ch]
        lea edx, [eax + 13h]
        imul ecx, edx
        imul ecx, ebp
        imul ecx, eax
        mov eax, 0cccccccdh
        mul ecx
        xor eax, eax
        mov ecx, edx
        ; Exact mapped bytes 66 8B 47 7A: mov ax, word ptr [edi + 0x7a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x7a
        mov edi, dword ptr [esi + 1ach]
        shr ecx, 4
        lea edx, [eax + 13h]
        imul edi, edx
        imul edi, ebp
        imul edi, eax
        mov eax, 0cccccccdh
        mul edi
        shr edx, 4
        sub ecx, edx
        ; Exact mapped bytes EB 7E: jmp 0x1007b817
        __asm _emit 0xeb
        __asm _emit 0x7e
        ; Exact mapped bytes 66 8B 6F 7A: mov bp, word ptr [edi + 0x7a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x6f
        __asm _emit 0x7a
        ; Exact mapped bytes 66 8B 86 8C 01 00 00: mov ax, word ptr [esi + 0x18c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B E8: cmp bp, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xe8
        ; Exact mapped bytes 76 4D: jbe 0x1007b7f6
        __asm _emit 0x76
        __asm _emit 0x4d
        mov ecx, dword ptr [edi + 0b4ch]
        xor edi, edi
        and eax, 0ffffh
        ; Exact mapped bytes 66 8B B9 0C 01 00 00: mov di, word ptr [ecx + 0x10c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edi, dword ptr [esi + 1ach]
        lea edx, [eax + 13h]
        and ebp, 0ffffh
        imul edx, edi
        imul edx, eax
        mov eax, 0cccccccdh
        mul edx
        mov ecx, edx
        lea edx, [ebp + 13h]
        imul edx, edi
        imul edx, ebp
        mov eax, 0cccccccdh
        mul edx
        shr ecx, 4
        shr edx, 4
        sub ecx, edx
        ; Exact mapped bytes EB 21: jmp 0x1007b817
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 73 1D: jae 0x1007b815
        __asm _emit 0x73
        __asm _emit 0x1d
        mov ecx, dword ptr [edi + 0b4ch]
        xor edi, edi
        and eax, 0ffffh
        ; Exact mapped bytes 66 8B B9 0C 01 00 00: mov di, word ptr [ecx + 0x10c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edi, dword ptr [esi + 19ch]
        ; Exact mapped bytes EB AF: jmp 0x1007b7c4
        __asm _emit 0xeb
        __asm _emit 0xaf
        xor ecx, ecx
        mov eax, dword ptr [esi + 138h]
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        test ecx, ecx
        ; Exact mapped bytes 7E 0F: jle 0x1007b838
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [esi + 138h]
        mov dword ptr [eax + 50h], 0
        ; Exact mapped bytes EB 19: jmp 0x1007b851
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes 7D 0B: jge 0x1007b845
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov edx, dword ptr [esi + 138h]
        mov dword ptr [edx + 50h], ebx
        ; Exact mapped bytes EB 0C: jmp 0x1007b851
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 138h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, ecx
        mov ecx, dword ptr [esi + 124h]
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 BC 3E 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x3e
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov eax, dword ptr [eax + 0b60h]
        test eax, eax
        ; Exact mapped bytes 0F 84 63 01 00 00: je 0x1007b9db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + 78h]
        mov eax, dword ptr [esi + 0dch]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1007b894
        __asm _emit 0x74
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007b894
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 108h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 10ch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 114h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 134h]
        test byte ptr [ecx + 24h], 1
        ; Exact mapped bytes 74 0A: je 0x1007b8dc
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 128h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov edx, dword ptr [esi + 198h]
        xor ecx, ecx
        mov eax, 66666667h
        ; Exact mapped bytes 66 8B 4A 7C: mov cx, word ptr [edx + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x7c
        imul ecx
        sar edx, 2
        mov ecx, dword ptr [esi + 108h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        ; Exact mapped bytes E8 1B 3E 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x3e
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 41 7C: mov ax, word ptr [ecx + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x7c
        mov ecx, 0ah
        cdq
        idiv ecx
        mov ecx, dword ptr [esi + 10ch]
        push edx
        ; Exact mapped bytes E8 FB 3D 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        xor ecx, ecx
        mov edx, dword ptr [eax + 0b60h]
        mov cl, byte ptr [edx + 98h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 50 7C: mov dx, word ptr [eax + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x7c
        mov eax, 51eb851fh
        imul ecx, edx
        imul ecx
        sar edx, 5
        mov ecx, dword ptr [esi + 0d0h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        ; Exact mapped bytes E8 C1 3D 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        xor edx, edx
        mov ecx, dword ptr [eax + 0b60h]
        mov dl, byte ptr [ecx + 99h]
        mov ecx, edx
        xor edx, edx
        ; Exact mapped bytes 66 8B 50 7C: mov dx, word ptr [eax + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x7c
        mov eax, 51eb851fh
        imul ecx, edx
        imul ecx
        sar edx, 5
        mov ecx, dword ptr [esi + 0d4h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        ; Exact mapped bytes E8 85 3D 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        xor edx, edx
        mov ecx, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B 91 0A 01 00 00: mov dx, word ptr [ecx + 0x10a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0b60h]
        imul edx, dword ptr [ecx + 24h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 7C: mov cx, word ptr [eax + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x7c
        mov eax, 10624dd3h
        imul edx, ecx
        mul edx
        mov ecx, dword ptr [esi + 114h]
        shr edx, 6
        push edx
        ; Exact mapped bytes E8 47 3D 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 5F: jmp 0x1007ba3a
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov eax, dword ptr [esi + 0dch]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x1007b9f9
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, 101a858ch
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x1007b9f9
        __asm _emit 0x74
        __asm _emit 0x08
        push edx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 108h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 10ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 114h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 128h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edi, dword ptr [esi + 198h]
        mov ecx, dword ptr [esi + 180h]
        mov eax, dword ptr [edi + 0b60h]
        cmp eax, ecx
        ; Exact mapped bytes 74 5C: je 0x1007baac
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, dword ptr [edi + 0b4ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 8E 01 00 00: mov ax, word ptr [esi + 0x18e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebp, ebp
        ; Exact mapped bytes 66 8B A9 0A 01 00 00: mov bp, word ptr [ecx + 0x10a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xa9
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1a0h]
        lea edx, [eax + 13h]
        imul ecx, edx
        imul ecx, ebp
        imul ecx, eax
        mov eax, 0cccccccdh
        mul ecx
        xor eax, eax
        mov ecx, edx
        ; Exact mapped bytes 66 8B 47 7C: mov ax, word ptr [edi + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x7c
        mov edi, dword ptr [esi + 1b0h]
        shr ecx, 4
        lea edx, [eax + 13h]
        imul edi, edx
        imul edi, ebp
        imul edi, eax
        mov eax, 0cccccccdh
        mul edi
        shr edx, 4
        sub ecx, edx
        ; Exact mapped bytes EB 7E: jmp 0x1007bb2a
        __asm _emit 0xeb
        __asm _emit 0x7e
        ; Exact mapped bytes 66 8B 6F 7C: mov bp, word ptr [edi + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x6f
        __asm _emit 0x7c
        ; Exact mapped bytes 66 8B 86 8E 01 00 00: mov ax, word ptr [esi + 0x18e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B E8: cmp bp, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xe8
        ; Exact mapped bytes 76 4D: jbe 0x1007bb09
        __asm _emit 0x76
        __asm _emit 0x4d
        mov ecx, dword ptr [edi + 0b4ch]
        xor edi, edi
        and eax, 0ffffh
        ; Exact mapped bytes 66 8B B9 0A 01 00 00: mov di, word ptr [ecx + 0x10a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edi, dword ptr [esi + 1b0h]
        lea edx, [eax + 13h]
        and ebp, 0ffffh
        imul edx, edi
        imul edx, eax
        mov eax, 0cccccccdh
        mul edx
        mov ecx, edx
        lea edx, [ebp + 13h]
        imul edx, edi
        imul edx, ebp
        mov eax, 0cccccccdh
        mul edx
        shr ecx, 4
        shr edx, 4
        sub ecx, edx
        ; Exact mapped bytes EB 21: jmp 0x1007bb2a
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 73 1D: jae 0x1007bb28
        __asm _emit 0x73
        __asm _emit 0x1d
        mov ecx, dword ptr [edi + 0b4ch]
        xor edi, edi
        and eax, 0ffffh
        ; Exact mapped bytes 66 8B B9 0A 01 00 00: mov di, word ptr [ecx + 0x10a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edi, dword ptr [esi + 1a0h]
        ; Exact mapped bytes EB AF: jmp 0x1007bad7
        __asm _emit 0xeb
        __asm _emit 0xaf
        xor ecx, ecx
        mov eax, dword ptr [esi + 13ch]
        mov edi, dword ptr [esp + 10h]
        add edi, ecx
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov dword ptr [esp + 10h], edi
        test ecx, ecx
        ; Exact mapped bytes 7E 0F: jle 0x1007bb51
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [esi + 13ch]
        mov dword ptr [eax + 50h], 0
        ; Exact mapped bytes EB 19: jmp 0x1007bb6a
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes 7D 0B: jge 0x1007bb5e
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov edx, dword ptr [esi + 13ch]
        mov dword ptr [edx + 50h], ebx
        ; Exact mapped bytes EB 0C: jmp 0x1007bb6a
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 13ch]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, ecx
        mov ecx, dword ptr [esi + 128h]
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 A3 3B 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov eax, dword ptr [eax + 0b68h]
        test eax, eax
        ; Exact mapped bytes 0F 84 16 01 00 00: je 0x1007bca7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + 78h]
        mov eax, dword ptr [esi + 0e0h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1007bbad
        __asm _emit 0x74
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007bbad
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 0c0h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0f8h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 118h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 134h]
        test byte ptr [ecx + 24h], 1
        ; Exact mapped bytes 74 0A: je 0x1007bbeb
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 12ch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 198h]
        xor ecx, ecx
        mov edx, dword ptr [eax + 0b68h]
        mov cl, byte ptr [edx + 9bh]
        xor edx, edx
        ; Exact mapped bytes 66 8B 90 80 00 00 00: mov dx, word ptr [eax + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, edx
        push ecx
        mov ecx, dword ptr [esi + 0c0h]
        ; Exact mapped bytes E8 09 3B 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        xor edx, edx
        mov ecx, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B 91 10 01 00 00: mov dx, word ptr [ecx + 0x110]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 80 00 00 00: mov cx, word ptr [eax + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, ecx
        mov ecx, dword ptr [esi + 0c4h]
        push edx
        ; Exact mapped bytes E8 DC 3A 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x3a
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [esi + 198h]
        mov ecx, dword ptr [esi + 0f8h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 80 00 00 00: mov ax, word ptr [edx + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 C1 3A 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x3a
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        xor edx, edx
        mov ecx, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B 91 10 01 00 00: mov dx, word ptr [ecx + 0x110]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0b68h]
        imul edx, dword ptr [ecx + 24h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 80 00 00 00: mov cx, word ptr [eax + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 10624dd3h
        imul edx, ecx
        mul edx
        mov ecx, dword ptr [esi + 118h]
        shr edx, 6
        push edx
        ; Exact mapped bytes E8 80 3A 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x3a
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, 0fffeh
        ; Exact mapped bytes EB 55: jmp 0x1007bcfc
        __asm _emit 0xeb
        __asm _emit 0x55
        mov eax, dword ptr [esi + 0e0h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x1007bcc5
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, 101a858ch
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x1007bcc5
        __asm _emit 0x74
        __asm _emit 0x08
        push edx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 0c0h]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0f8h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 118h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12ch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov edx, dword ptr [esi + 198h]
        mov ecx, dword ptr [esi + 184h]
        mov eax, dword ptr [edx + 0b68h]
        cmp eax, ecx
        ; Exact mapped bytes 74 3A: je 0x1007bd4c
        __asm _emit 0x74
        __asm _emit 0x3a
        xor eax, eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 86 90 01 00 00: mov ax, word ptr [esi + 0x190]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 8A 80 00 00 00: mov cx, word ptr [edx + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [esi + 1b4h]
        mov ebp, eax
        mov eax, dword ptr [esi + 1a4h]
        imul eax, ebp
        sub eax, ecx
        mov ecx, dword ptr [edx + 0b4ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 10 01 00 00: mov dx, word ptr [ecx + 0x110]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, edx
        ; Exact mapped bytes EB 67: jmp 0x1007bdb3
        __asm _emit 0xeb
        __asm _emit 0x67
        ; Exact mapped bytes 66 8B 8A 80 00 00 00: mov cx, word ptr [edx + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 90 01 00 00: mov ax, word ptr [esi + 0x190]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 76 28: jbe 0x1007bd87
        __asm _emit 0x76
        __asm _emit 0x28
        and eax, 0ffffh
        and ecx, 0ffffh
        sub eax, ecx
        mov ecx, dword ptr [edx + 0b4ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 10 01 00 00: mov dx, word ptr [ecx + 0x110]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, edx
        imul eax, dword ptr [esi + 1b4h]
        ; Exact mapped bytes EB 2C: jmp 0x1007bdb3
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes 73 28: jae 0x1007bdb1
        __asm _emit 0x73
        __asm _emit 0x28
        and eax, 0ffffh
        and ecx, 0ffffh
        sub eax, ecx
        mov ecx, dword ptr [edx + 0b4ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 10 01 00 00: mov dx, word ptr [ecx + 0x110]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, edx
        imul eax, dword ptr [esi + 1a4h]
        ; Exact mapped bytes EB 02: jmp 0x1007bdb3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 140h]
        mov ebp, dword ptr [esp + 10h]
        add ebp, eax
        ; Exact mapped bytes 66 09 59 24: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        mov dword ptr [esp + 10h], ebp
        test eax, eax
        ; Exact mapped bytes 7E 0F: jle 0x1007bdda
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 140h]
        mov dword ptr [ecx + 50h], 0
        ; Exact mapped bytes EB 17: jmp 0x1007bdf1
        __asm _emit 0xeb
        __asm _emit 0x17
        ; Exact mapped bytes 7D 0B: jge 0x1007bde7
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov edx, dword ptr [esi + 140h]
        mov dword ptr [edx + 50h], ebx
        ; Exact mapped bytes EB 0A: jmp 0x1007bdf1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [esi + 140h]
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 12ch]
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 1E 39 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x39
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov eax, dword ptr [eax + 0b64h]
        test eax, eax
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x1007beb4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + 78h]
        mov eax, dword ptr [esi + 0e4h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1007be32
        __asm _emit 0x74
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1007be32
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 0fch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 11ch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 134h]
        test byte ptr [ecx + 24h], 1
        ; Exact mapped bytes 74 0A: je 0x1007be5c
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 130h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov edx, dword ptr [esi + 198h]
        mov ecx, dword ptr [esi + 0fch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 7E: mov ax, word ptr [edx + 0x7e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x7e
        push eax
        ; Exact mapped bytes E8 AC 38 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x38
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        xor edx, edx
        mov ecx, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B 91 0E 01 00 00: mov dx, word ptr [ecx + 0x10e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0b64h]
        imul edx, dword ptr [ecx + 24h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 7E: mov cx, word ptr [eax + 0x7e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x7e
        mov eax, 10624dd3h
        imul edx, ecx
        mul edx
        mov ecx, dword ptr [esi + 11ch]
        shr edx, 6
        push edx
        ; Exact mapped bytes E8 6E 38 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x38
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 3C: jmp 0x1007bef0
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov eax, dword ptr [esi + 0e4h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x1007bed2
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, 101a858ch
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x1007bed2
        __asm _emit 0x74
        __asm _emit 0x08
        push edx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 0fch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 11ch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 130h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov edi, dword ptr [esi + 198h]
        mov ecx, dword ptr [esi + 188h]
        mov eax, dword ptr [edi + 0b64h]
        cmp eax, ecx
        ; Exact mapped bytes 74 5C: je 0x1007bf62
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, dword ptr [edi + 0b4ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 92 01 00 00: mov ax, word ptr [esi + 0x192]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebp, ebp
        ; Exact mapped bytes 66 8B A9 0E 01 00 00: mov bp, word ptr [ecx + 0x10e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xa9
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1a8h]
        lea edx, [eax + 13h]
        imul ecx, edx
        imul ecx, ebp
        imul ecx, eax
        mov eax, 0cccccccdh
        mul ecx
        xor eax, eax
        mov ecx, edx
        ; Exact mapped bytes 66 8B 47 7E: mov ax, word ptr [edi + 0x7e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x7e
        mov edi, dword ptr [esi + 1b8h]
        shr ecx, 4
        lea edx, [eax + 13h]
        imul edi, edx
        imul edi, ebp
        imul edi, eax
        mov eax, 0cccccccdh
        mul edi
        shr edx, 4
        sub ecx, edx
        ; Exact mapped bytes EB 7E: jmp 0x1007bfe0
        __asm _emit 0xeb
        __asm _emit 0x7e
        ; Exact mapped bytes 66 8B 6F 7E: mov bp, word ptr [edi + 0x7e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x6f
        __asm _emit 0x7e
        ; Exact mapped bytes 66 8B 86 92 01 00 00: mov ax, word ptr [esi + 0x192]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B E8: cmp bp, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xe8
        ; Exact mapped bytes 76 4D: jbe 0x1007bfbf
        __asm _emit 0x76
        __asm _emit 0x4d
        mov ecx, dword ptr [edi + 0b4ch]
        xor edi, edi
        and eax, 0ffffh
        ; Exact mapped bytes 66 8B B9 0E 01 00 00: mov di, word ptr [ecx + 0x10e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edi, dword ptr [esi + 1b8h]
        lea edx, [eax + 13h]
        and ebp, 0ffffh
        imul edx, edi
        imul edx, eax
        mov eax, 0cccccccdh
        mul edx
        mov ecx, edx
        lea edx, [ebp + 13h]
        imul edx, edi
        imul edx, ebp
        mov eax, 0cccccccdh
        mul edx
        shr ecx, 4
        shr edx, 4
        sub ecx, edx
        ; Exact mapped bytes EB 21: jmp 0x1007bfe0
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 73 1D: jae 0x1007bfde
        __asm _emit 0x73
        __asm _emit 0x1d
        mov ecx, dword ptr [edi + 0b4ch]
        xor edi, edi
        and eax, 0ffffh
        ; Exact mapped bytes 66 8B B9 0E 01 00 00: mov di, word ptr [ecx + 0x10e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edi, dword ptr [esi + 1a8h]
        ; Exact mapped bytes EB AF: jmp 0x1007bf8d
        __asm _emit 0xeb
        __asm _emit 0xaf
        xor ecx, ecx
        mov eax, dword ptr [esi + 144h]
        mov edi, dword ptr [esp + 10h]
        add edi, ecx
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov dword ptr [esp + 10h], edi
        test ecx, ecx
        ; Exact mapped bytes 7E 0F: jle 0x1007c007
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [esi + 144h]
        mov dword ptr [eax + 50h], 0
        ; Exact mapped bytes EB 19: jmp 0x1007c020
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes 7D 0B: jge 0x1007c014
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov edx, dword ptr [esi + 144h]
        mov dword ptr [edx + 50h], ebx
        ; Exact mapped bytes EB 0C: jmp 0x1007c020
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 144h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, ecx
        mov ecx, dword ptr [esi + 130h]
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 ED 36 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x36
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov ecx, dword ptr [eax + 900h]
        xor ecx, 0aaaaaaaah
        push ecx
        mov ecx, dword ptr [esi + 0bch]
        ; Exact mapped bytes E8 CF 36 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x36
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 134h]
        push edi
        ; Exact mapped bytes E8 BF 36 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x36
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 148h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        test edi, edi
        ; Exact mapped bytes 7E 0F: jle 0x1007c07e
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edx, dword ptr [esi + 148h]
        mov dword ptr [edx + 50h], 0
        ; Exact mapped bytes EB 13: jmp 0x1007c091
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [esi + 148h]
        ; Exact mapped bytes 7D 05: jge 0x1007c08b
        __asm _emit 0x7d
        __asm _emit 0x05
        mov dword ptr [eax + 50h], ebx
        ; Exact mapped bytes EB 06: jmp 0x1007c091
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        mov edi, 2ch
        test eax, eax
        mov ebp, 2dh
        ; Exact mapped bytes 7D 4F: jge 0x1007c0f2
        __asm _emit 0x7d
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 00 D1 1A 10: mov ecx, dword ptr [0x101ad100]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        xor ecx, 0aaaaaaaah
        neg eax
        cmp eax, ecx
        ; Exact mapped bytes 7E 3D: jle 0x1007c0f2
        __asm _emit 0x7e
        __asm _emit 0x3d
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 11: jle 0x1007c0d3
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1007c0d3
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 0b40h
        ; Exact mapped bytes EB 02: jmp 0x1007c0d5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 134h]
        mov ebx, 0fffdh
        mov dword ptr [edx + 0f8h], eax
        mov eax, dword ptr [esi + 16ch]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes EB 47: jmp 0x1007c139
        __asm _emit 0xeb
        __asm _emit 0x47
        mov eax, dword ptr [esi + 134h]
        mov ebx, 0fffdh
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 75 0A: jne 0x1007c10d
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 16ch]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 11: jle 0x1007c12b
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1007c12b
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x1007c12d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 134h]
        mov dword ptr [ecx + 0f8h], eax
        mov edx, dword ptr [esi + 198h]
        mov ecx, dword ptr [esi + 0b8h]
        mov eax, dword ptr [edx + 924h]
        xor eax, 0aaaaaaaah
        push eax
        ; Exact mapped bytes E8 CA 35 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        mov edx, dword ptr [ecx + 928h]
        mov ecx, dword ptr [esi + 0b4h]
        xor edx, 0aaaaaaaah
        push edx
        ; Exact mapped bytes E8 AC 35 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov ecx, dword ptr [eax + 4ch]
        xor ecx, 0aaaaaaaah
        push ecx
        mov ecx, dword ptr [esi + 0a4h]
        ; Exact mapped bytes E8 91 35 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [esi + 198h]
        mov ecx, dword ptr [esi + 0a8h]
        mov eax, dword ptr [edx + 8e0h]
        xor eax, 0aaaaaaaah
        push eax
        ; Exact mapped bytes E8 74 35 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov ecx, dword ptr [eax + 8e0h]
        mov edx, dword ptr [eax + 4ch]
        xor ecx, 0aaaaaaaah
        xor edx, 0aaaaaaaah
        push ecx
        mov ecx, dword ptr [esi + 0b0h]
        push edx
        ; Exact mapped bytes E8 7C E1 FA FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xe1
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 198h]
        mov ecx, dword ptr [eax + 904h]
        mov eax, 10624dd3h
        xor ecx, 0aaaaaaaah
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [esi + 9ch]
        push edx
        ; Exact mapped bytes E8 1D 35 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [esi + 198h]
        mov eax, dword ptr [edx + 0b4ch]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes E8 02 35 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov edx, dword ptr [eax + 0b4ch]
        mov ecx, dword ptr [edx + 64h]
        push ecx
        mov ecx, dword ptr [eax + 904h]
        xor ecx, 0aaaaaaaah
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov ecx, dword ptr [esi + 0ach]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        ; Exact mapped bytes E8 F9 E0 FA FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe0
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 198h]
        mov ecx, dword ptr [eax + 0b4ch]
        mov eax, dword ptr [eax + 904h]
        xor eax, 0aaaaaaaah
        mov ecx, dword ptr [ecx + 64h]
        lea ecx, [ecx + ecx*4]
        lea ecx, [ecx + ecx*4]
        lea edx, [ecx + ecx*4]
        shl edx, 3
        cmp eax, edx
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 160h]
        ; Exact mapped bytes 76 2F: jbe 0x1007c2bb
        __asm _emit 0x76
        __asm _emit 0x2f
        cmp ecx, ebp
        ; Exact mapped bytes 7E 11: jle 0x1007c2a1
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1007c2a1
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 0b40h
        ; Exact mapped bytes EB 02: jmp 0x1007c2a3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 9ch]
        mov dword ptr [ecx + 0f8h], eax
        mov eax, dword ptr [esi + 16ch]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes EB 23: jmp 0x1007c2de
        __asm _emit 0xeb
        __asm _emit 0x23
        cmp ecx, edi
        ; Exact mapped bytes 7E 11: jle 0x1007c2d0
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1007c2d0
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x1007c2d2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 9ch]
        mov dword ptr [edx + 0f8h], eax
        mov eax, dword ptr [esi + 198h]
        mov ecx, dword ptr [esi + 17ch]
        pop ebp
        cmp ecx, dword ptr [eax + 0b5ch]
        ; Exact mapped bytes 75 71: jne 0x1007c364
        __asm _emit 0x75
        __asm _emit 0x71
        ; Exact mapped bytes 66 8B 96 8C 01 00 00: mov dx, word ptr [esi + 0x18c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 50 7A: cmp dx, word ptr [eax + 0x7a]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x50
        __asm _emit 0x7a
        ; Exact mapped bytes 75 64: jne 0x1007c364
        __asm _emit 0x75
        __asm _emit 0x64
        mov ecx, dword ptr [esi + 180h]
        mov edx, dword ptr [eax + 0b60h]
        cmp ecx, edx
        ; Exact mapped bytes 75 54: jne 0x1007c364
        __asm _emit 0x75
        __asm _emit 0x54
        ; Exact mapped bytes 66 8B 96 8E 01 00 00: mov dx, word ptr [esi + 0x18e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 50 7C: cmp dx, word ptr [eax + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x50
        __asm _emit 0x7c
        ; Exact mapped bytes 75 47: jne 0x1007c364
        __asm _emit 0x75
        __asm _emit 0x47
        mov ecx, dword ptr [esi + 184h]
        mov edx, dword ptr [eax + 0b68h]
        cmp ecx, edx
        ; Exact mapped bytes 75 37: jne 0x1007c364
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 66 8B 96 90 01 00 00: mov dx, word ptr [esi + 0x190]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 90 80 00 00 00: cmp dx, word ptr [eax + 0x80]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 27: jne 0x1007c364
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [esi + 188h]
        mov edx, dword ptr [eax + 0b64h]
        cmp ecx, edx
        ; Exact mapped bytes 75 17: jne 0x1007c364
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 66 8B 96 92 01 00 00: mov dx, word ptr [esi + 0x192]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 50 7E: cmp dx, word ptr [eax + 0x7e]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x50
        __asm _emit 0x7e
        ; Exact mapped bytes 75 0A: jne 0x1007c364
        __asm _emit 0x75
        __asm _emit 0x0a
        mov esi, dword ptr [esi + 16ch]
        ; Exact mapped bytes 66 21 5E 24: and word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x24
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret
    }
}
