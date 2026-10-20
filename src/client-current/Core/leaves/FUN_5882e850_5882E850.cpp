// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882E850 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_5882e850_5882E850() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 28 0D 50 0E 8C 58: movaps xmm1, xmmword ptr [0x588c0e50]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x0e
        __asm _emit 0x8c
        __asm _emit 0x58
        lea ecx, [eax + eax]
        mov eax, dword ptr [ebp + 8]
        mov edx, ecx
        and edx, 0fffffff0h
        add edx, eax
        cmp eax, edx
        ; Exact mapped bytes 74 13: je 0x5882e881
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 66 90: nop
        __asm _emit 0x66
        __asm _emit 0x90
        ; Exact mapped bytes 0F 10 00: movups xmm0, xmmword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 38 17 C8: ptest xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x38
        __asm _emit 0x17
        __asm _emit 0xc8
        ; Exact mapped bytes 75 2C: jne 0x5882e8a6
        __asm _emit 0x75
        __asm _emit 0x2c
        add eax, 10h
        cmp eax, edx
        ; Exact mapped bytes 75 EF: jne 0x5882e870
        __asm _emit 0x75
        __asm _emit 0xef
        and ecx, 0fh
        add edx, ecx
        cmp eax, edx
        ; Exact mapped bytes 74 18: je 0x5882e8a2
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [eax]
        test ecx, 0ffffff00h
        ; Exact mapped bytes 75 0B: jne 0x5882e8a6
        __asm _emit 0x75
        __asm _emit 0x0b
        add eax, 2
        cmp eax, edx
        ; Exact mapped bytes 75 EE: jne 0x5882e890
        __asm _emit 0x75
        __asm _emit 0xee
        mov al, 1
        pop ebp
        ret
        xor al, al
        pop ebp
        ret
    }
}
