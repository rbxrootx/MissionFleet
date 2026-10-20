// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887F281 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887f281() {
    __asm {
        ; Exact mapped bytes 8D 8D AC FE FF FF: lea ecx, [ebp - 0x154]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A4 AA C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0xaa
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
