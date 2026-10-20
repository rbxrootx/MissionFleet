// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58984FC0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58984fc0() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 98 DD F7 FF: jmp 0x58902d60
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0xdd
        __asm _emit 0xf7
        __asm _emit 0xff
    }
}
