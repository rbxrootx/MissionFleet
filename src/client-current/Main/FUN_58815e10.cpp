// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 3988 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58815E10 .. +0xF94 bytes.
extern "C" __declspec(naked) void FUN_58815e10_segment_00() {
    __asm {
        push ecx
        push ebp
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes E8 65 FE FF FF: call 0x58815c80
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 16ch]
        ; Exact mapped bytes 66 83 48 24 02: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes E8 DF 1D 0D 00: call 0x588e7c10
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x1d
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov eax, dword ptr [eax + 0cd0h]
        mov ebp, 1
        test eax, eax
        ; Exact mapped bytes 0F 84 58 01 00 00: je 0x58815fa2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d8h]
        add eax, 78h
        push eax
        ; Exact mapped bytes E8 87 BE F1 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xbe
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [esi + 100h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 104h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0cch]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 110h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 134h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 0A: je 0x58815ea4
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 124h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 198h]
        movzx ecx, word ptr [eax + 88h]
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        push ecx
        mov ecx, dword ptr [esi + 100h]
        ; Exact mapped bytes E8 92 14 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x14
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [esi + 198h]
        movzx eax, word ptr [edx + 88h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov ecx, dword ptr [esi + 104h]
        push edx
        ; Exact mapped bytes E8 71 14 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x14
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov edx, dword ptr [eax + 0cd0h]
        movzx ecx, byte ptr [edx + 98h]
        movzx eax, word ptr [eax + 88h]
        imul ecx, eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        push ecx
        mov ecx, dword ptr [esi + 0c8h]
        ; Exact mapped bytes E8 37 14 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x14
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov edx, dword ptr [eax + 0cd0h]
        movzx ecx, byte ptr [edx + 99h]
        movzx eax, word ptr [eax + 88h]
        imul ecx, eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        push ecx
        mov ecx, dword ptr [esi + 0cch]
        ; Exact mapped bytes E8 FD 13 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x13
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov edx, dword ptr [eax + 0cc0h]
        movzx ecx, word ptr [edx + 120h]
        mov edx, dword ptr [eax + 0cd0h]
        imul ecx, dword ptr [edx + 24h]
        movzx eax, word ptr [eax + 88h]
        imul ecx, eax
        mov eax, 10624dd3h
        mul ecx
        mov ecx, dword ptr [esi + 110h]
        shr edx, 6
        push edx
        ; Exact mapped bytes E8 C0 13 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x13
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 5D: jmp 0x58815fff
        __asm _emit 0xeb
        __asm _emit 0x5d
        push 589980b8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0d8h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 24 BD F1 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xbd
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [esi + 100h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 104h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0cch]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 110h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 124h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 198h]
        mov ecx, dword ptr [eax + 0cd0h]
        push ebx
        cmp ecx, dword ptr [esi + 17ch]
        ; Exact mapped bytes 74 6C: je 0x58816080
        __asm _emit 0x74
        __asm _emit 0x6c
        movzx eax, word ptr [esi + 18ch]
        mov edi, dword ptr [esi + 198h]
        mov edx, dword ptr [edi + 0cc0h]
        movzx ebx, word ptr [edx + 120h]
        lea ecx, [eax + 13h]
        imul ecx, eax
        mov eax, 66666667h
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov ecx, eax
        movzx eax, word ptr [edi + 88h]
        imul ecx, dword ptr [esi + 19ch]
        lea edx, [eax + 13h]
        imul ecx, ebx
        imul edx, eax
        mov eax, 99999999h
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, dword ptr [esi + 1ach]
        imul eax, ebx
        add ecx, eax
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x58816107
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [eax + 88h]
        movzx eax, word ptr [esi + 18ch]
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 76 08: jbe 0x5881609b
        __asm _emit 0x76
        __asm _emit 0x08
        mov ebp, dword ptr [esi + 1ach]
        ; Exact mapped bytes EB 08: jmp 0x588160a3
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 73 68: jae 0x58816105
        __asm _emit 0x73
        __asm _emit 0x68
        mov ebp, dword ptr [esi + 19ch]
        mov edi, dword ptr [esi + 198h]
        mov ecx, dword ptr [edi + 0cc0h]
        movzx ebx, word ptr [ecx + 120h]
        movzx eax, ax
        lea ecx, [eax + 13h]
        imul ecx, eax
        mov eax, 66666667h
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov ecx, eax
        movzx eax, word ptr [edi + 88h]
        imul ecx, ebp
        lea edx, [eax + 13h]
        imul ecx, ebx
        imul edx, eax
        mov eax, 99999999h
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, ebp
        imul eax, ebx
        add ecx, eax
        mov ebp, 1
        ; Exact mapped bytes EB 02: jmp 0x58816107
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [esi + 138h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov ebx, ecx
        mov dword ptr [esp + 10h], ebx
        test ecx, ecx
        ; Exact mapped bytes 7E 0F: jle 0x5881612a
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edx, dword ptr [esi + 138h]
        mov dword ptr [edx + 50h], 0
        ; Exact mapped bytes EB 16: jmp 0x58816140
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [esi + 138h]
        ; Exact mapped bytes 7D 05: jge 0x58816137
        __asm _emit 0x7d
        __asm _emit 0x05
        mov dword ptr [eax + 50h], ebp
        ; Exact mapped bytes EB 09: jmp 0x58816140
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, ecx
        mov ecx, dword ptr [esi + 124h]
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 0D 12 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x12
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov eax, dword ptr [eax + 0cd4h]
        test eax, eax
        ; Exact mapped bytes 0F 84 58 01 00 00: je 0x588162bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0dch]
        add eax, 78h
        push eax
        ; Exact mapped bytes E8 6A BB F1 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xbb
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [esi + 108h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 10ch]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 114h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 134h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 0A: je 0x588161c1
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 128h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 198h]
        movzx ecx, word ptr [eax + 8ah]
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        push ecx
        mov ecx, dword ptr [esi + 108h]
        ; Exact mapped bytes E8 75 11 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x11
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [esi + 198h]
        movzx eax, word ptr [edx + 8ah]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov ecx, dword ptr [esi + 10ch]
        push edx
        ; Exact mapped bytes E8 54 11 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x11
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov edx, dword ptr [eax + 0cd4h]
        movzx ecx, byte ptr [edx + 98h]
        movzx eax, word ptr [eax + 8ah]
        imul ecx, eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        push ecx
        mov ecx, dword ptr [esi + 0d0h]
        ; Exact mapped bytes E8 1A 11 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x11
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov edx, dword ptr [eax + 0cd4h]
        movzx ecx, byte ptr [edx + 99h]
        movzx eax, word ptr [eax + 8ah]
        imul ecx, eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        push ecx
        mov ecx, dword ptr [esi + 0d4h]
        ; Exact mapped bytes E8 E0 10 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x10
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov edx, dword ptr [eax + 0cc0h]
        movzx ecx, word ptr [edx + 11eh]
        mov edx, dword ptr [eax + 0cd4h]
        imul ecx, dword ptr [edx + 24h]
        movzx eax, word ptr [eax + 8ah]
        imul ecx, eax
        mov eax, 10624dd3h
        mul ecx
        mov ecx, dword ptr [esi + 114h]
        shr edx, 6
        push edx
        ; Exact mapped bytes E8 A3 10 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x10
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 5D: jmp 0x5881631c
        __asm _emit 0xeb
        __asm _emit 0x5d
        push 589980b8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0dch]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 07 BA F1 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xba
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [esi + 108h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 10ch]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 114h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 128h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 198h]
        mov ecx, dword ptr [eax + 0cd4h]
        cmp ecx, dword ptr [esi + 180h]
        ; Exact mapped bytes 74 70: je 0x588163a0
        __asm _emit 0x74
        __asm _emit 0x70
        movzx eax, word ptr [esi + 18eh]
        mov edi, dword ptr [esi + 198h]
        mov edx, dword ptr [edi + 0cc0h]
        movzx ebx, word ptr [edx + 11eh]
        lea ecx, [eax + 13h]
        imul ecx, eax
        mov eax, 66666667h
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov ecx, eax
        movzx eax, word ptr [edi + 8ah]
        imul ecx, dword ptr [esi + 1a0h]
        lea edx, [eax + 13h]
        imul ecx, ebx
        imul edx, eax
        mov eax, 99999999h
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, dword ptr [esi + 1b0h]
        imul eax, ebx
        mov ebx, dword ptr [esp + 10h]
        add ecx, eax
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x5881642b
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [eax + 8ah]
        movzx eax, word ptr [esi + 18eh]
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 76 08: jbe 0x588163bb
        __asm _emit 0x76
        __asm _emit 0x08
        mov ebp, dword ptr [esi + 1b0h]
        ; Exact mapped bytes EB 08: jmp 0x588163c3
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 73 6C: jae 0x58816429
        __asm _emit 0x73
        __asm _emit 0x6c
        mov ebp, dword ptr [esi + 1a0h]
        mov edi, dword ptr [esi + 198h]
        mov ecx, dword ptr [edi + 0cc0h]
        movzx ebx, word ptr [ecx + 11eh]
        movzx eax, ax
        lea ecx, [eax + 13h]
        imul ecx, eax
        mov eax, 66666667h
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov ecx, eax
        movzx eax, word ptr [edi + 8ah]
        imul ecx, ebp
        lea edx, [eax + 13h]
        imul ecx, ebx
        imul edx, eax
        mov eax, 99999999h
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, ebp
        imul eax, ebx
        mov ebx, dword ptr [esp + 10h]
        mov ebp, 1
        add ecx, eax
        ; Exact mapped bytes EB 02: jmp 0x5881642b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [esi + 13ch]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        xor edi, edi
        add ebx, ecx
        cmp ecx, edi
        ; Exact mapped bytes 7E 0B: jle 0x58816448
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov edx, dword ptr [esi + 13ch]
        mov dword ptr [edx + 50h], edi
        ; Exact mapped bytes EB 16: jmp 0x5881645e
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [esi + 13ch]
        ; Exact mapped bytes 7D 05: jge 0x58816455
        __asm _emit 0x7d
        __asm _emit 0x05
        mov dword ptr [eax + 50h], ebp
        ; Exact mapped bytes EB 09: jmp 0x5881645e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, ecx
        mov ecx, dword ptr [esi + 128h]
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 EF 0E 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x0e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov eax, dword ptr [eax + 0cdch]
        cmp eax, edi
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x5881657f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        add eax, 78h
        push eax
        ; Exact mapped bytes E8 4C B8 F1 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xb8
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0c0h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0f8h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 118h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 134h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 0A: je 0x588164d5
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 12ch]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 198h]
        mov ecx, dword ptr [eax + 0cdch]
        movzx edx, byte ptr [ecx + 9bh]
        movzx eax, word ptr [eax + 8eh]
        mov ecx, dword ptr [esi + 0c0h]
        imul edx, eax
        push edx
        ; Exact mapped bytes E8 62 0E 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x0e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov ecx, dword ptr [eax + 0cc0h]
        movzx edx, word ptr [ecx + 124h]
        movzx eax, word ptr [eax + 8eh]
        mov ecx, dword ptr [esi + 0c4h]
        imul edx, eax
        push edx
        ; Exact mapped bytes E8 39 0E 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        movzx edx, word ptr [ecx + 8eh]
        mov ecx, dword ptr [esi + 0f8h]
        push edx
        ; Exact mapped bytes E8 20 0E 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x0e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov ecx, dword ptr [eax + 0cc0h]
        movzx edx, word ptr [ecx + 124h]
        mov ecx, dword ptr [eax + 0cdch]
        imul edx, dword ptr [ecx + 24h]
        movzx eax, word ptr [eax + 8eh]
        mov ecx, dword ptr [esi + 118h]
        imul edx, eax
        mov eax, 10624dd3h
        mul edx
        shr edx, 6
        push edx
        ; Exact mapped bytes E8 E3 0D 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x0d
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 53: jmp 0x588165d2
        __asm _emit 0xeb
        __asm _emit 0x53
        push 589980b8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0e0h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 47 B7 F1 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xb7
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0c0h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c4h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0f8h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 118h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 198h]
        mov edx, dword ptr [eax + 0cdch]
        cmp edx, dword ptr [esi + 184h]
        ; Exact mapped bytes 74 32: je 0x58816618
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, eax
        movzx edx, word ptr [ecx + 8eh]
        movzx eax, word ptr [esi + 190h]
        imul edx, dword ptr [esi + 1b4h]
        imul eax, dword ptr [esi + 1a4h]
        mov ecx, dword ptr [ecx + 0cc0h]
        sub eax, edx
        movzx edx, word ptr [ecx + 124h]
        imul eax, edx
        ; Exact mapped bytes EB 6D: jmp 0x58816685
        __asm _emit 0xeb
        __asm _emit 0x6d
        movzx ecx, word ptr [eax + 8eh]
        movzx eax, word ptr [esi + 190h]
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 76 2B: jbe 0x58816656
        __asm _emit 0x76
        __asm _emit 0x2b
        mov ecx, dword ptr [esi + 198h]
        movzx edx, word ptr [ecx + 8eh]
        mov ecx, dword ptr [ecx + 0cc0h]
        movzx eax, ax
        sub eax, edx
        movzx edx, word ptr [ecx + 124h]
        imul eax, edx
        imul eax, dword ptr [esi + 1b4h]
        ; Exact mapped bytes EB 2F: jmp 0x58816685
        __asm _emit 0xeb
        __asm _emit 0x2f
        ; Exact mapped bytes 73 2B: jae 0x58816683
        __asm _emit 0x73
        __asm _emit 0x2b
        mov ecx, dword ptr [esi + 198h]
        movzx edx, word ptr [ecx + 8eh]
        mov ecx, dword ptr [ecx + 0cc0h]
        movzx eax, ax
        sub eax, edx
        movzx edx, word ptr [ecx + 124h]
        imul eax, edx
        imul eax, dword ptr [esi + 1a4h]
        ; Exact mapped bytes EB 02: jmp 0x58816685
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 140h]
        ; Exact mapped bytes 66 09 69 24: or word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x69
        __asm _emit 0x24
        add ebx, eax
        cmp eax, edi
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 7E 0B: jle 0x588166a4
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 140h]
        mov dword ptr [ecx + 50h], edi
        ; Exact mapped bytes EB 1C: jmp 0x588166c0
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes 7D 0B: jge 0x588166b1
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov edx, dword ptr [esi + 140h]
        mov dword ptr [edx + 50h], ebp
        ; Exact mapped bytes EB 0F: jmp 0x588166c0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 140h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 12ch]
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 8F 0C 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x0c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov eax, dword ptr [eax + 0cd8h]
        cmp eax, edi
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x58816779
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        add eax, 78h
        push eax
        ; Exact mapped bytes E8 EC B5 F1 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xb5
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0fch]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 11ch]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 134h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 0A: je 0x58816721
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 130h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 198h]
        movzx ecx, word ptr [eax + 8ch]
        push ecx
        mov ecx, dword ptr [esi + 0fch]
        ; Exact mapped bytes E8 26 0C 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x0c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov edx, dword ptr [eax + 0cc0h]
        movzx ecx, word ptr [edx + 122h]
        mov edx, dword ptr [eax + 0cd8h]
        imul ecx, dword ptr [edx + 24h]
        movzx eax, word ptr [eax + 8ch]
        imul ecx, eax
        mov eax, 10624dd3h
        mul ecx
        mov ecx, dword ptr [esi + 11ch]
        shr edx, 6
        push edx
        ; Exact mapped bytes E8 E9 0B 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 3F: jmp 0x588167b8
        __asm _emit 0xeb
        __asm _emit 0x3f
        push 589980b8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0e4h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 4D B5 F1 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xb5
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0fch]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 11ch]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 130h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 198h]
        mov edx, dword ptr [eax + 0cd8h]
        cmp edx, dword ptr [esi + 188h]
        ; Exact mapped bytes 74 70: je 0x5881683c
        __asm _emit 0x74
        __asm _emit 0x70
        movzx eax, word ptr [esi + 192h]
        mov edi, dword ptr [esi + 198h]
        mov ecx, dword ptr [edi + 0cc0h]
        movzx ebx, word ptr [ecx + 122h]
        lea ecx, [eax + 13h]
        imul ecx, eax
        mov eax, 66666667h
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov ecx, eax
        movzx eax, word ptr [edi + 8ch]
        imul ecx, dword ptr [esi + 1a8h]
        lea edx, [eax + 13h]
        imul ecx, ebx
        imul edx, eax
        mov eax, 99999999h
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, dword ptr [esi + 1b8h]
        imul eax, ebx
        mov ebx, dword ptr [esp + 10h]
        add ecx, eax
        ; Exact mapped bytes E9 EF 00 00 00: jmp 0x5881692b
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [eax + 8ch]
        movzx eax, word ptr [esi + 192h]
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 76 6C: jbe 0x588168bb
        __asm _emit 0x76
        __asm _emit 0x6c
        mov edi, dword ptr [esi + 198h]
        mov ecx, dword ptr [edi + 0cc0h]
        movzx ebx, word ptr [ecx + 122h]
        movzx eax, ax
        lea ecx, [eax + 13h]
        imul ecx, eax
        mov eax, 66666667h
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov ecx, eax
        movzx eax, word ptr [edi + 8ch]
        lea edx, [eax + 13h]
        imul edx, eax
        mov ebp, dword ptr [esi + 1b8h]
        mov eax, 99999999h
        imul ecx, ebp
        imul edx
        imul ecx, ebx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, ebp
        imul eax, ebx
        mov ebx, dword ptr [esp + 10h]
        add ecx, eax
        mov ebp, 1
        ; Exact mapped bytes EB 70: jmp 0x5881692b
        __asm _emit 0xeb
        __asm _emit 0x70
        ; Exact mapped bytes 73 6C: jae 0x58816929
        __asm _emit 0x73
        __asm _emit 0x6c
        mov edi, dword ptr [esi + 198h]
        mov ecx, dword ptr [edi + 0cc0h]
        movzx ebp, word ptr [ecx + 122h]
        movzx eax, ax
        lea ecx, [eax + 13h]
        imul ecx, eax
        mov eax, 66666667h
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov ecx, eax
        movzx eax, word ptr [edi + 8ch]
        lea edx, [eax + 13h]
        imul edx, eax
        mov ebx, dword ptr [esi + 1a8h]
        mov eax, 99999999h
        imul ecx, ebx
        imul edx
        imul ecx, ebp
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, ebx
        mov ebx, dword ptr [esp + 10h]
        imul eax, ebp
        add ecx, eax
        mov ebp, 1
        ; Exact mapped bytes EB 02: jmp 0x5881692b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [esi + 144h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        xor edi, edi
        add ebx, ecx
        cmp ecx, edi
        ; Exact mapped bytes 7E 0B: jle 0x58816948
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov edx, dword ptr [esi + 144h]
        mov dword ptr [edx + 50h], edi
        ; Exact mapped bytes EB 16: jmp 0x5881695e
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [esi + 144h]
        ; Exact mapped bytes 7D 05: jge 0x58816955
        __asm _emit 0x7d
        __asm _emit 0x05
        mov dword ptr [eax + 50h], ebp
        ; Exact mapped bytes EB 09: jmp 0x5881695e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, ecx
        mov ecx, dword ptr [esi + 130h]
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 EF 09 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x09
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov ecx, dword ptr [eax + 0a6ch]
        xor ecx, 0aaaaaaaah
        push ecx
        mov ecx, dword ptr [esi + 0bch]
        ; Exact mapped bytes E8 D1 09 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x09
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 134h]
        push ebx
        ; Exact mapped bytes E8 C5 09 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 148h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        cmp ebx, edi
        ; Exact mapped bytes 7E 0B: jle 0x588169b4
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov edx, dword ptr [esi + 148h]
        mov dword ptr [edx + 50h], edi
        ; Exact mapped bytes EB 16: jmp 0x588169ca
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [esi + 148h]
        ; Exact mapped bytes 7D 05: jge 0x588169c1
        __asm _emit 0x7d
        __asm _emit 0x05
        mov dword ptr [eax + 50h], ebp
        ; Exact mapped bytes EB 09: jmp 0x588169ca
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edi, 2ch
        lea ebp, [edi + 1]
        test ebx, ebx
        ; Exact mapped bytes 7D 54: jge 0x58816a2a
        __asm _emit 0x7d
        __asm _emit 0x54
        ; Exact mapped bytes 8B 15 68 B4 A0 58: mov edx, dword ptr [0x58a0b468]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        xor edx, 0aaaaaaaah
        neg ebx
        cmp ebx, edx
        ; Exact mapped bytes 7E 42: jle 0x58816a2a
        __asm _emit 0x7e
        __asm _emit 0x42
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 16: jle 0x58816a0b
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x58816a0b
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0b40h
        ; Exact mapped bytes EB 02: jmp 0x58816a0d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 134h]
        mov dword ptr [ecx + 0f8h], eax
        mov eax, dword ptr [esi + 16ch]
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes EB 4F: jmp 0x58816a79
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov eax, dword ptr [esi + 134h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 75 0F: jne 0x58816a48
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [esi + 16ch]
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 16: jle 0x58816a6b
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x58816a6b
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x58816a6d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 134h]
        mov dword ptr [ecx + 0f8h], eax
        mov edx, dword ptr [esi + 198h]
        mov eax, dword ptr [edx + 0a98h]
        mov ecx, dword ptr [esi + 0b8h]
        xor eax, 0aaaaaaaah
        push eax
        ; Exact mapped bytes E8 CA 08 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x08
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        mov edx, dword ptr [ecx + 0a9ch]
        mov ecx, dword ptr [esi + 0b4h]
        xor edx, 0aaaaaaaah
        push edx
        ; Exact mapped bytes E8 AC 08 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x08
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov ecx, dword ptr [eax + 4ch]
        xor ecx, 0aaaaaaaah
        push ecx
        mov ecx, dword ptr [esi + 0a4h]
        ; Exact mapped bytes E8 91 08 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [esi + 198h]
        mov eax, dword ptr [edx + 0a4ch]
        mov ecx, dword ptr [esi + 0a8h]
        xor eax, 0aaaaaaaah
        push eax
        ; Exact mapped bytes E8 74 08 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x08
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov ecx, dword ptr [eax + 0a4ch]
        mov edx, dword ptr [eax + 4ch]
        xor ecx, 0aaaaaaaah
        push ecx
        mov ecx, dword ptr [esi + 0b0h]
        xor edx, 0aaaaaaaah
        push edx
        ; Exact mapped bytes E8 8C 7C F6 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x7c
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [esi + 198h]
        mov ecx, dword ptr [eax + 0a70h]
        xor ecx, 0aaaaaaaah
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        push ecx
        mov ecx, dword ptr [esi + 9ch]
        ; Exact mapped bytes E8 1D 08 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [esi + 198h]
        mov eax, dword ptr [edx + 0cc0h]
        mov ecx, dword ptr [eax + 78h]
        push ecx
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes E8 02 08 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x08
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        mov edx, dword ptr [eax + 0cc0h]
        mov ecx, dword ptr [edx + 78h]
        push ecx
        mov ecx, dword ptr [eax + 0a70h]
        xor ecx, 0aaaaaaaah
        mov eax, 10624dd3h
        imul ecx
        mov ecx, dword ptr [esi + 0ach]
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        push eax
        ; Exact mapped bytes E8 09 7C F6 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x7c
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [esi + 198h]
        mov ecx, dword ptr [eax + 0cc0h]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [eax + 0a70h]
        imul edx, edx, 3e8h
        xor eax, 0aaaaaaaah
        cmp eax, edx
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        pop ebx
        ; Exact mapped bytes 76 3D: jbe 0x58816bfe
        __asm _emit 0x76
        __asm _emit 0x3d
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 16: jle 0x58816bdf
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x58816bdf
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0b40h
        ; Exact mapped bytes EB 02: jmp 0x58816be1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 9ch]
        mov dword ptr [ecx + 0f8h], eax
        mov eax, dword ptr [esi + 16ch]
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes EB 2C: jmp 0x58816c2a
        __asm _emit 0xeb
        __asm _emit 0x2c
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 16: jle 0x58816c1c
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x58816c1c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x58816c1e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 9ch]
        mov dword ptr [ecx + 0f8h], eax
        mov eax, dword ptr [esi + 198h]
        mov edx, dword ptr [esi + 17ch]
        cmp edx, dword ptr [eax + 0cd0h]
        ; Exact mapped bytes 75 77: jne 0x58816cb5
        __asm _emit 0x75
        __asm _emit 0x77
        ; Exact mapped bytes 66 8B 8E 8C 01 00 00: mov cx, word ptr [esi + 0x18c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 88 88 00 00 00: cmp cx, word ptr [eax + 0x88]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 67: jne 0x58816cb5
        __asm _emit 0x75
        __asm _emit 0x67
        mov edx, dword ptr [esi + 180h]
        cmp edx, dword ptr [eax + 0cd4h]
        ; Exact mapped bytes 75 59: jne 0x58816cb5
        __asm _emit 0x75
        __asm _emit 0x59
        ; Exact mapped bytes 66 8B 8E 8E 01 00 00: mov cx, word ptr [esi + 0x18e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 88 8A 00 00 00: cmp cx, word ptr [eax + 0x8a]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x88
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 49: jne 0x58816cb5
        __asm _emit 0x75
        __asm _emit 0x49
        mov edx, dword ptr [esi + 184h]
        cmp edx, dword ptr [eax + 0cdch]
        ; Exact mapped bytes 75 3B: jne 0x58816cb5
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes 66 8B 8E 90 01 00 00: mov cx, word ptr [esi + 0x190]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 88 8E 00 00 00: cmp cx, word ptr [eax + 0x8e]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x88
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 2B: jne 0x58816cb5
        __asm _emit 0x75
        __asm _emit 0x2b
        mov edx, dword ptr [esi + 188h]
        cmp edx, dword ptr [eax + 0cd8h]
        ; Exact mapped bytes 75 1D: jne 0x58816cb5
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 66 8B 8E 92 01 00 00: mov cx, word ptr [esi + 0x192]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 88 8C 00 00 00: cmp cx, word ptr [eax + 0x8c]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0D: jne 0x58816cb5
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 16ch]
        push 0
        ; Exact mapped bytes E8 6B A9 F1 FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xa9
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [esi + 198h]
        cmp dword ptr [edx + 0cd0h], 0
        ; Exact mapped bytes 74 2B: je 0x58816cef
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, edx
        mov ecx, dword ptr [eax + 0cc0h]
        ; Exact mapped bytes 66 0F B6 91 5C 03 00 00: movzx dx, byte ptr [ecx + 0x35c]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x91
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0cd0h]
        ; Exact mapped bytes 66 39 50 06: cmp word ptr [eax + 6], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x06
        ; Exact mapped bytes 74 0F: je 0x58816cef
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [esi + 16ch]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi + 198h]
        cmp dword ptr [edx + 0cd4h], 0
        ; Exact mapped bytes 74 2B: je 0x58816d29
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, edx
        mov ecx, dword ptr [eax + 0cc0h]
        ; Exact mapped bytes 66 0F B6 91 5C 03 00 00: movzx dx, byte ptr [ecx + 0x35c]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x91
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0cd4h]
        ; Exact mapped bytes 66 39 50 06: cmp word ptr [eax + 6], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x06
        ; Exact mapped bytes 74 0F: je 0x58816d29
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [esi + 16ch]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi + 198h]
        cmp dword ptr [edx + 0cd8h], 0
        ; Exact mapped bytes 74 2B: je 0x58816d63
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, edx
        mov ecx, dword ptr [eax + 0cc0h]
        ; Exact mapped bytes 66 0F B6 91 5C 03 00 00: movzx dx, byte ptr [ecx + 0x35c]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x91
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0cd8h]
        ; Exact mapped bytes 66 39 50 06: cmp word ptr [eax + 6], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x06
        ; Exact mapped bytes 74 0F: je 0x58816d63
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [esi + 16ch]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi + 198h]
        cmp dword ptr [edx + 0cdch], 0
        ; Exact mapped bytes 74 2B: je 0x58816d9d
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, edx
        mov ecx, dword ptr [eax + 0cc0h]
        ; Exact mapped bytes 66 0F B6 91 5C 03 00 00: movzx dx, byte ptr [ecx + 0x35c]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x91
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0cdch]
        ; Exact mapped bytes 66 39 50 06: cmp word ptr [eax + 6], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x06
        ; Exact mapped bytes 74 0F: je 0x58816d9d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov esi, dword ptr [esi + 16ch]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        pop ecx
        ret
    }
}
