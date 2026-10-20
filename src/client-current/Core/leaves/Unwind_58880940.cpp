// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880940 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58880940() {
    __asm {
        ; Exact mapped bytes 8D 4D 80: lea ecx, [ebp - 0x80]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x80
        ; Exact mapped bytes E9 F8 69 C8 FF: jmp 0x58507340
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x69
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
