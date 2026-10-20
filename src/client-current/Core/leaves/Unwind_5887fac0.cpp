// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887FAC0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887fac0() {
    __asm {
        ; Exact mapped bytes 8D 8D 78 FA FF FF: lea ecx, [ebp - 0x588]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 15 EE C6 FF: jmp 0x584ee8e0
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0xee
        __asm _emit 0xc6
        __asm _emit 0xff
    }
}
