// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588920AD .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588920ad() {
    __asm {
        ; Exact mapped bytes 8D 8D E0 FD FF FF: lea ecx, [ebp - 0x220]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E8 CC C3 FF: jmp 0x584ceda0
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
