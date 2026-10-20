// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873CEC0 .. +0xC2A bytes.
extern "C" __declspec(naked) void FUN_5873cec0_5873CEC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 148h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1d0h]
        ; Exact mapped bytes E8 26 36 D9 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x36
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 130h], 0
        ; Exact mapped bytes 75 22: jne 0x5873cf09
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1d0h]
        mov dword ptr [ebp - 0f8h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 68h
        push ecx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 78 F8 DA FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1d0h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 130h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B8 8E D4 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1f4h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 15ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D7 9E D7 FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x9e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 1f4h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 164h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 168h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A6 9E D7 FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x9e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1f4h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 178h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 76 9E D7 FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x9e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 1f4h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 16ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 170h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 45 9E D7 FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x9e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1f4h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + 9ah]
        and dl, 0fh
        movzx eax, dl
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 78 E1 07 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xe1
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1f4h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + 99h]
        and dl, 7fh
        movzx eax, dl
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 4B E1 07 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe1
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1f4h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0aeh]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 24 E1 07 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe1
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1f4h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0afh]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 FC E0 07 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xe0
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 9eh]
        cmp ecx, 8
        ; Exact mapped bytes 74 1E: je 0x5873d0c2
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 9eh]
        cmp eax, 9
        ; Exact mapped bytes 74 0F: je 0x5873d0c2
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 9eh]
        cmp edx, 0ch
        ; Exact mapped bytes 75 23: jne 0x5873d0e5
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1f4h]
        mov dword ptr [ebp - 44h], edx
        push 80h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 AC E0 07 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe0
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5873d0f7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 7D 51: jge 0x5873d14e
        __asm _emit 0x7d
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1f4h]
        mov dword ptr [ebp - 48h], eax
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 C9 8C D4 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x8c
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1d4h]
        mov dword ptr [ebp - 4ch], eax
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 AF 8C D4 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x8c
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1e4h]
        mov dword ptr [ebp - 50h], eax
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 95 8C D4 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A0: jmp 0x5873d0ee
        __asm _emit 0xeb
        __asm _emit 0xa0
        xor ecx, ecx
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0ech]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 4
        ; Exact mapped bytes 74 0F: je 0x5873d178
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp - 1ch], 6
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x5873d230
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 6D 01 00 00: jmp 0x5873d2e5
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 24ch]
        ; Exact mapped bytes E8 7A 78 D4 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x78
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 248h]
        add edx, 131h
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24ch]
        mov dword ptr [ebp - 54h], ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 75 22 D6 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x22
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24ch]
        mov dword ptr [ebp - 58h], ecx
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 0F 8D D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 244h]
        ; Exact mapped bytes E8 21 78 D4 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 248h]
        add ecx, 125h
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 244h]
        mov dword ptr [ebp - 5ch], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 1C 22 D6 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x22
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 244h]
        mov dword ptr [ebp - 60h], eax
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 B6 8C D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x8c
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x5873d312
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 24ch]
        ; Exact mapped bytes E8 C2 77 D4 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x77
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 248h]
        add edx, 16dh
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24ch]
        mov dword ptr [ebp - 64h], ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 BD 21 D6 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x21
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24ch]
        mov dword ptr [ebp - 68h], ecx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 57 8C D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x8c
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 244h]
        ; Exact mapped bytes E8 69 77 D4 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x77
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 248h]
        add ecx, 161h
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 244h]
        mov dword ptr [ebp - 6ch], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 64 21 D6 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x21
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 244h]
        mov dword ptr [ebp - 70h], eax
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 FE 8B D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x8b
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x5873d312
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24ch]
        mov dword ptr [ebp - 74h], edx
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 E5 8B D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x8b
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 244h]
        mov dword ptr [ebp - 78h], ecx
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 CF 8B D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x8b
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 13ch], 0
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x5873d3b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 258h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 06 96 58: mov ecx, dword ptr [0x58960678]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 E2 DF FF: call 0x5853b610
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xe2
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 258h]
        mov dword ptr [ebp - 7ch], eax
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 41 42 08 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 240h]
        mov dword ptr [ebp - 80h], edx
        push 1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 DB 24 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x24
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 23ch]
        mov dword ptr [ebp - 88h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 258h]
        ; Exact mapped bytes E8 9E F8 EE FF: call 0x5862cc20
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf8
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 06 8D D4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 258h]
        ; Exact mapped bytes E8 A8 8D E0 FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0e8h], eax
        ; Exact mapped bytes E9 CF 00 00 00: jmp 0x5873d485
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 240h]
        mov dword ptr [ebp - 8ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 6E 24 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x24
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 23ch]
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10eh
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 AA 8C D4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x8c
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 9eh]
        cmp eax, 0fh
        ; Exact mapped bytes 75 7F: jne 0x5873d485
        __asm _emit 0x75
        __asm _emit 0x7f
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 258h]
        push edx
        ; Exact mapped bytes 8B 0D 78 06 96 58: mov ecx, dword ptr [0x58960678]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 E1 DF FF: call 0x5853b610
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xe1
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 258h]
        mov dword ptr [ebp - 94h], ecx
        push 0dh
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 57 41 08 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 23ch]
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 258h]
        ; Exact mapped bytes E8 CA F7 EE FF: call 0x5862cc20
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xf7
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 32 8C D4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x8c
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 258h]
        ; Exact mapped bytes E8 D4 8C E0 FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x8c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e8h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 148h], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x5873d515
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 218h]
        mov dword ptr [ebp - 0a4h], eax
        push 1eh
        ; Exact mapped bytes 8B 0D D4 06 96 58: mov ecx, dword ptr [0x589606d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 76 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x76
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        mov ecx, dword ptr [ebp - 0a0h]
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 5E 8A D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x8a
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 218h]
        mov dword ptr [ebp - 0ach], ecx
        push 1fh
        ; Exact mapped bytes 8B 0D D4 06 96 58: mov ecx, dword ptr [0x589606d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 76 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x76
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 21 8A D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x8a
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x5873d596
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 218h]
        mov dword ptr [ebp - 0b4h], eax
        push 0a0h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 75 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x75
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 DB 89 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x89
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 218h]
        mov dword ptr [ebp - 0bch], ecx
        push 0a1h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 75 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x75
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 9B 89 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x89
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 218h]
        mov dword ptr [ebp - 0c0h], eax
        push 1
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 25 89 D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x89
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 218h]
        mov dword ptr [ebp - 0c4h], eax
        push 1
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 00 89 D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x89
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 150h], 0
        ; Exact mapped bytes 74 7C: je 0x5873d669
        __asm _emit 0x74
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 1
        ; Exact mapped bytes 75 1F: jne 0x5873d61c
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 224h]
        mov dword ptr [ebp - 0c8h], edx
        push 1
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 27 22 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x22
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1D: jmp 0x5873d639
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 224h]
        mov dword ptr [ebp - 0cch], ecx
        push 5
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 08 22 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 224h]
        mov dword ptr [ebp - 0d0h], eax
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 228h]
        push ecx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 CA 1D D6 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x1d
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1D: jmp 0x5873d686
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 224h]
        mov dword ptr [ebp - 0d4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 BB 21 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x21
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 154h], 0
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x5873d779
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        and eax, 1
        ; Exact mapped bytes 74 1F: je 0x5873d6c3
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 220h]
        mov dword ptr [ebp - 0d8h], edx
        push 5
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 80 21 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x21
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1D: jmp 0x5873d6e0
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 220h]
        mov dword ptr [ebp - 0dch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 61 21 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x21
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 150h], 0
        ; Exact mapped bytes 74 5D: je 0x5873d749
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 220h]
        mov dword ptr [ebp - 0e0h], ecx
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 228h]
        push edx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 17 1D D6 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x1d
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 224h]
        mov dword ptr [ebp - 0e4h], ecx
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 228h]
        push ecx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 EA 1C D6 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x1c
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2E: jmp 0x5873d777
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 220h]
        mov dword ptr [ebp - 0e8h], eax
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 228h]
        push ecx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 BA 1C D6 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x1c
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1D: jmp 0x5873d796
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 220h]
        mov dword ptr [ebp - 0ech], eax
        push 0
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 AB 20 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x20
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0ech]
        test edx, edx
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x5873d844
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        shr ecx, 3
        and ecx, 1
        ; Exact mapped bytes 74 44: je 0x5873d7fd
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 1f4h]
        mov dword ptr [ebp - 0f0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 B2 D9 07 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xd9
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 238h]
        mov dword ptr [ebp - 0f4h], eax
        push 5
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 46 20 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x20
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 45: jmp 0x5873d842
        __asm _emit 0xeb
        __asm _emit 0x45
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1f4h]
        mov dword ptr [ebp - 120h], eax
        push 80h
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 6B D9 07 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xd9
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 238h]
        mov dword ptr [ebp - 0fch], edx
        push 1
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 FF 1F D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x1f
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1D: jmp 0x5873d861
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 238h]
        mov dword ptr [ebp - 100h], ecx
        push 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 E0 1F D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x1f
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0ech]
        cmp eax, 3
        ; Exact mapped bytes 75 18: jne 0x5873d888
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 17ch]
        ; Exact mapped bytes E8 A9 67 00 00: call 0x58744030
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 9eh]
        cmp edx, 0fh
        ; Exact mapped bytes 0F 85 53 01 00 00: jne 0x5873d9ee
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1c0h]
        mov dword ptr [ebp - 108h], ecx
        push 2
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 72 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x72
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        mov edx, dword ptr [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 61 86 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1c4h]
        mov dword ptr [ebp - 110h], ecx
        push 0c0h
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 72 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x72
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        mov edx, dword ptr [ebp - 10ch]
        push edx
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 2A 86 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 2
        ; Exact mapped bytes EB 09: jmp 0x5873d919
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 7D 63: jge 0x5873d982
        __asm _emit 0x7d
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1f4h]
        mov dword ptr [ebp - 114h], eax
        push 0
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 51 86 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1d4h]
        mov dword ptr [ebp - 118h], eax
        push 0
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 31 86 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1e4h]
        mov dword ptr [ebp - 11ch], eax
        push 0
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 11 86 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 8E: jmp 0x5873d910
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 218h]
        mov dword ptr [ebp - 148h], ecx
        push 0
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 39 85 D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 218h]
        mov dword ptr [ebp - 124h], ecx
        push 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 14 85 D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 220h]
        mov dword ptr [ebp - 128h], eax
        push 0
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 58 1E D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1e
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E4 00 00 00: jmp 0x5873dad2
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1c0h]
        mov dword ptr [ebp - 130h], edx
        push 2
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 71 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        mov eax, dword ptr [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 0E 85 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1c4h]
        mov dword ptr [ebp - 138h], edx
        push 1
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 70 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x70
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        mov eax, dword ptr [ebp - 134h]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 DA 84 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 18h], 2
        ; Exact mapped bytes EB 09: jmp 0x5873da69
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 4
        ; Exact mapped bytes 7D 63: jge 0x5873dad2
        __asm _emit 0x7d
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1f4h]
        mov dword ptr [ebp - 13ch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 01 85 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1d4h]
        mov dword ptr [ebp - 140h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 E1 84 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1e4h]
        mov dword ptr [ebp - 144h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 C1 84 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 8E: jmp 0x5873da60
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0ech]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0B 00 00 00: call 0x5873daf0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
