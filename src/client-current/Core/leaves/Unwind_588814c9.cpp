// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588814C9 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588814c9() {
    __asm {
        ; Exact mapped bytes 8D 8D D4 FE FF FF: lea ecx, [ebp - 0x12c]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 5C 88 C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x88
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
