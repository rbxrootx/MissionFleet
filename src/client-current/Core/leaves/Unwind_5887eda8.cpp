// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887EDA8 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887eda8() {
    __asm {
        ; Exact mapped bytes 8D 4D C0: lea ecx, [ebp - 0x40]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes E9 80 AF C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0xaf
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
