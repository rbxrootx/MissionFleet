// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10025330 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_10025330_10025330() {
    __asm {
        mov edx, dword ptr [esp + 4]
        push ebx
        and edx, 0ffffh
        push esi
        push edi
        lea eax, [edx + edx*4]
        mov esi, dword ptr [ecx + eax*4 + 8]
        xor eax, eax
        sub edx, 0bh
        ; Exact mapped bytes 74 3F: je 0x1002538a
        __asm _emit 0x74
        __asm _emit 0x3f
        dec edx
        ; Exact mapped bytes 75 7B: jne 0x100253c9
        __asm _emit 0x75
        __asm _emit 0x7b
        mov edi, dword ptr [ecx + 104h]
        xor ecx, ecx
        test esi, esi
        ; Exact mapped bytes 7E 6F: jle 0x100253c9
        __asm _emit 0x7e
        __asm _emit 0x6f
        ; Exact mapped bytes 66 8B 5C 24 14: mov bx, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        lea edx, [edi + 0b0h]
        ; Exact mapped bytes 66 3B 1A: cmp bx, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x1a
        ; Exact mapped bytes 74 11: je 0x1002537b
        __asm _emit 0x74
        __asm _emit 0x11
        inc ecx
        add edx, 0b4h
        cmp ecx, esi
        ; Exact mapped bytes 7C F0: jl 0x10025365
        __asm _emit 0x7c
        __asm _emit 0xf0
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        lea eax, [ecx + ecx*4]
        lea ecx, [eax + eax*8]
        lea eax, [edi + ecx*4]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 0f0h]
        xor ecx, ecx
        test esi, esi
        ; Exact mapped bytes 7E 33: jle 0x100253c9
        __asm _emit 0x7e
        __asm _emit 0x33
        ; Exact mapped bytes 66 8B 5C 24 14: mov bx, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        lea edx, [edi + 0a2h]
        ; Exact mapped bytes 66 3B 1A: cmp bx, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x1a
        ; Exact mapped bytes 74 11: je 0x100253b7
        __asm _emit 0x74
        __asm _emit 0x11
        inc ecx
        add edx, 0ach
        cmp ecx, esi
        ; Exact mapped bytes 7C F0: jl 0x100253a1
        __asm _emit 0x7c
        __asm _emit 0xf0
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        lea eax, [ecx*8]
        sub eax, ecx
        lea edx, [eax + eax*2]
        lea eax, [ecx + edx*2]
        lea eax, [edi + eax*4]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
