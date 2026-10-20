// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58879A9F .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_58879a9f_58879A9F() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 14: je 0x58879abe
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 01: jmp 0x58879ab0
        __asm _emit 0xeb
        __asm _emit 0x01
        inc eax
        mov cl, byte ptr [eax]
        cmp cl, 30h
        ; Exact mapped bytes 74 F8: je 0x58879aaf
        __asm _emit 0x74
        __asm _emit 0xf8
        test cl, cl
        setne al
        pop ebp
        ret
        mov al, 1
        pop ebp
        ret
    }
}
