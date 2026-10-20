// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100251C0 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_100251c0_100251C0() {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [ecx + 118h]
        push esi
        push edi
        mov edi, dword ptr [ecx + 10ch]
        xor eax, eax
        xor edx, edx
        test edi, edi
        ; Exact mapped bytes 7E 3A: jle 0x10025212
        __asm _emit 0x7e
        __asm _emit 0x3a
        ; Exact mapped bytes 66 8B 5C 24 14: mov bx, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        mov esi, ebp
        ; Exact mapped bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 66 33 CB: xor cx, bx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xcb
        test cl, 1fh
        ; Exact mapped bytes 75 08: jne 0x100251f2
        __asm _emit 0x75
        __asm _emit 0x08
        test ecx, 0ffe0h
        ; Exact mapped bytes 74 12: je 0x10025204
        __asm _emit 0x74
        __asm _emit 0x12
        inc edx
        add esi, 0d4h
        cmp edx, edi
        ; Exact mapped bytes 7C E2: jl 0x100251df
        __asm _emit 0x7c
        __asm _emit 0xe2
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [edx + edx*2]
        lea eax, [eax + eax*8]
        shl eax, 1
        sub eax, edx
        lea eax, [ebp + eax*4]
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
