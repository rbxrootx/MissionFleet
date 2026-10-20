// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58884930 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58884930() {
    __asm {
        ; Exact mapped bytes 8B 8D 00 FF FF FF: mov ecx, dword ptr [ebp - 0x100]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 75 0F F3 FF: jmp 0x587b58b0
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x0f
        __asm _emit 0xf3
        __asm _emit 0xff
    }
}
