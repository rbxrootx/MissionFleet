// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867C090 .. +0x12E3 bytes.
extern "C" __declspec(naked) void FUN_5867c090_5867C090() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 0dch], ecx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 9B 28 00 00: call 0x5867e950
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 2c8h], ecx
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [edx + 2f0h], 0
        mov eax, dword ptr [ebp - 0dch]
        mov dword ptr [eax + 2ech], 0
        mov ecx, dword ptr [ebp - 0dch]
        mov byte ptr [ecx + 2fch], 0
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [edx + 300h], 0
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 120h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 A8 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xa8
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1B 03 E1 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x03
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 64 51 F4 FF: call 0x585c1290
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x51
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 A8 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa8
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FC 02 E1 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 05 36 E3 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x36
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 A8 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa8
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DD 02 E1 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x02
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 46 8F E2 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x8f
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 248h], eax
        mov edx, dword ptr [ebp - 1ech]
        push edx
        mov eax, dword ptr [ebp - 244h]
        push eax
        mov ecx, dword ptr [ebp - 248h]
        push ecx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 70 73 06 00: call 0x586e3500
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x73
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 A8 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa8
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9E 02 E1 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 37 88 E0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x88
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 2
        imul ecx, edx, 0
        movzx edx, word ptr [eax + ecx + 0d6h]
        mov dword ptr [ebp - 10ch], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 A7 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xa7
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6F 02 E1 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F8 95 E1 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x95
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, word ptr [eax + 1eh]
        mov dword ptr [ebp - 124h], eax
        mov ecx, dword ptr [ebp - 10ch]
        sub ecx, dword ptr [ebp - 124h]
        imul eax, ecx, 28h
        cdq
        idiv dword ptr [ebp - 10ch]
        mov edx, 28h
        sub edx, eax
        mov dword ptr [ebp - 128h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 A7 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xa7
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 29 02 E1 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 32 35 E3 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x35
        __asm _emit 0xe3
        __asm _emit 0xff
        imul eax, dword ptr [ebp - 128h]
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 12ch], eax
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 130h], eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 78 77 06 00: call 0x586e39d0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x77
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        xor edx, edx
        ; Exact mapped bytes 66 89 95 28 FF FF FF: mov word ptr [ebp - 0xd8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x5867c276
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 66 8B 85 28 FF FF FF: mov ax, word ptr [ebp - 0xd8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 85 28 FF FF FF: mov word ptr [ebp - 0xd8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx esi, word ptr [ebp - 0d8h]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 A7 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xa7
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B1 01 E1 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4A 87 E0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x87
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E9 0A: shr cx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp esi, edx
        ; Exact mapped bytes 0F 8D 77 03 00 00: jge 0x5867c624
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x77
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 A7 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa7
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 81 01 E1 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        movzx eax, word ptr [ebp - 0d8h]
        push eax
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 88 0D E1 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, ax
        mov dword ptr [ebp - 0fch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 A6 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xa6
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        movzx edx, word ptr [ebp - 0d8h]
        push edx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 AB 64 F5 FF: call 0x585d27b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x64
        __asm _emit 0xf5
        __asm _emit 0xff
        movzx eax, al
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 A6 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xa6
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        movzx ecx, word ptr [ebp - 0d8h]
        push ecx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 8E 90 F8 FF: call 0x586053c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx edx, al
        mov dword ptr [ebp - 0e4h], edx
        mov eax, dword ptr [ebp - 0f4h]
        mov ecx, dword ptr [ebp - 0e4h]
        lea edx, [ecx + eax*2]
        mov dword ptr [ebp - 0e8h], edx
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 09: je 0x5867c362
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 0fch], 0dh
        ; Exact mapped bytes 75 2D: jne 0x5867c38f
        __asm _emit 0x75
        __asm _emit 0x2d
        movzx eax, word ptr [ebp - 0d8h]
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + eax*4 + 108h]
        mov dword ptr [ebp - 140h], edx
        push 0
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 57 9B E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x9b
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 90 02 00 00: jmp 0x5867c61f
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 110h], eax
        cmp dword ptr [ebp - 110h], 5
        ; Exact mapped bytes 74 12: je 0x5867c3b6
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 110h], 6
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x5867c4b8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 02 02 00 00: jmp 0x5867c5b8
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ebp - 0dch]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 144h], eax
        movzx ecx, word ptr [ebp - 0fch]
        push ecx
        mov edx, dword ptr [ebp - 0f4h]
        push edx
        mov eax, dword ptr [ebp - 0e4h]
        push eax
        movzx ecx, word ptr [ebp - 0e8h]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 20 3A 00 00: call 0x5867fe20
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ebp - 0dch]
        lea ecx, [edx + ecx*8 + 0d8h]
        mov edx, dword ptr [ecx + eax]
        add edx, 1
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 0e8h]
        mov esi, dword ptr [ebp - 0dch]
        lea eax, [esi + eax*8 + 0d8h]
        mov dword ptr [eax + ecx], edx
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 75 32: jne 0x5867c47a
        __asm _emit 0x75
        __asm _emit 0x32
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 75 10: jne 0x5867c461
        __asm _emit 0x75
        __asm _emit 0x10
        push 1
        ; Exact mapped bytes 8B 0D 38 06 96 58: mov ecx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 2B 00 00: call 0x5867efe0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 17: jmp 0x5867c478
        __asm _emit 0xeb
        __asm _emit 0x17
        cmp dword ptr [ebp - 0e4h], 1
        ; Exact mapped bytes 75 0E: jne 0x5867c478
        __asm _emit 0x75
        __asm _emit 0x0e
        push 2
        ; Exact mapped bytes 8B 0D 38 06 96 58: mov ecx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 2B 00 00: call 0x5867efe0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 39: jmp 0x5867c4b3
        __asm _emit 0xeb
        __asm _emit 0x39
        cmp dword ptr [ebp - 0f4h], 1
        ; Exact mapped bytes 75 30: jne 0x5867c4b3
        __asm _emit 0x75
        __asm _emit 0x30
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 75 10: jne 0x5867c49c
        __asm _emit 0x75
        __asm _emit 0x10
        push 4
        ; Exact mapped bytes 8B 0D 38 06 96 58: mov ecx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 2B 00 00: call 0x5867efe0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 17: jmp 0x5867c4b3
        __asm _emit 0xeb
        __asm _emit 0x17
        cmp dword ptr [ebp - 0e4h], 1
        ; Exact mapped bytes 75 0E: jne 0x5867c4b3
        __asm _emit 0x75
        __asm _emit 0x0e
        push 8
        ; Exact mapped bytes 8B 0D 38 06 96 58: mov ecx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E 2B 00 00: call 0x5867efe0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 00 01 00 00: jmp 0x5867c5b8
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ebp - 0dch]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 148h], edx
        movzx eax, word ptr [ebp - 0fch]
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        push ecx
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        movzx eax, word ptr [ebp - 0e8h]
        push eax
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 1E 39 00 00: call 0x5867fe20
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [ebp - 0dch]
        lea edx, [eax + edx*8 + 0d8h]
        mov eax, dword ptr [edx + ecx]
        add eax, 1
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 0e8h]
        mov esi, dword ptr [ebp - 0dch]
        lea edx, [esi + edx*8 + 0d8h]
        mov dword ptr [edx + ecx], eax
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 75 32: jne 0x5867c57c
        __asm _emit 0x75
        __asm _emit 0x32
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 75 10: jne 0x5867c563
        __asm _emit 0x75
        __asm _emit 0x10
        push 10h
        ; Exact mapped bytes 8B 0D 38 06 96 58: mov ecx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 2A 00 00: call 0x5867efe0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 17: jmp 0x5867c57a
        __asm _emit 0xeb
        __asm _emit 0x17
        cmp dword ptr [ebp - 0e4h], 1
        ; Exact mapped bytes 75 0E: jne 0x5867c57a
        __asm _emit 0x75
        __asm _emit 0x0e
        push 20h
        ; Exact mapped bytes 8B 0D 38 06 96 58: mov ecx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 2A 00 00: call 0x5867efe0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3C: jmp 0x5867c5b8
        __asm _emit 0xeb
        __asm _emit 0x3c
        cmp dword ptr [ebp - 0f4h], 1
        ; Exact mapped bytes 75 33: jne 0x5867c5b8
        __asm _emit 0x75
        __asm _emit 0x33
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 75 10: jne 0x5867c59e
        __asm _emit 0x75
        __asm _emit 0x10
        push 40h
        ; Exact mapped bytes 8B 0D 38 06 96 58: mov ecx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 2A 00 00: call 0x5867efe0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1A: jmp 0x5867c5b8
        __asm _emit 0xeb
        __asm _emit 0x1a
        cmp dword ptr [ebp - 0e4h], 1
        ; Exact mapped bytes 75 11: jne 0x5867c5b8
        __asm _emit 0x75
        __asm _emit 0x11
        push 80h
        ; Exact mapped bytes 8B 0D 38 06 96 58: mov ecx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 2A 00 00: call 0x5867efe0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        movzx eax, word ptr [ebp - 0d8h]
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + eax*4 + 108h]
        mov dword ptr [ebp - 14ch], edx
        imul ecx, dword ptr [ebp - 0e8h], 36h
        mov eax, dword ptr [ebp - 0e8h]
        cdq
        sub eax, edx
        sar eax, 1
        imul edx, eax, 2dh
        lea eax, [ecx + edx + 5dh]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 B9 90 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 0d8h]
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + ecx*4 + 108h]
        mov dword ptr [ebp - 150h], eax
        push 1
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 C2 98 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x98
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 40 FC FF FF: jmp 0x5867c264
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 BB 7D 00 00: call 0x586843f0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [edx + 0a0h]
        ; Exact mapped bytes E8 CA 38 01 00: call 0x5868ff10
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F A3 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E8 FD E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 81 83 E0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 48 10: and cx, word ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x48
        __asm _emit 0x10
        movzx edx, cx
        mov dword ptr [ebp - 114h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 A3 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BD FD E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 56 83 E0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [eax + 270h]
        mov dword ptr [ebp - 160h], eax
        mov dword ptr [ebp - 0ech], 0
        mov dword ptr [ebp - 108h], 0
        mov ecx, 5
        ; Exact mapped bytes 66 89 8D 28 FF FF FF: mov word ptr [ebp - 0xd8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x5867c6ca
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 66 8B 95 28 FF FF FF: mov dx, word ptr [ebp - 0xd8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 95 28 FF FF FF: mov word ptr [ebp - 0xd8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 0d8h]
        cmp eax, 20h
        ; Exact mapped bytes 0F 8D 98 05 00 00: jge 0x5867cc72
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB A2 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xa2
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 54 FD E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        movzx ecx, word ptr [ebp - 0d8h]
        push ecx
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 8B 5B E4 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x5b
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F B6 50 02: movzx dx, byte ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x50
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 95 20 FF FF FF: mov word ptr [ebp - 0xe0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 0e0h]
        cmp eax, 0bh
        ; Exact mapped bytes 0F 8C 4C 05 00 00: jl 0x5867cc6d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 0e0h]
        cmp ecx, 10h
        ; Exact mapped bytes 0F 8D 3C 05 00 00: jge 0x5867cc6d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 0e0h]
        add edx, 11h
        mov dword ptr [ebp - 100h], edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 35 E3 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x35
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        movzx eax, word ptr [ebp - 0d8h]
        push eax
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 AB 33 E3 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x33
        __asm _emit 0xe3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x5867c79f
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 35 E3 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x35
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        movzx ecx, word ptr [ebp - 0d8h]
        push ecx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 83 33 E3 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x33
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DC 6B E4 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x6b
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 108h], edx
        ; Exact mapped bytes EB 0A: jmp 0x5867c7a9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        mov eax, dword ptr [ebp - 160h]
        mov ecx, dword ptr [ebp - 100h]
        shl eax, cl
        and eax, 80000000h
        ; Exact mapped bytes 0F 84 99 04 00 00: je 0x5867cc5b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 A1 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xa1
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6C FC E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 54 08 E1 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 53 04 00 00: je 0x5867cc47
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 A1 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xa1
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3A FC E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfc
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 22 08 E1 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x08
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 34 E3 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x34
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        movzx eax, word ptr [ebp - 0d8h]
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 C8 32 E3 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x32
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        mov ecx, dword ptr [ebp - 104h]
        movzx edx, word ptr [ecx + 6]
        mov dword ptr [ebp - 170h], edx
        mov eax, dword ptr [ebp - 170h]
        push eax
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 10 FE E7 FF: call 0x584fc680
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x5867c8b5
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 A1 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xa1
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BA FB E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xfb
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        movzx ecx, word ptr [ebp - 0d8h]
        push ecx
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 C1 62 E2 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x62
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 3]
        mov eax, dword ptr [ebp - 104h]
        movzx ecx, word ptr [eax + 6]
        cmp edx, ecx
        ; Exact mapped bytes 0F 85 7E 03 00 00: jne 0x5867cc33
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 A1 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xa1
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 79 FB E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfb
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        movzx edx, word ptr [ebp - 0d8h]
        push edx
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 80 62 E2 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x62
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 1]
        xor eax, 55h
        and eax, 7fh
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 104h]
        cmp eax, dword ptr [ecx + edx + 28h]
        ; Exact mapped bytes 0F 82 31 03 00 00: jb 0x5867cc33
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x31
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [ebp - 108h]
        and eax, dword ptr [edx + 68h]
        ; Exact mapped bytes 0F 84 1C 03 00 00: je 0x5867cc33
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E A0 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa0
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 17 FB E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xfb
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        push 0
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 CD 06 E1 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x06
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        ; Exact mapped bytes 66 89 95 08 FF FF FF: mov word ptr [ebp - 0xf8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 A0 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xa0
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DE FA E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xfa
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        push 0
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 94 06 E1 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, ax
        push ecx
        movzx edx, word ptr [ebp - 0f8h]
        push edx
        movzx eax, word ptr [ebp - 0d8h]
        sub eax, 5
        push eax
        push 588afef8h
        lea ecx, [ebp - 44h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        lea edx, [ebp - 44h]
        push edx
        ; Exact mapped bytes FF 15 A0 42 89 58: call dword ptr [0x588942a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        movzx eax, word ptr [ebp - 0f8h]
        test eax, eax
        ; Exact mapped bytes 0F 8E 72 02 00 00: jle 0x5867cc31
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 0e0h]
        mov dword ptr [ebp + ecx*4 - 100h], 1
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 9F E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x9f
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5D FA E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xfa
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC 9F E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x9f
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 45 FA E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xfa
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        movzx edx, word ptr [ebp - 0d8h]
        push edx
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 7C 58 E4 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x58
        __asm _emit 0xe4
        __asm _emit 0xff
        mov esi, dword ptr [eax + 14h]
        shr esi, 14h
        and esi, 3ffh
        xor esi, 55h
        movzx eax, word ptr [ebp - 0d8h]
        push eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 5A 58 E4 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x58
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 0ah
        and ecx, 3ffh
        xor ecx, 55h
        add ecx, esi
        mov dword ptr [ebp - 0f0h], ecx
        mov edx, dword ptr [ebp - 114h]
        cmp edx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes 7D 0E: jge 0x5867ca69
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0C: jmp 0x5867ca75
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 118h], ecx
        mov edx, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 0f0h], edx
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 0E: je 0x5867ca98
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5867caa2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 1
        mov ecx, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 0f0h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 9F E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x9f
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 80 F9 E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 19 7F E0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x7f
        __asm _emit 0xe0
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
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x5867cb81
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 198h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 9E E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x9e
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 41 F9 E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf9
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        movzx eax, word ptr [ebp - 0e0h]
        add eax, 11h
        push eax
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 25 05 E1 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x05
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        mov ecx, dword ptr [ebp - 194h]
        push ecx
        movzx edx, word ptr [ebp - 0e0h]
        sub edx, 0bh
        push edx
        movzx eax, word ptr [ebp - 0e0h]
        add eax, 11h
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        push ecx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 00 46 01 00: call 0x58691150
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 19ch], eax
        mov ecx, dword ptr [ebp - 0f0h]
        push ecx
        mov edx, dword ptr [ebp - 0ech]
        push edx
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 85 40 01 00: call 0x58690c00
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x5867cc22
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 1a8h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 9E E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x9e
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9B F8 E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf8
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        movzx edx, word ptr [ebp - 0e0h]
        add edx, 11h
        push edx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 7F 04 E1 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x04
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        mov eax, dword ptr [ebp - 1a4h]
        push eax
        movzx ecx, word ptr [ebp - 0e0h]
        sub ecx, 0bh
        push ecx
        movzx edx, word ptr [ebp - 0e0h]
        add edx, 11h
        push edx
        mov eax, dword ptr [ebp - 0ech]
        push eax
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 6A 84 00 00: call 0x58685060
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 1ach], edx
        mov eax, dword ptr [ebp - 0f0h]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        push ecx
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 5F 7F 00 00: call 0x58684b80
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 0ech]
        add edx, 1
        mov dword ptr [ebp - 0ech], edx
        ; Exact mapped bytes EB 12: jmp 0x5867cc45
        __asm _emit 0xeb
        __asm _emit 0x12
        movzx eax, word ptr [ebp - 0e0h]
        mov dword ptr [ebp + eax*4 - 100h], 0
        ; Exact mapped bytes EB 12: jmp 0x5867cc59
        __asm _emit 0xeb
        __asm _emit 0x12
        movzx ecx, word ptr [ebp - 0e0h]
        mov dword ptr [ebp + ecx*4 - 100h], 0
        ; Exact mapped bytes EB 12: jmp 0x5867cc6d
        __asm _emit 0xeb
        __asm _emit 0x12
        movzx edx, word ptr [ebp - 0e0h]
        mov dword ptr [ebp + edx*4 - 100h], 0
        ; Exact mapped bytes E9 46 FA FF FF: jmp 0x5867c6b8
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 9D E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x9d
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BC F7 E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf7
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 55 7D E0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x7d
        __asm _emit 0xe0
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
        ; Exact mapped bytes 0F 85 02 01 00 00: jne 0x5867cda1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 89 95 28 FF FF FF: mov word ptr [ebp - 0xd8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x5867ccbc
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 66 8B 85 28 FF FF FF: mov ax, word ptr [ebp - 0xd8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 85 28 FF FF FF: mov word ptr [ebp - 0xd8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 0d8h]
        cmp ecx, 4
        ; Exact mapped bytes 0F 8D D0 00 00 00: jge 0x5867cd9c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 1b8h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 9C E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x9c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 50 F7 E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf7
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1b0h], eax
        push 0
        movzx ecx, word ptr [ebp - 0d8h]
        add ecx, 1ch
        push ecx
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 02 03 E1 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x03
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, ax
        mov dword ptr [ebp - 1b4h], edx
        mov eax, dword ptr [ebp - 1b4h]
        push eax
        movzx ecx, word ptr [ebp - 0d8h]
        push ecx
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 5F 45 01 00: call 0x58691290
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 9C E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x9c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EB F6 E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf6
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1bch], eax
        push 1
        movzx ecx, word ptr [ebp - 0d8h]
        add ecx, 1ch
        push ecx
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 9D 02 E1 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, ax
        mov dword ptr [ebp - 1c0h], edx
        mov eax, dword ptr [ebp - 1c0h]
        push eax
        movzx ecx, word ptr [ebp - 0d8h]
        push ecx
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 3A 51 01 00: call 0x58691ed0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 0E FF FF FF: jmp 0x5867ccaa
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 FD 00 00 00: jmp 0x5867ce9e
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 89 95 28 FF FF FF: mov word ptr [ebp - 0xd8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x5867cdbe
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 66 8B 85 28 FF FF FF: mov ax, word ptr [ebp - 0xd8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 85 28 FF FF FF: mov word ptr [ebp - 0xd8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 0d8h]
        cmp ecx, 4
        ; Exact mapped bytes 0F 8D D0 00 00 00: jge 0x5867ce9e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 1d0h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 9B E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x9b
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4E F6 E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf6
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        push 0
        movzx ecx, word ptr [ebp - 0d8h]
        add ecx, 1ch
        push ecx
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 00 02 E1 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, ax
        mov dword ptr [ebp - 1cch], edx
        mov eax, dword ptr [ebp - 1cch]
        push eax
        movzx ecx, word ptr [ebp - 0d8h]
        push ecx
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 0D 83 00 00: call 0x58685140
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 1dch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 9B E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x9b
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E9 F5 E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        push 1
        movzx ecx, word ptr [ebp - 0d8h]
        add ecx, 1ch
        push ecx
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 9B 01 E1 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, ax
        mov dword ptr [ebp - 1d8h], edx
        mov eax, dword ptr [ebp - 1d8h]
        push eax
        movzx ecx, word ptr [ebp - 0d8h]
        push ecx
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 98 8F 00 00: call 0x58685e30
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 0E FF FF FF: jmp 0x5867cdac
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 80h
        push 0
        lea edx, [ebp - 0c4h]
        push edx
        ; Exact mapped bytes E8 5F FF 1C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        push 588aff0ch
        push 80h
        lea eax, [ebp - 0c4h]
        push eax
        ; Exact mapped bytes E8 26 3F E3 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x3f
        __asm _emit 0xe3
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 9A E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 61 F5 E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf5
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FA 7A E0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x7a
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 9
        ; Exact mapped bytes 0F 85 C2 00 00 00: jne 0x5867cfbc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 1e0h], ecx
        push 1c7h
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 94 87 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x87
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 1e4h], eax
        push 500h
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 72 87 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x87
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 1e8h], edx
        push 500h
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 50 87 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x87
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 0a4h]
        ; Exact mapped bytes E8 FF 31 E3 FF: call 0x584b0170
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x31
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], eax
        push 500h
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 29 87 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x87
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 1f0h], edx
        push 500h
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 07 87 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x87
        __asm _emit 0x13
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A 20 00 00: call 0x5867f010
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D8 02 00 00: jmp 0x5867d294
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 1f4h], ecx
        push 500h
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 D2 86 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x86
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x5867d08c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 1f8h], eax
        push 1c7h
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 A2 86 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x86
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 1fch], edx
        push 500h
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 80 86 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x86
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 0a4h]
        ; Exact mapped bytes E8 2F 31 E3 FF: call 0x584b0170
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x31
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 200h], eax
        push 500h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 59 86 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x86
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 204h], edx
        push 500h
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 37 86 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x86
        __asm _emit 0x13
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 1F 00 00: call 0x5867f010
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 08 02 00 00: jmp 0x5867d294
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 208h], ecx
        push 500h
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 02 86 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x86
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 3B ED FF: call 0x58550c30
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x3b
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 85 55 01 00 00: jne 0x5867d21a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
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
        ; Exact mapped bytes E8 F0 98 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x98
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 69 F3 E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf3
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 02 79 E0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x79
        __asm _emit 0xe0
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
        cmp ecx, 1
        ; Exact mapped bytes 0F 8C BA 00 00 00: jl 0x5867d1ac
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xba
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
        ; Exact mapped bytes E8 C3 98 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3C F3 E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xf3
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D5 78 E0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x78
        __asm _emit 0xe0
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
        cmp eax, 3
        ; Exact mapped bytes 0F 8F 8D 00 00 00: jg 0x5867d1ac
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 20ch], edx
        push 1aeh
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 6F 85 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 0a4h]
        ; Exact mapped bytes E8 1E 30 E3 FF: call 0x584b0170
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x30
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        push 2e2h
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 48 85 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 214h], edx
        push 1b0h
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 26 85 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 218h], ecx
        push 5
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 97 26 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x26
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6C: jmp 0x5867d218
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 24ch], eax
        push 500h
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 E2 84 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [ecx + 0a4h]
        ; Exact mapped bytes E8 91 2F E3 FF: call 0x584b0170
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x2f
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        push 500h
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 BB 84 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 224h], eax
        push 500h
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 99 84 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 6C: jmp 0x5867d286
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 228h], edx
        push 500h
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 74 84 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 0a4h]
        ; Exact mapped bytes E8 23 2F E3 FF: call 0x584b0170
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x2f
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        push 500h
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 4D 84 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 230h], edx
        push 500h
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 2B 84 13 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        push 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D 1D 00 00: call 0x5867f010
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 234h], ecx
        mov edx, dword ptr [ebp - 0ech]
        push edx
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 78 85 00 00: call 0x58685830
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x85
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
        ; Exact mapped bytes E8 FC 96 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x96
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 75 F1 E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf1
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0E 77 E0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x77
        __asm _emit 0xe0
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
        ; Exact mapped bytes 75 25: jne 0x5867d307
        __asm _emit 0x75
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 238h], eax
        mov ecx, dword ptr [ebp - 0ech]
        push ecx
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 4A 46 01 00: call 0x58691950
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 2f4h]
        mov dword ptr [ebp - 240h], eax
        push 0
        push 6
        push 2
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 65 04 00: call 0x586c38a0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 23ch], eax
        mov ecx, dword ptr [ebp - 23ch]
        push ecx
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 4E DE 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xde
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [edx + 2cch], 0
        mov eax, dword ptr [ebp - 0dch]
        mov dword ptr [eax + 2d0h], 0
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 E3 3C 1B 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x3c
        __asm _emit 0x1b
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
