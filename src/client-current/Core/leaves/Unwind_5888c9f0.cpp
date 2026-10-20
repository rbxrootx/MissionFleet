// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888C9F0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888c9f0() {
    __asm {
        ; Exact mapped bytes 8D 4D DC: lea ecx, [ebp - 0x24]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes E9 28 C6 E5 FF: jmp 0x586e9020
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xc6
        __asm _emit 0xe5
        __asm _emit 0xff
    }
}
