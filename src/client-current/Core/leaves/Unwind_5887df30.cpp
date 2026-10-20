// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DF30 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887df30() {
    __asm {
        ; Exact mapped bytes 8D 4D DC: lea ecx, [ebp - 0x24]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes E9 A8 98 C0 FF: jmp 0x584877e0
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x98
        __asm _emit 0xc0
        __asm _emit 0xff
    }
}
