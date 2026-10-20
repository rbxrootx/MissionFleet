// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5849CE90 .. +0x30C bytes.
extern "C" __declspec(naked) void FUN_5849ce90_5849CE90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 10: je 0x5849ceb1
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 8B FF FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0E: jmp 0x5849cebf
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 8B FF FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 66 02 00 00: je 0x5849d12f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax]
        cmp ecx, 0ch
        ; Exact mapped bytes 0F 85 A5 00 00 00: jne 0x5849cf7d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 2c8h]
        cmp eax, 3
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x5849cf7d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 66: je 0x5849cf57
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 2ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 2c8h]
        sub edx, 1
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        test eax, eax
        ; Exact mapped bytes 7E 41: jle 0x5849cf55
        __asm _emit 0x7e
        __asm _emit 0x41
        mov edi, dword ptr [ebp - 4]
        add edi, 168h
        mov ecx, 2dh
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D 0C: mov cx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 88 D2 02 00 00: mov word ptr [eax + 0x2d2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 34h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 2c8h]
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        nop
        ; Exact mapped bytes EB 21: jmp 0x5849cf78
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edi, dword ptr [ebp - 4]
        add edi, 168h
        mov ecx, 2dh
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 91 D2 02 00 00: mov word ptr [ecx + 0x2d2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B0 01 00 00: jmp 0x5849d12d
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax]
        cmp ecx, 0bh
        ; Exact mapped bytes 0F 85 A5 00 00 00: jne 0x5849d031
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 2c8h]
        cmp eax, 4
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x5849d031
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 66: je 0x5849d00b
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 2ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 2c8h]
        sub edx, 1
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        test eax, eax
        ; Exact mapped bytes 7E 41: jle 0x5849d009
        __asm _emit 0x7e
        __asm _emit 0x41
        mov edi, dword ptr [ebp - 4]
        add edi, 0bch
        mov ecx, 2bh
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D 0C: mov cx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 88 D2 02 00 00: mov word ptr [eax + 0x2d2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 34h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 2c8h]
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        nop
        ; Exact mapped bytes EB 21: jmp 0x5849d02c
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edi, dword ptr [ebp - 4]
        add edi, 0bch
        mov ecx, 2bh
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 91 D2 02 00 00: mov word ptr [ecx + 0x2d2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 FC 00 00 00: jmp 0x5849d12d
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax]
        cmp ecx, 0bh
        ; Exact mapped bytes 0F 85 E1 00 00 00: jne 0x5849d121
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 2c8h]
        cmp eax, 1
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x5849d121
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 4]
        add edi, 0bch
        mov ecx, 2bh
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 56 01 00 00: mov dx, word ptr [ecx + 0x156]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        cmp eax, 3
        ; Exact mapped bytes 75 10: jne 0x5849d090
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 88 FF FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 74 1A: je 0x5849d0aa
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 56 01 00 00: mov dx, word ptr [ecx + 0x156]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        cmp eax, 4
        ; Exact mapped bytes 75 69: jne 0x5849d113
        __asm _emit 0x75
        __asm _emit 0x69
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 53: je 0x5849d103
        __asm _emit 0x74
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 2ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 2c8h]
        sub edx, 1
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        test eax, eax
        ; Exact mapped bytes 7E 2E: jle 0x5849d101
        __asm _emit 0x7e
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D 0C: mov cx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 88 D2 02 00 00: mov word ptr [eax + 0x2d2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 34h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 2c8h]
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        nop
        ; Exact mapped bytes EB 0E: jmp 0x5849d111
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 91 D2 02 00 00: mov word ptr [ecx + 0x2d2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x5849d11f
        __asm _emit 0xeb
        __asm _emit 0x0c
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 D2 02 00 00: mov word ptr [ecx + 0x2d2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x5849d12d
        __asm _emit 0xeb
        __asm _emit 0x0c
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 D2 02 00 00: mov word ptr [eax + 0x2d2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x5849d144
        __asm _emit 0xeb
        __asm _emit 0x15
        xor ecx, ecx
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 4A 02: mov word ptr [edx + 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 D2 02 00 00: mov word ptr [ecx + 0x2d2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 2c8h]
        cmp eax, 2
        ; Exact mapped bytes 75 21: jne 0x5849d174
        __asm _emit 0x75
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 510h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 224h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 1F E0 31 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe0
        __asm _emit 0x31
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 20: jmp 0x5849d194
        __asm _emit 0xeb
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 510h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 2d2h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 FD DF 31 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xdf
        __asm _emit 0x31
        __asm _emit 0x00
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
