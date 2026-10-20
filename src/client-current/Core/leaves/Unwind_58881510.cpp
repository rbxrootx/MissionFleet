// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58881510 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58881510() {
    __asm {
        ; Exact mapped bytes 8D 4D 98: lea ecx, [ebp - 0x68]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x98
        ; Exact mapped bytes E9 78 5E C8 FF: jmp 0x58507390
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x5e
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
