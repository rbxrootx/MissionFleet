// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887F9C0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887f9c0() {
    __asm {
        ; Exact mapped bytes 8D 4D A4: lea ecx, [ebp - 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes E9 18 F0 C6 FF: jmp 0x584ee9e0
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0xf0
        __asm _emit 0xc6
        __asm _emit 0xff
    }
}
