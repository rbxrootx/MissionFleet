// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888C628 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888c628() {
    __asm {
        ; Exact mapped bytes 8D 4D C0: lea ecx, [ebp - 0x40]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes E9 00 D7 C1 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0xd7
        __asm _emit 0xc1
        __asm _emit 0xff
    }
}
