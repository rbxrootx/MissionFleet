// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891C70 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58891c70() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 28 97 F0 FF: jmp 0x5879b3a0
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x97
        __asm _emit 0xf0
        __asm _emit 0xff
    }
}
