// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876E5F0 .. +0x284 bytes.
extern "C" __declspec(naked) void FUN_5876e5f0() {
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
        ; Exact mapped bytes 0F 84 69 02 00 00: je 0x5876e869
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, 40000000h
        push edi
        cmp dword ptr [esi + 7ch], ebx
        ; Exact mapped bytes 75 03: jne 0x5876e60f
        __asm _emit 0x75
        __asm _emit 0x03
        inc dword ptr [esi + 50h]
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
        ; Exact mapped bytes 74 27: je 0x5876e64c
        __asm _emit 0x74
        __asm _emit 0x27
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
        ; Exact mapped bytes 74 16: je 0x5876e64c
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [esi + 60h], ebx
        ; Exact mapped bytes 74 11: je 0x5876e64c
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [esi + 8ch], ebx
        ; Exact mapped bytes 74 09: je 0x5876e64c
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes E9 FF 01 00 00: jmp 0x5876e84b
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 58h]
        cmp eax, edi
        ; Exact mapped bytes 75 0C: jne 0x5876e662
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [esi + 8]
        cmp edx, dword ptr [esi + 5ch]
        ; Exact mapped bytes 0F 84 BF 00 00 00: je 0x5876e721
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ch]
        sub ecx, dword ptr [esi + 8]
        sub edi, eax
        mov eax, dword ptr [esi + 64h]
        cmp eax, 2
        ; Exact mapped bytes 75 72: jne 0x5876e6e4
        __asm _emit 0x75
        __asm _emit 0x72
        lea eax, [edi + 7]
        cmp eax, 0eh
        ; Exact mapped bytes 77 23: ja 0x5876e69d
        __asm _emit 0x77
        __asm _emit 0x23
        lea edx, [edi + 3]
        cmp edx, 6
        ; Exact mapped bytes 77 12: ja 0x5876e694
        __asm _emit 0x77
        __asm _emit 0x12
        test edi, edi
        ; Exact mapped bytes 7D 05: jge 0x5876e68b
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 1F: jmp 0x5876e6aa
        __asm _emit 0xeb
        __asm _emit 0x1f
        xor eax, eax
        test edi, edi
        setg al
        ; Exact mapped bytes EB 14: jmp 0x5876e6a8
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, edi
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x5876e6a8
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, edi
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov edi, eax
        lea edx, [ecx + 7]
        cmp edx, 0eh
        ; Exact mapped bytes 77 25: ja 0x5876e6d7
        __asm _emit 0x77
        __asm _emit 0x25
        lea eax, [ecx + 3]
        cmp eax, 6
        ; Exact mapped bytes 77 14: ja 0x5876e6ce
        __asm _emit 0x77
        __asm _emit 0x14
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x5876e6c3
        __asm _emit 0x7d
        __asm _emit 0x05
        or ecx, 0ffffffffh
        ; Exact mapped bytes EB 50: jmp 0x5876e713
        __asm _emit 0xeb
        __asm _emit 0x50
        xor edx, edx
        test ecx, ecx
        setg dl
        mov ecx, edx
        ; Exact mapped bytes EB 45: jmp 0x5876e713
        __asm _emit 0xeb
        __asm _emit 0x45
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 3A: jmp 0x5876e711
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        ; Exact mapped bytes EB 2D: jmp 0x5876e711
        __asm _emit 0xeb
        __asm _emit 0x2d
        cmp eax, 1
        ; Exact mapped bytes 75 2A: jne 0x5876e713
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 68h]
        test edi, edi
        ; Exact mapped bytes 7E 06: jle 0x5876e6f6
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp edi, eax
        ; Exact mapped bytes 7C 0A: jl 0x5876e6fe
        __asm _emit 0x7c
        __asm _emit 0x0a
        ; Exact mapped bytes EB 06: jmp 0x5876e6fc
        __asm _emit 0xeb
        __asm _emit 0x06
        neg eax
        cmp edi, eax
        ; Exact mapped bytes 7F 02: jg 0x5876e6fe
        __asm _emit 0x7f
        __asm _emit 0x02
        mov edi, eax
        mov eax, dword ptr [esi + 74h]
        test ecx, ecx
        ; Exact mapped bytes 7E 06: jle 0x5876e70b
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp ecx, eax
        ; Exact mapped bytes 7C 0A: jl 0x5876e713
        __asm _emit 0x7c
        __asm _emit 0x0a
        ; Exact mapped bytes EB 06: jmp 0x5876e711
        __asm _emit 0xeb
        __asm _emit 0x06
        neg eax
        cmp ecx, eax
        ; Exact mapped bytes 7F 02: jg 0x5876e713
        __asm _emit 0x7f
        __asm _emit 0x02
        mov ecx, eax
        cmp dword ptr [esi + 60h], ebx
        ; Exact mapped bytes 75 09: jne 0x5876e721
        __asm _emit 0x75
        __asm _emit 0x09
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 EF 46 19 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x46
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        mov eax, dword ptr [esi + 28h]
        cmp ecx, eax
        ; Exact mapped bytes 74 2D: je 0x5876e75b
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [esi + 88h]
        ; Exact mapped bytes 7E 10: jle 0x5876e746
        __asm _emit 0x7e
        __asm _emit 0x10
        mov edi, ecx
        sub edi, eax
        cmp edi, edx
        ; Exact mapped bytes 7F 03: jg 0x5876e741
        __asm _emit 0x7f
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 13: jmp 0x5876e754
        __asm _emit 0xeb
        __asm _emit 0x13
        add edx, eax
        push edx
        ; Exact mapped bytes EB 0E: jmp 0x5876e754
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edi, eax
        sub edi, ecx
        cmp edi, edx
        ; Exact mapped bytes 7F 03: jg 0x5876e751
        __asm _emit 0x7f
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 03: jmp 0x5876e754
        __asm _emit 0xeb
        __asm _emit 0x03
        sub eax, edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 85 45 19 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        mov eax, dword ptr [esi + 2ch]
        cmp ecx, eax
        ; Exact mapped bytes 74 2C: je 0x5876e794
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [esi + 88h]
        ; Exact mapped bytes 7E 0F: jle 0x5876e77f
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edi, ecx
        sub edi, eax
        cmp edi, edx
        ; Exact mapped bytes 7F 03: jg 0x5876e77b
        __asm _emit 0x7f
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 12: jmp 0x5876e78d
        __asm _emit 0xeb
        __asm _emit 0x12
        add eax, edx
        ; Exact mapped bytes EB 0D: jmp 0x5876e78c
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edi, eax
        sub edi, ecx
        cmp edi, edx
        ; Exact mapped bytes 7F 03: jg 0x5876e78a
        __asm _emit 0x7f
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 03: jmp 0x5876e78d
        __asm _emit 0xeb
        __asm _emit 0x03
        sub eax, edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 8C 45 19 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        cmp eax, dword ptr [esi + 58h]
        ; Exact mapped bytes 0F 85 AB 00 00 00: jne 0x5876e84b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        cmp ecx, dword ptr [esi + 5ch]
        ; Exact mapped bytes 0F 85 9F 00 00 00: jne 0x5876e84b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 84h]
        cmp edx, dword ptr [esi + 28h]
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x5876e84b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        cmp eax, dword ptr [esi + 2ch]
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x5876e84b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 60h], ebx
        ; Exact mapped bytes 75 07: jne 0x5876e7d6
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [esi + 60h], 0
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
        ; Exact mapped bytes 75 1B: jne 0x5876e80b
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
        ; Exact mapped bytes EB 40: jmp 0x5876e84b
        __asm _emit 0xeb
        __asm _emit 0x40
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 400h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 75 33: jne 0x5876e84b
        __asm _emit 0x75
        __asm _emit 0x33
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
        mov ecx, 0fffdh
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
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x5876e867
        __asm _emit 0x74
        __asm _emit 0x15
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0D: je 0x5876e86c
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5876e852
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop ebx
        pop esi
        pop ecx
        ret
        pop edi
        pop ebx
        pop esi
        add esp, 4
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
