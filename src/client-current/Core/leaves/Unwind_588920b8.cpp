// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588920B8 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588920b8() {
    __asm {
        ; Exact mapped bytes 8D 8D F8 FD FF FF: lea ecx, [ebp - 0x208]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 DD CC C3 FF: jmp 0x584ceda0
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0xcc
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
