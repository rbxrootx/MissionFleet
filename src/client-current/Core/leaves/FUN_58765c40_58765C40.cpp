// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58765C40 .. +0x21A9 bytes.
extern "C" __declspec(naked) void FUN_58765c40_58765C40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1e0h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 7F 21 00 00: je 0x58767de6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 6B ED D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0xd1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 69 21 00 00: je 0x58767de6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5eech], 50000h
        ; Exact mapped bytes 0F 85 2E 1F 00 00: jne 0x58767bbe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5f24h], 0
        ; Exact mapped bytes 0F 84 E7 00 00 00: je 0x58765d87
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 5f28h]
        test eax, eax
        ; Exact mapped bytes 0F 85 BD 00 00 00: jne 0x58765d6f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 86 67 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x67
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EF F3 D3 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf3
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 74 67 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x67
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2D 62 D2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x62
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 4D DA: mov word ptr [ebp - 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 68h]
        push edx
        movzx eax, word ptr [ebp - 26h]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 99 E1 FF: call 0x5857f670
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x99
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A 67 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x67
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 63 ED D1 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xed
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        shr ecx, 0ah
        and ecx, 3fffffh
        mov dword ptr [ebp - 6ch], ecx
        mov edx, dword ptr [ebp - 6ch]
        push edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 B5 01 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B 67 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x67
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 84 F3 D3 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 25 62 DF FF: call 0x5855bf60
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x62
        __asm _emit 0xdf
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 66 D2 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x66
        __asm _emit 0xd2
        __asm _emit 0xff
        imul ecx, eax, 1fh
        add ecx, 7
        push ecx
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 59 5F D2 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x5f
        __asm _emit 0xd2
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 7dh
        div ecx
        add edx, 7dh
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 28 5F 00 00: mov word ptr [eax + 0x5f28], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x58765d87
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 28 5F 00 00: mov dx, word ptr [ecx + 0x5f28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x28
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 28 5F 00 00: mov word ptr [eax + 0x5f28], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1168h]
        ; Exact mapped bytes E8 FB FA D2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xfa
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 2D: je 0x58765dc9
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1168h]
        mov dword ptr [ebp - 78h], ecx
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 2E 01 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 116ch]
        mov dword ptr [ebp - 7ch], eax
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 18 01 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C 12 E2 FF: call 0x58586fe0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x12
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 76: je 0x58765e51
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A FC D2 FF: call 0x58495a50
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xfc
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 67: je 0x58765e51
        __asm _emit 0x74
        __asm _emit 0x67
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB FA D2 FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xfa
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 58: jne 0x58765e51
        __asm _emit 0x75
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 0B D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x0b
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 44: je 0x58765e51
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 2ch]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 3C: jne 0x58765e51
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 23ch]
        ; Exact mapped bytes E8 9D 60 D2 FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x60
        __asm _emit 0xd2
        __asm _emit 0xff
        cdq
        mov ecx, 64h
        idiv ecx
        cmp eax, 0ah
        ; Exact mapped bytes 7F 21: jg 0x58765e51
        __asm _emit 0x7f
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 18 B8 D6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xb8
        __asm _emit 0xd6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x58765e51
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6358h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 6358h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 C2 FF FF: call 0x58762060
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 6F: je 0x58765ecf
        __asm _emit 0x74
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 5ecch], 0
        ; Exact mapped bytes 75 63: jne 0x58765ecf
        __asm _emit 0x75
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 6214h], 0
        ; Exact mapped bytes 74 57: je 0x58765ecf
        __asm _emit 0x74
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 30 71 D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 4B: jne 0x58765ecf
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 621ch], 0
        ; Exact mapped bytes 75 3F: jne 0x58765ecf
        __asm _emit 0x75
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 7D 36: jge 0x58765ecf
        __asm _emit 0x7d
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C 3B 00 00: call 0x587699e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A4 62 D2 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x62
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 D8: mov word ptr [ebp - 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        push 0
        movzx eax, word ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E 7C E1 FF: call 0x5857db40
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x7c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 621ch], 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 168h], 0
        ; Exact mapped bytes 7E 15: jle 0x58765ef0
        __asm _emit 0x7e
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 168h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 168h], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D8 F0 FF FF: call 0x58764fd0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF 70 D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x70
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 0A D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x0a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9B 70 D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x70
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x58765fde
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 6204h], 0
        ; Exact mapped bytes 0F 85 B1 00 00 00: jne 0x58765fde
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 0A D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 81 0A D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B 0A D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 54 61 D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x61
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        sub edx, eax
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 3ch]
        imul eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp - 40h]
        imul ecx, dword ptr [ebp - 40h]
        add eax, ecx
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 98 B0 0E 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xb0
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 90 B3 0C 00: call 0x58831320
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xb3
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 0A D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0B FA D2 FF: call 0x584959b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xfa
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp dword ptr [ebp - 80h], eax
        ; Exact mapped bytes 77 34: ja 0x58765fde
        __asm _emit 0x77
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B 0A D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x0a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 94 B6 D6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xb6
        __asm _emit 0xd6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x58765fde
        __asm _emit 0x74
        __asm _emit 0x1e
        push 65h
        push 62h
        push 14h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F BC 00 00: call 0x58771c70
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 6204h], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ed4h]
        xor ecx, 55555555h
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 5D 04 00 00: jne 0x58766453
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ee0h]
        xor eax, 55555555h
        cmp eax, 1
        ; Exact mapped bytes 0F 85 46 04 00 00: jne 0x58766453
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 0F 84 31 04 00 00: je 0x5876644e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 FE D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 1150h]
        ; Exact mapped bytes E8 51 F8 D2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf8
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 85 FB 03 00 00: jne 0x58766445
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1150h]
        mov dword ptr [ebp - 84h], eax
        push 1
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 71 FE D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1150h]
        mov dword ptr [ebp - 88h], eax
        push 1
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 4C FE D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1148h]
        mov dword ptr [ebp - 8ch], edx
        push 1
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 30 FE D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 114ch]
        mov dword ptr [ebp - 90h], ecx
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 14 FE D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1118h]
        mov dword ptr [ebp - 94h], eax
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 F8 FD D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 111ch]
        mov dword ptr [ebp - 98h], edx
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 DC FD D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1140h]
        mov dword ptr [ebp - 9ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 C0 FD D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1144h]
        mov dword ptr [ebp - 0a0h], eax
        push 1
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 A4 FD D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D AC 07 96 58 00: cmp dword ptr [0x589607ac], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xac
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1F: je 0x58766165
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1110h]
        mov dword ptr [ebp - 0a4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 7E FD D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xfd
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 76: jmp 0x587661db
        __asm _emit 0xeb
        __asm _emit 0x76
        ; Exact mapped bytes 83 3D B8 06 96 58 00: cmp dword ptr [0x589606b8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 1F: jne 0x5876618d
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1110h]
        mov dword ptr [ebp - 0a8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 56 FD D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xfd
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4E: jmp 0x587661db
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 11a8h], 0
        ; Exact mapped bytes 74 25: je 0x587661be
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 11a8h], 0
        ; Exact mapped bytes 74 36: je 0x587661db
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 11a8h]
        push edx
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 E6 D5 FF: call 0x584c4810
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe6
        __asm _emit 0xd5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1D: jne 0x587661db
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1110h]
        mov dword ptr [ebp - 0ach], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 06 FD D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xfd
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x587661ed
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 6
        ; Exact mapped bytes 0F 8D 80 00 00 00: jge 0x58766277
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 6370h]
        mov dword ptr [ebp - 0b0h], edx
        push 1
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 C9 FC D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 6388h]
        ; Exact mapped bytes E8 86 F5 D2 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xf5
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 23: jle 0x58766251
        __asm _emit 0x7e
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6388h]
        mov dword ptr [ebp - 0b4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 92 FC D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 21: jmp 0x58766272
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6388h]
        mov dword ptr [ebp - 0b8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 6F FC D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xfc
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 6D FF FF FF: jmp 0x587661e4
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E F6 D2 FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf6
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 82 01 00 00: jne 0x5876640c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1E 6D D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x6d
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 07 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x07
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0A 6D D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x6d
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 84 5E 01 00 00: je 0x5876640c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FA C4 FF FF: call 0x587627b0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 4E 01 00 00: jne 0x5876640c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 6200h], 0
        ; Exact mapped bytes 0F 85 3E 01 00 00: jne 0x5876640c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 06 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x06
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E0 06 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x06
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 44h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA 06 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x06
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B3 5D D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x5d
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        sub edx, eax
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 44h]
        imul eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 48h]
        imul ecx, dword ptr [ebp - 48h]
        add eax, ecx
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 F7 AC 0E 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xac
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 EF AF 0C 00: call 0x58831320
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xaf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E 06 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x06
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 67 F6 D2 FF: call 0x584959b0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf6
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes 0F 87 B7 00 00 00: ja 0x5876640c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 06 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E9 B2 D6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0xd6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x5876640c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 1eh
        push 5
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 BA 00 00: call 0x58771d80
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 7B: jne 0x587663ff
        __asm _emit 0x75
        __asm _emit 0x7b
        push 2ch
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF E6 D1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe6
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [eax + 14h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test eax, eax
        ; Exact mapped bytes 75 5A: jne 0x587663ff
        __asm _emit 0x75
        __asm _emit 0x5a
        push 2ch
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE E6 D1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe6
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes A1 94 20 96 58: mov eax, dword ptr [0x58962094]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0c0h], eax
        mov ecx, dword ptr [ebp - 0c0h]
        push ecx
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 EB 59 05 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x00
        push 2ch
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E E6 D1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xe6
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0c8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 95 38 FF FF FF: call dword ptr [ebp - 0xc8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 6200h], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1114h]
        mov dword ptr [ebp - 0cch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 B8 FA D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xfa
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1164h]
        mov dword ptr [ebp - 0d0h], eax
        push 1
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 9C FA D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xfa
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 EE FF FF: call 0x58765260
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 91 03 00 00: jmp 0x587667e4
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 1150h]
        ; Exact mapped bytes E8 26 F4 D2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf4
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 3E 02 00 00: je 0x587666b3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1150h]
        mov dword ptr [ebp - 0d4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 46 FA D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfa
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1150h]
        mov dword ptr [ebp - 0d8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 21 FA D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xfa
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1148h]
        mov dword ptr [ebp - 0dch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 05 FA D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfa
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 114ch]
        mov dword ptr [ebp - 0e0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 E9 F9 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1118h]
        mov dword ptr [ebp - 0e4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 CD F9 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf9
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 111ch]
        mov dword ptr [ebp - 0e8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 B1 F9 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf9
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1114h]
        mov dword ptr [ebp - 0ech], eax
        push 0
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 95 F9 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1140h]
        mov dword ptr [ebp - 0f0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 79 F9 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf9
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1144h]
        mov dword ptr [ebp - 0f4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 5D F9 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf9
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x58766596
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 6
        ; Exact mapped bytes 7D 43: jge 0x587665df
        __asm _emit 0x7d
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 6370h]
        mov dword ptr [ebp - 0f8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 24 F9 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf9
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 6388h]
        mov dword ptr [ebp - 0fch], edx
        push 0
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 04 F9 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf9
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AE: jmp 0x5876658d
        __asm _emit 0xeb
        __asm _emit 0xae
        ; Exact mapped bytes 83 3D AC 07 96 58 00: cmp dword ptr [0x589607ac], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xac
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1F: je 0x58766607
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1110h]
        mov dword ptr [ebp - 100h], ecx
        push 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 DC F8 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf8
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 76: jmp 0x5876667d
        __asm _emit 0xeb
        __asm _emit 0x76
        ; Exact mapped bytes 83 3D B8 06 96 58 00: cmp dword ptr [0x589606b8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 1F: jne 0x5876662f
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1110h]
        mov dword ptr [ebp - 104h], eax
        push 0
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 B4 F8 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf8
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4E: jmp 0x5876667d
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 11a8h], 0
        ; Exact mapped bytes 74 25: je 0x58766660
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 11a8h], 0
        ; Exact mapped bytes 74 36: je 0x5876667d
        __asm _emit 0x74
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11a8h]
        push ecx
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 E1 D5 FF: call 0x584c4810
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xe1
        __asm _emit 0xd5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1D: jne 0x5876667d
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1110h]
        mov dword ptr [ebp - 108h], eax
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 64 F8 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf8
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1164h]
        mov dword ptr [ebp - 10ch], edx
        push 0
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 47 F8 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf8
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 6200h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 6204h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 03 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x03
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EB 68 D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x68
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 68 D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x68
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 1F: je 0x587666f2
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 164h]
        cmp eax, 3
        ; Exact mapped bytes 7C 10: jl 0x587666f2
        __asm _emit 0x7c
        __asm _emit 0x10
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F4 F7 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf7
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F2 00 00 00: jmp 0x587667e4
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5edch]
        xor edx, 55555555h
        cmp edx, 1
        ; Exact mapped bytes 0F 85 9F 00 00 00: jne 0x587667a9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1C C3 FF FF: call 0x58762a30
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x587667a9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 75 0B: jne 0x58766739
        __asm _emit 0x75
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A8 F7 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf7
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8F F8 D5 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xd5
        __asm _emit 0xff
        cmp dword ptr [eax], 0f0h
        ; Exact mapped bytes 7D 19: jge 0x58766762
        __asm _emit 0x7d
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F F8 D5 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf8
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        add eax, 10h
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 ED 04 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x58766770
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 100h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 ED 04 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 98 2E DC FF: call 0x58529610
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x2e
        __asm _emit 0xdc
        __asm _emit 0xff
        cmp dword ptr [eax], 0ffffff10h
        ; Exact mapped bytes 7E 19: jle 0x58766799
        __asm _emit 0x7e
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 88 2E DC FF: call 0x58529610
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x2e
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        sub ecx, 10h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A EE 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x587667a7
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0ffffff00h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A EE 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3B: jmp 0x587667e4
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F F8 D5 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf8
        __asm _emit 0xd5
        __asm _emit 0xff
        cmp dword ptr [eax], 10h
        ; Exact mapped bytes 7E 19: jle 0x587667cf
        __asm _emit 0x7e
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 12 F8 D5 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf8
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        sub edx, 10h
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 74 ED 04 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 15: jmp 0x587667e4
        __asm _emit 0xeb
        __asm _emit 0x15
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 67 ED 04 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FD F6 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf6
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 164h]
        cmp ecx, 3
        ; Exact mapped bytes 0F 8E C5 00 00 00: jle 0x587668bc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 164h]
        cmp eax, 6
        ; Exact mapped bytes 75 4F: jne 0x58766855
        __asm _emit 0x75
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E2 C1 E6 FF: call 0x585d29f0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xc1
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes F2 0F 2A 45 AC: cvtsi2sd xmm0, dword ptr [ebp - 0x54]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xac
        mov ecx, dword ptr [ebp - 54h]
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
        ; Exact mapped bytes F2 0F 59 05 60 54 8B 58: mulsd xmm0, qword ptr [0x588b5460]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x54
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C D0: cvttsd2si edx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        mov dword ptr [ebp - 30h], edx
        push 5
        push 0
        mov eax, dword ptr [ebp - 30h]
        cdq
        mov ecx, 3
        idiv ecx
        push eax
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9C 58 00 00: call 0x5876c0f0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 23ch]
        ; Exact mapped bytes E8 5D 56 D2 FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x56
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 11: jle 0x58766878
        __asm _emit 0x7e
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 23ch]
        ; Exact mapped bytes E8 9B C1 DF FF: call 0x58562a10
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xc1
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 44: jmp 0x587668bc
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 23ch]
        ; Exact mapped bytes E8 3A 56 D2 FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x56
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7D 11: jge 0x5876689b
        __asm _emit 0x7d
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 23ch]
        ; Exact mapped bytes E8 18 C2 DF FF: call 0x58562ab0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xc2
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 21: jmp 0x587668bc
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 23ch]
        ; Exact mapped bytes E8 17 56 D2 FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x56
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x587668bc
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 23ch]
        ; Exact mapped bytes E8 D5 C1 DF FF: call 0x58562a90
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xc1
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5f20h], 0
        ; Exact mapped bytes 0F 84 36 01 00 00: je 0x58766a02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 F0 D2 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf0
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 75 0E: jne 0x587668f1
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 35 68 D2 FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x68
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x587668f1
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 19: jmp 0x5876690a
        __asm _emit 0xeb
        __asm _emit 0x19
        push 4
        push 0
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E7 57 00 00: call 0x5876c0f0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB 00 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 85 E2 00 00 00: jne 0x58766a00
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 84h]
        test eax, eax
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x587669d1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 54 F1 FF: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x54
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 7B: je 0x587669ba
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 54 F1 FF: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        push 588b5308h
        ; Exact mapped bytes E8 96 B6 DB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb6
        __asm _emit 0xdb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        push 9fh
        push 0
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 84 7F D9 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 54 F1 FF: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x54
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        push 588b5328h
        ; Exact mapped bytes E8 59 B6 DB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xb6
        __asm _emit 0xdb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        push 10101h
        push 1
        mov edx, dword ptr [ebp - 118h]
        push edx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 47 7F D9 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x7f
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 84h]
        add cl, 1
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 84h], cl
        ; Exact mapped bytes EB 2F: jmp 0x58766a00
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 84h]
        cmp ecx, 7dh
        ; Exact mapped bytes 7D 16: jge 0x587669f6
        __asm _emit 0x7d
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + 84h]
        add al, 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 84h], al
        ; Exact mapped bytes EB 0A: jmp 0x58766a00
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 84h], 0
        ; Exact mapped bytes EB 0A: jmp 0x58766a0c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 84h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AC FF D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, 0c8h
        ; Exact mapped bytes 7C 5B: jl 0x58766a76
        __asm _emit 0x7c
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9D FF D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xd1
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 FF D1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 39 ED D2 FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xed
        __asm _emit 0xd2
        __asm _emit 0xff
        sub eax, 64h
        cmp esi, eax
        ; Exact mapped bytes 7F 38: jg 0x58766a76
        __asm _emit 0x7f
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A 56 D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x56
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 1b8h
        ; Exact mapped bytes 7C 29: jl 0x58766a76
        __asm _emit 0x7c
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5B 56 D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x56
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E FF D1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E7 EC D2 FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xec
        __asm _emit 0xd2
        __asm _emit 0xff
        sub eax, 0c8h
        cmp esi, eax
        ; Exact mapped bytes 0F 8E 1E 01 00 00: jle 0x58766b94
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F FF D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x58766b14
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 53 F1 FF: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x53
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 7B: je 0x58766b14
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C 53 F1 FF: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x53
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        push 588b534ch
        ; Exact mapped bytes E8 3C B5 DB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xb5
        __asm _emit 0xdb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        push 9fh
        push 0
        mov ecx, dword ptr [ebp - 120h]
        push ecx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 2A 7E D9 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x7e
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 52 F1 FF: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        push 588b536ch
        ; Exact mapped bytes E8 FF B4 DB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xb4
        __asm _emit 0xdb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        push 10101h
        push 1
        mov edx, dword ptr [ebp - 128h]
        push edx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 ED 7D D9 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x7d
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e84h]
        ; Exact mapped bytes E8 6E 55 D2 FF: call 0x5848c090
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x55
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 75 6B: jne 0x58766b92
        __asm _emit 0x75
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5e84h]
        mov dword ptr [ebp - 130h], edx
        push 1
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 8D 79 00 00: call 0x5876e4d0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 23ch]
        ; Exact mapped bytes E8 6E 53 D2 FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x53
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 1F: jle 0x58766b75
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5e84h]
        mov dword ptr [ebp - 134h], edx
        push 0
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 7E 79 00 00: call 0x5876e4f0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1D: jmp 0x58766b92
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e84h]
        mov dword ptr [ebp - 138h], ecx
        push 1
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 5F 79 00 00: call 0x5876e4f0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 39: jmp 0x58766bcd
        __asm _emit 0xeb
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5e84h]
        mov dword ptr [ebp - 13ch], eax
        push 0
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 20 79 00 00: call 0x5876e4d0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5e84h]
        mov dword ptr [ebp - 140h], edx
        push -1
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 24 79 00 00: call 0x5876e4f0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, 4
        shl eax, 0
        cmp dword ptr [eax + 58947974h], 0
        ; Exact mapped bytes 75 3B: jne 0x58766c19
        __asm _emit 0x75
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5edch]
        xor edx, 55555555h
        cmp edx, 1
        ; Exact mapped bytes 74 27: je 0x58766c19
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ed4h]
        xor ecx, 55555555h
        cmp ecx, 1
        ; Exact mapped bytes 75 36: jne 0x58766c3c
        __asm _emit 0x75
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ee0h]
        xor eax, 55555555h
        cmp eax, 1
        ; Exact mapped bytes 75 23: jne 0x58766c3c
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 75 17: jne 0x58766c3c
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 12dch], 0
        ; Exact mapped bytes 74 0B: je 0x58766c3c
        __asm _emit 0x74
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 95 C3 FF FF: call 0x58762fd0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 05 D7 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 0fh
        ; Exact mapped bytes 0F 85 24 02 00 00: jne 0x58766e7b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 6214h], 0
        ; Exact mapped bytes 0F 84 75 01 00 00: je 0x58766ddc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 23ch]
        ; Exact mapped bytes E8 4B 52 D2 FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x52
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 5F 01 00 00: jne 0x58766ddc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 25 E4 D3 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe4
        __asm _emit 0xd3
        __asm _emit 0xff
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 6220h]
        ; Exact mapped bytes 0F 8E 40 01 00 00: jle 0x58766ddc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 6348h], 0
        ; Exact mapped bytes 0F 85 1B 01 00 00: jne 0x58766dc7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 EA D2 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xea
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        lea eax, [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 5D 8A DA FF: call 0x5850f730
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x8a
        __asm _emit 0xda
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x58766da0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 0D 04 D7 FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0xd7
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 0D 52 D2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x52
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 4]
        cmp esi, edx
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x58766da0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58766d11
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 8
        ; Exact mapped bytes 0F 8D 85 00 00 00: jge 0x58766da0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 6224h]
        ; Exact mapped bytes E8 93 DC D1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xdc
        __asm _emit 0xd1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 6A: jne 0x58766d9b
        __asm _emit 0x75
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 18h]
        and edx, 80000001h
        ; Exact mapped bytes 79 05: jns 0x58766d47
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffeh
        inc edx
        imul eax, edx, 32h
        lea ecx, [ecx + eax - 19h]
        mov dword ptr [ebp - 1d8h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        mov eax, dword ptr [ebp - 18h]
        cdq
        sub eax, edx
        sar eax, 1
        imul edx, eax, 14h
        lea eax, [ecx + edx - 46h]
        mov dword ptr [ebp - 1d4h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 6224h]
        mov dword ptr [ebp - 148h], eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        push edx
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 08 0C DB FF: call 0x585179a0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x0c
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x58766da0
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 68 FF FF FF: jmp 0x58766d08
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 55 D2 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x55
        __asm _emit 0xd2
        __asm _emit 0xff
        cdq
        mov ecx, 7dh
        idiv ecx
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 6344h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 6348h], edx
        ; Exact mapped bytes EB 15: jmp 0x58766ddc
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6348h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 6348h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 FB D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xfb
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x58766e7b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 6214h], 0
        ; Exact mapped bytes 74 7F: je 0x58766e7b
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 BB E6 FF: call 0x585d2960
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xbb
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 6D: je 0x58766e7b
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 E8 D2 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 FD 88 DA FF: call 0x5850f730
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x88
        __asm _emit 0xda
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x58766e5a
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E BB E6 FF: call 0x585d2960
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xbb
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 0E: jne 0x58766e58
        __asm _emit 0x75
        __asm _emit 0x0e
        push 2
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 03 E8 FF: call 0x585e7240
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 21: jmp 0x58766e7b
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB BA E6 FF: call 0x585d2960
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xba
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 0E: jne 0x58766e7b
        __asm _emit 0x75
        __asm _emit 0x0e
        push 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 03 E8 FF: call 0x585e7240
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x03
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA EB D2 FF: call 0x58495a30
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xeb
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 16 02 00 00: je 0x587670a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A 61 D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x61
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 06 02 00 00: jne 0x587670a4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 6214h], 0
        ; Exact mapped bytes 0F 84 57 01 00 00: je 0x58767005
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 23ch]
        ; Exact mapped bytes E8 04 50 D2 FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x50
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 41 01 00 00: jne 0x58767005
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 DE E1 D3 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xe1
        __asm _emit 0xd3
        __asm _emit 0xff
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 6220h]
        ; Exact mapped bytes 0F 8E 22 01 00 00: jle 0x58767005
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 6348h], 0
        ; Exact mapped bytes 0F 85 FD 00 00 00: jne 0x58766ff0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 E7 D2 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xe7
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        lea eax, [ebp - 154h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 13 88 DA FF: call 0x5850f730
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x88
        __asm _emit 0xda
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x58766fc9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58766f37
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 8
        ; Exact mapped bytes 0F 8D 88 00 00 00: jge 0x58766fc9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 6224h]
        ; Exact mapped bytes E8 6D DA D1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xda
        __asm _emit 0xd1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 6D: jne 0x58766fc4
        __asm _emit 0x75
        __asm _emit 0x6d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, 80000001h
        ; Exact mapped bytes 79 05: jns 0x58766f6d
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffffeh
        inc ecx
        imul edx, ecx, 32h
        lea eax, [eax + edx - 19h]
        mov dword ptr [ebp - 1e0h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 1ch]
        cdq
        sub eax, edx
        sar eax, 1
        imul edx, eax, 14h
        lea eax, [ecx + edx - 46h]
        mov dword ptr [ebp - 1dch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 6224h]
        mov dword ptr [ebp - 158h], eax
        mov ecx, dword ptr [ebp - 154h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        push edx
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 DF 09 DB FF: call 0x585179a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x09
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x58766fc9
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x58766f2e
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 53 D2 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x53
        __asm _emit 0xd2
        __asm _emit 0xff
        cdq
        mov ecx, 7dh
        idiv ecx
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 6344h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 6348h], edx
        ; Exact mapped bytes EB 15: jmp 0x58767005
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6348h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 6348h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 F9 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf9
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x587670a4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 6214h], 0
        ; Exact mapped bytes 74 7F: je 0x587670a4
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 B9 E6 FF: call 0x585d2960
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb9
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 6D: je 0x587670a4
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E E6 D2 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xe6
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 D4 86 DA FF: call 0x5850f730
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x86
        __asm _emit 0xda
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x58767083
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 B8 E6 FF: call 0x585d2960
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xb8
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 0E: jne 0x58767081
        __asm _emit 0x75
        __asm _emit 0x0e
        push 2
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 01 E8 FF: call 0x585e7240
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 21: jmp 0x587670a4
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 B8 E6 FF: call 0x585d2960
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb8
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 0E: jne 0x587670a4
        __asm _emit 0x75
        __asm _emit 0x0e
        push 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D 01 E8 FF: call 0x585e7240
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 5f68h]
        and edx, 80h
        ; Exact mapped bytes 0F 84 E4 01 00 00: je 0x5876729e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 5f68h]
        and ecx, 7fh
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 5f68h], cl
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6170h]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 5f69h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6170h]
        add edx, 2
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 6170h], edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 C1 EA 06: shr dx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        mov eax, 3ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        movzx ecx, dx
        test ecx, ecx
        ; Exact mapped bytes 0F 84 5F 01 00 00: je 0x58767277
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E0 3F: and ax, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        movzx ecx, al
        cmp ecx, 11h
        ; Exact mapped bytes 74 24: je 0x5876714e
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E0 3F: and ax, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        movzx ecx, al
        cmp ecx, 12h
        ; Exact mapped bytes 74 12: je 0x5876714e
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E0 3F: and ax, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        movzx ecx, al
        cmp ecx, 13h
        ; Exact mapped bytes 75 7D: jne 0x587671cb
        __asm _emit 0x75
        __asm _emit 0x7d
        ; Exact mapped bytes 83 3D 60 06 96 58 00: cmp dword ptr [0x58960660], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 7F 10: jg 0x58767167
        __asm _emit 0x7f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E F8 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf8
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 42: je 0x587671a9
        __asm _emit 0x74
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6170h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 5f6ah]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6170h]
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + ecx + 5f69h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        movzx eax, dl
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A 57 00 00: call 0x5876c8f0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1D: jmp 0x587671c6
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 0
        push 0
        push 1
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 58 E1 FF: call 0x5857c9c0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x58
        __asm _emit 0xe1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B 52 0C 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x52
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 AC 00 00 00: jmp 0x58767277
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        movzx eax, dl
        cmp eax, 1bh
        ; Exact mapped bytes 75 45: jne 0x58767222
        __asm _emit 0x75
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6170h]
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 8C 10 69 5F 00 00: mov cx, word ptr [eax + edx + 0x5f69]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x69
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 06: shr cx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x06
        mov edx, 3ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        movzx eax, cx
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6170h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 5f69h]
        push ecx
        push 1bh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C1 32 00 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 55: jmp 0x58767277
        __asm _emit 0xeb
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E0 3F: and ax, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        movzx ecx, al
        cmp ecx, 0ch
        ; Exact mapped bytes 75 43: jne 0x58767277
        __asm _emit 0x75
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6170h]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 94 01 69 5F 00 00: mov dx, word ptr [ecx + eax + 0x5f69]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x69
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 06: shr dx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        mov eax, 3ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        movzx ecx, dx
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6170h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 5f69h]
        push edx
        push 0ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A 32 00 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 C1 E9 06: shr cx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x06
        mov edx, 3ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        movzx eax, cx
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 6170h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 6170h], eax
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 5f68h]
        mov edx, dword ptr [ebp - 4]
        and ecx, dword ptr [edx + 5f64h]
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x58767349
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6170h]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 5f69h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6170h]
        add edx, 2
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 6170h], edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 C1 EA 06: shr dx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        mov eax, 3ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        movzx ecx, dx
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6170h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 5f69h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 3F: and cx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x3f
        movzx edx, cx
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BE 31 00 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 C1 E9 06: shr cx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x06
        mov edx, 3ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        movzx eax, cx
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 6170h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 6170h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5f64h]
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5f64h], ecx
        ; Exact mapped bytes 83 3D E0 35 90 58 00: cmp dword ptr [0x589035e0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x5876737d
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 164h]
        test ecx, ecx
        ; Exact mapped bytes 75 09: jne 0x5876737d
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 CD FF FF: call 0x58764140
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2B B4 FF FF: call 0x587627b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 DC 00 00 00: je 0x58767469
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ed8h]
        xor eax, 55555555h
        cmp eax, 1
        ; Exact mapped bytes 75 05: jne 0x587673a5
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x58767469
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 E5 D2 FF: call 0x58495990
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xe5
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 B0 00 00 00: jne 0x58767469
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC E2 D2 FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xe2
        __asm _emit 0xd2
        __asm _emit 0xff
        and eax, 8000000fh
        ; Exact mapped bytes 79 05: jns 0x587673d0
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffff0h
        inc eax
        test eax, eax
        ; Exact mapped bytes 0F 85 91 00 00 00: jne 0x58767469
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 164h]
        cmp edx, 3
        ; Exact mapped bytes 7C 42: jl 0x58767429
        __asm _emit 0x7c
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx + 160h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx + 15ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 158h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 154h]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A 6C E8 FF: call 0x585ee070
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x6c
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 40: jmp 0x58767469
        __asm _emit 0xeb
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        sub eax, dword ptr [edx + 150h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx + 14ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 148h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 144h]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 6C E8 FF: call 0x585ee070
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x6c
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5f0ch]
        and eax, 0f0000000h
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 17 01 00 00: jne 0x58767599
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 E4 D2 FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xe4
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 EE 00 00 00: jne 0x58767583
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 F5 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf5
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 85 DA 00 00 00: jne 0x58767583
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 620ch], 0
        ; Exact mapped bytes 0F 85 CA 00 00 00: jne 0x58767583
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 1fh
        ; Exact mapped bytes EB 09: jmp 0x587674cb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 26h
        ; Exact mapped bytes 7D 12: jge 0x587674e3
        __asm _emit 0x7d
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 A9 00 00: call 0x58771ea0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DF: jmp 0x587674c2
        __asm _emit 0xeb
        __asm _emit 0xdf
        push 7fh
        push 7eh
        push 1eh
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C A8 00 00: call 0x58771d80
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 5B: jne 0x58767553
        __asm _emit 0x75
        __asm _emit 0x5b
        push 0dh
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B D5 D1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xd5
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        ; Exact mapped bytes 8B 0D 94 20 96 58: mov ecx, dword ptr [0x58962094]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 160h], ecx
        mov edx, dword ptr [ebp - 160h]
        push edx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 97 48 05 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x00
        push 0dh
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A D5 D1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd5
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 168h], edx
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 95 98 FE FF FF: call dword ptr [ebp - 0x168]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 620ch], 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 E3 D2 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xe3
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 6
        ; Exact mapped bytes 75 13: jne 0x58767583
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 A0 E0 FF: call 0x585715a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa0
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0E 2E D6 FF: call 0x584ca390
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x2e
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 BF FF FF: call 0x58763570
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD BB FF FF: call 0x58763160
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 06 06 00 00: jmp 0x58767b9f
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5f0ch], 0
        ; Exact mapped bytes 0F 85 F6 05 00 00: jne 0x58767b9f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 0
        ; Exact mapped bytes 0F 84 E6 05 00 00: je 0x58767b9f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DF D5 FF FF: call 0x58764ba0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ebch]
        mov dword ptr [ebp - 16ch], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 BE FF FF: call 0x58763410
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 22 6F 00 00: call 0x5876e510
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA 45 00 00: call 0x5876bbb0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 5f14h]
        mov byte ptr [ebp - 5], cl
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 16ch]
        cmp eax, dword ptr [edx + 5ebch]
        ; Exact mapped bytes 74 10: je 0x58767623
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 5f14h]
        or edx, 1
        mov byte ptr [ebp - 5], dl
        movzx eax, byte ptr [ebp - 5]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 60 8D 00 00: call 0x58770390
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 4D D2 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x4d
        __asm _emit 0xd2
        __asm _emit 0xff
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x58767648
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        test eax, eax
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x587676f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 48 60 00 00: call 0x5876d6a0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 00 BB FF FF: call 0x58763160
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 23ch]
        ; Exact mapped bytes E8 51 48 D2 FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x48
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 10: jle 0x58767683
        __asm _emit 0x7e
        __asm _emit 0x10
        push 40000000h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 50 B9 FF FF: call 0x58762fd0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1D: jmp 0x587676a0
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 23ch]
        ; Exact mapped bytes E8 2F 48 D2 FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x48
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7F 0B: jg 0x587676a0
        __asm _emit 0x7f
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 B9 FF FF: call 0x58762fd0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 23ch]
        ; Exact mapped bytes E8 12 48 D2 FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x48
        __asm _emit 0xd2
        __asm _emit 0xff
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 170h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1160h]
        ; Exact mapped bytes E8 16 2B D4 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x2b
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        mov eax, dword ptr [ebp - 170h]
        push eax
        push 588b5390h
        push 80h
        mov ecx, dword ptr [ebp - 174h]
        push ecx
        ; Exact mapped bytes E8 03 97 D4 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x97
        __asm _emit 0xd4
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 4C D2 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x4c
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 05 C2 D5 FF: call 0x584c3910
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xc2
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv dword ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 0F 85 7B 02 00 00: jne 0x58767995
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 12a0h]
        xor ecx, 55555555h
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + eax + 12a0h]
        xor eax, 55555555h
        cmp ecx, eax
        ; Exact mapped bytes 0F 8E E9 00 00 00: jle 0x5876783a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 164h]
        cmp edx, 6
        ; Exact mapped bytes 75 05: jne 0x58767765
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x58767809
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 164h]
        test ecx, ecx
        ; Exact mapped bytes 74 53: je 0x587677c6
        __asm _emit 0x74
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 8F 1E 00 00: call 0x58769610
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 2A 00: cvtsi2sd xmm0, dword ptr [eax]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 59 05 70 02 8B 58: mulsd xmm0, qword ptr [0x588b0270]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C D0: cvttsd2si edx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        mov dword ptr [ebp - 17ch], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 4B 19 00 00: call 0x587690f0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 178h], ecx
        mov edx, dword ptr [ebp - 178h]
        add edx, dword ptr [ebp - 17ch]
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 43: jmp 0x58767809
        __asm _emit 0xeb
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 3C 1E 00 00: call 0x58769610
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 184h], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 06 19 00 00: call 0x587690f0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 180h], eax
        mov ecx, dword ptr [ebp - 180h]
        add ecx, dword ptr [ebp - 184h]
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 D9 18 00 00: call 0x587690f0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        cdq
        mov ecx, 64h
        idiv ecx
        xor eax, 55555555h
        mov edx, 4
        imul ecx, edx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 12a0h], eax
        ; Exact mapped bytes EB 24: jmp 0x5876785e
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, 4
        shl eax, 0
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [esi + eax + 12a0h]
        mov dword ptr [ecx + edx + 12a0h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [eax + edx + 12a0h]
        xor esi, 55555555h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 2C D8 D3 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xd8
        __asm _emit 0xd3
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7D 2F: jge 0x587678b7
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 188h], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 0B D8 D3 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xd8
        __asm _emit 0xd3
        __asm _emit 0xff
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 AC 46 DF FF: call 0x5855bf60
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x46
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5E: jmp 0x58767915
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [eax + edx + 12a0h]
        xor esi, 55555555h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 D3 D7 D3 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xd7
        __asm _emit 0xd3
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7E 34: jle 0x58767915
        __asm _emit 0x7e
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 18ch], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 12a0h]
        xor edx, 55555555h
        push edx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 4C 46 DF FF: call 0x5855bf60
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x46
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + eax + 12a0h]
        xor esi, 55555555h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 75 D7 D3 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xd7
        __asm _emit 0xd3
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7D 56: jge 0x58767995
        __asm _emit 0x7d
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 190h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 12a0h]
        xor edx, 55555555h
        push edx
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 EE 45 DF FF: call 0x5855bf60
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x45
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 F0 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xf0
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 12: jne 0x58767995
        __asm _emit 0x75
        __asm _emit 0x12
        push 7dh
        push 7ch
        push 1dh
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC A2 00 00: call 0x58771c70
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12b0h]
        mov dword ptr [ebp - 198h], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 FE D6 D3 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd6
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        mov edx, dword ptr [ebp - 194h]
        push edx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 F6 64 F0 FF: call 0x5866dec0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x64
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e7ch]
        mov dword ptr [ebp - 19ch], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        push edx
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 85 74 D5 FF: call 0x584bee70
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e80h]
        mov dword ptr [ebp - 1a0h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        push edx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 64 74 D5 FF: call 0x584bee70
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x74
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 EF D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xef
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 85 0D 01 00 00: jne 0x58767b2e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 F7 D6 FF: call 0x584d7150
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf7
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 70 D6 D3 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xd6
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        mov eax, dword ptr [ebp - 1a4h]
        push eax
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 B8 BF F7 FF: call 0x586e3a10
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED F6 D6 FF: call 0x584d7150
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf6
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 1b0h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 12a0h]
        xor ecx, 55555555h
        mov dword ptr [ebp - 1ach], ecx
        mov edx, dword ptr [ebp - 1ach]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 65 C2 F7 FF: call 0x586e3d00
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xc2
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 23ch]
        ; Exact mapped bytes E8 17 44 D2 FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x44
        __asm _emit 0xd2
        __asm _emit 0xff
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 1b4h], eax
        mov edx, dword ptr [ebp - 1b4h]
        push edx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 77 F1 FF: call 0x5867f260
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x77
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB EE D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xee
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 64 49 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x49
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FD CE D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xce
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 9
        ; Exact mapped bytes 75 15: jne 0x58767b08
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 DE D2 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xde
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5B A5 F2 FF: call 0x58692060
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xa5
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 13: jmp 0x58767b1b
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD DE D2 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xde
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 56 E3 F1 FF: call 0x58685e70
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe3
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA 90 DE FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x90
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D3 C5 DE FF: call 0x58554100
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xc5
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 D1 FF FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 48 D2 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xd2
        __asm _emit 0xff
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x58767b50
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        test eax, eax
        ; Exact mapped bytes 75 35: jne 0x58767b89
        __asm _emit 0x75
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 164h]
        test eax, eax
        ; Exact mapped bytes 75 27: jne 0x58767b89
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 70 CE D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xce
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, 3ffh
        ; Exact mapped bytes 66 23 48 0C: and cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x48
        __asm _emit 0x0c
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x58767b89
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 88 C7 FF FF: call 0x58764310
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9F AF FF FF: call 0x58762b30
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 09: jne 0x58767b9f
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B2 D3 FF FF: call 0x58764f50
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 23ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 23ch]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 98 01 00 00: jmp 0x58767d56
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5eech], 40000h
        ; Exact mapped bytes 0F 85 48 01 00 00: jne 0x58767d19
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 29 69 00 00: call 0x5876e510
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9F 87 00 00: call 0x58770390
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 5A 00 00: call 0x5876d6a0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 11d0h]
        test eax, eax
        ; Exact mapped bytes 74 5E: je 0x58767c66
        __asm _emit 0x74
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 11c4h]
        mov dword ptr [ebp - 1b8h], edx
        push 1
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 BC E2 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe2
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11c0h]
        mov dword ptr [ebp - 1bch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 A0 E2 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xe2
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 11c8h]
        mov dword ptr [ebp - 1c0h], eax
        push 1
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 84 E2 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 11d0h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 11c4h], 0
        ; Exact mapped bytes 74 2F: je 0x58767ca1
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11c4h]
        ; Exact mapped bytes E8 C0 DB D4 FF: call 0x584b5840
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xdb
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x58767ca1
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 11c4h]
        mov dword ptr [ebp - 1c4h], edx
        push 0
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 40 E2 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xe2
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 11c0h], 0
        ; Exact mapped bytes 74 2F: je 0x58767cdc
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 11c0h]
        ; Exact mapped bytes E8 85 DB D4 FF: call 0x584b5840
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x58767cdc
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 11c0h]
        mov dword ptr [ebp - 1c8h], eax
        push 0
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 05 E2 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xe2
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 11c8h], 0
        ; Exact mapped bytes 74 2F: je 0x58767d17
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 11c8h]
        ; Exact mapped bytes E8 4A DB D4 FF: call 0x584b5840
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xdb
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x58767d17
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11c8h]
        mov dword ptr [ebp - 1cch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 CA E1 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xe1
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3D: jmp 0x58767d56
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 5eech], 60000h
        ; Exact mapped bytes 75 2E: jne 0x58767d56
        __asm _emit 0x75
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 64a8h], 0
        ; Exact mapped bytes 75 0D: jne 0x58767d41
        __asm _emit 0x75
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A2 06 00 00: call 0x587683e0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 15: jmp 0x58767d56
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64a8h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 64a8h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x58767d77
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x58767d77
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 60: je 0x58767de6
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x58767d9a
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB E6: jmp 0x58767d80
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6E D8 D2 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xd8
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x58767dbe
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 2A: jmp 0x58767de6
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes EB 26: jmp 0x58767de4
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4A D8 D2 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd8
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1d0h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 1d0h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 9A: jmp 0x58767d80
        __asm _emit 0xeb
        __asm _emit 0x9a
        pop esi
        mov esp, ebp
    }
}
