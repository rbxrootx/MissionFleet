// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EA050 .. +0x76A bytes.
extern "C" __declspec(naked) void FUN_584ea050_584EA050() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        push esi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 78h]
        add ecx, 1
        mov byte ptr [ebp - 1], cl
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [edx + 7ah]
        mov byte ptr [ebp - 2ch], al
        cmp byte ptr [ebp - 2ch], 1
        ; Exact mapped bytes 74 19: je 0x584ea08f
        __asm _emit 0x74
        __asm _emit 0x19
        cmp byte ptr [ebp - 2ch], 2
        ; Exact mapped bytes 0F 84 2F 03 00 00: je 0x584ea3af
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp - 2ch], 3
        ; Exact mapped bytes 0F 84 52 06 00 00: je 0x584ea6dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 21 07 00 00: jmp 0x584ea7b0
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [ebp - 1]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        sub edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 8
        ; Exact mapped bytes 0F 87 01 03 00 00: ja 0x584ea3aa
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 24 85 BC A7 4E 58: jmp dword ptr [eax*4 + 0x584ea7bc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0xa7
        __asm _emit 0x4e
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx + 78h]
        add dl, 1
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax + 78h], dl
        ; Exact mapped bytes E9 E3 02 00 00: jmp 0x584ea3aa
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 F5 FF FF: call 0x584e9610
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x584ea0e9
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CA 1F FA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x1f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 B7 00 00 00: je 0x584ea1aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E5 1D FA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x1d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6E 5B FC FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x5b
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, al
        xor ecx, 55h
        mov dword ptr [ebp - 34h], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CD 1D FA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x1d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 56 92 FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x92
        __asm _emit 0xfd
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
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B0 1D FA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x1d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B9 F4 FF FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 34h], 0ch
        ; Exact mapped bytes 7C 65: jl 0x584ea1a5
        __asm _emit 0x7c
        __asm _emit 0x65
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 5F: jne 0x584ea1a5
        __asm _emit 0x75
        __asm _emit 0x5f
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 75 59: jne 0x584ea1a5
        __asm _emit 0x75
        __asm _emit 0x59
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 0D: jne 0x584ea15f
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 86 1D FA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x1d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 46: jmp 0x584ea1a5
        __asm _emit 0xeb
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 09 92 FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x92
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        movzx esi, word ptr [eax + edx + 14h]
        xor esi, 55h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 61 1D FA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x1d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EA 91 FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x91
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 14h]
        xor eax, 55h
        cmp esi, eax
        ; Exact mapped bytes 7D 0B: jge 0x584ea1a5
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3E 1D FA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x1d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes E9 34 FF FF FF: jmp 0x584ea0de
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x584ea271
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 418h
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 6ch]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [eax + ecx + 414h], edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9C 91 FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x91
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], -1
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x584ea260
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 78h]
        add ecx, 2
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 78h], cl
        mov eax, 418h
        shl eax, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        mov ecx, dword ptr [edx + eax + 414h]
        ; Exact mapped bytes E8 C8 F3 FF FF: call 0x584e95d0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov eax, 418h
        shl eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [edx + eax + 414h], ecx
        mov edx, 418h
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        mov ecx, dword ptr [ecx + edx + 414h]
        ; Exact mapped bytes E8 14 F4 FF FF: call 0x584e9650
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 1B: jne 0x584ea25e
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 CE FE FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        push -1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 05 2D 1C 00: call 0x586acf60
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x2d
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C4: jmp 0x584ea222
        __asm _emit 0xeb
        __asm _emit 0xc4
        ; Exact mapped bytes EB 0F: jmp 0x584ea26f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 78h]
        add cl, 1
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 78h], cl
        ; Exact mapped bytes EB 07: jmp 0x584ea278
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 3D 05 00 00: jmp 0x584ea7b5
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 2D 01 00 00: jmp 0x584ea3aa
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 418h
        shl eax, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        mov ecx, dword ptr [edx + eax + 414h]
        ; Exact mapped bytes E8 39 F3 FF FF: call 0x584e95d0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov eax, 418h
        shl eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [edx + eax + 414h], ecx
        mov edx, 418h
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        mov ecx, dword ptr [ecx + edx + 414h]
        ; Exact mapped bytes E8 85 F3 FF FF: call 0x584e9650
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 1B: jne 0x584ea2ed
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 CE FE FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        push -1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 76 2C 1C 00: call 0x586acf60
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x2c
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C4: jmp 0x584ea2b1
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 78h]
        add cl, 1
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 78h], cl
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x584ea3aa
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 78h]
        add cl, 1
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 78h], cl
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x584ea3aa
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 418h
        shl eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        mov ecx, 418h
        shl ecx, 2
        mov esi, dword ptr [ebp - 8]
        mov esi, dword ptr [esi + 6ch]
        mov edx, dword ptr [edx + eax + 414h]
        mov dword ptr [esi + ecx + 414h], edx
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 78h]
        add cl, 1
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 78h], cl
        ; Exact mapped bytes EB 5B: jmp 0x584ea3aa
        __asm _emit 0xeb
        __asm _emit 0x5b
        mov eax, 418h
        shl eax, 2
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        mov ecx, 418h
        imul ecx, ecx, 6
        mov esi, dword ptr [ebp - 8]
        mov esi, dword ptr [esi + 6ch]
        mov edx, dword ptr [edx + eax + 414h]
        mov dword ptr [esi + ecx + 414h], edx
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 78h]
        add cl, 1
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 78h], cl
        ; Exact mapped bytes EB 20: jmp 0x584ea3aa
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 78h]
        add cl, 1
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 78h], cl
        ; Exact mapped bytes EB 0F: jmp 0x584ea3aa
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 78h]
        add cl, 1
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 78h], cl
        ; Exact mapped bytes E9 01 04 00 00: jmp 0x584ea7b0
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebp - 1]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, 1
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 6
        ; Exact mapped bytes 0F 87 0E 03 00 00: ja 0x584ea6d7
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x0e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 24 95 E0 A7 4E 58: jmp dword ptr [edx*4 + 0x584ea7e0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xe0
        __asm _emit 0xa7
        __asm _emit 0x4e
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 78h]
        add cl, 1
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 78h], cl
        ; Exact mapped bytes E9 F0 02 00 00: jmp 0x584ea6d7
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 F2 FF FF: call 0x584e9610
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 0B: jmp 0x584ea409
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AA 1C FA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x1c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 B7 00 00 00: je 0x584ea4ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C5 1A FA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x1a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4E 58 FC FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x58
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, al
        xor eax, 55h
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AD 1A FA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x1a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 36 8F FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        mov dword ptr [ebp - 54h], edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 90 1A FA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x1a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 99 F1 FF FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 50h], 0ch
        ; Exact mapped bytes 7C 65: jl 0x584ea4c5
        __asm _emit 0x7c
        __asm _emit 0x65
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 75 5F: jne 0x584ea4c5
        __asm _emit 0x75
        __asm _emit 0x5f
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 75 59: jne 0x584ea4c5
        __asm _emit 0x75
        __asm _emit 0x59
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 0D: jne 0x584ea47f
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 66 1A FA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x1a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 46: jmp 0x584ea4c5
        __asm _emit 0xeb
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E9 8E FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 2
        shl ecx, 0
        movzx esi, word ptr [eax + ecx + 14h]
        xor esi, 55h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 41 1A FA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x1a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CA 8E FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, 2
        shl edx, 0
        movzx eax, word ptr [eax + edx + 14h]
        xor eax, 55h
        cmp esi, eax
        ; Exact mapped bytes 7D 0B: jge 0x584ea4c5
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1E 1A FA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x1a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes E9 34 FF FF FF: jmp 0x584ea3fe
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x584ea591
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 418h
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 6ch]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [eax + ecx + 414h], edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 7C 8E FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], -1
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x584ea580
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 78h]
        add ecx, 2
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 78h], cl
        mov eax, 418h
        shl eax, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        mov ecx, dword ptr [edx + eax + 414h]
        ; Exact mapped bytes E8 A8 F0 FF FF: call 0x584e95d0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov eax, 418h
        shl eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [edx + eax + 414h], ecx
        mov edx, 418h
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        mov ecx, dword ptr [ecx + edx + 414h]
        ; Exact mapped bytes E8 F4 F0 FF FF: call 0x584e9650
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 1B: jne 0x584ea57e
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 CB FE FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xcb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        push -1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 E5 29 1C 00: call 0x586acf60
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x29
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C4: jmp 0x584ea542
        __asm _emit 0xeb
        __asm _emit 0xc4
        ; Exact mapped bytes EB 0F: jmp 0x584ea58f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 78h]
        add cl, 1
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 78h], cl
        ; Exact mapped bytes EB 07: jmp 0x584ea598
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 1D 02 00 00: jmp 0x584ea7b5
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3A 01 00 00: jmp 0x584ea6d7
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 418h
        shl eax, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        mov ecx, dword ptr [edx + eax + 414h]
        ; Exact mapped bytes E8 19 F0 FF FF: call 0x584e95d0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov eax, 418h
        shl eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [edx + eax + 414h], ecx
        mov edx, 418h
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        mov ecx, dword ptr [ecx + edx + 414h]
        ; Exact mapped bytes E8 65 F0 FF FF: call 0x584e9650
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 1B: jne 0x584ea60d
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 CB FE FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xcb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        push -1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 56 29 1C 00: call 0x586acf60
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x29
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C4: jmp 0x584ea5d1
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 78h]
        add cl, 1
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 78h], cl
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x584ea6d7
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 EF FF FF: call 0x584e9610
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x584ea63c
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 77 1A FA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x1a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3B: je 0x584ea67d
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 96 18 FA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x18
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9F EF FF FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 25: jne 0x584ea67b
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 82 18 FA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x18
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov eax, 418h
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 6ch]
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [eax + ecx + 414h], edx
        ; Exact mapped bytes EB 02: jmp 0x584ea67d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B4: jmp 0x584ea631
        __asm _emit 0xeb
        __asm _emit 0xb4
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 78h]
        add cl, 1
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 78h], cl
        ; Exact mapped bytes EB 49: jmp 0x584ea6d7
        __asm _emit 0xeb
        __asm _emit 0x49
        mov eax, 418h
        shl eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        mov ecx, 418h
        shl ecx, 2
        mov esi, dword ptr [ebp - 8]
        mov esi, dword ptr [esi + 6ch]
        mov edx, dword ptr [edx + eax + 414h]
        mov dword ptr [esi + ecx + 414h], edx
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 78h]
        add cl, 1
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 78h], cl
        ; Exact mapped bytes EB 0F: jmp 0x584ea6d7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 78h]
        add cl, 1
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 78h], cl
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x584ea7b0
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebp - 1]
        mov byte ptr [ebp - 30h], al
        cmp byte ptr [ebp - 30h], 1
        ; Exact mapped bytes 74 15: je 0x584ea6fd
        __asm _emit 0x74
        __asm _emit 0x15
        cmp byte ptr [ebp - 30h], 2
        ; Exact mapped bytes 74 7C: je 0x584ea76a
        __asm _emit 0x74
        __asm _emit 0x7c
        cmp byte ptr [ebp - 30h], 3
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x584ea7a1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B3 00 00 00: jmp 0x584ea7b0
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 EF FF FF: call 0x584e9610
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 0B: jmp 0x584ea718
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9B 19 FA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x19
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 3B: je 0x584ea759
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BA 17 FA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x17
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C3 EE FF FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 25: jne 0x584ea757
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A6 17 FA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x17
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov ecx, 418h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ecx + edx + 414h], eax
        ; Exact mapped bytes EB 02: jmp 0x584ea759
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B4: jmp 0x584ea70d
        __asm _emit 0xeb
        __asm _emit 0xb4
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx + 78h]
        add dl, 1
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax + 78h], dl
        ; Exact mapped bytes EB 46: jmp 0x584ea7b0
        __asm _emit 0xeb
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB EE FF FF: call 0x584e9630
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov ecx, 418h
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 6ch]
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [eax + ecx + 414h], edx
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 78h]
        add cl, 1
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 78h], cl
        ; Exact mapped bytes EB 0F: jmp 0x584ea7b0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 78h]
        add cl, 1
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 78h], cl
        mov eax, 1
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
