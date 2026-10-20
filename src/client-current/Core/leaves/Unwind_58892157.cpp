// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892157 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58892157() {
    __asm {
        ; Exact mapped bytes 8D 8D C0 FC FF FF: lea ecx, [ebp - 0x340]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 3E CC C3 FF: jmp 0x584ceda0
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0xcc
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
