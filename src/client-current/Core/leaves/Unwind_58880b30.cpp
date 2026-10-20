// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880B30 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58880b30() {
    __asm {
        ; Exact mapped bytes 8D 4D D8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes E9 08 68 C8 FF: jmp 0x58507340
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
