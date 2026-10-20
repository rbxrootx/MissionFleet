// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F3F10 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_100f3f10_100F3F10() {
    __asm {
        push esi
        xor eax, eax
        push edi
        add ecx, 1024h
        mov edx, dword ptr [ecx]
        mov esi, dword ptr [edx + 0ch]
        mov edi, dword ptr [edx + 10h]
        cmp esi, edi
        ; Exact mapped bytes 75 13: jne 0x100f3f39
        __asm _emit 0x75
        __asm _emit 0x13
        inc eax
        add ecx, 4
        cmp eax, 100h
        ; Exact mapped bytes 7C E9: jl 0x100f3f1a
        __asm _emit 0x7c
        __asm _emit 0xe9
        pop edi
        mov eax, 1
        pop esi
        ret
        pop edi
        xor eax, eax
        pop esi
        ret
    }
}
