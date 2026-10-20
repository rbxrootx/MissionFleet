// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887FB38 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887fb38() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 58: add ecx, 0x58
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x58
        ; Exact mapped bytes E9 9D 7C C0 FF: jmp 0x584877e0
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x7c
        __asm _emit 0xc0
        __asm _emit 0xff
    }
}
