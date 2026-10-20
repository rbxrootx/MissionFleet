// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58896360 .. +0x259 bytes.
extern "C" __declspec(naked) void FUN_58896360() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 47 02 00 00: je 0x588965b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
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
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        push edi
        ; Exact mapped bytes 75 1E: jne 0x588963a8
        __asm _emit 0x75
        __asm _emit 0x1e
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
        ; Exact mapped bytes E9 EC 01 00 00: jmp 0x58896594
        __asm _emit 0xe9
        __asm _emit 0xec
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
        ; Exact mapped bytes 75 73: jne 0x58896428
        __asm _emit 0x75
        __asm _emit 0x73
        mov ecx, dword ptr [esi + 588h]
        ; Exact mapped bytes E8 60 8A EC FF: call 0x5875ee20
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x8a
        __asm _emit 0xec
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 75 2A: jne 0x588963ef
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0fffbh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e5ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B8 F0 05 01 00 0F: cmp word ptr [eax + 0x105f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 85 92 01 00 00: jne 0x58896594
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 5a0h]
        mov edx, 6
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58896410
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes E9 6C 01 00 00: jmp 0x58896594
        __asm _emit 0xe9
        __asm _emit 0x6c
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
        ; Exact mapped bytes 0F 85 57 01 00 00: jne 0x58896594
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 0F 84 48 01 00 00: je 0x58896594
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 10524h]
        mov eax, dword ptr [ecx + 50h]
        sub eax, dword ptr [edx + 4]
        mov edi, dword ptr [ecx + 54h]
        sub edi, dword ptr [edx + 8]
        cdq
        idiv dword ptr [esi + 578h]
        push ebx
        xor ebx, ebx
        mov ecx, eax
        mov eax, edi
        cdq
        idiv dword ptr [esi + 57ch]
        mov dword ptr [esi + 74h], ecx
        mov edi, ecx
        imul edi, ecx
        mov edx, eax
        imul edx, eax
        add edx, edi
        cmp edx, dword ptr [esi + 0d4h]
        mov edx, dword ptr [esi + 580h]
        setle bl
        add edx, dword ptr [esi + 4d8h]
        mov dword ptr [esi + 78h], eax
        add edx, dword ptr [esi + 4]
        add edx, ecx
        mov ecx, dword ptr [esi + 584h]
        add ecx, dword ptr [esi + 4dch]
        mov dword ptr [esi + 70h], ebx
        add ecx, dword ptr [esi + 8]
        mov dword ptr [esi + 7ch], edx
        add ecx, eax
        mov dword ptr [esi + 80h], ecx
        mov edx, dword ptr [esi + 0ach]
        add edx, dword ptr [esi + 7ch]
        mov eax, dword ptr [esi + 0b0h]
        mov ecx, dword ptr [esi + 0b4h]
        mov dword ptr [esi + 84h], edx
        add eax, dword ptr [esi + 80h]
        mov edx, dword ptr [esi + 0b8h]
        mov dword ptr [esi + 88h], eax
        add ecx, dword ptr [esi + 7ch]
        mov eax, dword ptr [esi + 0bch]
        mov dword ptr [esi + 8ch], ecx
        add edx, dword ptr [esi + 80h]
        mov ecx, dword ptr [esi + 0c0h]
        mov dword ptr [esi + 90h], edx
        add eax, dword ptr [esi + 7ch]
        mov edx, dword ptr [esi + 0c4h]
        mov dword ptr [esi + 94h], eax
        add ecx, dword ptr [esi + 80h]
        mov eax, dword ptr [esi + 0c8h]
        mov dword ptr [esi + 98h], ecx
        add edx, dword ptr [esi + 7ch]
        mov ecx, dword ptr [esi + 0cch]
        mov dword ptr [esi + 9ch], edx
        add eax, dword ptr [esi + 80h]
        mov edx, dword ptr [esi + 0d0h]
        mov dword ptr [esi + 0a0h], eax
        add ecx, dword ptr [esi + 7ch]
        pop ebx
        mov dword ptr [esi + 0a4h], ecx
        add edx, dword ptr [esi + 80h]
        mov dword ptr [esi + 0a8h], edx
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B8 F0 05 01 00 0F: cmp word ptr [eax + 0x105f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes 75 1A: jne 0x58896594
        __asm _emit 0x75
        __asm _emit 0x1a
        lea ecx, [esi + 5a0h]
        mov edx, 6
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 F1: jne 0x58896585
        __asm _emit 0x75
        __asm _emit 0xf1
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1A: je 0x588965b5
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes EB 03: jmp 0x588965a0
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x588965b8
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x588965a0
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
    }
}
