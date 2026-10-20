// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DE68 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887de68() {
    __asm {
        ; Exact mapped bytes 8D 4D A8: lea ecx, [ebp - 0x58]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes E9 70 99 C0 FF: jmp 0x584877e0
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x99
        __asm _emit 0xc0
        __asm _emit 0xff
    }
}
