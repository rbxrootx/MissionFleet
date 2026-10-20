// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D6C0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887d6c0() {
    __asm {
        ; Exact mapped bytes 8D 4D A4: lea ecx, [ebp - 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes E9 E8 A1 C0 FF: jmp 0x584878b0
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0xff
    }
}
