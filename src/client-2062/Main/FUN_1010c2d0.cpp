// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x1010C2D0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_1010c2d0() {
    __asm {
        mov dword ptr [ecx], 10176b14h
        ; Exact mapped bytes E9 15 37 FF FF: jmp 0x100ff9f0
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
