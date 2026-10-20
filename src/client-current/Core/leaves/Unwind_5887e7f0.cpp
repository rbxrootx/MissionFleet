// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887E7F0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887e7f0() {
    __asm {
        ; Exact mapped bytes 8D 4D A4: lea ecx, [ebp - 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes E9 58 C8 C3 FF: jmp 0x584bb050
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xc8
        __asm _emit 0xc3
        __asm _emit 0xff
    }
}
