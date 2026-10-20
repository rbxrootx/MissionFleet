// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B0BF0 .. +0x4E1 bytes.
extern "C" __declspec(naked) void FUN_587b0bf0_587B0BF0() {
    __asm {
        sub esp, 38h
        mov eax, dword ptr [esp + 3ch]
        xor ecx, ecx
        push ebx
        push ebp
        push esi
        lea ebx, [eax + 8]
        lea ebp, [eax + 14h]
        mov dword ptr [esp + 0ch], ebx
        lea esi, [ecx + 10h]
        push edi
        lea edi, [eax + 16bch]
        cmp dword ptr [eax + 16a0h], ecx
        ; Exact mapped bytes 0F 84 0A 04 00 00: je 0x587b1026
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        mov edx, dword ptr [eax + 1698h]
        mov dword ptr [esp + 44h], ebp
        mov dword ptr [esp + 40h], ebx
        mov dword ptr [esp + 3ch], ebp
        movzx esi, byte ptr [edx + ecx]
        inc ecx
        mov dword ptr [esp + 24h], ecx
        mov dword ptr [esp + 30h], ebx
        mov dword ptr [esp + 2ch], ebp
        movzx ecx, byte ptr [edx + ecx]
        shl ecx, 8
        add esi, ecx
        mov ecx, dword ptr [esp + 24h]
        mov dword ptr [esp + 1ch], esi
        movzx edx, byte ptr [edx + ecx + 1]
        add ecx, 2
        mov dword ptr [esp + 38h], edx
        mov dword ptr [esp + 24h], ecx
        test esi, esi
        ; Exact mapped bytes 0F 85 9B 00 00 00: jne 0x587b0d07
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 50h]
        mov esi, dword ptr [edi]
        movzx ebx, word ptr [ecx + edx*4]
        movzx ebp, word ptr [ecx + edx*4 + 2]
        ; Exact mapped bytes 66 8B D3: mov dx, bx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd3
        mov ecx, esi
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
        mov dword ptr [esp + 30h], edx
        cmp esi, ecx
        ; Exact mapped bytes 7E 52: jle 0x587b0cee
        __asm _emit 0x7e
        __asm _emit 0x52
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes 66 89 90 B8 16 00 00: mov word ptr [eax + 0x16b8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [esp + 30h]
        mov byte ptr [edx + ecx], al
        mov eax, dword ptr [esp + 4ch]
        inc dword ptr [eax + 14h]
        mov esi, dword ptr [eax + 14h]
        mov edx, dword ptr [eax + 8]
        mov cl, byte ptr [eax + 16b9h]
        mov byte ptr [esi + edx], cl
        mov cl, 10h
        mov esi, dword ptr [edi]
        sub cl, byte ptr [edi]
        add esi, -10h
        inc dword ptr [eax + 14h]
        add esi, ebp
        ; Exact mapped bytes 66 D3 EB: shr bx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xeb
        lea ebp, [eax + 14h]
        movzx ecx, bx
        lea ebx, [eax + 8]
        ; Exact mapped bytes 66 89 88 B8 16 00 00: mov word ptr [eax + 0x16b8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi], esi
        ; Exact mapped bytes E9 1F 03 00 00: jmp 0x587b100d
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, ebp
        movzx ecx, dx
        ; Exact mapped bytes 66 89 88 B8 16 00 00: mov word ptr [eax + 0x16b8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebp, [eax + 14h]
        mov dword ptr [edi], esi
        lea ebx, [eax + 8]
        ; Exact mapped bytes E9 06 03 00 00: jmp 0x587b100d
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [edx + 588bc578h]
        mov esi, dword ptr [esp + 50h]
        lea edx, [ecx*4]
        mov dword ptr [esp + 28h], edx
        movzx edx, word ptr [edx + esi + 406h]
        mov esi, dword ptr [edi]
        mov dword ptr [esp + 20h], edx
        mov edx, dword ptr [esp + 50h]
        movzx ecx, word ptr [edx + ecx*4 + 404h]
        ; Exact mapped bytes 66 8B D1: mov dx, cx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd1
        mov dword ptr [esp + 34h], ecx
        mov ecx, esi
        ; Exact mapped bytes 66 D3 E2: shl dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe2
        ; Exact mapped bytes 66 0B 90 B8 16 00 00: or dx, word ptr [eax + 0x16b8]
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, dx
        mov edx, dword ptr [esp + 20h]
        mov dword ptr [esp + 18h], ecx
        mov ecx, 10h
        sub ecx, edx
        cmp esi, ecx
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 7E 46: jle 0x587b0daa
        __asm _emit 0x7e
        __asm _emit 0x46
        mov edx, dword ptr [ebp]
        ; Exact mapped bytes 66 89 88 B8 16 00 00: mov word ptr [eax + 0x16b8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        mov eax, dword ptr [esp + 18h]
        mov byte ptr [edx + ecx], al
        inc dword ptr [ebp]
        mov esi, dword ptr [ebp]
        mov eax, dword ptr [esp + 4ch]
        mov edx, dword ptr [ebx]
        mov cl, byte ptr [eax + 16b9h]
        mov byte ptr [esi + edx], cl
        mov cl, 10h
        mov edx, dword ptr [esp + 20h]
        mov esi, dword ptr [edi]
        add edx, -10h
        sub cl, byte ptr [edi]
        add esi, edx
        mov edx, dword ptr [esp + 34h]
        inc dword ptr [ebp]
        ; Exact mapped bytes 66 D3 EA: shr dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xea
        movzx edx, dx
        ; Exact mapped bytes EB 05: jmp 0x587b0daf
        __asm _emit 0xeb
        __asm _emit 0x05
        add esi, edx
        movzx edx, cx
        movzx ecx, dx
        mov dword ptr [esp + 34h], ecx
        mov ecx, dword ptr [esp + 28h]
        ; Exact mapped bytes 66 89 90 B8 16 00 00: mov word ptr [eax + 0x16b8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi], esi
        movzx edx, dx
        mov ecx, dword ptr [ecx + 588bc878h]
        mov dword ptr [esp + 14h], esi
        mov dword ptr [esp + 20h], ecx
        mov dword ptr [esp + 18h], edx
        test ecx, ecx
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x587b0e7d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 28h]
        mov ecx, dword ptr [esp + 38h]
        sub ecx, dword ptr [edx + 588bcec0h]
        movzx edx, cx
        mov ecx, esi
        mov dword ptr [esp + 38h], edx
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
        mov edx, dword ptr [esp + 20h]
        mov dword ptr [esp + 28h], ecx
        ; Exact mapped bytes 66 89 88 B8 16 00 00: mov word ptr [eax + 0x16b8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 10h
        sub ecx, edx
        cmp esi, ecx
        ; Exact mapped bytes 7E 4E: jle 0x587b0e6a
        __asm _emit 0x7e
        __asm _emit 0x4e
        mov edx, dword ptr [ebp]
        mov ecx, dword ptr [ebx]
        mov eax, dword ptr [esp + 28h]
        mov byte ptr [edx + ecx], al
        inc dword ptr [ebp]
        mov eax, dword ptr [esp + 4ch]
        mov edx, dword ptr [ebx]
        mov esi, dword ptr [ebp]
        mov cl, byte ptr [eax + 16b9h]
        mov byte ptr [esi + edx], cl
        mov cl, 10h
        sub cl, byte ptr [edi]
        mov edx, dword ptr [esp + 38h]
        inc dword ptr [ebp]
        ; Exact mapped bytes 66 D3 EA: shr dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xea
        mov ecx, dword ptr [esp + 20h]
        add ecx, -10h
        ; Exact mapped bytes 66 89 90 B8 16 00 00: mov word ptr [eax + 0x16b8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        add dword ptr [edi], ecx
        mov ebx, dword ptr [edi]
        movzx ecx, dx
        mov dword ptr [esp + 14h], ebx
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes EB 17: jmp 0x587b0e81
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [esp + 28h]
        add esi, edx
        movzx ecx, cx
        mov dword ptr [esp + 14h], esi
        mov dword ptr [edi], esi
        mov dword ptr [esp + 18h], ecx
        mov ebx, dword ptr [esp + 14h]
        mov esi, dword ptr [esp + 1ch]
        dec esi
        mov dword ptr [esp + 1ch], esi
        cmp esi, 100h
        ; Exact mapped bytes 73 08: jae 0x587b0e9a
        __asm _emit 0x73
        __asm _emit 0x08
        mov cl, byte ptr [esi + 588bc678h]
        ; Exact mapped bytes EB 0B: jmp 0x587b0ea5
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, esi
        shr ecx, 7
        mov cl, byte ptr [ecx + 588bc778h]
        mov edx, dword ptr [esp + 54h]
        movzx ecx, cl
        shl ecx, 2
        mov dword ptr [esp + 38h], ecx
        movzx edx, word ptr [ecx + edx + 2]
        mov dword ptr [esp + 20h], edx
        mov edx, dword ptr [esp + 54h]
        movzx ecx, word ptr [ecx + edx]
        mov edx, 10h
        sub edx, dword ptr [esp + 20h]
        mov dword ptr [esp + 28h], ecx
        cmp ebx, edx
        ; Exact mapped bytes 7E 5D: jle 0x587b0f32
        __asm _emit 0x7e
        __asm _emit 0x5d
        mov edx, dword ptr [ebp]
        ; Exact mapped bytes 66 8B D9: mov bx, cx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd9
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 D3 E3: shl bx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe3
        mov ecx, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 0B 5C 24 18: or bx, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 66 89 98 B8 16 00 00: mov word ptr [eax + 0x16b8], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx]
        mov byte ptr [edx + ecx], bl
        mov ebx, dword ptr [esp + 10h]
        inc dword ptr [ebp]
        mov esi, dword ptr [ebp]
        mov cl, byte ptr [eax + 16b9h]
        mov edx, dword ptr [ebx]
        mov byte ptr [esi + edx], cl
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 20h]
        mov esi, dword ptr [esp + 1ch]
        add edx, -10h
        inc dword ptr [ecx]
        mov ecx, dword ptr [edi]
        add ecx, edx
        mov edx, dword ptr [esp + 28h]
        mov dword ptr [esp + 20h], ecx
        mov cl, 10h
        sub cl, byte ptr [edi]
        ; Exact mapped bytes 66 D3 EA: shr dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xea
        ; Exact mapped bytes EB 18: jmp 0x587b0f4a
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [esp + 28h]
        lea ebp, [eax + 14h]
        add dword ptr [esp + 20h], ebx
        mov ecx, ebx
        ; Exact mapped bytes 66 D3 E2: shl dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe2
        lea ebx, [eax + 8]
        ; Exact mapped bytes 66 0B 54 24 18: or dx, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        mov ecx, dword ptr [esp + 20h]
        movzx edx, dx
        ; Exact mapped bytes 66 89 90 B8 16 00 00: mov word ptr [eax + 0x16b8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi], ecx
        movzx ecx, dx
        mov edx, dword ptr [esp + 38h]
        mov dword ptr [esp + 34h], ecx
        mov dword ptr [esp + 10h], ebx
        mov ecx, dword ptr [edx + 588bc8f0h]
        mov dword ptr [esp + 28h], ecx
        test ecx, ecx
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x587b1011
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, dword ptr [edx + 588bcf38h]
        movzx ecx, si
        mov esi, dword ptr [esp + 20h]
        ; Exact mapped bytes 66 8B D1: mov dx, cx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd1
        mov dword ptr [esp + 1ch], ecx
        mov ecx, esi
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
        mov edx, dword ptr [esp + 28h]
        mov dword ptr [esp + 38h], ecx
        ; Exact mapped bytes 66 89 88 B8 16 00 00: mov word ptr [eax + 0x16b8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 10h
        sub ecx, edx
        cmp esi, ecx
        ; Exact mapped bytes 7E 52: jle 0x587b1008
        __asm _emit 0x7e
        __asm _emit 0x52
        mov ebp, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 30h]
        mov ebx, dword ptr [esp + 38h]
        mov edx, dword ptr [ebp]
        mov ecx, dword ptr [ecx]
        mov byte ptr [edx + ecx], bl
        mov ecx, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 40h]
        mov ebx, dword ptr [esp + 30h]
        inc dword ptr [ecx]
        mov esi, dword ptr [ecx]
        mov edx, dword ptr [edx]
        mov cl, byte ptr [eax + 16b9h]
        mov byte ptr [esi + edx], cl
        mov ecx, dword ptr [esp + 44h]
        mov edx, dword ptr [esp + 1ch]
        inc dword ptr [ecx]
        mov cl, 10h
        sub cl, byte ptr [edi]
        ; Exact mapped bytes 66 D3 EA: shr dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xea
        mov ecx, dword ptr [esp + 28h]
        add ecx, -10h
        ; Exact mapped bytes 66 89 90 B8 16 00 00: mov word ptr [eax + 0x16b8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        add dword ptr [edi], ecx
        ; Exact mapped bytes EB 05: jmp 0x587b100d
        __asm _emit 0xeb
        __asm _emit 0x05
        lea ecx, [esi + edx]
        mov dword ptr [edi], ecx
        mov dword ptr [esp + 10h], ebx
        mov ecx, dword ptr [esp + 24h]
        cmp ecx, dword ptr [eax + 16a0h]
        ; Exact mapped bytes 0F 82 FF FB FF FF: jb 0x587b0c20
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, 10h
        mov edx, dword ptr [esp + 50h]
        movzx ecx, word ptr [edx + 402h]
        mov dword ptr [esp + 30h], ecx
        movzx ecx, word ptr [edx + 400h]
        ; Exact mapped bytes 66 8B D1: mov dx, cx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd1
        mov dword ptr [esp + 44h], ecx
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes 66 D3 E2: shl dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe2
        ; Exact mapped bytes 66 0B 90 B8 16 00 00: or dx, word ptr [eax + 0x16b8]
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, dx
        mov dword ptr [esp + 50h], edx
        mov edx, dword ptr [esp + 30h]
        sub esi, edx
        cmp ecx, esi
        ; Exact mapped bytes 7E 57: jle 0x587b10b7
        __asm _emit 0x7e
        __asm _emit 0x57
        mov edx, dword ptr [ebx]
        mov ecx, dword ptr [esp + 50h]
        ; Exact mapped bytes 66 89 88 B8 16 00 00: mov word ptr [eax + 0x16b8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        mov eax, dword ptr [esp + 50h]
        mov byte ptr [edx + ecx], al
        inc dword ptr [ebp]
        mov esi, dword ptr [ebp]
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [esp + 4ch]
        mov cl, byte ptr [eax + 16b9h]
        mov byte ptr [esi + edx], cl
        mov cl, 10h
        sub cl, byte ptr [edi]
        mov edx, dword ptr [esp + 30h]
        inc dword ptr [ebp]
        add edx, -10h
        add edx, dword ptr [edi]
        mov esi, dword ptr [esp + 44h]
        ; Exact mapped bytes 66 D3 EE: shr si, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xee
        movzx ecx, si
        ; Exact mapped bytes 66 89 88 B8 16 00 00: mov word ptr [eax + 0x16b8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 38h
        ret
        add edx, ecx
        mov ecx, dword ptr [esp + 50h]
        movzx ecx, cx
        ; Exact mapped bytes 66 89 88 B8 16 00 00: mov word ptr [eax + 0x16b8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 38h
        ret
    }
}
