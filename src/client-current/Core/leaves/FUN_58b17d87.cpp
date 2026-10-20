// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B17D87 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_58b17d87() {
    __asm {
        ; Exact mapped bytes 0F 83 E4 C2 1F 00: jae 0x58d14071
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe4
        __asm _emit 0xc2
        __asm _emit 0x1f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 38 1C: mov edx, dword ptr [eax + edi + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x38
        __asm _emit 0x1c
        ; Exact mapped bytes F5: cmc
        __asm _emit 0xf5
        ; Exact mapped bytes 8D 0C 8A: lea ecx, [edx + ecx*4]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x8a
        ; Exact mapped bytes 3B F5: cmp esi, ebp
        __asm _emit 0x3b
        __asm _emit 0xf5
        ; Exact mapped bytes E9 89 FD 3F 00: jmp 0x58f17b25
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0xfd
        __asm _emit 0x3f
        __asm _emit 0x00
    }
}
