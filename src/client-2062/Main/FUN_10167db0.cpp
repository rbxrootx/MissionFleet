// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x10167DB0 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_10167db0() {
    __asm {
        mov dword ptr [ecx], 10176bd8h
        ; Exact mapped bytes 8B 0D 28 93 1C 10: mov ecx, dword ptr [0x101c9328]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        dec ecx
        ; Exact mapped bytes 89 0D 28 93 1C 10: mov dword ptr [0x101c9328], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ret
    }
}
