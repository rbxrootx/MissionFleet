// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x101121E0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_101121e0() {
    __asm {
        mov dword ptr [ecx], 10176b20h
        ; Exact mapped bytes E9 05 D8 FE FF: jmp 0x100ff9f0
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
