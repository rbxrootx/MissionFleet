// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5889216D .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5889216d() {
    __asm {
        ; Exact mapped bytes 8D 8D 10 FE FF FF: lea ecx, [ebp - 0x1f0]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 28 CC C3 FF: jmp 0x584ceda0
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xcc
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
