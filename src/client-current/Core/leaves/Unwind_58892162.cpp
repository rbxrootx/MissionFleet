// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892162 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58892162() {
    __asm {
        ; Exact mapped bytes 8D 8D D8 FC FF FF: lea ecx, [ebp - 0x328]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 33 CC C3 FF: jmp 0x584ceda0
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0xcc
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
