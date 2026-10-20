// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880300 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58880300() {
    __asm {
        ; Exact mapped bytes 8D 4D A4: lea ecx, [ebp - 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes E9 B8 6E C8 FF: jmp 0x585071c0
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x6e
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
