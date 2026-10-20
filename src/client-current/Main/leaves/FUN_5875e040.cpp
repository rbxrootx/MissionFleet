// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875E040 .. +0x24C bytes.
extern "C" __declspec(naked) void FUN_5875e040() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 37 02 00 00: je 0x5875e286
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
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
        push edi
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 74 1E: je 0x5875e084
        __asm _emit 0x74
        __asm _emit 0x1e
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
        ; Exact mapped bytes 74 0D: je 0x5875e084
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [esi + 70h], 40000000h
        ; Exact mapped bytes 0F 85 C9 01 00 00: jne 0x5875e24d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 84h]
        cmp eax, edi
        ; Exact mapped bytes 75 0F: jne 0x5875e0a0
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 8]
        cmp ecx, dword ptr [esi + 88h]
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x5875e15e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        sub ecx, dword ptr [esi + 8]
        sub edi, eax
        mov eax, dword ptr [esi + 74h]
        cmp eax, 2
        ; Exact mapped bytes 75 72: jne 0x5875e125
        __asm _emit 0x75
        __asm _emit 0x72
        lea edx, [edi + 7]
        cmp edx, 0eh
        ; Exact mapped bytes 77 25: ja 0x5875e0e0
        __asm _emit 0x77
        __asm _emit 0x25
        lea eax, [edi + 3]
        cmp eax, 6
        ; Exact mapped bytes 77 14: ja 0x5875e0d7
        __asm _emit 0x77
        __asm _emit 0x14
        test edi, edi
        ; Exact mapped bytes 7D 05: jge 0x5875e0cc
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 21: jmp 0x5875e0ed
        __asm _emit 0xeb
        __asm _emit 0x21
        xor edx, edx
        test edi, edi
        setg dl
        mov edi, edx
        ; Exact mapped bytes EB 16: jmp 0x5875e0ed
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, edi
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x5875e0eb
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
        ; Exact mapped bytes 77 23: ja 0x5875e118
        __asm _emit 0x77
        __asm _emit 0x23
        lea edx, [ecx + 3]
        cmp edx, 6
        ; Exact mapped bytes 77 12: ja 0x5875e10f
        __asm _emit 0x77
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x5875e106
        __asm _emit 0x7d
        __asm _emit 0x05
        or ecx, 0ffffffffh
        ; Exact mapped bytes EB 4F: jmp 0x5875e155
        __asm _emit 0xeb
        __asm _emit 0x4f
        xor eax, eax
        test ecx, ecx
        setg al
        ; Exact mapped bytes EB 44: jmp 0x5875e153
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 3B: jmp 0x5875e153
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        ; Exact mapped bytes EB 2E: jmp 0x5875e153
        __asm _emit 0xeb
        __asm _emit 0x2e
        cmp eax, 1
        ; Exact mapped bytes 75 2B: jne 0x5875e155
        __asm _emit 0x75
        __asm _emit 0x2b
        mov eax, dword ptr [esi + 78h]
        test edi, edi
        ; Exact mapped bytes 7E 08: jle 0x5875e139
        __asm _emit 0x7e
        __asm _emit 0x08
        cmp edi, eax
        ; Exact mapped bytes 7C 0E: jl 0x5875e143
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov edi, eax
        ; Exact mapped bytes EB 0A: jmp 0x5875e143
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edx, eax
        neg edx
        cmp edi, edx
        ; Exact mapped bytes 7F 02: jg 0x5875e143
        __asm _emit 0x7f
        __asm _emit 0x02
        mov edi, edx
        test ecx, ecx
        ; Exact mapped bytes 7E 06: jle 0x5875e14d
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp ecx, eax
        ; Exact mapped bytes 7C 0A: jl 0x5875e155
        __asm _emit 0x7c
        __asm _emit 0x0a
        ; Exact mapped bytes EB 06: jmp 0x5875e153
        __asm _emit 0xeb
        __asm _emit 0x06
        neg eax
        cmp ecx, eax
        ; Exact mapped bytes 7F 02: jg 0x5875e155
        __asm _emit 0x7f
        __asm _emit 0x02
        mov ecx, eax
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 B2 4C 1A 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x4c
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        mov eax, dword ptr [esi + 28h]
        cmp ecx, eax
        ; Exact mapped bytes 74 2A: je 0x5875e195
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [esi + 6ch]
        ; Exact mapped bytes 7E 10: jle 0x5875e180
        __asm _emit 0x7e
        __asm _emit 0x10
        mov edi, ecx
        sub edi, eax
        cmp edi, edx
        ; Exact mapped bytes 7F 03: jg 0x5875e17b
        __asm _emit 0x7f
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 13: jmp 0x5875e18e
        __asm _emit 0xeb
        __asm _emit 0x13
        add edx, eax
        push edx
        ; Exact mapped bytes EB 0E: jmp 0x5875e18e
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edi, eax
        sub edi, ecx
        cmp edi, edx
        ; Exact mapped bytes 7F 03: jg 0x5875e18b
        __asm _emit 0x7f
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 03: jmp 0x5875e18e
        __asm _emit 0xeb
        __asm _emit 0x03
        sub eax, edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 4B 4B 1A 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x4b
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes 0F 85 A9 00 00 00: jne 0x5875e24d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        cmp edx, dword ptr [esi + 88h]
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x5875e24d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        cmp eax, dword ptr [esi + 28h]
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x5875e24d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 70h], 40000000h
        ; Exact mapped bytes 75 07: jne 0x5875e1d2
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [esi + 70h], 0
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
        ; Exact mapped bytes 75 21: jne 0x5875e20d
        __asm _emit 0x75
        __asm _emit 0x21
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
        cmp dword ptr [esi + 50h], 0
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 74 47: je 0x5875e24d
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 66 83 4E 24 02: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes EB 40: jmp 0x5875e24d
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
        ; Exact mapped bytes 75 33: jne 0x5875e24d
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
        mov ecx, 0fffbh
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
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 95 4C FE FF: call 0x58742ef0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5875e268
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 18h]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x5875e285
        __asm _emit 0x74
        __asm _emit 0x16
        nop
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5875e288
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5875e270
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
