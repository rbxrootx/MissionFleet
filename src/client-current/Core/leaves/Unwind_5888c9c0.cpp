// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888C9C0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888c9c0() {
    __asm {
        ; Exact mapped bytes 8D 4D D8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes E9 38 A4 C7 FF: jmp 0x58506e00
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0xa4
        __asm _emit 0xc7
        __asm _emit 0xff
    }
}
