// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891CFB .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58891cfb() {
    __asm {
        ; Exact mapped bytes 8D 8D F0 FE FF FF: lea ecx, [ebp - 0x110]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2A 80 C1 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0xff
    }
}
