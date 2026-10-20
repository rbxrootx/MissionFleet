// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B0AC0 .. +0x2FE bytes.
extern "C" __declspec(naked) void FUN_585b0ac0_585B0AC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        movzx eax, word ptr [ebp + 8]
        cmp eax, 0bh
        ; Exact mapped bytes 0F 85 05 01 00 00: jne 0x585b0bdb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 60: je 0x585b0b3c
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1B C5 ED FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc5
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        mov byte ptr [ebp - 3], dl
        movzx eax, byte ptr [ebp + 18h]
        movzx ecx, byte ptr [ebp - 3]
        add ecx, eax
        mov byte ptr [ebp - 3], cl
        movzx edx, byte ptr [ebp - 3]
        test edx, edx
        ; Exact mapped bytes 75 1A: jne 0x585b0b2d
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov edx, dword ptr [ebp + 10h]
        lea eax, [ecx + edx*8 + 0b0h]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + ecx*4], 0
        movzx edx, byte ptr [ebp - 3]
        xor edx, 55h
        mov byte ptr [ebp - 3], dl
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x585b0bd6
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 2D: je 0x585b0b6f
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF 62 F4 FF: call 0x584f6e30
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x62
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [edx + eax*8 + 0b0h]
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx*4], eax
        ; Exact mapped bytes EB 1A: jmp 0x585b0b89
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [edx + eax*8 + 0b0h]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 66 0F B6 45 18: movzx ax, byte ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x45
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [edx + ecx*4 + 0c6ch]
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 66 89 04 4A: mov word ptr [edx + ecx*2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [eax + ecx*4 + 0c6ch]
        mov eax, dword ptr [ebp + 14h]
        movzx ecx, word ptr [edx + eax*2]
        xor ecx, 55h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov edx, dword ptr [ebp + 10h]
        lea eax, [eax + edx*4 + 0c6ch]
        mov edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 66 89 0C 50: mov word ptr [eax + edx*2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x50
        ; Exact mapped bytes E9 D2 01 00 00: jmp 0x585b0dad
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp + 8]
        cmp eax, 0ch
        ; Exact mapped bytes 0F 85 1C 01 00 00: jne 0x585b0d04
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 77: je 0x585b0c65
        __asm _emit 0x74
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [edx + eax*4 + 0c6ch]
        mov edx, dword ptr [ebp + 14h]
        movzx eax, word ptr [ecx + edx*2]
        xor eax, 55h
        mov byte ptr [ebp - 1], al
        movzx ecx, byte ptr [ebp + 18h]
        movzx edx, byte ptr [ebp - 1]
        add edx, ecx
        mov byte ptr [ebp - 1], dl
        movzx eax, byte ptr [ebp - 1]
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x585b0c3a
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [edx + eax*8 + 0b0h]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ecx + edx*4], 0
        movzx eax, byte ptr [ebp - 1]
        xor eax, 55h
        mov byte ptr [ebp - 1], al
        ; Exact mapped bytes 66 0F B6 4D FF: movzx cx, byte ptr [ebp - 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x4d
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov edx, dword ptr [ebp + 10h]
        lea eax, [eax + edx*4 + 0c6ch]
        mov edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 66 89 0C 50: mov word ptr [eax + edx*2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x50
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x585b0cff
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 2D: je 0x585b0c98
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 62 F4 FF: call 0x584f6ef0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x62
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [edx + eax*8 + 0b0h]
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ecx + edx*4], eax
        ; Exact mapped bytes EB 1A: jmp 0x585b0cb2
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [edx + eax*8 + 0b0h]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 66 0F B6 45 18: movzx ax, byte ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x45
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [edx + ecx*4 + 0c6ch]
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 66 89 04 4A: mov word ptr [edx + ecx*2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [eax + ecx*4 + 0c6ch]
        mov eax, dword ptr [ebp + 14h]
        movzx ecx, word ptr [edx + eax*2]
        xor ecx, 55h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov edx, dword ptr [ebp + 10h]
        lea eax, [eax + edx*4 + 0c6ch]
        mov edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 66 89 0C 50: mov word ptr [eax + edx*2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x50
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x585b0dad
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp + 8]
        cmp eax, 0dh
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x585b0dad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x585b0dad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [edx + eax*4 + 0c6ch]
        mov edx, 2
        imul eax, edx, 0
        movzx ecx, word ptr [ecx + eax]
        xor ecx, 55h
        mov byte ptr [ebp - 2], cl
        movzx edx, byte ptr [ebp + 18h]
        movzx eax, byte ptr [ebp - 2]
        add eax, edx
        mov byte ptr [ebp - 2], al
        movzx ecx, byte ptr [ebp - 2]
        test ecx, ecx
        ; Exact mapped bytes 75 30: jne 0x585b0d82
        __asm _emit 0x75
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + ecx*4 + 30h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [eax + ecx*8 + 0b0h]
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx], 0
        movzx edx, byte ptr [ebp - 2]
        xor edx, 55h
        mov byte ptr [ebp - 2], dl
        ; Exact mapped bytes 66 0F B6 45 FE: movzx ax, byte ptr [ebp - 2]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x45
        __asm _emit 0xfe
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [edx + ecx*4 + 0c6ch]
        mov ecx, 2
        imul ecx, ecx, 0
        ; Exact mapped bytes 66 89 04 0A: mov word ptr [edx + ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 EE EF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xee
        __asm _emit 0xef
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
