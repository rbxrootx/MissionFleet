// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856A050 .. +0x6D0 bytes.
extern "C" __declspec(naked) void FUN_5856a050_5856A050() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1d8h
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
        mov dword ptr [ebp - 1ach], ecx
        mov eax, dword ptr [ebp - 1ach]
        ; Exact mapped bytes 66 8B 88 28 02 00 00: mov cx, word ptr [eax + 0x228]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx eax, cx
        mov edx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes 66 8B 8A 28 02 00 00: mov cx, word ptr [edx + 0x228]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 0B: shr cx, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 E1 03: and cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x03
        movzx ecx, cx
        add ecx, 1
        cdq
        idiv ecx
        mov dword ptr [ebp - 1cch], eax
        mov edx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes 66 8B 82 28 02 00 00: mov ax, word ptr [edx + 0x228]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx eax, ax
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes 66 8B 91 28 02 00 00: mov dx, word ptr [ecx + 0x228]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 0B: shr dx, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 E2 03: and dx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x03
        movzx ecx, dx
        add ecx, 1
        cdq
        idiv ecx
        mov dword ptr [ebp - 1d4h], edx
        mov dword ptr [ebp - 1d0h], 0
        mov dword ptr [ebp - 1b4h], 0
        mov dword ptr [ebp - 1a8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5856a10a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 1a8h]
        add edx, 1
        mov dword ptr [ebp - 1a8h], edx
        mov eax, dword ptr [ebp - 1ach]
        ; Exact mapped bytes 66 8B 88 28 02 00 00: mov cx, word ptr [eax + 0x228]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 0B: shr cx, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 E1 03: and cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x03
        movzx edx, cx
        add edx, 1
        cmp dword ptr [ebp - 1a8h], edx
        ; Exact mapped bytes 0F 8D DE 01 00 00: jge 0x5856a30f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1a8h], 0
        ; Exact mapped bytes 75 18: jne 0x5856a152
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 1cch]
        add eax, dword ptr [ebp - 1d4h]
        mov ecx, dword ptr [ebp - 1a8h]
        mov dword ptr [ebp + ecx*4 - 24h], eax
        ; Exact mapped bytes EB 10: jmp 0x5856a162
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 1a8h]
        mov eax, dword ptr [ebp - 1cch]
        mov dword ptr [ebp + edx*4 - 24h], eax
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes 66 8B 91 2A 02 00 00: mov dx, word ptr [ecx + 0x22a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        mov ecx, dword ptr [ebp - 1a8h]
        imul eax, dword ptr [ebp + ecx*4 - 24h]
        cdq
        sub eax, edx
        sar eax, 1
        neg eax
        mov dword ptr [ebp - 1c4h], eax
        mov dword ptr [ebp - 1c8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5856a1ad
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 1c8h]
        add edx, 1
        mov dword ptr [ebp - 1c8h], edx
        mov eax, dword ptr [ebp - 1a8h]
        mov ecx, dword ptr [ebp - 1c8h]
        cmp ecx, dword ptr [ebp + eax*4 - 24h]
        ; Exact mapped bytes 0F 8D 23 01 00 00: jge 0x5856a2e6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 1b4h], 18h
        lea eax, [ebp + edx - 1a4h]
        mov ecx, 8
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 1c4h]
        mov dword ptr [eax + edx], ecx
        mov edx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes 66 8B 82 2A 02 00 00: mov ax, word ptr [edx + 0x22a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        imul edx, dword ptr [ebp - 1b4h], 18h
        lea eax, [ebp + edx - 1a4h]
        mov edx, 8
        imul edx, edx, 0
        mov dword ptr [eax + edx + 4], ecx
        imul eax, dword ptr [ebp - 1b4h], 18h
        lea ecx, [ebp + eax - 1a4h]
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 1c4h]
        mov dword ptr [ecx + edx], eax
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes 66 8B 91 2A 02 00 00: mov dx, word ptr [ecx + 0x22a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        add eax, 21h
        imul ecx, dword ptr [ebp - 1b4h], 18h
        lea edx, [ebp + ecx - 1a4h]
        mov ecx, 8
        shl ecx, 0
        mov dword ptr [edx + ecx + 4], eax
        imul edx, dword ptr [ebp - 1b4h], 18h
        lea eax, [ebp + edx - 1a4h]
        mov ecx, 8
        shl ecx, 1
        mov edx, dword ptr [ebp - 1c4h]
        mov dword ptr [eax + ecx], edx
        mov eax, dword ptr [ebp - 1ach]
        ; Exact mapped bytes 66 8B 88 2A 02 00 00: mov cx, word ptr [eax + 0x22a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        add edx, 54h
        imul eax, dword ptr [ebp - 1b4h], 18h
        lea ecx, [ebp + eax - 1a4h]
        mov eax, 8
        shl eax, 1
        mov dword ptr [ecx + eax + 4], edx
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes 66 8B 91 2A 02 00 00: mov dx, word ptr [ecx + 0x22a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        add eax, dword ptr [ebp - 1c4h]
        mov dword ptr [ebp - 1c4h], eax
        mov ecx, dword ptr [ebp - 1b4h]
        add ecx, 1
        mov dword ptr [ebp - 1b4h], ecx
        ; Exact mapped bytes E9 B8 FE FF FF: jmp 0x5856a19e
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes 66 8B 82 2A 02 00 00: mov ax, word ptr [edx + 0x22a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 0A: shr ax, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        add ecx, dword ptr [ebp - 1d0h]
        mov dword ptr [ebp - 1d0h], ecx
        ; Exact mapped bytes E9 EC FD FF FF: jmp 0x5856a0fb
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], 64h
        mov dword ptr [ebp - 1a8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5856a334
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 1a8h]
        add edx, 1
        mov dword ptr [ebp - 1a8h], edx
        mov eax, dword ptr [ebp - 1ach]
        ; Exact mapped bytes 66 8B 88 28 02 00 00: mov cx, word ptr [eax + 0x228]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp dword ptr [ebp - 1a8h], edx
        ; Exact mapped bytes 0F 8D BC 03 00 00: jge 0x5856a710
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1c0h], 0
        mov dword ptr [ebp - 1b0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5856a379
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 1b0h]
        add eax, 1
        mov dword ptr [ebp - 1b0h], eax
        cmp dword ptr [ebp - 1b0h], 24h
        ; Exact mapped bytes 0F 8D 85 03 00 00: jge 0x5856a70b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1c0h]
        mov edx, dword ptr [ecx*4 + 5894c930h]
        mov dword ptr [ebp - 1bch], edx
        mov eax, dword ptr [ebp - 1c0h]
        mov ecx, dword ptr [eax*4 + 589490f0h]
        mov dword ptr [ebp - 1b8h], ecx
        imul edx, dword ptr [ebp - 1a8h], 18h
        lea eax, [ebp + edx - 1a4h]
        mov ecx, 8
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 1bch]
        imul ecx, dword ptr [eax + edx]
        mov eax, ecx
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov ecx, eax
        imul edx, dword ptr [ebp - 1a8h], 18h
        lea eax, [ebp + edx - 1a4h]
        mov edx, 8
        imul edx, edx, 0
        mov esi, dword ptr [ebp - 1b8h]
        imul esi, dword ptr [eax + edx + 4]
        mov eax, esi
        cdq
        mov esi, 3e8h
        idiv esi
        sub ecx, eax
        imul eax, dword ptr [ebp - 1a8h], 360h
        mov edx, dword ptr [ebp - 1ach]
        lea eax, [edx + eax + 2fch]
        imul edx, dword ptr [ebp - 1b0h], 18h
        add eax, edx
        mov edx, 8
        imul edx, edx, 0
        mov dword ptr [eax + edx], ecx
        mov eax, dword ptr [ebp - 1ach]
        ; Exact mapped bytes 66 8B 88 2C 02 00 00: mov cx, word ptr [eax + 0x22c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx ecx, cx
        imul edx, dword ptr [ebp - 1a8h], 18h
        lea eax, [ebp + edx - 1a4h]
        mov edx, 8
        imul edx, edx, 0
        mov esi, dword ptr [ebp - 1b8h]
        imul esi, dword ptr [eax + edx]
        mov eax, esi
        cdq
        mov esi, 3e8h
        idiv esi
        mov esi, eax
        imul eax, dword ptr [ebp - 1a8h], 18h
        lea edx, [ebp + eax - 1a4h]
        mov eax, 8
        imul eax, eax, 0
        mov edi, dword ptr [ebp - 1bch]
        imul edi, dword ptr [edx + eax + 4]
        mov eax, edi
        cdq
        mov edi, 3e8h
        idiv edi
        add eax, esi
        cdq
        sub eax, edx
        sar eax, 1
        add ecx, eax
        imul edx, dword ptr [ebp - 1a8h], 360h
        mov eax, dword ptr [ebp - 1ach]
        lea edx, [eax + edx + 2fch]
        imul eax, dword ptr [ebp - 1b0h], 18h
        add edx, eax
        mov eax, 8
        imul eax, eax, 0
        mov dword ptr [edx + eax + 4], ecx
        imul ecx, dword ptr [ebp - 1a8h], 18h
        lea edx, [ebp + ecx - 1a4h]
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 1bch]
        imul ecx, dword ptr [edx + eax]
        mov eax, ecx
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov ecx, eax
        imul edx, dword ptr [ebp - 1a8h], 18h
        lea eax, [ebp + edx - 1a4h]
        mov edx, 8
        shl edx, 0
        mov esi, dword ptr [ebp - 1b8h]
        imul esi, dword ptr [eax + edx + 4]
        mov eax, esi
        cdq
        mov esi, 3e8h
        idiv esi
        sub ecx, eax
        imul eax, dword ptr [ebp - 1a8h], 360h
        mov edx, dword ptr [ebp - 1ach]
        lea eax, [edx + eax + 2fch]
        imul edx, dword ptr [ebp - 1b0h], 18h
        add eax, edx
        mov edx, 8
        shl edx, 0
        mov dword ptr [eax + edx], ecx
        imul eax, dword ptr [ebp - 1a8h], 18h
        lea ecx, [ebp + eax - 1a4h]
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 1b8h]
        imul eax, dword ptr [ecx + edx]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov ecx, eax
        imul edx, dword ptr [ebp - 1a8h], 18h
        lea eax, [ebp + edx - 1a4h]
        mov edx, 8
        shl edx, 0
        mov esi, dword ptr [ebp - 1bch]
        imul esi, dword ptr [eax + edx + 4]
        mov eax, esi
        cdq
        mov esi, 3e8h
        idiv esi
        add eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        imul ecx, dword ptr [ebp - 1a8h], 360h
        mov edx, dword ptr [ebp - 1ach]
        lea ecx, [edx + ecx + 2fch]
        imul edx, dword ptr [ebp - 1b0h], 18h
        add ecx, edx
        mov edx, 8
        shl edx, 0
        mov dword ptr [ecx + edx + 4], eax
        imul eax, dword ptr [ebp - 1a8h], 18h
        lea ecx, [ebp + eax - 1a4h]
        mov edx, 8
        shl edx, 1
        mov eax, dword ptr [ebp - 1bch]
        imul eax, dword ptr [ecx + edx]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov ecx, eax
        imul edx, dword ptr [ebp - 1a8h], 18h
        lea eax, [ebp + edx - 1a4h]
        mov edx, 8
        shl edx, 1
        mov esi, dword ptr [ebp - 1b8h]
        imul esi, dword ptr [eax + edx + 4]
        mov eax, esi
        cdq
        mov esi, 3e8h
        idiv esi
        sub ecx, eax
        imul eax, dword ptr [ebp - 1a8h], 360h
        mov edx, dword ptr [ebp - 1ach]
        lea eax, [edx + eax + 2fch]
        imul edx, dword ptr [ebp - 1b0h], 18h
        add eax, edx
        mov edx, 8
        shl edx, 1
        mov dword ptr [eax + edx], ecx
        imul eax, dword ptr [ebp - 1a8h], 18h
        lea ecx, [ebp + eax - 1a4h]
        mov edx, 8
        shl edx, 1
        mov eax, dword ptr [ebp - 1b8h]
        imul eax, dword ptr [ecx + edx]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov ecx, eax
        imul edx, dword ptr [ebp - 1a8h], 18h
        lea eax, [ebp + edx - 1a4h]
        mov edx, 8
        shl edx, 1
        mov esi, dword ptr [ebp - 1bch]
        imul esi, dword ptr [eax + edx + 4]
        mov eax, esi
        cdq
        mov esi, 3e8h
        idiv esi
        add eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        imul ecx, dword ptr [ebp - 1a8h], 360h
        mov edx, dword ptr [ebp - 1ach]
        lea ecx, [edx + ecx + 2fch]
        imul edx, dword ptr [ebp - 1b0h], 18h
        add ecx, edx
        mov edx, 8
        shl edx, 1
        mov dword ptr [ecx + edx + 4], eax
        mov eax, dword ptr [ebp - 1c0h]
        add eax, dword ptr [ebp - 1d8h]
        mov dword ptr [ebp - 1c0h], eax
        mov eax, dword ptr [ebp - 1c0h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 1c0h], edx
        ; Exact mapped bytes E9 5F FC FF FF: jmp 0x5856a36a
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 15 FC FF FF: jmp 0x5856a325
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 34 69 2C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x69
        __asm _emit 0x2c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
