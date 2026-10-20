// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586119F0 .. +0xA4D bytes.
extern "C" __declspec(naked) void FUN_586119f0_586119F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0f4h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 D1 E9: shr cx, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe9
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 20 0A 00 00: je 0x58612435
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x58611aad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 11: ja 0x58611a41
        __asm _emit 0x77
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 FA 09 00 00: jmp 0x5861243b
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 F4 2E E7 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x2e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 09: jne 0x58611a60
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        ; Exact mapped bytes E9 DD 09 00 00: jmp 0x5861243b
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x58611a8c
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 B8: call dword ptr [ebp - 0x48]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb8
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 BD 2E E7 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x2e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 02: jne 0x58611a8c
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 21: jmp 0x58611aad
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 19: je 0x58611aab
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0E: ja 0x58611aab
        __asm _emit 0x77
        __asm _emit 0x0e
        mov dword ptr [ebp - 0ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 90 09 00 00: jmp 0x5861243b
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A4: jmp 0x58611a51
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 201h
        ; Exact mapped bytes 77 28: ja 0x58611ae7
        __asm _emit 0x77
        __asm _emit 0x28
        cmp dword ptr [ebp - 14h], 201h
        ; Exact mapped bytes 0F 84 66 07 00 00: je 0x58612232
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 100h
        ; Exact mapped bytes 74 24: je 0x58611af9
        __asm _emit 0x74
        __asm _emit 0x24
        cmp dword ptr [ebp - 14h], 200h
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x58611b77
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 48 09 00 00: jmp 0x5861242f
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 20ah
        ; Exact mapped bytes 0F 84 F5 01 00 00: je 0x58611ce9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 36 09 00 00: jmp 0x5861242f
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 1bh
        ; Exact mapped bytes 74 0E: je 0x58611b16
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 18h], 21h
        ; Exact mapped bytes 74 4A: je 0x58611b58
        __asm _emit 0x74
        __asm _emit 0x4a
        cmp dword ptr [ebp - 18h], 22h
        ; Exact mapped bytes 74 52: je 0x58611b66
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes EB 5C: jmp 0x58611b72
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 174h]
        ; Exact mapped bytes E8 3C 77 EA FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x77
        __asm _emit 0xea
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 1C: jne 0x58611b48
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 174h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 174h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 0E: jmp 0x58611b56
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 1A: jmp 0x58611b72
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D 6E FA FF: call 0x585b89b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6e
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0C: jmp 0x58611b72
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF 70 FA FF: call 0x585b8c20
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x70
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B8 08 00 00: jmp 0x5861242f
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 174h]
        ; Exact mapped bytes E8 DB 76 EA FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x76
        __asm _emit 0xea
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 5
        ; Exact mapped bytes 0F 85 53 01 00 00: jne 0x58611ce4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58611ba3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 0F 8D 37 01 00 00: jge 0x58611ce4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 74h]
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 2E E7 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x2e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 4C 3D E7 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x3d
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x58611c90
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0d8h]
        mov dword ptr [ebp - 54h], ecx
        push 0ffffffh
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 E7 44 E7 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x44
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 84h]
        ; Exact mapped bytes E8 84 3C E8 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0xe8
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 49: jne 0x58611c5c
        __asm _emit 0x75
        __asm _emit 0x49
        push 2
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 2E E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x2e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 88 A1 1A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xa1
        __asm _emit 0x1a
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 2E E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x2e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 60h], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 A0: call dword ptr [ebp - 0x60]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa0
        nop
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 74h]
        mov dword ptr [ebp - 64h], eax
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 6D 42 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x42
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 84h]
        mov dword ptr [ebp - 68h], eax
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 53 42 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x42
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4F: jmp 0x58611cdf
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0d8h]
        mov dword ptr [ebp - 6ch], eax
        push 0cccccch
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 33 44 E7 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x44
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 74h]
        mov dword ptr [ebp - 70h], eax
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 1C 42 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 84h]
        mov dword ptr [ebp - 74h], eax
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 02 42 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x42
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B6 FE FF FF: jmp 0x58611b9a
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 46 07 00 00: jmp 0x5861242f
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        shr edx, 10h
        and edx, 0ffffh
        ; Exact mapped bytes 0F BF C2: movsx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc2
        test eax, eax
        ; Exact mapped bytes 0F 8E AE 02 00 00: jle 0x58611fb1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 74h]
        mov dword ptr [ebp - 7ch], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 2C E7 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x2c
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 F1 3B E7 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x3b
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 5E: je 0x58611d91
        __asm _emit 0x74
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 2F 7D F7 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x7d
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x58611d8c
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 0D 2D E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x2d
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 40h]
        cmp edx, 0ffh
        ; Exact mapped bytes 7D 2D: jge 0x58611d8c
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 F3 2C E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x2c
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 40h
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F5 CC FF FF: call 0x5860ea80
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C0 01 00 00: jmp 0x58611f51
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 74h]
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 2C E7 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x2c
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 80h]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 5D 3B E7 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x3b
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 5E: je 0x58611e25
        __asm _emit 0x74
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 BB 16 F1 FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x16
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x58611e20
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 79 2C E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x2c
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 42h]
        cmp ecx, 0ffh
        ; Exact mapped bytes 7D 2D: jge 0x58611e20
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 5F 2C E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x2c
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 42h
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 61 CC FF FF: call 0x5860ea80
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2C 01 00 00: jmp 0x58611f51
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 74h]
        mov dword ptr [ebp - 8ch], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 2B E7 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x2b
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        mov eax, dword ptr [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 C4 3A E7 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x3a
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 5D: je 0x58611ebd
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 42 08 FC FF: call 0x585d26b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x58611eb8
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 E0 2B E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x2b
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 46h]
        cmp eax, 0ffh
        ; Exact mapped bytes 7D 2D: jge 0x58611eb8
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 C7 2B E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x2b
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 46h
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C9 CB FF FF: call 0x5860ea80
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x58611f51
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 74h]
        mov dword ptr [ebp - 94h], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 2B E7 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x2b
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 2B 3A E7 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x3a
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x58611f51
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 C9 07 FC FF: call 0x585d26d0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x07
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x58611f51
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 47 2B E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x2b
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 44h]
        cmp eax, 0ffh
        ; Exact mapped bytes 7D 2D: jge 0x58611f51
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 2E 2B E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x2b
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 44h
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 30 CB FF FF: call 0x5860ea80
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 2B E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x2b
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 98h], edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 3E 9E 1A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x9e
        __asm _emit 0x1a
        __asm _emit 0x00
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 2A E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x2a
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0a0h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 95 60 FF FF FF: call dword ptr [ebp - 0xa0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 7C 02 00 00: jmp 0x5861222d
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        shr edx, 10h
        and edx, 0ffffh
        ; Exact mapped bytes 0F BF C2: movsx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc2
        test eax, eax
        ; Exact mapped bytes 0F 8D 62 02 00 00: jge 0x5861222d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 74h]
        mov dword ptr [ebp - 0a8h], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 2A E7 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x2a
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        mov edx, dword ptr [ebp - 0a4h]
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 1D 39 E7 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x39
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x5861204f
        __asm _emit 0x74
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 4B 2A E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x2a
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 40h]
        test ecx, ecx
        ; Exact mapped bytes 7E 2D: jle 0x5861204a
        __asm _emit 0x7e
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 35 2A E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x2a
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 40h
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E9 01: sub cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 37 CA FF FF: call 0x5860ea80
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 83 01 00 00: jmp 0x586121d2
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 74h]
        mov dword ptr [ebp - 0b0h], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 29 E7 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x29
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        mov eax, dword ptr [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 99 38 E7 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x38
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x586120d3
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 C7 29 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x29
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 42h]
        test edx, edx
        ; Exact mapped bytes 7E 2D: jle 0x586120ce
        __asm _emit 0x7e
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 B1 29 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x29
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 42h
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 38h]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B3 C9 FF FF: call 0x5860ea80
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 FF 00 00 00: jmp 0x586121d2
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 74h]
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 29 E7 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x29
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 16 38 E7 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x38
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x58612153
        __asm _emit 0x74
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 44 29 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x29
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 46h]
        test eax, eax
        ; Exact mapped bytes 7E 2D: jle 0x58612151
        __asm _emit 0x7e
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 2E 29 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x29
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 46h
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 30 C9 FF FF: call 0x5860ea80
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 7F: jmp 0x586121d2
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 74h]
        mov dword ptr [ebp - 0c0h], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D 28 E7 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        mov eax, dword ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 95 37 E7 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x37
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x586121d2
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 C3 28 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x28
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 44h]
        test edx, edx
        ; Exact mapped bytes 7E 2D: jle 0x586121d2
        __asm _emit 0x7e
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 AD 28 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x28
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 44h
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF C8 FF FF: call 0x5860ea80
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 28 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0c4h], ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 BD 9B 1A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x9b
        __asm _emit 0x1a
        __asm _emit 0x00
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 28 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x28
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0cch], edx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 95 34 FF FF FF: call dword ptr [ebp - 0xcc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 FD 01 00 00: jmp 0x5861242f
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        ; Exact mapped bytes E8 20 70 EA FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x70
        __asm _emit 0xea
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 5
        ; Exact mapped bytes 0F 85 E3 01 00 00: jne 0x5861242f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5861225e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 0F 8D C7 01 00 00: jge 0x5861242f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 74h]
        mov dword ptr [ebp - 0d4h], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D 27 E7 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x27
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 85 36 E7 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 87 01 00 00: je 0x5861242a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 174h]
        ; Exact mapped bytes E8 AF 6F EA FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x6f
        __asm _emit 0xea
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 75 1A: jne 0x586122d3
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 174h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 194h], ecx
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 8D 8E 00 00 00: jge 0x58612377
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 0e0h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 194h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0d8h]
        ; Exact mapped bytes E8 A0 9D E7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x9d
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 0ah
        mov dword ptr [ebp - 0d8h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 194h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0d8h]
        ; Exact mapped bytes E8 8F 46 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x46
        __asm _emit 0xe7
        __asm _emit 0xff
        sub eax, 96h
        mov dword ptr [ebp - 0dch], eax
        mov ecx, dword ptr [ebp - 0d8h]
        push ecx
        mov edx, dword ptr [ebp - 0dch]
        push edx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 CB 32 1A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x32
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 0e4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 8F 2A 00 00: call 0x58614e00
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x5861240c
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 0F 8E 8B 00 00 00: jle 0x5861240c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 0f0h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 194h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0d8h]
        ; Exact mapped bytes E8 08 9D E7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x9d
        __asm _emit 0xe7
        __asm _emit 0xff
        sub eax, 0b4h
        mov dword ptr [ebp - 0e8h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 194h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0d8h]
        ; Exact mapped bytes E8 F5 45 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x45
        __asm _emit 0xe7
        __asm _emit 0xff
        sub eax, 96h
        mov dword ptr [ebp - 0ech], eax
        mov ecx, dword ptr [ebp - 0e8h]
        push ecx
        mov edx, dword ptr [ebp - 0ech]
        push edx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 31 32 1A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x32
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 0f4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 F5 29 00 00: call 0x58614e00
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 174h]
        ; Exact mapped bytes E8 F6 0B 00 00: call 0x58613010
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 B4 F6 FF: call 0x5857d8f0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb4
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x5861242f
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 26 FE FF FF: jmp 0x58612255
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x5861243b
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes EB 06: jmp 0x5861243b
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 34h]
        mov esp, ebp
    }
}
