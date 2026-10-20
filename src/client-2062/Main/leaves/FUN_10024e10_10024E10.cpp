// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10024E10 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_10024e10_10024E10() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 1ch]
        push edi
        mov edi, dword ptr [ecx + 28h]
        xor eax, eax
        xor ecx, ecx
        test esi, esi
        ; Exact mapped bytes 7E 37: jle 0x10024e59
        __asm _emit 0x7e
        __asm _emit 0x37
        ; Exact mapped bytes 66 8B 5C 24 14: mov bx, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        lea edx, [edi + 348h]
        ; Exact mapped bytes 66 8B EB: mov bp, bx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xeb
        ; Exact mapped bytes 66 33 2A: xor bp, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x2a
        test ebp, 0ffe0h
        ; Exact mapped bytes 74 12: je 0x10024e4d
        __asm _emit 0x74
        __asm _emit 0x12
        inc ecx
        add edx, 368h
        cmp ecx, esi
        ; Exact mapped bytes 7C E7: jl 0x10024e2d
        __asm _emit 0x7c
        __asm _emit 0xe7
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [ecx + ecx*2]
        lea eax, [eax + eax*8]
        lea ecx, [ecx + eax*4]
        lea eax, [edi + ecx*8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
