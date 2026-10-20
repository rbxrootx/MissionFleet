// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898A730 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5898a730() {
    __asm {
        ; Exact mapped bytes 8D 4D D8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes E9 88 8F DC FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x8f
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
