// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5853EAF0 .. +0xAF8 bytes.
extern "C" __declspec(naked) void FUN_5853eaf0_5853EAF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0bch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 26ch]
        cmp ecx, 0dh
        ; Exact mapped bytes 0F 85 2D 05 00 00: jne 0x5853f03d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 92 D5 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xd5
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 25ch]
        xor ecx, 55h
        mov edx, dword ptr [ebp - 0ch]
        imul ecx, dword ptr [edx + 24h]
        mov dword ptr [ebp - 5ch], ecx
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a0h]
        ; Exact mapped bytes E8 04 2B F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x2b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 260h]
        ; Exact mapped bytes 7E 1C: jle 0x5853eb73
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1a0h]
        ; Exact mapped bytes E8 EB 2A F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x2a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 260h]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5853eb7a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 1eh]
        imul eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 2f8h]
        ; Exact mapped bytes E8 13 D5 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd5
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 250h]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x5853ec2e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1a0h]
        ; Exact mapped bytes E8 94 2A F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x2a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 25ch]
        xor edx, 55h
        sub eax, edx
        xor eax, 55h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 78 02 00 00: mov word ptr [ecx + 0x278], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 78 02 00 00: movsx eax, word ptr [edx + 0x278]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 23: jle 0x5853ec08
        __asm _emit 0x7e
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF B1 78 02 00 00: movsx esi, word ptr [ecx + 0x278]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xb1
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, 55h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 E0 D2 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd2
        __asm _emit 0xf4
        __asm _emit 0xff
        imul esi, eax
        mov dword ptr [ebp - 20h], esi
        ; Exact mapped bytes EB 24: jmp 0x5853ec2c
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 78 02 00 00: movsx ecx, word ptr [eax + 0x278]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, 55h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 274h]
        mov edx, dword ptr [ebp - 4]
        imul ecx, dword ptr [edx + eax*4 + 27ch]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 5E: jmp 0x5853ec8c
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a0h]
        ; Exact mapped bytes E8 14 2A F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x2a
        __asm _emit 0xf9
        __asm _emit 0xff
        xor eax, 55h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 78 02 00 00: mov word ptr [ecx + 0x278], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF B2 78 02 00 00: movsx esi, word ptr [edx + 0x278]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xb2
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, 55h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 7C D2 F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xd2
        __asm _emit 0xf4
        __asm _emit 0xff
        imul esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 25ch]
        xor edx, 55h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 274h]
        mov eax, dword ptr [ebp - 4]
        imul edx, dword ptr [eax + ecx*4 + 27ch]
        sub esi, edx
        mov dword ptr [ebp - 20h], esi
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 78 02 00 00: movsx edx, word ptr [ecx + 0x278]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, 55h
        mov eax, dword ptr [ebp - 0ch]
        imul edx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 2ch], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 91 9A 00 00 00: mov dx, word ptr [ecx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        cmp eax, 3
        ; Exact mapped bytes 74 1A: je 0x5853ecd7
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 91 9A 00 00 00: mov dx, word ptr [ecx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        cmp eax, 4
        ; Exact mapped bytes 75 0D: jne 0x5853ece4
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 254h], 64h
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 258h]
        add eax, dword ptr [ebp - 5ch]
        sub eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 254h]
        sub edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 70h], edx
        mov dword ptr [ebp - 10h], 7fffffffh
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 88 9A 00 00 00: mov cx, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp edx, 3
        ; Exact mapped bytes 74 1A: je 0x5853ed47
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 88 9A 00 00 00: mov cx, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 75 07: jne 0x5853ed4e
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 64h
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 1eh]
        test ecx, ecx
        ; Exact mapped bytes 74 2D: je 0x5853ed86
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [edx + 1eh]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 254h]
        cdq
        idiv ecx
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 260h]
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 30h]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 06: jge 0x5853ed86
        __asm _emit 0x7d
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 74 30: je 0x5853edbf
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 258h]
        xor edx, edx
        div dword ptr [ecx + 24h]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 25ch]
        xor ecx, 55h
        add eax, ecx
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 34h]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 06: jge 0x5853edbf
        __asm _emit 0x7d
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx + 20h]
        cmp ecx, 2
        ; Exact mapped bytes 75 39: jne 0x5853ee0d
        __asm _emit 0x75
        __asm _emit 0x39
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx + 20h]
        cmp ecx, 1
        ; Exact mapped bytes 75 24: jne 0x5853ee0d
        __asm _emit 0x75
        __asm _emit 0x24
        push 0
        push 1
        push 2
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 4A 18 00: call 0x586c38a0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x4a
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 38h]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 06: jge 0x5853ee0b
        __asm _emit 0x7d
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 4C: jmp 0x5853ee59
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx + 20h]
        cmp ecx, 2
        ; Exact mapped bytes 75 37: jne 0x5853ee59
        __asm _emit 0x75
        __asm _emit 0x37
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx + 20h]
        cmp ecx, 8
        ; Exact mapped bytes 75 22: jne 0x5853ee59
        __asm _emit 0x75
        __asm _emit 0x22
        push 0
        push 8
        push 2
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 4A 18 00: call 0x586c38a0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x4a
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 06: jge 0x5853ee59
        __asm _emit 0x7d
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 09: jge 0x5853ee68
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 10: jmp 0x5853ee78
        __asm _emit 0xeb
        __asm _emit 0x10
        cmp dword ptr [ebp - 10h], 0ffh
        ; Exact mapped bytes 7E 07: jle 0x5853ee78
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0ffh
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 2cch], 1
        ; Exact mapped bytes 74 1E: je 0x5853eea2
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 26ch]
        cmp eax, 0dh
        ; Exact mapped bytes 75 0F: jne 0x5853eea2
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 25ch]
        xor edx, 55h
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a0h]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 46 D7 FA FF: call 0x584ec600
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd7
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], 0
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 7C 25: jl 0x5853eeec
        __asm _emit 0x7c
        __asm _emit 0x25
        mov eax, 4
        imul ecx, eax, 19h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 68h], eax
        push 0eeeeeeh
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 F7 71 F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x71
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 29: jmp 0x5853ef15
        __asm _emit 0xeb
        __asm _emit 0x29
        mov ecx, 4
        imul edx, ecx, 19h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 6ch], ecx
        push 0eeh
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 D2 71 F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x71
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], 1
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 7C 25: jl 0x5853ef40
        __asm _emit 0x7c
        __asm _emit 0x25
        mov edx, 4
        imul eax, edx, 1ah
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 74h], edx
        push 0eeeeeeh
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 A3 71 F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x71
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 29: jmp 0x5853ef69
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, 4
        imul ecx, eax, 1ah
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 78h], eax
        push 0eeh
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 7E 71 F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x71
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 8B 0D F8 04 96 58: mov ecx, dword ptr [0x589604f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor ecx, 55555555h
        cmp dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes 7F 25: jg 0x5853ef9f
        __asm _emit 0x7f
        __asm _emit 0x25
        mov edx, 4
        imul eax, edx, 1bh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 7ch], edx
        push 0eeeeeeh
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 44 71 F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x71
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 23: jmp 0x5853efc2
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, 4
        imul ecx, eax, 1bh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 80h], eax
        push 0eeh
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 1F 71 F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x71
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 78 02 00 00: movsx edx, word ptr [ecx + 0x278]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 7D 09: jge 0x5853efd9
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 15: jmp 0x5853efee
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 78 02 00 00: movsx ecx, word ptr [eax + 0x278]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 75 07: jne 0x5853efee
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 3
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 1F: je 0x5853f013
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 84h], eax
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 30 08 F6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1D: jmp 0x5853f030
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 88h], edx
        push 1
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 11 08 F6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x08
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 B0 05 00 00: jmp 0x5853f5e8
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AB 05 00 00: jmp 0x5853f5e8
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 7fffffffh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 5E D0 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd0
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 2f8h]
        ; Exact mapped bytes E8 46 D0 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd0
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 250h]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x5853f0fb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1a0h]
        ; Exact mapped bytes E8 C7 25 F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x25
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 25ch]
        xor edx, 55h
        sub eax, edx
        xor eax, 55h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 78 02 00 00: mov word ptr [ecx + 0x278], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 78 02 00 00: movsx eax, word ptr [edx + 0x278]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 23: jle 0x5853f0d5
        __asm _emit 0x7e
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF B1 78 02 00 00: movsx esi, word ptr [ecx + 0x278]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xb1
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, 55h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 13 CE F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xce
        __asm _emit 0xf4
        __asm _emit 0xff
        imul esi, eax
        mov dword ptr [ebp - 24h], esi
        ; Exact mapped bytes EB 24: jmp 0x5853f0f9
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 78 02 00 00: movsx ecx, word ptr [eax + 0x278]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, 55h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 274h]
        mov edx, dword ptr [ebp - 4]
        imul ecx, dword ptr [edx + eax*4 + 27ch]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB 5E: jmp 0x5853f159
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a0h]
        ; Exact mapped bytes E8 47 25 F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x25
        __asm _emit 0xf9
        __asm _emit 0xff
        xor eax, 55h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 78 02 00 00: mov word ptr [ecx + 0x278], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF B2 78 02 00 00: movsx esi, word ptr [edx + 0x278]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xb2
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, 55h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 AF CD F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xcd
        __asm _emit 0xf4
        __asm _emit 0xff
        imul esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 25ch]
        xor edx, 55h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 274h]
        mov eax, dword ptr [ebp - 4]
        imul edx, dword ptr [eax + ecx*4 + 27ch]
        sub esi, edx
        mov dword ptr [ebp - 24h], esi
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 91 9A 00 00 00: mov dx, word ptr [ecx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        cmp eax, 3
        ; Exact mapped bytes 74 1A: je 0x5853f18d
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 91 9A 00 00 00: mov dx, word ptr [ecx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        cmp eax, 4
        ; Exact mapped bytes 75 0D: jne 0x5853f19a
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 254h], 64h
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 82 9A 00 00 00: mov ax, word ptr [edx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        cmp ecx, 3
        ; Exact mapped bytes 74 1A: je 0x5853f1ce
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 82 9A 00 00 00: mov ax, word ptr [edx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        cmp ecx, 4
        ; Exact mapped bytes 75 07: jne 0x5853f1d5
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 64h
        mov edx, dword ptr [ebp - 14h]
        movzx eax, word ptr [edx + 1eh]
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x5853f20d
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 14h]
        movzx ecx, word ptr [ecx + 1eh]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 254h]
        cdq
        idiv ecx
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 260h]
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 44h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 06: jge 0x5853f20d
        __asm _emit 0x7d
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 74 22: je 0x5853f238
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 258h]
        xor edx, edx
        div dword ptr [ecx + 24h]
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 48h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 06: jge 0x5853f238
        __asm _emit 0x7d
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 8], eax
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 14h]
        movzx ecx, word ptr [eax + edx + 20h]
        cmp ecx, 2
        ; Exact mapped bytes 75 39: jne 0x5853f286
        __asm _emit 0x75
        __asm _emit 0x39
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 14h]
        movzx ecx, word ptr [eax + edx + 20h]
        cmp ecx, 1
        ; Exact mapped bytes 75 24: jne 0x5853f286
        __asm _emit 0x75
        __asm _emit 0x24
        push 0
        push 1
        push 2
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D 46 18 00: call 0x586c38a0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 4ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 06: jge 0x5853f284
        __asm _emit 0x7d
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 4C: jmp 0x5853f2d2
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 14h]
        movzx ecx, word ptr [eax + edx + 20h]
        cmp ecx, 2
        ; Exact mapped bytes 75 37: jne 0x5853f2d2
        __asm _emit 0x75
        __asm _emit 0x37
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 14h]
        movzx ecx, word ptr [eax + edx + 20h]
        cmp ecx, 8
        ; Exact mapped bytes 75 22: jne 0x5853f2d2
        __asm _emit 0x75
        __asm _emit 0x22
        push 0
        push 8
        push 2
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF 45 18 00: call 0x586c38a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x45
        __asm _emit 0x18
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 50h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 06: jge 0x5853f2d2
        __asm _emit 0x7d
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 09: jge 0x5853f2e1
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 10: jmp 0x5853f2f1
        __asm _emit 0xeb
        __asm _emit 0x10
        cmp dword ptr [ebp - 8], 0ffh
        ; Exact mapped bytes 7E 07: jle 0x5853f2f1
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0ffh
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 2cch], 1
        ; Exact mapped bytes 74 1E: je 0x5853f31b
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 26ch]
        cmp eax, 0dh
        ; Exact mapped bytes 75 0F: jne 0x5853f31b
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 25ch]
        xor edx, 55h
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 B7 CB F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xcb
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 74: jle 0x5853f3a1
        __asm _emit 0x7e
        __asm _emit 0x74
        ; Exact mapped bytes 8B 35 F8 04 96 58: mov esi, dword ptr [0x589604f8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor esi, 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 2f8h]
        ; Exact mapped bytes E8 99 CB F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xcb
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 25ch]
        xor ecx, 55h
        add eax, ecx
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 08: jle 0x5853f369
        __asm _emit 0x7e
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 54h], edx
        ; Exact mapped bytes EB 32: jmp 0x5853f39b
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes 8B 35 F8 04 96 58: mov esi, dword ptr [0x589604f8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor esi, 55555555h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 5D CB F4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xcb
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 25ch]
        xor ecx, 55h
        add eax, ecx
        mov dword ptr [ebp - 54h], eax
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a0h]
        mov dword ptr [ebp - 8ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 41 D2 FA FF: call 0x584ec600
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xd2
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a0h]
        ; Exact mapped bytes E8 83 22 F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x22
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        imul eax, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 90h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1a0h]
        ; Exact mapped bytes E8 68 22 F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 16: jle 0x5853f403
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a0h]
        ; Exact mapped bytes E8 55 22 F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x22
        __asm _emit 0xf9
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x5853f40a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, word ptr [ecx + 1eh]
        imul edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 94h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 258h]
        sub ecx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 98h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 254h]
        sub eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 0a4h], eax
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 7C 2B: jl 0x5853f480
        __asm _emit 0x7c
        __asm _emit 0x2b
        mov ecx, 4
        imul edx, ecx, 19h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 9ch], ecx
        push 0eeeeeeh
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 63 6C F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x6c
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2F: jmp 0x5853f4af
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov edx, 4
        imul eax, edx, 19h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 0a0h], edx
        push 0eeh
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 38 6C F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x6c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], 1
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 7C 2B: jl 0x5853f4e3
        __asm _emit 0x7c
        __asm _emit 0x2b
        mov eax, 4
        imul ecx, eax, 1ah
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 0a8h], eax
        push 0eeeeeeh
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 00 6C F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x6c
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2F: jmp 0x5853f512
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, 4
        imul edx, ecx, 1ah
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 0ach], ecx
        push 0eeh
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 D5 6B F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x6b
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 8B 15 F8 04 96 58: mov edx, dword ptr [0x589604f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor edx, 55555555h
        cmp dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 7F 2B: jg 0x5853f54e
        __asm _emit 0x7f
        __asm _emit 0x2b
        mov eax, 4
        imul ecx, eax, 1bh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 0b0h], eax
        push 0eeeeeeh
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 95 6B F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x6b
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 29: jmp 0x5853f577
        __asm _emit 0xeb
        __asm _emit 0x29
        mov ecx, 4
        imul edx, ecx, 1bh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 0b4h], ecx
        push 0eeh
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 6A 6B F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x6b
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 78 02 00 00: movsx eax, word ptr [edx + 0x278]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 09: jge 0x5853f58e
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 15: jmp 0x5853f5a3
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 78 02 00 00: movsx edx, word ptr [ecx + 0x278]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 75 07: jne 0x5853f5a3
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 3
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1F: je 0x5853f5c8
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 0b8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 7B 02 F6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1D: jmp 0x5853f5e5
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 0bch], eax
        push 1
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 5C 02 F6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 1ch]
    }
}
