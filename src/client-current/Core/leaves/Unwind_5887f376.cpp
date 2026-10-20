// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887F376 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887f376() {
    __asm {
        ; Exact mapped bytes 8D 8D 44 FE FF FF: lea ecx, [ebp - 0x1bc]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 3F FA C4 FF: jmp 0x584cedc0
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0xfa
        __asm _emit 0xc4
        __asm _emit 0xff
    }
}
