// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885CB60 .. +0x2F9 bytes.
extern "C" __declspec(naked) void FUN_5885cb60() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 4
        ; Exact mapped bytes 0F 84 C4 02 00 00: je 0x5885ce34
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 1f00h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 74 3A: je 0x5885cbc0
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 400h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 74 29: je 0x5885cbc0
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 200h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 85 88 02 00 00: jne 0x5885ce34
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 4E 24 02: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes C7 05 7C 83 A2 58 00 00 00 00: mov dword ptr [0x58a2837c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x7c
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 74 02 00 00: jmp 0x5885ce34
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 6ch]
        cmp ecx, eax
        ; Exact mapped bytes 75 08: jne 0x5885cbd2
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [esi + 8]
        cmp edx, dword ptr [esi + 70h]
        ; Exact mapped bytes 74 7F: je 0x5885cc51
        __asm _emit 0x74
        __asm _emit 0x7f
        sub eax, ecx
        mov ecx, dword ptr [esi + 70h]
        sub ecx, dword ptr [esi + 8]
        lea edx, [eax + 7]
        cmp edx, 0eh
        ; Exact mapped bytes 77 25: ja 0x5885cc07
        __asm _emit 0x77
        __asm _emit 0x25
        lea edx, [eax + 3]
        cmp edx, 6
        ; Exact mapped bytes 77 14: ja 0x5885cbfe
        __asm _emit 0x77
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x5885cbf3
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 1F: jmp 0x5885cc12
        __asm _emit 0xeb
        __asm _emit 0x1f
        xor edx, edx
        test eax, eax
        setg dl
        mov edi, edx
        ; Exact mapped bytes EB 14: jmp 0x5885cc12
        __asm _emit 0xeb
        __asm _emit 0x14
        cdq
        sub eax, edx
        mov edi, eax
        sar edi, 1
        ; Exact mapped bytes EB 0B: jmp 0x5885cc12
        __asm _emit 0xeb
        __asm _emit 0x0b
        cdq
        and edx, 3
        add eax, edx
        mov edi, eax
        sar edi, 2
        lea eax, [ecx + 7]
        cmp eax, 0eh
        ; Exact mapped bytes 77 23: ja 0x5885cc3d
        __asm _emit 0x77
        __asm _emit 0x23
        lea edx, [ecx + 3]
        cmp edx, 6
        ; Exact mapped bytes 77 12: ja 0x5885cc34
        __asm _emit 0x77
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x5885cc2b
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x5885cc48
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor eax, eax
        test ecx, ecx
        setg al
        ; Exact mapped bytes EB 14: jmp 0x5885cc48
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x5885cc48
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 BF 61 0A 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x61
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        cmp eax, dword ptr [esi + 6ch]
        ; Exact mapped bytes 0F 85 D7 01 00 00: jne 0x5885ce34
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        cmp ecx, dword ptr [esi + 70h]
        ; Exact mapped bytes 0F 85 CB 01 00 00: jne 0x5885ce34
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 1f00h
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 100h
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 85 06 01 00 00: jne 0x5885cd89
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 7C 83 A2 58 00: cmp dword ptr [0x58a2837c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x7c
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 3F: jne 0x5885cccb
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        xor edi, edi
        cmp dword ptr [eax + 170h], 0ch
        lea edx, [ecx - 38h]
        ; Exact mapped bytes 7E 13: jle 0x5885ccb2
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 194h], edi
        ; Exact mapped bytes 74 0B: je 0x5885ccb2
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes EB 02: jmp 0x5885ccb4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes A1 F8 48 A2 58: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        push edi
        push edx
        ; Exact mapped bytes E8 3F A7 F5 FF: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xa7
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 7C 83 A2 58 01 00 00 00: mov dword ptr [0x58a2837c], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x7c
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f8h]
        mov edx, dword ptr [ecx + 8]
        cmp edx, 2b2h
        ; Exact mapped bytes 74 41: je 0x5885cd1d
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, 2b2h
        sub eax, edx
        lea edx, [eax + 7]
        cmp edx, 0eh
        ; Exact mapped bytes 77 23: ja 0x5885cd0e
        __asm _emit 0x77
        __asm _emit 0x23
        lea edx, [eax + 3]
        cmp edx, 6
        ; Exact mapped bytes 77 14: ja 0x5885cd07
        __asm _emit 0x77
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x5885ccfc
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1B: jmp 0x5885cd17
        __asm _emit 0xeb
        __asm _emit 0x1b
        xor edx, edx
        test eax, eax
        setg dl
        mov eax, edx
        ; Exact mapped bytes EB 10: jmp 0x5885cd17
        __asm _emit 0xeb
        __asm _emit 0x10
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 09: jmp 0x5885cd17
        __asm _emit 0xeb
        __asm _emit 0x09
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        ; Exact mapped bytes E8 83 61 0A 00: call 0x58902ea0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x61
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f8h]
        cmp dword ptr [eax + 8], 2b2h
        ; Exact mapped bytes 0F 85 04 01 00 00: jne 0x5885ce34
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        xor edi, edi
        cmp dword ptr [eax + 170h], 0ch
        mov edx, 0c8h
        ; Exact mapped bytes 7E 13: jle 0x5885cd58
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 194h], edi
        ; Exact mapped bytes 74 0B: je 0x5885cd58
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 30h]
        ; Exact mapped bytes EB 02: jmp 0x5885cd5a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes A1 F8 48 A2 58: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        push edi
        push edx
        ; Exact mapped bytes E8 99 A6 F5 FF: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xa6
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0e2ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 200h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 02: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x5885ce34
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, eax
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 400h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x5885ce34
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0f8h]
        mov edx, dword ptr [ecx + 8]
        cmp edx, 302h
        ; Exact mapped bytes 74 41: je 0x5885cdfb
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, 302h
        sub eax, edx
        lea edx, [eax + 7]
        cmp edx, 0eh
        ; Exact mapped bytes 77 23: ja 0x5885cdec
        __asm _emit 0x77
        __asm _emit 0x23
        lea edx, [eax + 3]
        cmp edx, 6
        ; Exact mapped bytes 77 14: ja 0x5885cde5
        __asm _emit 0x77
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x5885cdda
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1B: jmp 0x5885cdf5
        __asm _emit 0xeb
        __asm _emit 0x1b
        xor edx, edx
        test eax, eax
        setg dl
        mov eax, edx
        ; Exact mapped bytes EB 10: jmp 0x5885cdf5
        __asm _emit 0xeb
        __asm _emit 0x10
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 09: jmp 0x5885cdf5
        __asm _emit 0xeb
        __asm _emit 0x09
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        ; Exact mapped bytes E8 A5 60 0A 00: call 0x58902ea0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x60
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0f8h]
        cmp dword ptr [eax + 8], 302h
        ; Exact mapped bytes 75 2A: jne 0x5885ce34
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0e5ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1A: je 0x5885ce55
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes EB 03: jmp 0x5885ce40
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5885ce58
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5885ce40
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
    }
}
