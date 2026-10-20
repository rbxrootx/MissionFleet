// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887F2CB .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887f2cb() {
    __asm {
        ; Exact mapped bytes 8D 8D 64 FD FF FF: lea ecx, [ebp - 0x29c]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 EA FA C4 FF: jmp 0x584cedc0
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0xfa
        __asm _emit 0xc4
        __asm _emit 0xff
    }
}
