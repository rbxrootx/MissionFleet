// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58883B50 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58883b50() {
    __asm {
        ; Exact mapped bytes 8B 8D 64 FF FF FF: mov ecx, dword ptr [ebp - 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 55 1D F3 FF: jmp 0x587b58b0
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x1d
        __asm _emit 0xf3
        __asm _emit 0xff
    }
}
