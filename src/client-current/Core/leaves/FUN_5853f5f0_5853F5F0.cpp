// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5853F5F0 .. +0x814 bytes.
extern "C" __declspec(naked) void FUN_5853f5f0_5853F5F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 6ch
        push esi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 2c8h], 1
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 26ch]
        cmp edx, 5
        ; Exact mapped bytes 74 1E: je 0x5853f634
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 26ch]
        cmp ecx, 6
        ; Exact mapped bytes 74 0F: je 0x5853f634
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 26ch]
        cmp eax, 3
        ; Exact mapped bytes 75 13: jne 0x5853f647
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 6B 00 00: call 0x585461b0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 99 07 00 00: je 0x5853fde0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 0B 53 F4 FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x53
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 80 07 00 00: je 0x5853fde0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 2f8h], 0
        ; Exact mapped bytes 0F 84 70 07 00 00: je 0x5853fde0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 42 53 F4 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x53
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 5A 07 00 00: je 0x5853fde0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A4 01 F6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 2f8h]
        ; Exact mapped bytes E8 05 CA F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xca
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx edx, byte ptr [eax]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        sub eax, 5
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 7
        ; Exact mapped bytes 0F 87 A4 00 00 00: ja 0x5853f768
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 24 8D 04 FE 53 58: jmp dword ptr [ecx*4 + 0x5853fe04]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0x53
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 D4 C9 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc9
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx + 2b4h], edx
        ; Exact mapped bytes EB 7F: jmp 0x5853f768
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 B9 C9 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc9
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx + 2b8h], edx
        ; Exact mapped bytes EB 64: jmp 0x5853f768
        __asm _emit 0xeb
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 9E C9 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc9
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx + 2bch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1a0h]
        ; Exact mapped bytes E8 25 1F F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x1f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 81 C4 02 00 00: mov word ptr [ecx + 0x2c4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 31: jmp 0x5853f768
        __asm _emit 0xeb
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 6B C9 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx + 2c0h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1a0h]
        ; Exact mapped bytes E8 F2 1E F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x1e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 81 C6 02 00 00: mov word ptr [ecx + 0x2c6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 3A C9 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc9
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, byte ptr [eax]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0dh
        ; Exact mapped bytes 0F 87 4F 06 00 00: ja 0x5853fdde
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x4f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 24 95 24 FE 53 58: jmp dword ptr [edx*4 + 0x5853fe24]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0x53
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, byte ptr [eax + 2d8h]
        cmp ecx, 2
        ; Exact mapped bytes 75 0E: jne 0x5853f7b6
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E0 08 00 00: call 0x58540090
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 49 06 00 00: jmp 0x5853fdff
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 270h], 0
        ; Exact mapped bytes 0F 85 DD 00 00 00: jne 0x5853f8a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 DC C8 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc8
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        shr edx, 5
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 B9 C8 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc8
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 34h], ecx
        push 4
        lea edx, [ebp - 34h]
        push edx
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 85 D0 30 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 73 FB FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x73
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 29: je 0x5853f84f
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 2
        ; Exact mapped bytes 75 12: jne 0x5853f84f
        __asm _emit 0x75
        __asm _emit 0x12
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E7 9C 00 00: call 0x58549530
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B0 05 00 00: jmp 0x5853fdff
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 71 F4 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x71
        __asm _emit 0xf4
        __asm _emit 0xff
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 3E: jne 0x5853f89e
        __asm _emit 0x75
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 6
        ; Exact mapped bytes 75 1E: jne 0x5853f895
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes E8 74 79 F9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x79
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 0
        push 0
        push 0
        push 4a4h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 2E 1F FA FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x1f
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x5853f89e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 23 70 00 00: call 0x585468c0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x5853f938
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 FF C7 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xc7
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 40h], ecx
        push 4
        lea edx, [ebp - 40h]
        push edx
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 CB CF 30 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xcf
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 73 FB FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x73
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov dword ptr [ebp - 48h], 0
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 75 51: jne 0x5853f938
        __asm _emit 0x75
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 BB C7 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc7
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 278h]
        push edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, byte ptr [ecx + 270h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, byte ptr [eax + 274h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 26eh]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 E0 03 00: call 0x5857da00
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A1 04 00 00: jmp 0x5853fdde
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, byte ptr [ecx + 2d8h]
        cmp edx, 2
        ; Exact mapped bytes 75 1D: jne 0x5853f969
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1a0h]
        ; Exact mapped bytes E8 F6 1C F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x1c
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0D 06 00 00: call 0x5853ff70
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 96 04 00 00: jmp 0x5853fdff
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 1a0h]
        ; Exact mapped bytes E8 D9 1C F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x1c
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 27 C7 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xc7
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 250h]
        ; Exact mapped bytes 75 20: jne 0x5853f9b6
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1a0h]
        ; Exact mapped bytes E8 AC 1C F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 25ch]
        xor edx, 55h
        sub eax, edx
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 252h]
        cmp ecx, 2b0h
        ; Exact mapped bytes 7C 11: jl 0x5853f9d9
        __asm _emit 0x7c
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 252h]
        cmp eax, 2b3h
        ; Exact mapped bytes 7E 28: jle 0x5853fa01
        __asm _emit 0x7e
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 252h]
        cmp edx, 2dch
        ; Exact mapped bytes 74 16: je 0x5853fa01
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 252h]
        cmp ecx, 3afh
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x5853fa8b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 A1 C6 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc6
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, word ptr [eax + 2]
        cmp eax, 2b0h
        ; Exact mapped bytes 7C 1A: jl 0x5853fa34
        __asm _emit 0x7c
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 2f8h]
        ; Exact mapped bytes E8 88 C6 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xc6
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx edx, word ptr [eax + 2]
        cmp edx, 2b3h
        ; Exact mapped bytes 7E 33: jle 0x5853fa67
        __asm _emit 0x7e
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 6E C6 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc6
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 2]
        cmp ecx, 2dch
        ; Exact mapped bytes 74 19: je 0x5853fa67
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 54 C6 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xc6
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, word ptr [eax + 2]
        cmp eax, 3afh
        ; Exact mapped bytes 75 02: jne 0x5853fa69
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 1D: jmp 0x5853fa86
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 25ch]
        xor edx, 55h
        push edx
        push 1
        push 2
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 0F 18 00: call 0x586c0a40
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0f
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x5853fb48
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 17 C6 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc6
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 2]
        cmp ecx, 2b0h
        ; Exact mapped bytes 7C 19: jl 0x5853fabe
        __asm _emit 0x7c
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 FD C5 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc5
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, word ptr [eax + 2]
        cmp eax, 2b3h
        ; Exact mapped bytes 7E 34: jle 0x5853faf2
        __asm _emit 0x7e
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 2f8h]
        ; Exact mapped bytes E8 E4 C5 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xc5
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx edx, word ptr [eax + 2]
        cmp edx, 2dch
        ; Exact mapped bytes 74 1A: je 0x5853faf2
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 CA C5 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc5
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 2]
        cmp ecx, 3afh
        ; Exact mapped bytes 75 56: jne 0x5853fb48
        __asm _emit 0x75
        __asm _emit 0x56
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
        ; Exact mapped bytes E8 9D 3D 18 00: call 0x586c38a0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0x00
        mov esi, eax
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 1a0h]
        ; Exact mapped bytes E8 3D 1B F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x1b
        __asm _emit 0xf9
        __asm _emit 0xff
        sub esi, eax
        ; Exact mapped bytes 78 14: js 0x5853fb2b
        __asm _emit 0x78
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1a0h]
        ; Exact mapped bytes E8 2B 1B F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x1b
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes EB 1D: jmp 0x5853fb48
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 1a0h]
        mov dword ptr [ebp - 50h], eax
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 E9 4C 28 00: call 0x587c4830
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x28
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 2f8h]
        ; Exact mapped bytes E8 5A C5 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xc5
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 26eh]
        cmp ecx, 64h
        ; Exact mapped bytes 7E 4A: jle 0x5853fbb4
        __asm _emit 0x7e
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 54h], eax
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 60 62 F4 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x62
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 58h], edx
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 AA FC F5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfc
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E8 55 76 F9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x76
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        push 0
        push 0
        push 0
        push 0dh
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 C2 91 F9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x91
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 77 01 00 00: jmp 0x5853fd2b
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 26eh]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 17 24 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x17
        __asm _emit 0x24
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 84 54 01 00 00: je 0x5853fd2b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 CB C4 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xc4
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, byte ptr [eax]
        cmp eax, 0bh
        ; Exact mapped bytes 74 1A: je 0x5853fc07
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 2f8h]
        ; Exact mapped bytes E8 B5 C4 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xc4
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx edx, byte ptr [eax]
        cmp edx, 0ch
        ; Exact mapped bytes 0F 85 EC 00 00 00: jne 0x5853fcf3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 274h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 270h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 ED D3 F4 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xd3
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 274h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 270h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 CD 00 F7 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 6D: je 0x5853fcb9
        __asm _emit 0x74
        __asm _emit 0x6d
        movzx esi, word ptr [ebp - 8]
        xor esi, 55h
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 1a0h]
        ; Exact mapped bytes E8 EF 19 F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x19
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 1A: jne 0x5853fc7f
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 10: jne 0x5853fc7f
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 38: jmp 0x5853fcb7
        __asm _emit 0xeb
        __asm _emit 0x38
        push 0
        movzx eax, word ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, byte ptr [edx + 270h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, byte ptr [ecx + 274h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 26eh]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A DD 03 00: call 0x5857da00
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xdd
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 38: jmp 0x5853fcf1
        __asm _emit 0xeb
        __asm _emit 0x38
        push 0
        movzx edx, word ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, byte ptr [ecx + 270h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, byte ptr [eax + 274h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 26eh]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 DD 03 00: call 0x5857da00
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xdd
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 38: jmp 0x5853fd2b
        __asm _emit 0xeb
        __asm _emit 0x38
        push 0
        movzx ecx, word ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, byte ptr [eax + 270h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, byte ptr [edx + 274h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 26eh]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 DC 03 00: call 0x5857da00
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x5853fdde
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 72 C3 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc3
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, byte ptr [edx + 2d8h]
        cmp eax, 2
        ; Exact mapped bytes 75 0E: jne 0x5853fd60
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 06 01 00 00: call 0x5853fe60
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x5853fdff
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 26eh]
        cmp edx, 64h
        ; Exact mapped bytes 7E 31: jle 0x5853fda0
        __asm _emit 0x7e
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 60h], ecx
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 BB FA F5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xfa
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E8 66 74 F9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x74
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        push 0
        push 0
        push 0
        push 0dh
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 D3 8F F9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x8f
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3E: jmp 0x5853fdde
        __asm _emit 0xeb
        __asm _emit 0x3e
        push 0
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 278h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, byte ptr [edx + 270h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, byte ptr [ecx + 274h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 26eh]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 DC 03 00: call 0x5857da00
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1F: jmp 0x5853fdff
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 88h]
        ; Exact mapped bytes E8 D2 4B F4 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x4b
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x5853fdff
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 2c8h], 0
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
