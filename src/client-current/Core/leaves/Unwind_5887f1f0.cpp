// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887F1F0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887f1f0() {
    __asm {
        ; Exact mapped bytes 8D 4D D4: lea ecx, [ebp - 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes E9 F8 89 F1 FF: jmp 0x58797bf0
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x89
        __asm _emit 0xf1
        __asm _emit 0xff
    }
}
