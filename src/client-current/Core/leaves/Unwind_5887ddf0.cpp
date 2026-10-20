// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DDF0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887ddf0() {
    __asm {
        ; Exact mapped bytes 8D 8D 78 FF FF FF: lea ecx, [ebp - 0x88]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E5 99 C0 FF: jmp 0x584877e0
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x99
        __asm _emit 0xc0
        __asm _emit 0xff
    }
}
