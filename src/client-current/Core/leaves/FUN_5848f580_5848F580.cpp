// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848F580 .. +0xEB0 bytes.
extern "C" __declspec(naked) void FUN_5848f580_5848F580() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 10h]
        cmp dword ptr [ecx + 130h], 0
        ; Exact mapped bytes 75 05: jne 0x5848f5a8
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 7A 0E 00 00: jmp 0x58490422
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 18h], 0
        ; Exact mapped bytes 74 1F: je 0x5848f5d0
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        ; Exact mapped bytes E8 88 1A 3A 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x1a
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 18h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [edx + 130h]
        mov ecx, 20h
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 51 1A 3A 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x1a
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [eax + 18h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 10h]
        cmp dword ptr [eax + 124h], 0
        ; Exact mapped bytes 0F 84 B1 0D 00 00: je 0x584903c4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 10h]
        cmp dword ptr [edx + 128h], 0
        ; Exact mapped bytes 0F 85 9E 0D 00 00: jne 0x584903c4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x5848f638
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0bh
        ; Exact mapped bytes 7D 22: jge 0x5848f660
        __asm _emit 0x7d
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 1
        mov dword ptr [ebp - 54h], ecx
        cmp dword ptr [ebp - 54h], 16h
        ; Exact mapped bytes 73 02: jae 0x5848f64e
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 06: jmp 0x5848f654
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes E8 56 1B 3A 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1b
        __asm _emit 0x3a
        __asm _emit 0x00
        nop
        xor edx, edx
        mov eax, dword ptr [ebp - 54h]
        ; Exact mapped bytes 66 89 54 05 E4: mov word ptr [ebp + eax - 0x1c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0xe4
        ; Exact mapped bytes EB CF: jmp 0x5848f62f
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x5848f672
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [eax + 130h]
        ; Exact mapped bytes 0F 83 3B 0D 00 00: jae 0x584903c2
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 24h], 180h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes 66 8B 54 11 0E: mov dx, word ptr [ecx + edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x11
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        imul edx, dword ptr [ebp - 24h], 180h
        mov eax, dword ptr [ebp - 20h]
        mov eax, dword ptr [eax + 14h]
        mov edx, dword ptr [eax + edx + 54h]
        shr edx, 1
        and edx, 7fffffffh
        imul eax, edx, 0e0h
        imul edx, dword ptr [ebp - 24h], 180h
        mov esi, dword ptr [ebp - 20h]
        mov esi, dword ptr [esi + 14h]
        mov eax, dword ptr [ecx + eax + 5890c014h]
        mov dword ptr [esi + edx + 64h], eax
        imul ecx, dword ptr [ebp - 24h], 180h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes 66 8B 4C 08 0E: mov cx, word ptr [eax + ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov eax, dword ptr [eax + 18h]
        mov byte ptr [eax + edx + 1], cl
        imul ecx, dword ptr [ebp - 24h], 180h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes 66 8B 4C 08 0E: mov cx, word ptr [eax + ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 0B: shr cx, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov eax, dword ptr [eax + 18h]
        mov byte ptr [eax + edx], cl
        imul ecx, dword ptr [ebp - 24h], 180h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes 66 8B 4C 08 0E: mov cx, word ptr [eax + ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov eax, dword ptr [eax + 18h]
        mov byte ptr [eax + edx + 3], cl
        imul ecx, dword ptr [ebp - 24h], 180h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        add eax, ecx
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 8]
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        mov edx, dword ptr [edx + 18h]
        and eax, 3ffh
        mov ecx, dword ptr [edx + ecx + 14h]
        and ecx, 0fffffc00h
        or ecx, eax
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov eax, dword ptr [eax + 18h]
        mov dword ptr [eax + edx + 14h], ecx
        imul ecx, dword ptr [ebp - 24h], 180h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        add eax, ecx
        mov ecx, 2
        shl ecx, 0
        movzx edx, word ptr [eax + ecx + 8]
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 18h]
        and edx, 3ffh
        shl edx, 0ah
        mov eax, dword ptr [ecx + eax + 14h]
        and eax, 0fff003ffh
        or eax, edx
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        mov edx, dword ptr [edx + 18h]
        mov dword ptr [edx + ecx + 14h], eax
        imul eax, dword ptr [ebp - 24h], 180h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 14h]
        add edx, eax
        mov eax, 2
        shl eax, 1
        movzx ecx, word ptr [edx + eax + 8]
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov eax, dword ptr [eax + 18h]
        and ecx, 3ffh
        shl ecx, 14h
        mov edx, dword ptr [eax + edx + 14h]
        and edx, 0c00fffffh
        or edx, ecx
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 18h]
        mov dword ptr [ecx + eax + 14h], edx
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ecx + edx + 14h]
        and edx, 3ffh
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 18h]
        mov eax, dword ptr [ecx + eax + 14h]
        shr eax, 0ah
        and eax, 3ffh
        add edx, eax
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov eax, dword ptr [ebp - 20h]
        mov eax, dword ptr [eax + 18h]
        mov ecx, dword ptr [eax + ecx + 14h]
        shr ecx, 14h
        and ecx, 3ffh
        add edx, ecx
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 18h]
        mov dword ptr [ecx + eax + 4], edx
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 18h]
        movzx edx, byte ptr [ecx + edx + 3]
        test edx, edx
        ; Exact mapped bytes 75 16: jne 0x5848f8bd
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 18h]
        mov byte ptr [edx + eax + 18h], 64h
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x5848f95f
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 18h]
        movzx eax, byte ptr [edx + eax + 3]
        cmp eax, 1
        ; Exact mapped bytes 75 13: jne 0x5848f8e6
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 18h]
        mov byte ptr [eax + ecx + 18h], 6ah
        ; Exact mapped bytes EB 79: jmp 0x5848f95f
        __asm _emit 0xeb
        __asm _emit 0x79
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 18h]
        movzx ecx, byte ptr [eax + ecx + 3]
        cmp ecx, 2
        ; Exact mapped bytes 75 13: jne 0x5848f90f
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 18h]
        mov byte ptr [ecx + edx + 18h], 6eh
        ; Exact mapped bytes EB 50: jmp 0x5848f95f
        __asm _emit 0xeb
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 18h]
        movzx edx, byte ptr [ecx + edx + 3]
        cmp edx, 3
        ; Exact mapped bytes 75 13: jne 0x5848f938
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 18h]
        mov byte ptr [edx + eax + 18h], 64h
        ; Exact mapped bytes EB 27: jmp 0x5848f95f
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 18h]
        movzx eax, byte ptr [edx + eax + 3]
        cmp eax, 4
        ; Exact mapped bytes 75 11: jne 0x5848f95f
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 18h]
        mov byte ptr [eax + ecx + 18h], 71h
        imul ecx, dword ptr [ebp - 24h], 180h
        mov edx, dword ptr [ebp - 20h]
        add ecx, dword ptr [edx + 14h]
        mov eax, 2
        shl eax, 2
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov esi, dword ptr [ebp - 20h]
        add edx, dword ptr [esi + 18h]
        mov esi, 2
        imul esi, esi, 0
        ; Exact mapped bytes 66 8B 44 01 14: mov ax, word ptr [ecx + eax + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 44 32 08: mov word ptr [edx + esi + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x32
        __asm _emit 0x08
        imul ecx, dword ptr [ebp - 24h], 180h
        mov edx, dword ptr [ebp - 20h]
        add ecx, dword ptr [edx + 14h]
        mov eax, 2
        imul edx, eax, 6
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov esi, dword ptr [ebp - 20h]
        add eax, dword ptr [esi + 18h]
        mov esi, 2
        shl esi, 0
        ; Exact mapped bytes 66 8B 4C 11 14: mov cx, word ptr [ecx + edx + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x11
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 4C 30 08: mov word ptr [eax + esi + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x30
        __asm _emit 0x08
        imul edx, dword ptr [ebp - 24h], 180h
        mov eax, dword ptr [ebp - 20h]
        add edx, dword ptr [eax + 14h]
        mov ecx, 2
        imul eax, ecx, 5
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov esi, dword ptr [ebp - 20h]
        add ecx, dword ptr [esi + 18h]
        mov esi, 2
        shl esi, 1
        ; Exact mapped bytes 66 8B 54 02 14: mov dx, word ptr [edx + eax + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 54 31 08: mov word ptr [ecx + esi + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x31
        __asm _emit 0x08
        imul eax, dword ptr [ebp - 24h], 180h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [edx + eax + 64h]
        and eax, 10000000h
        ; Exact mapped bytes 75 25: jne 0x5848fa34
        __asm _emit 0x75
        __asm _emit 0x25
        imul ecx, dword ptr [ebp - 24h], 180h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes 66 8B 4C 08 0E: mov cx, word ptr [eax + ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 0B: shr cx, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 85 09 01 00 00: jne 0x5848fb3d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 18h]
        mov byte ptr [edx + eax + 2], 0
        imul eax, dword ptr [ebp - 24h], 180h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 14h]
        ; Exact mapped bytes 66 8B 44 02 0E: mov ax, word ptr [edx + eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 7F: and ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x7f
        movzx ecx, ax
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 15 C5 FF FF: call 0x5848bf80
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F B6 D0: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd0
        ; Exact mapped bytes 66 89 55 D6: mov word ptr [ebp - 0x2a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        add eax, dword ptr [ecx + 18h]
        mov edx, 2
        imul ecx, edx, 3
        ; Exact mapped bytes 66 8B 55 D6: mov dx, word ptr [ebp - 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd6
        ; Exact mapped bytes 66 89 54 08 08: mov word ptr [eax + ecx + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x08
        mov eax, 2
        imul ecx, eax, 0
        movzx edx, word ptr [ebp + ecx - 1ch]
        push edx
        imul eax, dword ptr [ebp - 24h], 180h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 14h]
        add edx, eax
        mov eax, 2
        imul ecx, eax, 0
        movzx edx, word ptr [edx + ecx + 14h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 DD C8 FF FF: call 0x5848c3a0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 D4: mov word ptr [ebp - 0x2c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        add eax, dword ptr [ecx + 18h]
        mov edx, 2
        shl edx, 2
        ; Exact mapped bytes 66 8B 4D D4: mov cx, word ptr [ebp - 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes 66 89 4C 10 08: mov word ptr [eax + edx + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x08
        mov edx, 2
        imul eax, edx, 0
        movzx ecx, word ptr [ebp + eax - 1ch]
        push ecx
        imul edx, dword ptr [ebp - 24h], 180h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 14h]
        add ecx, edx
        mov edx, 2
        imul eax, edx, 0
        movzx ecx, word ptr [ecx + eax + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 89 C8 FF FF: call 0x5848c3a0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 D2: mov word ptr [ebp - 0x2e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd2
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        add edx, dword ptr [eax + 18h]
        mov ecx, 2
        imul eax, ecx, 5
        ; Exact mapped bytes 66 8B 4D D2: mov cx, word ptr [ebp - 0x2e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd2
        ; Exact mapped bytes 66 89 4C 02 08: mov word ptr [edx + eax + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x08
        ; Exact mapped bytes E9 80 08 00 00: jmp 0x584903bd
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 24h], 180h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ecx + edx + 64h]
        and edx, 3ffh
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x5848fc6a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 18h]
        mov byte ptr [edx + eax + 2], 1
        mov eax, 2
        shl eax, 0
        movzx ecx, word ptr [ebp + eax - 1ch]
        push ecx
        imul edx, dword ptr [ebp - 24h], 180h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 14h]
        add ecx, edx
        mov edx, 2
        shl edx, 0
        movzx eax, word ptr [ecx + edx + 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 02 C8 FF FF: call 0x5848c3a0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 D0: mov word ptr [ebp - 0x30], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        add ecx, dword ptr [edx + 18h]
        mov eax, 2
        imul edx, eax, 3
        ; Exact mapped bytes 66 8B 45 D0: mov ax, word ptr [ebp - 0x30]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov ecx, 2
        shl ecx, 1
        movzx edx, word ptr [ebp + ecx - 1ch]
        push edx
        imul eax, dword ptr [ebp - 24h], 180h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 14h]
        add edx, eax
        mov eax, 2
        shl eax, 1
        movzx ecx, word ptr [edx + eax + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B0 C7 FF FF: call 0x5848c3a0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 CE: mov word ptr [ebp - 0x32], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xce
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        add edx, dword ptr [eax + 18h]
        mov ecx, 2
        shl ecx, 2
        ; Exact mapped bytes 66 8B 45 CE: mov ax, word ptr [ebp - 0x32]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xce
        ; Exact mapped bytes 66 89 44 0A 08: mov word ptr [edx + ecx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x08
        mov ecx, 2
        imul edx, ecx, 3
        movzx eax, word ptr [ebp + edx - 1ch]
        push eax
        imul ecx, dword ptr [ebp - 24h], 180h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        add eax, ecx
        mov ecx, 2
        imul edx, ecx, 3
        movzx eax, word ptr [eax + edx + 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 5C C7 FF FF: call 0x5848c3a0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 CC: mov word ptr [ebp - 0x34], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        add ecx, dword ptr [edx + 18h]
        mov eax, 2
        imul edx, eax, 5
        ; Exact mapped bytes 66 8B 45 CC: mov ax, word ptr [ebp - 0x34]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        ; Exact mapped bytes E9 53 07 00 00: jmp 0x584903bd
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 24h], 180h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + ecx + 64h]
        and ecx, 2ffffc00h
        ; Exact mapped bytes 0F 84 36 07 00 00: je 0x584903bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 24h], 180h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ecx + edx + 64h]
        and edx, 4000000h
        ; Exact mapped bytes 75 1C: jne 0x5848fcbc
        __asm _emit 0x75
        __asm _emit 0x1c
        imul eax, dword ptr [ebp - 24h], 180h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [edx + eax + 64h]
        and eax, 8000000h
        ; Exact mapped bytes 0F 84 F0 00 00 00: je 0x5848fdac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 18h]
        mov byte ptr [eax + ecx + 2], 2
        imul ecx, dword ptr [ebp - 24h], 180h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + ecx + 64h]
        and ecx, 4000000h
        ; Exact mapped bytes 74 54: je 0x5848fd3a
        __asm _emit 0x74
        __asm _emit 0x54
        mov edx, 2
        imul eax, edx, 7
        movzx ecx, word ptr [ebp + eax - 1ch]
        push ecx
        imul edx, dword ptr [ebp - 24h], 180h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 14h]
        add ecx, edx
        mov edx, 2
        imul eax, edx, 7
        movzx ecx, word ptr [ecx + eax + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 87 C6 FF FF: call 0x5848c3a0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 CA: mov word ptr [ebp - 0x36], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xca
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        add edx, dword ptr [eax + 18h]
        mov ecx, 2
        imul eax, ecx, 3
        ; Exact mapped bytes 66 8B 4D CA: mov cx, word ptr [ebp - 0x36]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 4C 02 08: mov word ptr [edx + eax + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x08
        imul edx, dword ptr [ebp - 24h], 180h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ecx + edx + 64h]
        and edx, 8000000h
        ; Exact mapped bytes 74 54: je 0x5848fda7
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, 2
        imul ecx, eax, 7
        movzx edx, word ptr [ebp + ecx - 1ch]
        push edx
        imul eax, dword ptr [ebp - 24h], 180h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 14h]
        add edx, eax
        mov eax, 2
        imul ecx, eax, 7
        movzx edx, word ptr [edx + ecx + 14h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 1A C6 FF FF: call 0x5848c3a0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 C8: mov word ptr [ebp - 0x38], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        add eax, dword ptr [ecx + 18h]
        mov edx, 2
        shl edx, 2
        ; Exact mapped bytes 66 8B 4D C8: mov cx, word ptr [ebp - 0x38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4C 10 08: mov word ptr [eax + edx + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x08
        ; Exact mapped bytes E9 5D 02 00 00: jmp 0x58490009
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 24h], 180h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ecx + edx + 64h]
        and edx, 80000h
        ; Exact mapped bytes 0F 84 42 01 00 00: je 0x5848ff0b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 18h]
        mov byte ptr [edx + eax + 2], 4
        mov eax, 2
        imul ecx, eax, 0
        movzx edx, word ptr [ebp + ecx - 1ch]
        push edx
        imul eax, dword ptr [ebp - 24h], 180h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 14h]
        add edx, eax
        mov eax, 2
        imul ecx, eax, 0
        movzx edx, word ptr [edx + ecx + 14h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 93 C5 FF FF: call 0x5848c3a0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 C6: mov word ptr [ebp - 0x3a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc6
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        add eax, dword ptr [ecx + 18h]
        mov edx, 2
        imul ecx, edx, 3
        ; Exact mapped bytes 66 8B 55 C6: mov dx, word ptr [ebp - 0x3a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xc6
        ; Exact mapped bytes 66 89 54 08 08: mov word ptr [eax + ecx + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x08
        imul eax, dword ptr [ebp - 24h], 180h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [edx + eax + 64h]
        and eax, 20000h
        ; Exact mapped bytes 74 54: je 0x5848fe9a
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [ebp + edx - 1ch]
        push eax
        imul ecx, dword ptr [ebp - 24h], 180h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        add eax, ecx
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 27 C5 FF FF: call 0x5848c3a0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 C4: mov word ptr [ebp - 0x3c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc4
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        add ecx, dword ptr [edx + 18h]
        mov eax, 2
        shl eax, 2
        ; Exact mapped bytes 66 8B 55 C4: mov dx, word ptr [ebp - 0x3c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xc4
        ; Exact mapped bytes 66 89 54 01 08: mov word ptr [ecx + eax + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x08
        imul eax, dword ptr [ebp - 24h], 180h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [edx + eax + 64h]
        and eax, 40000h
        ; Exact mapped bytes 74 54: je 0x5848ff06
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [ebp + edx - 1ch]
        push eax
        imul ecx, dword ptr [ebp - 24h], 180h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        add eax, ecx
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BB C4 FF FF: call 0x5848c3a0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 C2: mov word ptr [ebp - 0x3e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        add ecx, dword ptr [edx + 18h]
        mov eax, 2
        imul edx, eax, 5
        ; Exact mapped bytes 66 8B 45 C2: mov ax, word ptr [ebp - 0x3e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        ; Exact mapped bytes E9 FE 00 00 00: jmp 0x58490009
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 24h], 180h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + ecx + 64h]
        and ecx, 1000000h
        ; Exact mapped bytes 74 67: je 0x5848ff8b
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 18h]
        mov byte ptr [ecx + edx + 2], 9
        mov edx, 2
        imul eax, edx, 0
        movzx ecx, word ptr [ebp + eax - 1ch]
        push ecx
        imul edx, dword ptr [ebp - 24h], 180h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 14h]
        add ecx, edx
        mov edx, 2
        imul eax, edx, 0
        movzx ecx, word ptr [ecx + eax + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 38 C4 FF FF: call 0x5848c3a0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 C0: mov word ptr [ebp - 0x40], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc0
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        add edx, dword ptr [eax + 18h]
        mov ecx, 2
        imul eax, ecx, 3
        ; Exact mapped bytes 66 8B 4D C0: mov cx, word ptr [ebp - 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 4C 02 08: mov word ptr [edx + eax + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x08
        ; Exact mapped bytes EB 7E: jmp 0x58490009
        __asm _emit 0xeb
        __asm _emit 0x7e
        imul edx, dword ptr [ebp - 24h], 180h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ecx + edx + 64h]
        and edx, 2000000h
        ; Exact mapped bytes 74 65: je 0x58490009
        __asm _emit 0x74
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 18h]
        mov byte ptr [edx + eax + 2], 0ah
        mov eax, 2
        imul ecx, eax, 0
        movzx edx, word ptr [ebp + ecx - 1ch]
        push edx
        imul eax, dword ptr [ebp - 24h], 180h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 14h]
        add edx, eax
        mov eax, 2
        imul ecx, eax, 0
        movzx edx, word ptr [edx + ecx + 14h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B8 C3 FF FF: call 0x5848c3a0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 BE: mov word ptr [ebp - 0x42], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xbe
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        add eax, dword ptr [ecx + 18h]
        mov edx, 2
        imul ecx, edx, 3
        ; Exact mapped bytes 66 8B 55 BE: mov dx, word ptr [ebp - 0x42]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xbe
        ; Exact mapped bytes 66 89 54 08 08: mov word ptr [eax + ecx + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x08
        imul eax, dword ptr [ebp - 24h], 180h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [edx + eax + 64h]
        and eax, 10000h
        ; Exact mapped bytes 74 6A: je 0x5849008b
        __asm _emit 0x74
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 18h]
        mov byte ptr [eax + ecx + 2], 5
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [ebp + edx - 1ch]
        push eax
        imul ecx, dword ptr [ebp - 24h], 180h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        add eax, ecx
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 3B C3 FF FF: call 0x5848c3a0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 BC: mov word ptr [ebp - 0x44], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xbc
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        add ecx, dword ptr [edx + 18h]
        mov eax, 2
        imul edx, eax, 5
        ; Exact mapped bytes 66 8B 45 BC: mov ax, word ptr [ebp - 0x44]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xbc
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        ; Exact mapped bytes E9 32 03 00 00: jmp 0x584903bd
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 24h], 180h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + ecx + 64h]
        and ecx, 20000000h
        ; Exact mapped bytes 74 6A: je 0x5849010e
        __asm _emit 0x74
        __asm _emit 0x6a
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 18h]
        mov byte ptr [ecx + edx + 2], 6
        mov edx, 2
        imul eax, edx, 0
        movzx ecx, word ptr [ebp + eax - 1ch]
        push ecx
        imul edx, dword ptr [ebp - 24h], 180h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 14h]
        add ecx, edx
        mov edx, 2
        imul eax, edx, 0
        movzx ecx, word ptr [ecx + eax + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B8 C2 FF FF: call 0x5848c3a0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 BA: mov word ptr [ebp - 0x46], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xba
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        add edx, dword ptr [eax + 18h]
        mov ecx, 2
        imul eax, ecx, 3
        ; Exact mapped bytes 66 8B 4D BA: mov cx, word ptr [ebp - 0x46]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xba
        ; Exact mapped bytes 66 89 4C 02 08: mov word ptr [edx + eax + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x08
        ; Exact mapped bytes E9 AF 02 00 00: jmp 0x584903bd
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 24h], 180h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ecx + edx + 64h]
        and edx, 80203c00h
        ; Exact mapped bytes 0F 84 A7 01 00 00: je 0x584902d2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 24h], 180h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [edx + eax + 64h]
        and eax, 80200400h
        ; Exact mapped bytes 74 11: je 0x58490154
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 18h]
        mov byte ptr [eax + ecx + 2], 0bh
        imul ecx, dword ptr [ebp - 24h], 180h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + ecx + 64h]
        and ecx, 800h
        ; Exact mapped bytes 74 11: je 0x5849017e
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 18h]
        mov byte ptr [ecx + edx + 2], 0ch
        imul edx, dword ptr [ebp - 24h], 180h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ecx + edx + 64h]
        and edx, 2000h
        ; Exact mapped bytes 74 11: je 0x584901a8
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 18h]
        mov byte ptr [edx + eax + 2], 0dh
        imul eax, dword ptr [ebp - 24h], 180h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [edx + eax + 64h]
        and eax, 1000h
        ; Exact mapped bytes 74 11: je 0x584901d1
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 18h]
        mov byte ptr [eax + ecx + 2], 0eh
        mov ecx, 2
        imul edx, ecx, 9
        movzx eax, word ptr [ebp + edx - 1ch]
        push eax
        imul ecx, dword ptr [ebp - 24h], 180h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        add eax, ecx
        mov ecx, 2
        imul edx, ecx, 9
        movzx eax, word ptr [eax + edx + 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9C C1 FF FF: call 0x5848c3a0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 B8: mov word ptr [ebp - 0x48], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb8
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        add ecx, dword ptr [edx + 18h]
        mov eax, 2
        imul edx, eax, 3
        ; Exact mapped bytes 66 8B 45 B8: mov ax, word ptr [ebp - 0x48]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xb8
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        mov ecx, 2
        imul edx, ecx, 0ah
        movzx eax, word ptr [ebp + edx - 1ch]
        push eax
        imul ecx, dword ptr [ebp - 24h], 180h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        add eax, ecx
        mov ecx, 2
        imul edx, ecx, 0ah
        movzx eax, word ptr [eax + edx + 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 48 C1 FF FF: call 0x5848c3a0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 B6: mov word ptr [ebp - 0x4a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb6
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        add ecx, dword ptr [edx + 18h]
        mov eax, 2
        shl eax, 2
        ; Exact mapped bytes 66 8B 55 B6: mov dx, word ptr [ebp - 0x4a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xb6
        ; Exact mapped bytes 66 89 54 01 08: mov word ptr [ecx + eax + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x08
        mov eax, 2
        shl eax, 3
        movzx ecx, word ptr [ebp + eax - 1ch]
        push ecx
        imul edx, dword ptr [ebp - 24h], 180h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 14h]
        add ecx, edx
        mov edx, 2
        shl edx, 3
        movzx eax, word ptr [ecx + edx + 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F4 C0 FF FF: call 0x5848c3a0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 B4: mov word ptr [ebp - 0x4c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb4
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        add ecx, dword ptr [edx + 18h]
        mov eax, 2
        imul edx, eax, 5
        ; Exact mapped bytes 66 8B 45 B4: mov ax, word ptr [ebp - 0x4c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xb4
        ; Exact mapped bytes 66 89 44 11 08: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        ; Exact mapped bytes E9 EB 00 00 00: jmp 0x584903bd
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 18h]
        mov byte ptr [eax + ecx + 2], 3
        imul ecx, dword ptr [ebp - 24h], 180h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + ecx + 64h]
        and ecx, 10000h
        ; Exact mapped bytes 74 54: je 0x58490350
        __asm _emit 0x74
        __asm _emit 0x54
        mov edx, 2
        imul eax, edx, 0
        movzx ecx, word ptr [ebp + eax - 1ch]
        push ecx
        imul edx, dword ptr [ebp - 24h], 180h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 14h]
        add ecx, edx
        mov edx, 2
        imul eax, edx, 0
        movzx ecx, word ptr [ecx + eax + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 71 C0 FF FF: call 0x5848c3a0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 B2: mov word ptr [ebp - 0x4e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb2
        mov edx, dword ptr [ebp - 24h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        add edx, dword ptr [eax + 18h]
        mov ecx, 2
        imul eax, ecx, 3
        ; Exact mapped bytes 66 8B 4D B2: mov cx, word ptr [ebp - 0x4e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb2
        ; Exact mapped bytes 66 89 4C 02 08: mov word ptr [edx + eax + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x08
        imul edx, dword ptr [ebp - 24h], 180h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ecx + edx + 64h]
        and edx, 20000h
        ; Exact mapped bytes 74 54: je 0x584903bd
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, 2
        imul ecx, eax, 0
        movzx edx, word ptr [ebp + ecx - 1ch]
        push edx
        imul eax, dword ptr [ebp - 24h], 180h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 14h]
        add edx, eax
        mov eax, 2
        imul ecx, eax, 0
        movzx edx, word ptr [edx + ecx + 14h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 04 C0 FF FF: call 0x5848c3a0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 B0: mov word ptr [ebp - 0x50], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb0
        mov eax, dword ptr [ebp - 24h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 20h]
        add eax, dword ptr [ecx + 18h]
        mov edx, 2
        shl edx, 2
        ; Exact mapped bytes 66 8B 4D B0: mov cx, word ptr [ebp - 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes 66 89 4C 10 08: mov word ptr [eax + edx + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x08
        ; Exact mapped bytes E9 A7 F2 FF FF: jmp 0x5848f669
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 5E: jmp 0x58490422
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 10h]
        cmp dword ptr [eax + 128h], 0
        ; Exact mapped bytes 74 4F: je 0x58490422
        __asm _emit 0x74
        __asm _emit 0x4f
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x584903e5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 28h]
        cmp ecx, dword ptr [eax + 130h]
        ; Exact mapped bytes 73 2C: jae 0x58490422
        __asm _emit 0x73
        __asm _emit 0x2c
        push 20h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 28h]
        shl ecx, 5
        add ecx, dword ptr [eax + 128h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        shl edx, 5
        mov eax, dword ptr [ebp - 20h]
        add edx, dword ptr [eax + 18h]
        push edx
        ; Exact mapped bytes E8 73 C4 3B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xc4
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB BA: jmp 0x584903dc
        __asm _emit 0xeb
        __asm _emit 0xba
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 23 0C 3A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x0c
        __asm _emit 0x3a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
    }
}
