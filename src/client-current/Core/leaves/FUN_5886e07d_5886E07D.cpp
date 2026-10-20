// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886E07D .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_5886e07d_5886E07D() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 8]
        cmp byte ptr [ecx], 0
        ; Exact mapped bytes 75 05: jne 0x5886e08f
        __asm _emit 0x75
        __asm _emit 0x05
        xor eax, eax
        inc eax
        ; Exact mapped bytes EB 16: jmp 0x5886e0a5
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp byte ptr [ecx + 1], 0
        ; Exact mapped bytes 75 05: jne 0x5886e09a
        __asm _emit 0x75
        __asm _emit 0x05
        push 2
        pop eax
        ; Exact mapped bytes EB 0B: jmp 0x5886e0a5
        __asm _emit 0xeb
        __asm _emit 0x0b
        xor eax, eax
        cmp byte ptr [ecx + 2], al
        setne al
        add eax, 3
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
