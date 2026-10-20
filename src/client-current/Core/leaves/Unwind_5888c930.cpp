// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888C930 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888c930() {
    __asm {
        ; Exact mapped bytes 8D 4D A4: lea ecx, [ebp - 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes E9 D8 CA E5 FF: jmp 0x586e9410
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0xca
        __asm _emit 0xe5
        __asm _emit 0xff
    }
}
