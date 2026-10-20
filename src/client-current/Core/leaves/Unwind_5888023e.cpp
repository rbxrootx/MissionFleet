// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888023E .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5888023e() {
    __asm {
        ; Exact mapped bytes 8D 8D A8 FE FF FF: lea ecx, [ebp - 0x158]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 57 1D C8 FF: jmp 0x58501fa0
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x1d
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
