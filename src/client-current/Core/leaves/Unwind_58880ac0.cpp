// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880AC0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58880ac0() {
    __asm {
        ; Exact mapped bytes 8D 4D C4: lea ecx, [ebp - 0x3c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xc4
        ; Exact mapped bytes E9 C8 68 C8 FF: jmp 0x58507390
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
