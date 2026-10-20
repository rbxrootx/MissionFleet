// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880690 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58880690() {
    __asm {
        ; Exact mapped bytes 8D 4D A0: lea ecx, [ebp - 0x60]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa0
        ; Exact mapped bytes E9 F8 6C C8 FF: jmp 0x58507390
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x6c
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
