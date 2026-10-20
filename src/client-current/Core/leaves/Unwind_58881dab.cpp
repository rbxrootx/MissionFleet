// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58881DAB .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58881dab() {
    __asm {
        ; Exact mapped bytes 8D 8D 68 FE FF FF: lea ecx, [ebp - 0x198]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 3A 5E F1 FF: jmp 0x58797bf0
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x5e
        __asm _emit 0xf1
        __asm _emit 0xff
    }
}
