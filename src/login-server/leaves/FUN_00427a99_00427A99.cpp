// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427A99 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_00427a99_00427A99() {
    __asm {
        mov edx, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [esp + 0ch]
        xor eax, eax
        lea ecx, [edx + esi]
        cmp ecx, edx
        ; Exact mapped bytes 72 04: jb 0x427aaf
        __asm _emit 0x72
        __asm _emit 0x04
        cmp ecx, esi
        ; Exact mapped bytes 73 03: jae 0x427ab2
        __asm _emit 0x73
        __asm _emit 0x03
        push 1
        pop eax
        mov edx, dword ptr [esp + 10h]
        pop esi
        mov dword ptr [edx], ecx
        ret
    }
}
