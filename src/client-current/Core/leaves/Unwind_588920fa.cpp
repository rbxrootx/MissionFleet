// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588920FA .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588920fa() {
    __asm {
        ; Exact mapped bytes 8D 8D 68 FD FF FF: lea ecx, [ebp - 0x298]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9B CC C3 FF: jmp 0x584ceda0
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0xcc
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
