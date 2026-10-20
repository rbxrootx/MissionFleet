// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DEA0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887dea0() {
    __asm {
        ; Exact mapped bytes 8D 4D 84: lea ecx, [ebp - 0x7c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x84
        ; Exact mapped bytes E9 38 99 C0 FF: jmp 0x584877e0
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x99
        __asm _emit 0xc0
        __asm _emit 0xff
    }
}
