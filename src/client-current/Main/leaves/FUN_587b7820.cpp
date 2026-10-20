// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B7820 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_587b7820() {
    __asm {
        xor eax, eax
        lea edx, [ecx + 130h]
        add ecx, 178h
        mov edi, edi
        cmp dword ptr [ecx], 5
        ; Exact mapped bytes 75 04: jne 0x587b7839
        __asm _emit 0x75
        __asm _emit 0x04
        test edx, edx
        ; Exact mapped bytes 75 0F: jne 0x587b7848
        __asm _emit 0x75
        __asm _emit 0x0f
        inc eax
        add ecx, 4
        add edx, 18h
        cmp eax, 3
        ; Exact mapped bytes 7C EB: jl 0x587b7830
        __asm _emit 0x7c
        __asm _emit 0xeb
        xor eax, eax
        ret
        mov eax, 1
        ret
    }
}
