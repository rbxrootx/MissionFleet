// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892110 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58892110() {
    __asm {
        ; Exact mapped bytes 8D 8D 50 FD FF FF: lea ecx, [ebp - 0x2b0]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 85 CC C3 FF: jmp 0x584ceda0
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
