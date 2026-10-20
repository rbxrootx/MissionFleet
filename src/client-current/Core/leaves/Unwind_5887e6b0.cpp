// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887E6B0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887e6b0() {
    __asm {
        ; Exact mapped bytes 8D 4D D0: lea ecx, [ebp - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes E9 08 A2 C3 FF: jmp 0x584b88c0
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0xa2
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
