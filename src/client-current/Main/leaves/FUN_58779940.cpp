// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58779940 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_58779940() {
    __asm {
        mov edx, dword ptr [ecx + 0bch]
        mov ecx, dword ptr [ecx + 0c8h]
        push esi
        xor eax, eax
        push edi
        test edx, edx
        ; Exact mapped bytes 7E 1C: jle 0x58779970
        __asm _emit 0x7e
        __asm _emit 0x1c
        ; Exact mapped bytes 66 8B 7C 24 0C: mov di, word ptr [esp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x0c
        lea esi, [ecx + 2]
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 3E: cmp di, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x3e
        ; Exact mapped bytes 74 12: je 0x58779977
        __asm _emit 0x74
        __asm _emit 0x12
        inc eax
        add esi, 318h
        cmp eax, edx
        ; Exact mapped bytes 7C F0: jl 0x58779960
        __asm _emit 0x7c
        __asm _emit 0xf0
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        imul eax, eax, 318h
        pop edi
        add eax, ecx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
