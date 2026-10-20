// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58683250 .. +0x9C9 bytes.
extern "C" __declspec(naked) void FUN_58683250_58683250() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 80h
        push esi
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
        ; Exact mapped bytes 0F 84 9C 09 00 00: je 0x58683c12
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x5868330e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 11: ja 0x586832a2
        __asm _emit 0x77
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 76 09 00 00: jmp 0x58683c18
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 93 16 E0 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x16
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 09: jne 0x586832c1
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        ; Exact mapped bytes E9 59 09 00 00: jmp 0x58683c18
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x586832ed
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 C0: call dword ptr [ebp - 0x40]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc0
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 5C 16 E0 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x16
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 02: jne 0x586832ed
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 21: jmp 0x5868330e
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x5868330c
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0E: ja 0x5868330c
        __asm _emit 0x77
        __asm _emit 0x0e
        mov dword ptr [ebp - 8], 0
        xor eax, eax
        ; Exact mapped bytes E9 0C 09 00 00: jmp 0x58683c18
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A4: jmp 0x586832b2
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 102h
        ; Exact mapped bytes 77 28: ja 0x58683348
        __asm _emit 0x77
        __asm _emit 0x28
        cmp dword ptr [ebp - 14h], 102h
        ; Exact mapped bytes 74 31: je 0x5868335a
        __asm _emit 0x74
        __asm _emit 0x31
        cmp dword ptr [ebp - 14h], 100h
        ; Exact mapped bytes 0F 84 AE 08 00 00: je 0x58683be4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 101h
        ; Exact mapped bytes 0F 84 B9 08 00 00: je 0x58683bfc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CA 08 00 00: jmp 0x58683c12
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 20ah
        ; Exact mapped bytes 0F 84 E8 07 00 00: je 0x58683b3d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B8 08 00 00: jmp 0x58683c12
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B 17 F5 FF: call 0x585d4a90
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x17
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 CB 07 00 00: jne 0x58683b38
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 BC FF FF: call 0x5867f030
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        sub edx, 5bh
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 22h
        ; Exact mapped bytes 0F 87 A3 07 00 00: ja 0x58683b38
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        movzx ecx, byte ptr [eax + 58683c38h]
        ; Exact mapped bytes FF 24 8D 20 3C 68 58: jmp dword ptr [ecx*4 + 0x58683c20]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0x3c
        __asm _emit 0x68
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 96ch], 0
        ; Exact mapped bytes 75 18: jne 0x586833ca
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 16 E0 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x16
        __asm _emit 0xe0
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5A 25 E0 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x25
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x586833db
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1C EF FF FF: call 0x586822f0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 3D 08 00 00: jmp 0x58683c18
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 58 07 00 00: jmp 0x58683b38
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 96ch], 0
        ; Exact mapped bytes 75 18: jne 0x58683404
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 16 E0 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x16
        __asm _emit 0xe0
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 25 E0 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x25
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x58683415
        __asm _emit 0x74
        __asm _emit 0x11
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E2 EE FF FF: call 0x586822f0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 03 08 00 00: jmp 0x58683c18
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 1E 07 00 00: jmp 0x58683b38
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 9a0h], 0
        ; Exact mapped bytes 0F 85 26 06 00 00: jne 0x58683a61
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 138h], 0
        ; Exact mapped bytes 0F 84 0C 06 00 00: je 0x58683a61
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 138h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        sub edx, 1
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 0fh
        ; Exact mapped bytes 0F 87 E3 05 00 00: ja 0x58683a61
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        movzx ecx, byte ptr [eax + 58683c70h]
        ; Exact mapped bytes FF 24 8D 5C 3C 68 58: jmp dword ptr [ecx*4 + 0x58683c5c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0x3c
        __asm _emit 0x68
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 138h]
        and edx, 18h
        ; Exact mapped bytes 0F 85 3D 03 00 00: jne 0x586837e8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 158h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0f4h]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 158h]
        mov esi, 4
        shl esi, 0
        mov edx, dword ptr [eax + edx]
        cmp edx, dword ptr [ecx + esi]
        ; Exact mapped bytes 0F 84 72 02 00 00: je 0x5868375f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 138h], 2
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E2 17 00 00: call 0x58684cf0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 978h]
        mov dword ptr [ebp - 44h], eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 62 2A E0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x2a
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9c0h]
        mov dword ptr [ebp - 48h], ecx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 32 19 EB FF: call 0x58534e80
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x19
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 9a0h], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 158h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0f4h]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 158h]
        mov esi, 4
        imul esi, esi, 0
        mov edx, dword ptr [edx + eax]
        sub edx, dword ptr [ecx + esi]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 63 DD E0 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xdd
        __asm _emit 0xe0
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [eax + edx*4 + 0f8h], ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 3E DD E0 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xdd
        __asm _emit 0xe0
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*4 + 0f8h]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF A7 EC FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xa7
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 05 DD E0 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xdd
        __asm _emit 0xe0
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + edx*4 + 0f8h]
        ; Exact mapped bytes 74 14: je 0x58683637
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 8E 1A 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x8e
        __asm _emit 0x1a
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes FF 15 68 44 89 58: call dword ptr [0x58894468]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 0f8h], 0
        ; Exact mapped bytes 0F 8E E5 00 00 00: jle 0x58683736
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        imul edx, dword ptr [ecx + 0f4h], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + edx + 288h]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 118h], edx
        ; Exact mapped bytes 0F 85 B4 00 00 00: jne 0x58683736
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 92ch]
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9e0h]
        ; Exact mapped bytes E8 24 67 E4 FF: call 0x584c9de0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x67
        __asm _emit 0xe4
        __asm _emit 0xff
        imul eax, eax, 3e8h
        mov ecx, dword ptr [ebp - 4]
        imul edx, dword ptr [ecx + 0f4h], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx ecx, word ptr [ecx + edx + 288h]
        mov edx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 0f4h]
        mov esi, dword ptr [ebp - 4]
        imul ecx, dword ptr [esi + edx*4 + 0f8h]
        cdq
        idiv ecx
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 92ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [eax + edx], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 9e0h]
        mov dword ptr [ebp - 5ch], edx
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 0B C1 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a7ch]
        mov dword ptr [ebp - 64h], ecx
        push 16h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 13 E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x13
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 02 35 E0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x35
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x58683778
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 8
        ; Exact mapped bytes 7D 20: jge 0x5868379e
        __asm _emit 0x7d
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 158h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 30h]
        add edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes EB D1: jmp 0x5868376f
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a60h]
        mov dword ptr [ebp - 6ch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B 32 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x32
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 84 8C E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1D 12 E0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x12
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 0ffh
        ; Exact mapped bytes 66 23 50 10: and dx, word ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x50
        __asm _emit 0x10
        movzx eax, dx
        sub eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 AF 79 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x79
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes E9 74 02 00 00: jmp 0x58683a61
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AB E6 FF FF: call 0x58681ea0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes E9 60 02 00 00: jmp 0x58683a61
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 978h]
        ; Exact mapped bytes E8 47 11 E0 FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x11
        __asm _emit 0xe0
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 0F 85 D5 01 00 00: jne 0x586839fa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 978h]
        ; Exact mapped bytes E8 83 11 E0 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x11
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 0F 84 B4 01 00 00: je 0x586839fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 978h]
        ; Exact mapped bytes E8 62 11 E0 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x11
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp eax, 6
        ; Exact mapped bytes 0F 84 93 01 00 00: je 0x586839fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
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
        ; Exact mapped bytes E8 8E 05 00 00: call 0x58683e00
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 100h
        ; Exact mapped bytes 0F 85 7D 01 00 00: jne 0x586839fa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 1
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0f4h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C 1E 00 00: call 0x586856e0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + eax*4 + 878h]
        and dl, 1fh
        mov al, byte ptr [ebp - 10h]
        and al, 0e0h
        or al, dl
        mov byte ptr [ebp - 10h], al
        mov cl, byte ptr [ebp - 10h]
        and cl, 1fh
        mov byte ptr [ebp - 10h], cl
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 198h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        xor edx, 3a9e2b0dh
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0f4h]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 198h]
        mov dword ptr [eax + ecx], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 198h]
        mov edx, 4
        imul eax, edx, 0
        mov cl, byte ptr [ecx + eax]
        mov byte ptr [ebp - 0fh], cl
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 198h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        xor edx, 3a9e2b0dh
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0f4h]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 198h]
        mov dword ptr [eax + ecx], edx
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + 0f4h]
        mov byte ptr [ebp - 0eh], dl
        push 4
        lea eax, [ebp - 10h]
        push eax
        push 16h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F 34 F6 FF: call 0x585e6e20
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x34
        __asm _emit 0xf6
        __asm _emit 0xff
        push 1bh
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 10 E0 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x10
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes 8B 0D 94 20 96 58: mov ecx, dword ptr [0x58962094]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 1A 84 13 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x00
        push 1bh
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 10 E0 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x10
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 78h], edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 55 88: call dword ptr [ebp - 0x78]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x88
        ; Exact mapped bytes A1 94 20 96 58: mov eax, dword ptr [0x58962094]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 83 13 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x83
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 7ch], eax
        push 0
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 55 84: call dword ptr [ebp - 0x7c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x84
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 65: jmp 0x58683a61
        __asm _emit 0xeb
        __asm _emit 0x65
        mov dword ptr [ebp - 38h], 0
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x58683a15
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 8
        ; Exact mapped bytes 73 1B: jae 0x58683a36
        __asm _emit 0x73
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 0d0h], 0
        ; Exact mapped bytes 74 09: je 0x58683a34
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 1
        ; Exact mapped bytes EB 02: jmp 0x58683a36
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D6: jmp 0x58683a0c
        __asm _emit 0xeb
        __asm _emit 0xd6
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 16: je 0x58683a52
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 0d0h], 0
        ; Exact mapped bytes 74 0F: je 0x58683a61
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 EB FF FF: call 0x586825f0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 1
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 65: jne 0x58683acc
        __asm _emit 0x75
        __asm _emit 0x65
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58683a79
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 8
        ; Exact mapped bytes 73 33: jae 0x58683ab2
        __asm _emit 0x73
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 0d0h], 0
        ; Exact mapped bytes 74 21: je 0x58683ab0
        __asm _emit 0x74
        __asm _emit 0x21
        mov dword ptr [ebp - 0ch], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 80h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 0f4h], ecx
        ; Exact mapped bytes EB 02: jmp 0x58683ab2
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB BE: jmp 0x58683a70
        __asm _emit 0xeb
        __asm _emit 0xbe
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 14: je 0x58683acc
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 30 EB FF FF: call 0x586825f0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [edx + 0f4h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 96ch], 0
        ; Exact mapped bytes 75 18: jne 0x58683af0
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D 0F E0 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x0f
        __asm _emit 0xe0
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 34 1E E0 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x1e
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x58683b01
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F6 E7 FF FF: call 0x586822f0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 17 01 00 00: jmp 0x58683c18
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 35: jmp 0x58683b38
        __asm _emit 0xeb
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 96ch], 0
        ; Exact mapped bytes 75 18: jne 0x58683b27
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 0E E0 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x0e
        __asm _emit 0xe0
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FD 1D E0 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x58683b38
        __asm _emit 0x74
        __asm _emit 0x11
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF E7 FF FF: call 0x586822f0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x58683c18
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D5 00 00 00: jmp 0x58683c12
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 138h], 1
        ; Exact mapped bytes 74 21: je 0x58683b74
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 138h], 10h
        ; Exact mapped bytes 74 0B: je 0x58683b74
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 34h]
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x58683c18
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        shr edx, 10h
        and edx, 0ffffh
        ; Exact mapped bytes 0F BF C2: movsx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc2
        test eax, eax
        ; Exact mapped bytes 7E 07: jle 0x58683b98
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 96ch], 0
        ; Exact mapped bytes 75 18: jne 0x58683bbc
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 0E E0 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x0e
        __asm _emit 0xe0
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 68 1D E0 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x58683bde
        __asm _emit 0x74
        __asm _emit 0x22
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 0D: je 0x58683bcf
        __asm _emit 0x74
        __asm _emit 0x0d
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 E7 FF FF: call 0x586822f0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0B: jmp 0x58683bda
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 17 E7 FF FF: call 0x586822f0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        xor eax, eax
        ; Exact mapped bytes EB 3A: jmp 0x58683c18
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes EB 32: jmp 0x58683c12
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes EB 30: jmp 0x58683c12
        __asm _emit 0xeb
        __asm _emit 0x30
        ; Exact mapped bytes EB 2E: jmp 0x58683c12
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 8], 10h
        ; Exact mapped bytes 75 0D: jne 0x58683bfa
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 96ch], 1
        ; Exact mapped bytes EB 16: jmp 0x58683c12
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8], 10h
        ; Exact mapped bytes 75 0D: jne 0x58683c12
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 96ch], 0
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 34h]
        pop esi
    }
}
