// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58881DA0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58881da0() {
    __asm {
        ; Exact mapped bytes 8D 8D 54 FE FF FF: lea ecx, [ebp - 0x1ac]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 45 5E F1 FF: jmp 0x58797bf0
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x5e
        __asm _emit 0xf1
        __asm _emit 0xff
    }
}
