// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892178 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58892178() {
    __asm {
        ; Exact mapped bytes 8D 8D 70 FE FF FF: lea ecx, [ebp - 0x190]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 1D CC C3 FF: jmp 0x584ceda0
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0xcc
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
