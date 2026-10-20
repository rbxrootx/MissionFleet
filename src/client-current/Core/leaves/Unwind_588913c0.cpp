// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588913C0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588913c0() {
    __asm {
        ; Exact mapped bytes 8D 8D E8 FE FF FF: lea ecx, [ebp - 0x118]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 95 96 F2 FF: jmp 0x587baa60
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0xf2
        __asm _emit 0xff
    }
}
