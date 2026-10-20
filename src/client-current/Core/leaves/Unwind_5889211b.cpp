// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5889211B .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5889211b() {
    __asm {
        ; Exact mapped bytes 8D 4D C0: lea ecx, [ebp - 0x40]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes E9 7D CC C3 FF: jmp 0x584ceda0
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0xcc
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
