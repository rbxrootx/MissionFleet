// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B17A0 .. +0x52F bytes.
extern "C" __declspec(naked) void FUN_587b17a0_587B17A0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 18h
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 28h]
        push esi
        push edi
        xor edi, edi
        or esi, 0ffffffffh
        movzx ebx, word ptr [ebp + 2]
        cmp dword ptr [esp + 34h], edi
        ; Exact mapped bytes 0F 8C 05 05 00 00: jl 0x587b1cc7
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        mov ecx, 7
        mov edx, 8ah
        cmovne edx, ecx
        xor ecx, ecx
        test ebx, ebx
        setne cl
        add ebp, 6
        mov dword ptr [esp + 10h], ebp
        add ecx, 3
        mov ebp, dword ptr [esp + 34h]
        inc ebp
        mov dword ptr [esp + 1ch], ebp
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, ebx
        mov dword ptr [esp + 30h], ebx
        mov dword ptr [esp + 34h], ebx
        mov ebx, dword ptr [esp + 10h]
        mov dword ptr [esp + 20h], edi
        inc edi
        mov dword ptr [esp + 18h], ebp
        movzx ebx, word ptr [ebx]
        mov dword ptr [esp + 24h], ebx
        cmp edi, edx
        ; Exact mapped bytes 7D 08: jge 0x587b181a
        __asm _emit 0x7d
        __asm _emit 0x08
        cmp ebp, ebx
        ; Exact mapped bytes 0F 84 9D 04 00 00: je 0x587b1cb7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, ecx
        ; Exact mapped bytes 0F 8D A7 00 00 00: jge 0x587b18c9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 34h]
        mov esi, dword ptr [eax + 16bch]
        movzx ebp, word ptr [eax + ebp*4 + 0a7eh]
        movzx ebx, word ptr [eax + ecx*4 + 0a7ch]
        mov ecx, esi
        ; Exact mapped bytes 66 8B D3: mov dx, bx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd3
        ; Exact mapped bytes 66 D3 E2: shl dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe2
        mov ecx, 10h
        ; Exact mapped bytes 66 0B 90 B8 16 00 00: or dx, word ptr [eax + 0x16b8]
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, ebp
        movzx edx, dx
        mov dword ptr [esp + 14h], edx
        cmp esi, ecx
        ; Exact mapped bytes 7E 48: jle 0x587b18a5
        __asm _emit 0x7e
        __asm _emit 0x48
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 66 89 90 B8 16 00 00: mov word ptr [eax + 0x16b8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 14h]
        mov eax, dword ptr [esp + 14h]
        mov byte ptr [edx + ecx], al
        mov eax, dword ptr [esp + 2ch]
        inc dword ptr [eax + 14h]
        mov esi, dword ptr [eax + 14h]
        mov edx, dword ptr [eax + 8]
        mov cl, byte ptr [eax + 16b9h]
        mov byte ptr [esi + edx], cl
        mov cl, 10h
        mov esi, dword ptr [eax + 16bch]
        sub cl, byte ptr [eax + 16bch]
        add esi, -10h
        inc dword ptr [eax + 14h]
        add esi, ebp
        ; Exact mapped bytes 66 D3 EB: shr bx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xeb
        movzx ecx, bx
        ; Exact mapped bytes EB 05: jmp 0x587b18aa
        __asm _emit 0xeb
        __asm _emit 0x05
        add esi, ebp
        movzx ecx, dx
        mov ebp, dword ptr [esp + 18h]
        ; Exact mapped bytes 66 89 88 B8 16 00 00: mov word ptr [eax + 0x16b8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 16bch], esi
        sub edi, 1
        ; Exact mapped bytes 0F 85 5E FF FF FF: jne 0x587b1822
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BE 03 00 00: jmp 0x587b1c87
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 30h], 0
        lea ebx, [eax + 16b8h]
        ; Exact mapped bytes 0F 84 A5 01 00 00: je 0x587b1a7f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, esi
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x587b1980
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [eax + ebp*4 + 0a7eh]
        lea ebp, [eax + 16bch]
        mov esi, dword ptr [ebp]
        mov dword ptr [esp + 14h], ecx
        mov ecx, dword ptr [esp + 34h]
        movzx edi, word ptr [eax + ecx*4 + 0a7ch]
        mov ecx, esi
        ; Exact mapped bytes 66 8B D7: mov dx, di
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes 66 D3 E2: shl dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe2
        ; Exact mapped bytes 66 0B 13: or dx, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0x13
        movzx ecx, dx
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [esp + 34h], ecx
        mov ecx, 10h
        sub ecx, edx
        cmp esi, ecx
        mov ecx, dword ptr [esp + 34h]
        ; Exact mapped bytes 7E 47: jle 0x587b196f
        __asm _emit 0x7e
        __asm _emit 0x47
        mov edx, dword ptr [eax + 14h]
        ; Exact mapped bytes 66 89 0B: mov word ptr [ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [esp + 34h]
        mov byte ptr [edx + ecx], al
        mov eax, dword ptr [esp + 2ch]
        mov cl, byte ptr [ebx + 1]
        inc dword ptr [eax + 14h]
        mov esi, dword ptr [eax + 14h]
        mov edx, dword ptr [eax + 8]
        mov byte ptr [esi + edx], cl
        mov cl, 10h
        mov edx, dword ptr [esp + 14h]
        sub cl, byte ptr [ebp]
        add edx, -10h
        inc dword ptr [eax + 14h]
        add edx, dword ptr [ebp]
        ; Exact mapped bytes 66 D3 EF: shr di, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xef
        movzx ecx, di
        mov edi, dword ptr [esp + 20h]
        ; Exact mapped bytes 66 89 0B: mov word ptr [ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0b
        mov dword ptr [ebp], edx
        ; Exact mapped bytes EB 17: jmp 0x587b1986
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edi, dword ptr [esp + 20h]
        add edx, esi
        movzx ecx, cx
        ; Exact mapped bytes 66 89 0B: mov word ptr [ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0b
        mov dword ptr [ebp], edx
        ; Exact mapped bytes EB 06: jmp 0x587b1986
        __asm _emit 0xeb
        __asm _emit 0x06
        lea ebp, [eax + 16bch]
        movzx ecx, word ptr [eax + 0abeh]
        mov esi, dword ptr [ebp]
        mov dword ptr [esp + 14h], ecx
        movzx ecx, word ptr [eax + 0abch]
        ; Exact mapped bytes 66 8B D1: mov dx, cx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd1
        mov dword ptr [esp + 20h], ecx
        mov ecx, esi
        ; Exact mapped bytes 66 D3 E2: shl dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe2
        ; Exact mapped bytes 66 0B 13: or dx, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0x13
        movzx ecx, dx
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [esp + 34h], ecx
        mov ecx, 10h
        sub ecx, edx
        cmp esi, ecx
        mov ecx, dword ptr [esp + 34h]
        ; Exact mapped bytes 7E 41: jle 0x587b1a05
        __asm _emit 0x7e
        __asm _emit 0x41
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes 66 89 0B: mov word ptr [ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 14h]
        mov eax, dword ptr [esp + 34h]
        mov byte ptr [edx + ecx], al
        mov eax, dword ptr [esp + 2ch]
        mov cl, byte ptr [ebx + 1]
        inc dword ptr [eax + 14h]
        mov esi, dword ptr [eax + 14h]
        mov edx, dword ptr [eax + 8]
        mov byte ptr [esi + edx], cl
        mov cl, 10h
        mov esi, dword ptr [esp + 14h]
        sub cl, byte ptr [ebp]
        add esi, -10h
        mov edx, dword ptr [esp + 20h]
        inc dword ptr [eax + 14h]
        add esi, dword ptr [ebp]
        ; Exact mapped bytes 66 D3 EA: shr dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xea
        movzx ecx, dx
        ; Exact mapped bytes EB 05: jmp 0x587b1a0a
        __asm _emit 0xeb
        __asm _emit 0x05
        add esi, edx
        movzx ecx, cx
        mov dword ptr [esp + 34h], ecx
        mov ecx, ebp
        mov dword ptr [ecx], esi
        lea ecx, [edi - 3]
        movzx edi, cx
        mov ecx, esi
        ; Exact mapped bytes 66 8B D7: mov dx, di
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes 66 D3 E2: shl dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe2
        ; Exact mapped bytes 66 0B 54 24 34: or dx, word ptr [esp + 0x34]
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        movzx edx, dx
        mov dword ptr [esp + 34h], edx
        cmp esi, 0eh
        ; Exact mapped bytes 7E 3D: jle 0x587b1a6e
        __asm _emit 0x7e
        __asm _emit 0x3d
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 66 89 13: mov word ptr [ebx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x13
        mov edx, dword ptr [eax + 14h]
        mov eax, dword ptr [esp + 34h]
        mov byte ptr [edx + ecx], al
        mov eax, dword ptr [esp + 2ch]
        mov cl, byte ptr [ebx + 1]
        inc dword ptr [eax + 14h]
        mov esi, dword ptr [eax + 14h]
        mov edx, dword ptr [eax + 8]
        mov byte ptr [esi + edx], cl
        mov cl, 10h
        sub cl, byte ptr [ebp]
        inc dword ptr [eax + 14h]
        ; Exact mapped bytes 66 D3 EF: shr di, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xef
        add dword ptr [ebp], -0eh
        movzx ecx, di
        ; Exact mapped bytes 66 89 0B: mov word ptr [ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0b
        ; Exact mapped bytes E9 19 02 00 00: jmp 0x587b1c87
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 2]
        mov dword ptr [ebp], ecx
        movzx ecx, dx
        ; Exact mapped bytes 66 89 0B: mov word ptr [ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0b
        ; Exact mapped bytes E9 08 02 00 00: jmp 0x587b1c87
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [eax + 16bch]
        lea ebp, [eax + 16bch]
        cmp edi, 0ah
        ; Exact mapped bytes 0F 8F 02 01 00 00: jg 0x587b1b96
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [eax + 0ac2h]
        mov dword ptr [esp + 14h], ecx
        movzx ecx, word ptr [eax + 0ac0h]
        ; Exact mapped bytes 66 8B D1: mov dx, cx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd1
        mov dword ptr [esp + 20h], ecx
        mov ecx, esi
        ; Exact mapped bytes 66 D3 E2: shl dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe2
        ; Exact mapped bytes 66 0B 13: or dx, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0x13
        movzx ecx, dx
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [esp + 34h], ecx
        mov ecx, 10h
        sub ecx, edx
        cmp esi, ecx
        mov ecx, dword ptr [esp + 34h]
        ; Exact mapped bytes 7E 41: jle 0x587b1b10
        __asm _emit 0x7e
        __asm _emit 0x41
        mov edx, dword ptr [eax + 14h]
        ; Exact mapped bytes 66 89 0B: mov word ptr [ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [esp + 34h]
        mov byte ptr [edx + ecx], al
        mov eax, dword ptr [esp + 2ch]
        mov cl, byte ptr [ebx + 1]
        inc dword ptr [eax + 14h]
        mov esi, dword ptr [eax + 14h]
        mov edx, dword ptr [eax + 8]
        mov byte ptr [esi + edx], cl
        mov cl, 10h
        mov esi, dword ptr [esp + 14h]
        sub cl, byte ptr [ebp]
        add esi, -10h
        mov edx, dword ptr [esp + 20h]
        inc dword ptr [eax + 14h]
        add esi, dword ptr [ebp]
        ; Exact mapped bytes 66 D3 EA: shr dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xea
        movzx ecx, dx
        ; Exact mapped bytes EB 05: jmp 0x587b1b15
        __asm _emit 0xeb
        __asm _emit 0x05
        add esi, edx
        movzx ecx, cx
        mov edx, ebp
        mov dword ptr [esp + 34h], ecx
        mov ebp, ebx
        ; Exact mapped bytes 66 89 4D 00: mov word ptr [ebp], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x00
        lea ecx, [edi - 3]
        mov dword ptr [edx], esi
        lea ebp, [eax + 16bch]
        movzx edi, cx
        mov ecx, esi
        ; Exact mapped bytes 66 8B D7: mov dx, di
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes 66 D3 E2: shl dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe2
        ; Exact mapped bytes 66 0B 54 24 34: or dx, word ptr [esp + 0x34]
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        movzx edx, dx
        mov dword ptr [esp + 34h], edx
        cmp esi, 0dh
        ; Exact mapped bytes 7E 3D: jle 0x587b1b85
        __asm _emit 0x7e
        __asm _emit 0x3d
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 66 89 13: mov word ptr [ebx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x13
        mov edx, dword ptr [eax + 14h]
        mov eax, dword ptr [esp + 34h]
        mov byte ptr [edx + ecx], al
        mov eax, dword ptr [esp + 2ch]
        mov cl, byte ptr [ebx + 1]
        inc dword ptr [eax + 14h]
        mov esi, dword ptr [eax + 14h]
        mov edx, dword ptr [eax + 8]
        mov byte ptr [esi + edx], cl
        mov cl, 10h
        sub cl, byte ptr [ebp]
        inc dword ptr [eax + 14h]
        ; Exact mapped bytes 66 D3 EF: shr di, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xef
        add dword ptr [ebp], -0dh
        movzx ecx, di
        ; Exact mapped bytes 66 89 0B: mov word ptr [ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0b
        ; Exact mapped bytes E9 02 01 00 00: jmp 0x587b1c87
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 3]
        mov dword ptr [ebp], ecx
        movzx ecx, dx
        ; Exact mapped bytes 66 89 0B: mov word ptr [ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0b
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x587b1c87
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [eax + 0ac6h]
        mov dword ptr [esp + 14h], ecx
        movzx ecx, word ptr [eax + 0ac4h]
        ; Exact mapped bytes 66 8B D1: mov dx, cx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd1
        mov dword ptr [esp + 20h], ecx
        mov ecx, esi
        ; Exact mapped bytes 66 D3 E2: shl dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe2
        ; Exact mapped bytes 66 0B 13: or dx, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0x13
        movzx ecx, dx
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [esp + 34h], ecx
        mov ecx, 10h
        sub ecx, edx
        cmp esi, ecx
        mov ecx, dword ptr [esp + 34h]
        ; Exact mapped bytes 7E 41: jle 0x587b1c12
        __asm _emit 0x7e
        __asm _emit 0x41
        mov edx, dword ptr [eax + 14h]
        ; Exact mapped bytes 66 89 0B: mov word ptr [ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [esp + 34h]
        mov byte ptr [edx + ecx], al
        mov eax, dword ptr [esp + 2ch]
        mov cl, byte ptr [ebx + 1]
        inc dword ptr [eax + 14h]
        mov esi, dword ptr [eax + 14h]
        mov edx, dword ptr [eax + 8]
        mov byte ptr [esi + edx], cl
        mov cl, 10h
        mov esi, dword ptr [esp + 14h]
        sub cl, byte ptr [ebp]
        add esi, -10h
        mov edx, dword ptr [esp + 20h]
        inc dword ptr [eax + 14h]
        add esi, dword ptr [ebp]
        ; Exact mapped bytes 66 D3 EA: shr dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xea
        movzx ecx, dx
        ; Exact mapped bytes EB 05: jmp 0x587b1c17
        __asm _emit 0xeb
        __asm _emit 0x05
        add esi, edx
        movzx ecx, cx
        mov edx, ebp
        mov dword ptr [esp + 34h], ecx
        mov ebp, ebx
        ; Exact mapped bytes 66 89 4D 00: mov word ptr [ebp], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x00
        lea ecx, [edi - 0bh]
        mov dword ptr [edx], esi
        lea ebp, [eax + 16bch]
        movzx edi, cx
        mov ecx, esi
        ; Exact mapped bytes 66 8B D7: mov dx, di
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes 66 D3 E2: shl dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe2
        ; Exact mapped bytes 66 0B 54 24 34: or dx, word ptr [esp + 0x34]
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        movzx ecx, dx
        mov dword ptr [esp + 34h], ecx
        ; Exact mapped bytes 66 89 0B: mov word ptr [ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0b
        cmp esi, 9
        ; Exact mapped bytes 7E 34: jle 0x587b1c81
        __asm _emit 0x7e
        __asm _emit 0x34
        mov edx, dword ptr [eax + 14h]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [esp + 34h]
        mov byte ptr [edx + ecx], al
        mov eax, dword ptr [esp + 2ch]
        mov cl, byte ptr [ebx + 1]
        inc dword ptr [eax + 14h]
        mov esi, dword ptr [eax + 14h]
        mov edx, dword ptr [eax + 8]
        mov byte ptr [esi + edx], cl
        mov cl, 10h
        sub cl, byte ptr [ebp]
        inc dword ptr [eax + 14h]
        ; Exact mapped bytes 66 D3 EF: shr di, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xef
        add dword ptr [ebp], -9
        ; Exact mapped bytes 66 89 3B: mov word ptr [ebx], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x3b
        ; Exact mapped bytes EB 06: jmp 0x587b1c87
        __asm _emit 0xeb
        __asm _emit 0x06
        lea ecx, [esi + 7]
        mov dword ptr [ebp], ecx
        mov ebx, dword ptr [esp + 24h]
        xor edi, edi
        mov esi, dword ptr [esp + 18h]
        test ebx, ebx
        ; Exact mapped bytes 75 0A: jne 0x587b1c9f
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, 8ah
        lea ecx, [edi + 3]
        ; Exact mapped bytes EB 18: jmp 0x587b1cb7
        __asm _emit 0xeb
        __asm _emit 0x18
        cmp dword ptr [esp + 30h], ebx
        ; Exact mapped bytes 75 0A: jne 0x587b1caf
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, 6
        lea ecx, [edx - 3]
        ; Exact mapped bytes EB 08: jmp 0x587b1cb7
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, 7
        lea ecx, [edx - 3]
        add dword ptr [esp + 10h], 4
        sub dword ptr [esp + 1ch], 1
        ; Exact mapped bytes 0F 85 29 FB FF FF: jne 0x587b17f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 18h
        ret
    }
}
