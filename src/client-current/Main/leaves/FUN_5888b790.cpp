// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888B790 .. +0x1F1 bytes.
extern "C" __declspec(naked) void FUN_5888b790() {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 D7 01 00 00: je 0x5888b977
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x01
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
        push edi
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 74 1A: je 0x5888b7d1
        __asm _emit 0x74
        __asm _emit 0x1a
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
        ; Exact mapped bytes 74 09: je 0x5888b7d1
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes E9 89 01 00 00: jmp 0x5888b95a
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 50h]
        cmp ecx, eax
        ; Exact mapped bytes 75 08: jne 0x5888b7e3
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [esi + 8]
        cmp edx, dword ptr [esi + 54h]
        ; Exact mapped bytes 74 7F: je 0x5888b862
        __asm _emit 0x74
        __asm _emit 0x7f
        sub eax, ecx
        mov ecx, dword ptr [esi + 54h]
        sub ecx, dword ptr [esi + 8]
        lea edx, [eax + 7]
        cmp edx, 0eh
        ; Exact mapped bytes 77 25: ja 0x5888b818
        __asm _emit 0x77
        __asm _emit 0x25
        lea edx, [eax + 3]
        cmp edx, 6
        ; Exact mapped bytes 77 14: ja 0x5888b80f
        __asm _emit 0x77
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x5888b804
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 1F: jmp 0x5888b823
        __asm _emit 0xeb
        __asm _emit 0x1f
        xor edx, edx
        test eax, eax
        setg dl
        mov edi, edx
        ; Exact mapped bytes EB 14: jmp 0x5888b823
        __asm _emit 0xeb
        __asm _emit 0x14
        cdq
        sub eax, edx
        mov edi, eax
        sar edi, 1
        ; Exact mapped bytes EB 0B: jmp 0x5888b823
        __asm _emit 0xeb
        __asm _emit 0x0b
        cdq
        and edx, 3
        add eax, edx
        mov edi, eax
        sar edi, 2
        lea eax, [ecx + 7]
        cmp eax, 0eh
        ; Exact mapped bytes 77 23: ja 0x5888b84e
        __asm _emit 0x77
        __asm _emit 0x23
        lea edx, [ecx + 3]
        cmp edx, 6
        ; Exact mapped bytes 77 12: ja 0x5888b845
        __asm _emit 0x77
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x5888b83c
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x5888b859
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor eax, eax
        test ecx, ecx
        setg al
        ; Exact mapped bytes EB 14: jmp 0x5888b859
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x5888b859
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
        ; Exact mapped bytes E8 AE 75 07 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x75
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5ch]
        mov ecx, dword ptr [esi + 2ch]
        cmp eax, ecx
        ; Exact mapped bytes 74 2A: je 0x5888b896
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 11: jle 0x5888b87f
        __asm _emit 0x7e
        __asm _emit 0x11
        mov edx, eax
        sub edx, ecx
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x5888b87a
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 15: jmp 0x5888b88f
        __asm _emit 0xeb
        __asm _emit 0x15
        add ecx, 20h
        ; Exact mapped bytes EB 0F: jmp 0x5888b88e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, ecx
        sub edx, eax
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x5888b88b
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 04: jmp 0x5888b88f
        __asm _emit 0xeb
        __asm _emit 0x04
        add ecx, -20h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 8A 74 07 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        mov ecx, dword ptr [esi + 28h]
        cmp eax, ecx
        ; Exact mapped bytes 74 2A: je 0x5888b8ca
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 11: jle 0x5888b8b3
        __asm _emit 0x7e
        __asm _emit 0x11
        mov edx, eax
        sub edx, ecx
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x5888b8ae
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 15: jmp 0x5888b8c3
        __asm _emit 0xeb
        __asm _emit 0x15
        add ecx, 20h
        ; Exact mapped bytes EB 0F: jmp 0x5888b8c2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, ecx
        sub edx, eax
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x5888b8bf
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 04: jmp 0x5888b8c3
        __asm _emit 0xeb
        __asm _emit 0x04
        add ecx, -20h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 16 74 07 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        cmp eax, dword ptr [esi + 50h]
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x5888b95a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        cmp ecx, dword ptr [esi + 54h]
        ; Exact mapped bytes 75 7C: jne 0x5888b95a
        __asm _emit 0x75
        __asm _emit 0x7c
        mov edx, dword ptr [esi + 58h]
        cmp edx, dword ptr [esi + 28h]
        ; Exact mapped bytes 75 74: jne 0x5888b95a
        __asm _emit 0x75
        __asm _emit 0x74
        mov eax, dword ptr [esi + 5ch]
        cmp eax, dword ptr [esi + 2ch]
        ; Exact mapped bytes 75 6C: jne 0x5888b95a
        __asm _emit 0x75
        __asm _emit 0x6c
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
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 75 1B: jne 0x5888b923
        __asm _emit 0x75
        __asm _emit 0x1b
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
        ; Exact mapped bytes EB 37: jmp 0x5888b95a
        __asm _emit 0xeb
        __asm _emit 0x37
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 400h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 75 2A: jne 0x5888b95a
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
        ; Exact mapped bytes 74 15: je 0x5888b976
        __asm _emit 0x74
        __asm _emit 0x15
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0C: je 0x5888b97a
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5888b961
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        pop ecx
        ret
        pop edi
        pop esi
        add esp, 4
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
    }
}
