// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892084 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58892084() {
    __asm {
        ; Exact mapped bytes 8D 8D 40 FE FF FF: lea ecx, [ebp - 0x1c0]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 11 CD C3 FF: jmp 0x584ceda0
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0xcd
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
