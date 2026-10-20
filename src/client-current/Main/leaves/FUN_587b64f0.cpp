// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B64F0 .. +0x1EB bytes.
extern "C" __declspec(naked) void FUN_587b64f0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 D8 01 00 00: je 0x587b66d7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, 40000000h
        push edi
        cmp dword ptr [esi + 7ch], ebx
        ; Exact mapped bytes 75 03: jne 0x587b650e
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
        ; Exact mapped bytes 74 1A: je 0x587b653e
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
        ; Exact mapped bytes 74 09: je 0x587b653e
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [esi + 60h], ebx
        ; Exact mapped bytes 0F 85 72 01 00 00: jne 0x587b66b0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 70h], ebx
        ; Exact mapped bytes 0F 85 D0 00 00 00: jne 0x587b6617
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 58h]
        cmp eax, edi
        ; Exact mapped bytes 75 0C: jne 0x587b655d
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 8]
        cmp ecx, dword ptr [esi + 5ch]
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x587b6617
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ch]
        sub ecx, dword ptr [esi + 8]
        sub edi, eax
        mov eax, dword ptr [esi + 64h]
        cmp eax, 2
        ; Exact mapped bytes 75 72: jne 0x587b65df
        __asm _emit 0x75
        __asm _emit 0x72
        lea edx, [edi + 7]
        cmp edx, 0eh
        ; Exact mapped bytes 77 25: ja 0x587b659a
        __asm _emit 0x77
        __asm _emit 0x25
        lea eax, [edi + 3]
        cmp eax, 6
        ; Exact mapped bytes 77 14: ja 0x587b6591
        __asm _emit 0x77
        __asm _emit 0x14
        test edi, edi
        ; Exact mapped bytes 7D 05: jge 0x587b6586
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 21: jmp 0x587b65a7
        __asm _emit 0xeb
        __asm _emit 0x21
        xor edx, edx
        test edi, edi
        setg dl
        mov edi, edx
        ; Exact mapped bytes EB 16: jmp 0x587b65a7
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, edi
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x587b65a5
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, edi
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov edi, eax
        lea eax, [ecx + 7]
        cmp eax, 0eh
        ; Exact mapped bytes 77 23: ja 0x587b65d2
        __asm _emit 0x77
        __asm _emit 0x23
        lea edx, [ecx + 3]
        cmp edx, 6
        ; Exact mapped bytes 77 12: ja 0x587b65c9
        __asm _emit 0x77
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x587b65c0
        __asm _emit 0x7d
        __asm _emit 0x05
        or ecx, 0ffffffffh
        ; Exact mapped bytes EB 4E: jmp 0x587b660e
        __asm _emit 0xeb
        __asm _emit 0x4e
        xor eax, eax
        test ecx, ecx
        setg al
        ; Exact mapped bytes EB 43: jmp 0x587b660c
        __asm _emit 0xeb
        __asm _emit 0x43
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 3A: jmp 0x587b660c
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        ; Exact mapped bytes EB 2D: jmp 0x587b660c
        __asm _emit 0xeb
        __asm _emit 0x2d
        cmp eax, 1
        ; Exact mapped bytes 75 2A: jne 0x587b660e
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 68h]
        test edi, edi
        ; Exact mapped bytes 7E 06: jle 0x587b65f1
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp edi, eax
        ; Exact mapped bytes 7C 0A: jl 0x587b65f9
        __asm _emit 0x7c
        __asm _emit 0x0a
        ; Exact mapped bytes EB 06: jmp 0x587b65f7
        __asm _emit 0xeb
        __asm _emit 0x06
        neg eax
        cmp edi, eax
        ; Exact mapped bytes 7F 02: jg 0x587b65f9
        __asm _emit 0x7f
        __asm _emit 0x02
        mov edi, eax
        mov eax, dword ptr [esi + 74h]
        test ecx, ecx
        ; Exact mapped bytes 7E 06: jle 0x587b6606
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp ecx, eax
        ; Exact mapped bytes 7C 0A: jl 0x587b660e
        __asm _emit 0x7c
        __asm _emit 0x0a
        ; Exact mapped bytes EB 06: jmp 0x587b660c
        __asm _emit 0xeb
        __asm _emit 0x06
        neg eax
        cmp ecx, eax
        ; Exact mapped bytes 7F 02: jg 0x587b660e
        __asm _emit 0x7f
        __asm _emit 0x02
        mov ecx, eax
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 F9 C7 14 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xc7
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [esi + 58h]
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x587b66b0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        cmp edx, dword ptr [esi + 5ch]
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x587b66b0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 60h], ebx
        ; Exact mapped bytes 75 07: jne 0x587b663b
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [esi + 60h], 0
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 1f00h
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 100h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 75 1B: jne 0x587b6670
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, 0e2ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 200h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 02: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes EB 40: jmp 0x587b66b0
        __asm _emit 0xeb
        __asm _emit 0x40
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 400h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 33: jne 0x587b66b0
        __asm _emit 0x75
        __asm _emit 0x33
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
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
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
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1A: je 0x587b66d5
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes EB 03: jmp 0x587b66c0
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
        ; Exact mapped bytes 74 0C: je 0x587b66d9
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x587b66c0
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop ebx
        pop esi
        ret
        pop edi
        pop ebx
    }
}
