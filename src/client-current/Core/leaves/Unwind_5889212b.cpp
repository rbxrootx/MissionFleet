// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5889212B .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5889212b() {
    __asm {
        ; Exact mapped bytes 8D 8D F0 FC FF FF: lea ecx, [ebp - 0x310]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 6A CC C3 FF: jmp 0x584ceda0
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xcc
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
