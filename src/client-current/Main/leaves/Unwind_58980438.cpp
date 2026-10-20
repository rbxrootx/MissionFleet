// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58980438 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58980438() {
    __asm {
        ; Exact mapped bytes 8D 4D B8: lea ecx, [ebp - 0x48]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xb8
        ; Exact mapped bytes E9 40 7D DC FF: jmp 0x58748180
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x7d
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
