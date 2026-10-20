// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887EE42 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887ee42() {
    __asm {
        ; Exact mapped bytes 8D 8D A8 FE FF FF: lea ecx, [ebp - 0x158]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 63 C5 F1 FF: jmp 0x5879b3b0
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0xc5
        __asm _emit 0xf1
        __asm _emit 0xff
    }
}
