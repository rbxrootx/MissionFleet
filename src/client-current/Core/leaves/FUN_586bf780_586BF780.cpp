// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586BF780 .. +0x88B bytes.
extern "C" __declspec(naked) void FUN_586bf780_586BF780() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1bch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 108h], ecx
        xor eax, eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes 66 89 41 78: mov word ptr [ecx + 0x78], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 108h]
        mov dword ptr [edx + 80h], 0
        mov dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586bf7d0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 11ch]
        add eax, 1
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 11ch], 5
        ; Exact mapped bytes 7D 1B: jge 0x586bf7f4
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 11ch]
        mov edx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [edx + ecx*4 + 22ch]
        ; Exact mapped bytes E8 CF 10 10 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CD: jmp 0x586bf7c1
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov dword ptr [ebp - 120h], 0
        xor eax, eax
        ; Exact mapped bytes 66 89 85 F0 FE FF FF: mov word ptr [ebp - 0x110], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 128h], ecx
        cmp dword ptr [ebp - 128h], 0ah
        ; Exact mapped bytes 77 51: ja 0x586bf86a
        __asm _emit 0x77
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 128h]
        ; Exact mapped bytes FF 24 95 0C 00 6C 58: jmp dword ptr [edx*4 + 0x586c000c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x6c
        __asm _emit 0x58
        mov eax, 0ah
        ; Exact mapped bytes 66 89 85 F0 FE FF FF: mov word ptr [ebp - 0x110], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 36: jmp 0x586bf86a
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, 1
        ; Exact mapped bytes 66 89 8D F0 FE FF FF: mov word ptr [ebp - 0x110], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 28: jmp 0x586bf86a
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, 1
        ; Exact mapped bytes 66 89 95 F0 FE FF FF: mov word ptr [ebp - 0x110], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1A: jmp 0x586bf86a
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, 5
        ; Exact mapped bytes 66 89 85 F0 FE FF FF: mov word ptr [ebp - 0x110], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0C: jmp 0x586bf86a
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, 0ah
        ; Exact mapped bytes 66 89 8D F0 FE FF FF: mov word ptr [ebp - 0x110], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B 9D E2 FF: call 0x584e9610
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x9d
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 11: jmp 0x586bf88e
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 28 C8 DC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc8
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 0F 84 54 07 00 00: je 0x586bffef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 3A C6 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc6
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C3 3A E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x3a
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 2
        imul ecx, edx, 0bh
        movzx edx, word ptr [eax + ecx + 14h]
        xor edx, 55h
        mov dword ptr [ebp - 114h], edx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 12 C6 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc6
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9B 3A E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x3a
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, 2
        shl ecx, 0
        movzx edx, word ptr [eax + ecx + 8]
        xor edx, 55h
        mov dword ptr [ebp - 190h], edx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 EA C5 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xc5
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 73 3A E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x3a
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, 2
        shl ecx, 1
        movzx edx, word ptr [eax + ecx + 8]
        xor edx, 55h
        mov dword ptr [ebp - 118h], edx
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 77 0A: ja 0x586bf925
        __asm _emit 0x77
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 1
        imul eax, dword ptr [ebp - 114h], 32h
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 124h], eax
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 74 0C: je 0x586bf94d
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp + 8], 6
        ; Exact mapped bytes 74 06: je 0x586bf94d
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 9
        ; Exact mapped bytes 75 18: jne 0x586bf965
        __asm _emit 0x75
        __asm _emit 0x18
        imul eax, dword ptr [ebp - 114h], 2dh
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 28: jmp 0x586bf98d
        __asm _emit 0xeb
        __asm _emit 0x28
        cmp dword ptr [ebp + 8], 4
        ; Exact mapped bytes 74 0C: je 0x586bf977
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp + 8], 7
        ; Exact mapped bytes 74 06: je 0x586bf977
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 0ah
        ; Exact mapped bytes 75 16: jne 0x586bf98d
        __asm _emit 0x75
        __asm _emit 0x16
        imul eax, dword ptr [ebp - 114h], 32h
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 124h], eax
        push 588b0e72h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 144h], eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 18 C5 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xc5
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F1 4F DC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x4f
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp - 194h]
        push ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 2D 0B 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x0b
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 22ch]
        mov dword ptr [ebp - 150h], edx
        mov eax, dword ptr [ebp - 120h]
        mov dword ptr [ebp - 148h], eax
        mov ecx, dword ptr [ebp - 120h]
        add ecx, 1
        mov dword ptr [ebp - 120h], ecx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 AC C4 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc4
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 35 02 DF FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx edx, al
        xor edx, 55h
        mov dword ptr [ebp - 14ch], edx
        push 0ffffffh
        mov eax, dword ptr [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 6B 0A 10 00: call 0x587c04d0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0a
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 22ch]
        mov dword ptr [ebp - 160h], edx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 55 C4 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc4
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DE 38 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x38
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        imul edx, ecx, 6900h
        add edx, 5890bfd0h
        mov dword ptr [ebp - 154h], edx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 26 C4 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xc4
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2F 9B E2 FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x9b
        __asm _emit 0xe2
        __asm _emit 0xff
        imul eax, eax, 0e0h
        mov dword ptr [ebp - 158h], eax
        mov ecx, dword ptr [ebp - 154h]
        add ecx, dword ptr [ebp - 158h]
        mov dword ptr [ebp - 15ch], ecx
        push 0ffffffh
        push 0
        mov edx, dword ptr [ebp - 15ch]
        push edx
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 28 0A 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 DC C3 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc3
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 65 38 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x38
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 1
        ; Exact mapped bytes 75 51: jne 0x586bfb65
        __asm _emit 0x75
        __asm _emit 0x51
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 22ch]
        mov dword ptr [ebp - 168h], edx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 A7 C3 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc3
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 40 CA F5 FF: call 0x5861c580
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xca
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        push 0ffffffh
        push 8
        mov eax, dword ptr [ebp - 164h]
        push eax
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 C1 09 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x586bfc42
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 70 C3 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc3
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F9 37 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x37
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 2
        ; Exact mapped bytes 75 4E: jne 0x586bfbce
        __asm _emit 0x75
        __asm _emit 0x4e
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 170h], eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 3B C3 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc3
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D4 C9 F5 FF: call 0x5861c580
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc9
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        push 0ffffffh
        push 9
        mov ecx, dword ptr [ebp - 16ch]
        push ecx
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 55 09 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x09
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 74: jmp 0x586bfc42
        __asm _emit 0xeb
        __asm _emit 0x74
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 22ch]
        mov dword ptr [ebp - 17ch], ecx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 ED C2 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 76 37 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x37
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        mov dword ptr [ebp - 174h], eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 CA C2 DC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 63 C9 F5 FF: call 0x5861c580
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc9
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp - 174h]
        push ecx
        mov edx, dword ptr [ebp - 178h]
        push edx
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 DF 08 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        movzx eax, word ptr [ebp - 110h]
        add eax, dword ptr [ebp - 118h]
        cmp eax, dword ptr [ebp - 124h]
        ; Exact mapped bytes 76 4D: jbe 0x586bfca4
        __asm _emit 0x76
        __asm _emit 0x4d
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 184h], eax
        push 588b1cd8h
        ; Exact mapped bytes E8 74 23 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x23
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 180h], eax
        push 4848ceh
        push -1
        mov ecx, dword ptr [ebp - 180h]
        push ecx
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 82 08 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 2E 03 00 00: jmp 0x586bffd2
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 118h], 64h
        ; Exact mapped bytes 72 59: jb 0x586bfd06
        __asm _emit 0x72
        __asm _emit 0x59
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 06: je 0x586bfcb9
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 4D: jne 0x586bfd06
        __asm _emit 0x75
        __asm _emit 0x4d
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 22ch]
        mov dword ptr [ebp - 18ch], ecx
        push 588b1cf0h
        ; Exact mapped bytes E8 12 23 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x23
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 188h], eax
        push 4848ceh
        push -1
        mov edx, dword ptr [ebp - 188h]
        push edx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 20 08 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 CC 02 00 00: jmp 0x586bffd2
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 110h]
        cmp dword ptr [ebp - 190h], eax
        ; Exact mapped bytes 73 4D: jae 0x586bfd62
        __asm _emit 0x73
        __asm _emit 0x4d
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 198h], eax
        push 588b1d0ch
        ; Exact mapped bytes E8 B6 22 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x22
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1a8h], eax
        push 4848ceh
        push -1
        mov ecx, dword ptr [ebp - 1a8h]
        push ecx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 C4 07 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x07
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 70 02 00 00: jmp 0x586bffd2
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 12ch], edx
        ; Exact mapped bytes F2 0F 2A 85 D4 FE FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x12c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 12ch]
        shr eax, 1fh
        ; Exact mapped bytes F2 0F 58 04 C5 70 4D 89 58: addsd xmm0, qword ptr [eax*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 130h], ecx
        ; Exact mapped bytes F2 0F 2A 8D D0 FE FF FF: cvtsi2sd xmm1, dword ptr [ebp - 0x130]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 130h]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 0C D5 70 4D 89 58: addsd xmm1, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 0D A0 1D 8B 58: mulsd xmm1, qword ptr [0x588b1da0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x1d
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F C1: comisd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc1
        ; Exact mapped bytes 76 5F: jbe 0x586bfe1b
        __asm _emit 0x76
        __asm _emit 0x5f
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 74 0C: je 0x586bfdce
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp + 8], 5
        ; Exact mapped bytes 74 06: je 0x586bfdce
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 75 4D: jne 0x586bfe1b
        __asm _emit 0x75
        __asm _emit 0x4d
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 22ch]
        mov dword ptr [ebp - 1a0h], edx
        push 588b1d28h
        ; Exact mapped bytes E8 FD 21 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x21
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 19ch], eax
        push 4848ceh
        push -1
        mov eax, dword ptr [ebp - 19ch]
        push eax
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 0B 07 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x07
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B7 01 00 00: jmp 0x586bffd2
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 134h], ecx
        ; Exact mapped bytes F2 0F 2A 85 CC FE FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x134]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 134h]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 04 D5 70 4D 89 58: addsd xmm0, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 138h], eax
        ; Exact mapped bytes F2 0F 2A 8D C8 FE FF FF: cvtsi2sd xmm1, dword ptr [ebp - 0x138]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 138h]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 0C CD 70 4D 89 58: addsd xmm1, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 0D A8 1D 8B 58: mulsd xmm1, qword ptr [0x588b1da8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x1d
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F C1: comisd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc1
        ; Exact mapped bytes 76 5F: jbe 0x586bfed4
        __asm _emit 0x76
        __asm _emit 0x5f
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 74 0C: je 0x586bfe87
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp + 8], 6
        ; Exact mapped bytes 74 06: je 0x586bfe87
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 9
        ; Exact mapped bytes 75 4D: jne 0x586bfed4
        __asm _emit 0x75
        __asm _emit 0x4d
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 22ch]
        mov dword ptr [ebp - 1bch], ecx
        push 588b1d44h
        ; Exact mapped bytes E8 44 21 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x21
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1a4h], eax
        push 4848ceh
        push -1
        mov edx, dword ptr [ebp - 1a4h]
        push edx
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 52 06 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 FE 00 00 00: jmp 0x586bffd2
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes F2 0F 2A 85 C4 FE FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x13c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 13ch]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 04 CD 70 4D 89 58: addsd xmm0, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 140h], edx
        ; Exact mapped bytes F2 0F 2A 8D C0 FE FF FF: cvtsi2sd xmm1, dword ptr [ebp - 0x140]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x8d
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 140h]
        shr eax, 1fh
        ; Exact mapped bytes F2 0F 58 0C C5 70 4D 89 58: addsd xmm1, qword ptr [eax*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 0D 28 52 89 58: mulsd xmm1, qword ptr [0x58895228]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F C1: comisd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc1
        ; Exact mapped bytes 76 5C: jbe 0x586bff8a
        __asm _emit 0x76
        __asm _emit 0x5c
        cmp dword ptr [ebp + 8], 4
        ; Exact mapped bytes 74 0C: je 0x586bff40
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp + 8], 7
        ; Exact mapped bytes 74 06: je 0x586bff40
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 0ah
        ; Exact mapped bytes 75 4A: jne 0x586bff8a
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 22ch]
        mov dword ptr [ebp - 1b0h], eax
        push 588b1d60h
        ; Exact mapped bytes E8 8B 20 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x20
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ach], eax
        push 4848ceh
        push -1
        mov ecx, dword ptr [ebp - 1ach]
        push ecx
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 99 05 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 48: jmp 0x586bffd2
        __asm _emit 0xeb
        __asm _emit 0x48
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 22ch]
        mov dword ptr [ebp - 1b8h], ecx
        push 588b0da0h
        ; Exact mapped bytes E8 41 20 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x20
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1b4h], eax
        push 0ffffffh
        push 1
        mov edx, dword ptr [ebp - 1b4h]
        push edx
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 4F 05 10 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 108h]
        ; Exact mapped bytes 66 8B 48 78: mov cx, word ptr [eax + 0x78]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x78
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 108h]
        ; Exact mapped bytes 66 89 4A 78: mov word ptr [edx + 0x78], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x78
        ; Exact mapped bytes E9 8E F8 FF FF: jmp 0x586bf87d
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 86 2C 00 00: call 0x586c2c80
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 4B 10 17 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x10
        __asm _emit 0x17
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
