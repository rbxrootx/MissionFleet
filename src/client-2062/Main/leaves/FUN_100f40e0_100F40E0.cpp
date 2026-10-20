// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F40E0 .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_100f40e0_100F40E0() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        test byte ptr [edi + 24h], 4
        ; Exact mapped bytes 0F 84 4C 01 00 00: je 0x100f423a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edi + 58h]
        mov eax, dword ptr [edi + 5ch]
        sub eax, esi
        mov edx, 40000000h
        ; Exact mapped bytes 74 25: je 0x100f4122
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [edi + 50h]
        push ebp
        lea ebp, [ecx + 1]
        mov dword ptr [edi + 50h], ebp
        mov ebp, dword ptr [edi + 54h]
        cmp ecx, ebp
        pop ebp
        ; Exact mapped bytes 7E 0C: jle 0x100f411b
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 60h], edx
        ; Exact mapped bytes EB 07: jmp 0x100f4122
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [edi + 60h], 0
        cmp dword ptr [edi + 60h], edx
        ; Exact mapped bytes 0F 85 EB 00 00 00: jne 0x100f4216
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 03: jne 0x100f4132
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [edi + 60h], eax
        cmp dword ptr [edi + 60h], edx
        ; Exact mapped bytes 0F 85 DB 00 00 00: jne 0x100f4216
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 64h]
        cmp ecx, 1
        ; Exact mapped bytes 75 1A: jne 0x100f415d
        __asm _emit 0x75
        __asm _emit 0x1a
        test eax, eax
        ; Exact mapped bytes 7E 07: jle 0x100f414e
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, ecx
        ; Exact mapped bytes E9 C3 00 00 00: jmp 0x100f4211
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        test eax, eax
        setge cl
        dec ecx
        mov eax, ecx
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x100f4211
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 AB 00 00 00: jne 0x100f4211
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 54: jle 0x100f41be
        __asm _emit 0x7e
        __asm _emit 0x54
        cmp eax, 1e240h
        ; Exact mapped bytes 7E 0A: jle 0x100f417b
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, 1e240h
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x100f4211
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3039h
        ; Exact mapped bytes 7E 0A: jle 0x100f418c
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, 3039h
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x100f4211
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4d2h
        ; Exact mapped bytes 7E 07: jle 0x100f419a
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 4d2h
        ; Exact mapped bytes EB 77: jmp 0x100f4211
        __asm _emit 0xeb
        __asm _emit 0x77
        cmp eax, 7bh
        ; Exact mapped bytes 7E 07: jle 0x100f41a6
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 7bh
        ; Exact mapped bytes EB 6B: jmp 0x100f4211
        __asm _emit 0xeb
        __asm _emit 0x6b
        cmp eax, 0ch
        ; Exact mapped bytes 7E 07: jle 0x100f41b2
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 0ch
        ; Exact mapped bytes EB 5F: jmp 0x100f4211
        __asm _emit 0xeb
        __asm _emit 0x5f
        xor edx, edx
        cmp eax, 1
        setge dl
        mov eax, edx
        ; Exact mapped bytes EB 53: jmp 0x100f4211
        __asm _emit 0xeb
        __asm _emit 0x53
        ; Exact mapped bytes 7D 4F: jge 0x100f420f
        __asm _emit 0x7d
        __asm _emit 0x4f
        cmp eax, 0fffe1dc0h
        ; Exact mapped bytes 7D 07: jge 0x100f41ce
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 0fffe1dc0h
        ; Exact mapped bytes EB 43: jmp 0x100f4211
        __asm _emit 0xeb
        __asm _emit 0x43
        cmp eax, 0ffffcfc7h
        ; Exact mapped bytes 7D 07: jge 0x100f41dc
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 0ffffcfc7h
        ; Exact mapped bytes EB 35: jmp 0x100f4211
        __asm _emit 0xeb
        __asm _emit 0x35
        cmp eax, 0fffffb2eh
        ; Exact mapped bytes 7D 07: jge 0x100f41ea
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 0fffffb2eh
        ; Exact mapped bytes EB 27: jmp 0x100f4211
        __asm _emit 0xeb
        __asm _emit 0x27
        cmp eax, -7bh
        ; Exact mapped bytes 7D 07: jge 0x100f41f6
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 0ffffff85h
        ; Exact mapped bytes EB 1B: jmp 0x100f4211
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp eax, -0ch
        ; Exact mapped bytes 7D 07: jge 0x100f4202
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 0fffffff4h
        ; Exact mapped bytes EB 0F: jmp 0x100f4211
        __asm _emit 0xeb
        __asm _emit 0x0f
        xor ecx, ecx
        cmp eax, -1
        setg cl
        dec ecx
        mov eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x100f4211
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esi, eax
        mov dword ptr [edi + 58h], esi
        mov ecx, dword ptr [edi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x100f423a
        __asm _emit 0x74
        __asm _emit 0x1d
        mov esi, dword ptr [ecx + 38h]
        mov eax, dword ptr [edi + 3ch]
        cmp esi, eax
        ; Exact mapped bytes 74 0E: je 0x100f4235
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test esi, esi
        mov ecx, esi
        ; Exact mapped bytes 75 EB: jne 0x100f421d
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
