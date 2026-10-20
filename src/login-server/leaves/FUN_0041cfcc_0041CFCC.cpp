// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041CFCC .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_0041cfcc_0041CFCC() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        xor eax, eax
        xor ebx, ebx
        mov ecx, dword ptr [esi + 8]
        mov edi, dword ptr [ecx + 4]
        test edi, edi
        ; Exact mapped bytes 76 11: jbe 0x41cff0
        __asm _emit 0x76
        __asm _emit 0x11
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 0D 00 00 00: call 0x41cff4
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7C 05: jl 0x41cff0
        __asm _emit 0x7c
        __asm _emit 0x05
        inc ebx
        cmp ebx, edi
        ; Exact mapped bytes 72 EF: jb 0x41cfdf
        __asm _emit 0x72
        __asm _emit 0xef
        pop edi
        pop esi
        pop ebx
        ret
    }
}
