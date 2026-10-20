// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887F2C0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887f2c0() {
    __asm {
        ; Exact mapped bytes 8D 8D C4 FD FF FF: lea ecx, [ebp - 0x23c]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 65 AA C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xaa
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
