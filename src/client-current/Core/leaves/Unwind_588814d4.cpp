// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588814D4 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588814d4() {
    __asm {
        ; Exact mapped bytes 8D 8D A4 FE FF FF: lea ecx, [ebp - 0x15c]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 51 88 C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x88
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
