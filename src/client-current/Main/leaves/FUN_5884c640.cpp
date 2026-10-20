// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884C640 .. +0x29E bytes.
extern "C" __declspec(naked) void FUN_5884c640() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 88 02 00 00: je 0x5884c8d7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 1f00h
        push ebp
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        xor ebp, ebp
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        push edi
        ; Exact mapped bytes 0F 85 B3 00 00 00: jne 0x5884c724
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov ecx, dword ptr [esi + 64h]
        mov dword ptr [ecx + 50h], ebp
        mov eax, dword ptr [esi + 64h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov edx, dword ptr [esi + 68h]
        mov dword ptr [edx + 50h], ebp
        mov eax, dword ptr [esi + 68h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        lea edi, [esi + 78h]
        push edi
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 7E 2D: jle 0x5884c6e0
        __asm _emit 0x7e
        __asm _emit 0x2d
        mov ecx, dword ptr [esi + 6ch]
        push edi
        ; Exact mapped bytes E8 C4 43 F2 FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [esi + 6ch]
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 70h]
        mov edi, 2
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 64h]
        mov dword ptr [eax + 50h], 1
        ; Exact mapped bytes EB 1E: jmp 0x5884c6fe
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov eax, dword ptr [esi + 6ch]
        mov edi, 2
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 70h]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi + 64h]
        mov dword ptr [edx + 50h], ebp
        ; Exact mapped bytes A1 84 45 A2 58: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        push ebp
        push 64h
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 90h], 1
        ; Exact mapped bytes 66 09 7E 24: or word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes E9 92 01 00 00: jmp 0x5884c8b6
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 400h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 75 5D: jne 0x5884c78e
        __asm _emit 0x75
        __asm _emit 0x5d
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 0fffbh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 6ch]
        ; Exact mapped bytes E8 EC 31 F1 FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x31
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 6ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 70h]
        ; Exact mapped bytes E8 DA 31 F1 FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x31
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 70h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes A1 84 45 A2 58: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        push ebp
        push 64h
        push eax
        mov eax, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 90h], ebp
        ; Exact mapped bytes E9 28 01 00 00: jmp 0x5884c8b6
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 0F 85 13 01 00 00: jne 0x5884c8b6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        mov eax, dword ptr [ecx + 80h]
        push eax
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        cmp eax, 5
        ; Exact mapped bytes 7D 3E: jge 0x5884c7f6
        __asm _emit 0x7d
        __asm _emit 0x3e
        mov eax, dword ptr [esi + 64h]
        cmp dword ptr [eax + 50h], ebp
        ; Exact mapped bytes 74 03: je 0x5884c7c3
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov edx, dword ptr [esi + 64h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 75 0A: jne 0x5884c7d8
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [esi + 64h]
        push 1
        ; Exact mapped bytes E8 18 4E EE FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x4e
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 68h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 0F 84 CE 00 00 00: je 0x5884c8b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        push ebp
        ; Exact mapped bytes E8 FF 4D EE FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x4d
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x5884c8b6
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 0a4h]
        ; Exact mapped bytes 66 83 F8 14: cmp ax, 0x14
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x14
        ; Exact mapped bytes 0F 85 A7 00 00 00: jne 0x5884c8ae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        mov eax, dword ptr [eax + 80h]
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 84 13 FD FF: call 0x5881dba0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        mov eax, dword ptr [esi + 64h]
        ; Exact mapped bytes 74 46: je 0x5884c869
        __asm _emit 0x74
        __asm _emit 0x46
        cmp dword ptr [eax + 50h], ebp
        ; Exact mapped bytes 74 03: je 0x5884c82b
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [esi + 64h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 09: je 0x5884c840
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esi + 64h]
        push ebp
        ; Exact mapped bytes E8 B0 4D EE FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x4d
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [esi + 68h]
        cmp dword ptr [eax + 50h], ebp
        ; Exact mapped bytes 75 07: jne 0x5884c84f
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [eax + 50h], 1
        mov eax, dword ptr [esi + 68h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 75 4F: jne 0x5884c8aa
        __asm _emit 0x75
        __asm _emit 0x4f
        mov ecx, dword ptr [esi + 68h]
        push 1
        ; Exact mapped bytes E8 8B 4D EE FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xee
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 46: jmp 0x5884c8af
        __asm _emit 0xeb
        __asm _emit 0x46
        cmp dword ptr [eax + 50h], ebp
        ; Exact mapped bytes 75 07: jne 0x5884c875
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [eax + 50h], 1
        mov edx, dword ptr [esi + 64h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 75 0A: jne 0x5884c88a
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [esi + 64h]
        push 1
        ; Exact mapped bytes E8 66 4D EE FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4d
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [esi + 68h]
        cmp dword ptr [eax + 50h], ebp
        ; Exact mapped bytes 74 03: je 0x5884c895
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [esi + 68h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 09: je 0x5884c8aa
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esi + 68h]
        push ebp
        ; Exact mapped bytes E8 46 4D EE FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x4d
        __asm _emit 0xee
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 01: jmp 0x5884c8af
        __asm _emit 0xeb
        __asm _emit 0x01
        inc eax
        ; Exact mapped bytes 66 89 86 A4 00 00 00: mov word ptr [esi + 0xa4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 18: je 0x5884c8d5
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0C: je 0x5884c8d9
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        cmp edi, ebp
        ; Exact mapped bytes 75 EB: jne 0x5884c8c0
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop ebp
        pop esi
        ret
        pop edi
        pop ebp
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
