// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892B30 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58892b30() {
    __asm {
        ; Exact mapped bytes 8D 4D 84: lea ecx, [ebp - 0x7c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x84
        ; Exact mapped bytes E9 D1 80 FA FF: jmp 0x5883ac09
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xff
    }
}
