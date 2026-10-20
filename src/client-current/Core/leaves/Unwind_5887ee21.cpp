// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887EE21 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887ee21() {
    __asm {
        ; Exact mapped bytes 8D 8D 78 FF FF FF: lea ecx, [ebp - 0x88]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 04 AF C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0xaf
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
