// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897EDEB .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5897edeb() {
    __asm {
        ; Exact mapped bytes 8D 8D 54 DB FF FF: lea ecx, [ebp - 0x24ac]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CA 28 F8 FF: jmp 0x589016c0
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x28
        __asm _emit 0xf8
        __asm _emit 0xff
    }
}
