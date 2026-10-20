// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886FE73 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_5886fe73_5886FE73() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax]
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 1A: je 0x5886fe9d
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 66 83 78 02 3A: cmp word ptr [eax + 2], 0x3a
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x3a
        ; Exact mapped bytes 75 13: jne 0x5886fe9d
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, ecx
        lea ecx, [edx - 61h]
        cmp ecx, 19h
        lea eax, [edx - 20h]
        cmova eax, edx
        sub eax, 40h
        pop ebp
        ret
        xor eax, eax
        pop ebp
        ret
    }
}
