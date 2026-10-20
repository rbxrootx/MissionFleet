// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883C1D5 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_5883c1d5_5883C1D5() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        inc esi
        xor eax, eax
        mov edx, dword ptr [edi]
        ; Exact mapped bytes F0 0F B1 32: lock cmpxchg dword ptr [edx], esi
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xb1
        __asm _emit 0x32
        ; Exact mapped bytes EB 13: jmp 0x5883c1f9
        __asm _emit 0xeb
        __asm _emit 0x13
        push 0
        ; Exact mapped bytes FF 15 40 42 89 58: call dword ptr [0x58894240]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [edi]
        xor edx, edx
        inc edx
        xor eax, eax
        ; Exact mapped bytes F0 0F B1 11: lock cmpxchg dword ptr [ecx], edx
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xb1
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 75 E9: jne 0x5883c1e6
        __asm _emit 0x75
        __asm _emit 0xe9
        pop edi
        pop esi
        ret
    }
}
