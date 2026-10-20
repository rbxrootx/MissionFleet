// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58877F0D .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_58877f0d_58877F0D() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        movzx ecx, word ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 3B 88 CC AB 8C 58: cmp cx, word ptr [eax + 0x588cabcc]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x88
        __asm _emit 0xcc
        __asm _emit 0xab
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 74 0D: je 0x58877f2e
        __asm _emit 0x74
        __asm _emit 0x0d
        add eax, 2
        cmp eax, 14h
        ; Exact mapped bytes 72 EF: jb 0x58877f18
        __asm _emit 0x72
        __asm _emit 0xef
        xor eax, eax
        inc eax
        pop ebp
        ret
        xor eax, eax
        pop ebp
        ret
    }
}
