// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x10109CE0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_10109ce0() {
    __asm {
        mov dword ptr [ecx], 10176b08h
        ; Exact mapped bytes E9 05 5D FF FF: jmp 0x100ff9f0
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
