// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880768 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58880768() {
    __asm {
        ; Exact mapped bytes 8D 4D C8: lea ecx, [ebp - 0x38]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xc8
        ; Exact mapped bytes E9 70 69 C8 FF: jmp 0x585070e0
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x69
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
