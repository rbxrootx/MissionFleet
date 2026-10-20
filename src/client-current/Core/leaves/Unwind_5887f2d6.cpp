// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887F2D6 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887f2d6() {
    __asm {
        ; Exact mapped bytes 8D 8D 94 FD FF FF: lea ecx, [ebp - 0x26c]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4F AA C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xaa
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
