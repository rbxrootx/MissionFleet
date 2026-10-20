// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D7A0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887d7a0() {
    __asm {
        ; Exact mapped bytes 8D 4D A4: lea ecx, [ebp - 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes E9 B8 56 C1 FF: jmp 0x58492e60
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x56
        __asm _emit 0xc1
        __asm _emit 0xff
    }
}
