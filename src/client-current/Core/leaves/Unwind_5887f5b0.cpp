// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887F5B0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887f5b0() {
    __asm {
        ; Exact mapped bytes 8D 8D 6C F4 FF FF: lea ecx, [ebp - 0xb94]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 35 86 F1 FF: jmp 0x58797bf0
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x86
        __asm _emit 0xf1
        __asm _emit 0xff
    }
}
