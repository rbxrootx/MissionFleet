// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887EE60 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887ee60() {
    __asm {
        ; Exact mapped bytes 8D 4D C0: lea ecx, [ebp - 0x40]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes E9 C8 AE C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0xae
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
