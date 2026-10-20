// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873B950 .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_5873b950() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 31ch]
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x5873b9b6
        __asm _emit 0x75
        __asm _emit 0x59
        mov eax, dword ptr [esi + 74h]
        mov ecx, dword ptr [eax + 100ch]
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x5873b982
        __asm _emit 0x74
        __asm _emit 0x18
        movzx ecx, word ptr [ecx + 6]
        shr ecx, 1
        and ecx, 0ffh
        cmp dword ptr [esi + 32ch], ecx
        ; Exact mapped bytes 0F 8C AB 00 00 00: jl 0x5873ba2d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 31ch], 1
        mov dword ptr [esi + 348h], 0ffffff38h
        cmp dword ptr [eax + 6070h], 0
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x5873ba2d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 7ch]
        mov eax, dword ptr [eax + 7ch]
        lea edx, [esi + esi*4]
        mov byte ptr [eax + edx*4 + 114h], 1
        pop esi
        ret
        cmp eax, 1
        ; Exact mapped bytes 75 72: jne 0x5873ba2d
        __asm _emit 0x75
        __asm _emit 0x72
        mov eax, dword ptr [esi + 348h]
        cmp eax, 64h
        ; Exact mapped bytes 7D 0B: jge 0x5873b9d1
        __asm _emit 0x7d
        __asm _emit 0x0b
        add eax, 1eh
        mov dword ptr [esi + 348h], eax
        pop esi
        ret
        ; Exact mapped bytes 66 83 BE CC 02 00 00 04: cmp word ptr [esi + 0x2cc], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        mov dword ptr [esi + 348h], 64h
        mov dword ptr [esi + 4c8h], 1
        mov dword ptr [esi + 31ch], 0
        ; Exact mapped bytes 75 0E: jne 0x5873ba07
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [esi + 33ch]
        mov dword ptr [esi + 324h], ecx
        ; Exact mapped bytes EB 0C: jmp 0x5873ba13
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [esi + 33ch]
        mov dword ptr [esi + 324h], edx
        mov ecx, dword ptr [esi + 74h]
        test ecx, ecx
        ; Exact mapped bytes 74 13: je 0x5873ba2d
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes E8 D1 11 1A 00: call 0x588dcbf0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x11
        __asm _emit 0x1a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x5873ba2d
        __asm _emit 0x74
        __asm _emit 0x0a
        mov dword ptr [esi + 468h], 1
        pop esi
        ret
    }
}
