// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880A00 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58880a00() {
    __asm {
        ; Exact mapped bytes 8D 4D D0: lea ecx, [ebp - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes E9 28 93 C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x93
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
