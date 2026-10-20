// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880698 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58880698() {
    __asm {
        ; Exact mapped bytes 8D 4D 98: lea ecx, [ebp - 0x68]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x98
        ; Exact mapped bytes E9 A0 6C C8 FF: jmp 0x58507340
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x6c
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
