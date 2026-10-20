// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888C0EE .. +0x277 bytes.
extern "C" __declspec(naked) void FUN_5888c0ee() {
    __asm {
        push ebx
        push ebp
        push esi
        push 6dh
        ; Exact mapped bytes E8 36 54 0E 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x54
        __asm _emit 0x0e
        __asm _emit 0x00
        push 6dh
        xor ebp, ebp
        mov ebx, eax
        push ebp
        push ebx
        ; Exact mapped bytes E8 43 0B 0F 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x0b
        __asm _emit 0x0f
        __asm _emit 0x00
        push 30h
        lea eax, [esp + 24h]
        push ebp
        push eax
        ; Exact mapped bytes E8 36 0B 0F 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0b
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 C4 C3 98 58: mov esi, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        lea ecx, [esp + 2ch]
        push 58a0b450h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes A1 C0 45 A2 58: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 24h
        cmp dword ptr [eax + 0b8h], 1
        ; Exact mapped bytes 75 1B: jne 0x5888c150
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [eax + 154h]
        mov eax, dword ptr [edx + 80h]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x5888c150
        __asm _emit 0x74
        __asm _emit 0x0b
        push eax
        lea eax, [esp + 2ch]
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 8
        mov eax, dword ptr [esp + 0ch]
        push edi
        mov ecx, 0ch
        lea esi, [esp + 14h]
        mov edi, ebx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [esp + 4ch]
        mov edx, dword ptr [eax + ecx*4 + 6ch]
        mov esi, dword ptr [edx + 80h]
        lea edi, [ebx + 30h]
        mov ecx, 0fh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 8B 40 24: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 0F 85 CA 01 00 00: jne 0x5888c350
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C0 45 A2 58: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0bch]
        dec ecx
        cmp ecx, 4
        ; Exact mapped bytes 0F 87 B5 01 00 00: ja 0x5888c350
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 8D 68 C3 88 58: jmp dword ptr [ecx*4 + 0x5888c368]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0xc3
        __asm _emit 0x88
        __asm _emit 0x58
        mov eax, dword ptr [eax + 0b8h]
        cmp eax, 1
        ; Exact mapped bytes 74 25: je 0x5888c1d2
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 8B 0D 80 45 A2 58: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 98 45 A2 58: cmp ecx, dword ptr [0x58a24598]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 08: je 0x5888c1c3
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 3B 0D A0 45 A2 58: cmp ecx, dword ptr [0x58a245a0]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 0F: jne 0x5888c1d2
        __asm _emit 0x75
        __asm _emit 0x0f
        push 6464ffh
        push 5899fc58h
        ; Exact mapped bytes E9 69 01 00 00: jmp 0x5888c33b
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 14: jne 0x5888c1eb
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 66 0F B6 8A 54 03 00 00: movzx cx, byte ptr [edx + 0x354]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8a
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ebp, cx
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        push 6dh
        push ebx
        push ebp
        push eax
        ; Exact mapped bytes E8 13 BF F2 FF: call 0x587b8110
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xbf
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes E9 2B 01 00 00: jmp 0x5888c32d
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 63ch], ebp
        ; Exact mapped bytes 74 15: je 0x5888c21f
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        push 6dh
        push ebx
        ; Exact mapped bytes E8 76 C0 F2 FF: call 0x587b8290
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xc0
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes E9 0E 01 00 00: jmp 0x5888c32d
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 6464ffh
        push 5899c5c0h
        ; Exact mapped bytes E9 0D 01 00 00: jmp 0x5888c33b
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 644h], ebp
        ; Exact mapped bytes 74 E9: je 0x5888c21f
        __asm _emit 0x74
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        push 6dh
        push ebx
        ; Exact mapped bytes E8 BA C0 F2 FF: call 0x587b8300
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xc0
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x5888c32d
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 640h], ebp
        ; Exact mapped bytes 74 CC: je 0x5888c21f
        __asm _emit 0x74
        __asm _emit 0xcc
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        push 6dh
        push ebx
        ; Exact mapped bytes E8 0D C1 F2 FF: call 0x587b8370
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xc1
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x5888c32d
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 6dh
        push 0
        push ebx
        ; Exact mapped bytes E8 D6 09 0F 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x0f
        __asm _emit 0x00
        push 30h
        lea edx, [esp + 24h]
        push 0
        push edx
        ; Exact mapped bytes E8 C8 09 0F 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x0f
        __asm _emit 0x00
        lea eax, [esp + 2ch]
        mov edx, 58a0b450h
        mov ecx, eax
        add esp, 18h
        mov esi, 18h
        sub edx, ecx
        lea ecx, [esi + 7fffffe6h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5888c2b0
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx + eax]
        test cl, cl
        ; Exact mapped bytes 74 0A: je 0x5888c2b0
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [eax], cl
        inc eax
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5888c295
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5888c2b4
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5888c2b5
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        ; Exact mapped bytes 8B 15 C0 45 A2 58: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov byte ptr [eax], 0
        lea eax, [esp + 2ch]
        add edx, 0c0h
        mov ecx, eax
        mov esi, 18h
        sub edx, ecx
        lea ecx, [esi + 7fffffe6h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5888c2ec
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx + eax]
        test cl, cl
        ; Exact mapped bytes 74 0A: je 0x5888c2ec
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [eax], cl
        inc eax
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5888c2d1
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5888c2f0
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5888c2f1
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov edx, dword ptr [esp + 10h]
        mov byte ptr [eax], 0
        mov eax, dword ptr [esp + 4ch]
        mov ecx, 0ch
        lea esi, [esp + 14h]
        mov edi, ebx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [edx + eax*4 + 6ch]
        mov esi, dword ptr [ecx + 80h]
        push 1
        mov ecx, 0fh
        lea edi, [ebx + 30h]
        push 6dh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        ; Exact mapped bytes E8 73 BE F2 FF: call 0x587b81a0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xbe
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x5888c350
        __asm _emit 0x75
        __asm _emit 0x1f
        push 6464ffh
        push 5899c598h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push eax
        ; Exact mapped bytes E8 00 0F 00 00: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 44h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 7B 08 0F 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x08
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 38h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
