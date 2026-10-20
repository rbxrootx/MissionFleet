// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898AD9B .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5898ad9b() {
    __asm {
        ; Exact mapped bytes 8D 8D 68 F9 FF FF: lea ecx, [ebp - 0x698]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8A 7F FE FF: jmp 0x58972d30
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
