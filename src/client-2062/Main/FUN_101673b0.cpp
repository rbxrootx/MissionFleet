// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x101673B0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_101673b0() {
    __asm {
        mov dword ptr [ecx], 10176b98h
        ; Exact mapped bytes E9 F5 09 00 00: jmp 0x10167db0
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
