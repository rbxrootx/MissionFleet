// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58495070 .. +0x28A bytes.
extern "C" __declspec(naked) void FUN_58495070_58495070() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E7 BA 2C 00: call 0x58760b80
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xba
        __asm _emit 0x2c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4F 6C FF FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 17 04 00 00: call 0x584954e0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 470h], 0
        ; Exact mapped bytes 74 5E: je 0x58495134
        __asm _emit 0x74
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 470h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 05 6C FF FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DE 6D FF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x58495134
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E2 6B FF FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9B 18 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B4 6D FF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AD A6 00 00: call 0x5849f7e0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa6
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
        ; Exact mapped bytes E8 81 18 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 74h]
        ; Exact mapped bytes 0F 85 A9 01 00 00: jne 0x584952f4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 78: je 0x584951c9
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 18 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DD 72 FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 76 F8 FE FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf8
        __asm _emit 0xfe
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
        ; Exact mapped bytes 75 26: jne 0x584951a0
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B 08 00 00: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 73 9B 1F 00: call 0x5868ed10
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x9b
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 24: jmp 0x584951c4
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 08 00 00: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 BD EA 1E 00: call 0x58683c80
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xea
        __asm _emit 0x1e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 18 01 00 00: jmp 0x584952e1
        __asm _emit 0xe9
        __asm _emit 0x18
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
        ; Exact mapped bytes E8 EC 17 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 65 72 FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FE F7 FE FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 9
        ; Exact mapped bytes 75 26: jne 0x58495218
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 07 00 00: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 8B B8 1F 00: call 0x58690aa0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 24: jmp 0x5849523c
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD 07 00 00: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 E5 F7 1E 00: call 0x58684a20
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf7
        __asm _emit 0x1e
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 2d2h]
        test edx, edx
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x584952e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
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
        ; Exact mapped bytes E8 67 17 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E0 71 FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 79 F7 FE FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf7
        __asm _emit 0xfe
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
        ; Exact mapped bytes 75 36: jne 0x584952ad
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 07 00 00: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 2c8h]
        sub eax, 1
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 B4: call dword ptr [ebp - 0x4c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb4
        nop
        ; Exact mapped bytes EB 34: jmp 0x584952e1
        __asm _emit 0xeb
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 07 00 00: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 2c8h]
        sub eax, 1
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 AC: call dword ptr [ebp - 0x54]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xac
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D 40 13 00: call 0x585c9320
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x40
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
