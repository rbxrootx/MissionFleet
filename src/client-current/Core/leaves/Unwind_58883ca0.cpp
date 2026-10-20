// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58883CA0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58883ca0() {
    __asm {
        ; Exact mapped bytes 8D 4D E0: lea ecx, [ebp - 0x20]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes E9 08 3B C0 FF: jmp 0x584877b0
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x3b
        __asm _emit 0xc0
        __asm _emit 0xff
    }
}
