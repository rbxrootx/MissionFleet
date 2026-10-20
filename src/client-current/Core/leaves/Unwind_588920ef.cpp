// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588920EF .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588920ef() {
    __asm {
        ; Exact mapped bytes 8D 8D 58 FE FF FF: lea ecx, [ebp - 0x1a8]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A6 CC C3 FF: jmp 0x584ceda0
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0xcc
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
