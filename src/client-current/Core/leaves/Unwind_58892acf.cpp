// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892ACF .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58892acf() {
    __asm {
        ; Exact mapped bytes 8D 4D A8: lea ecx, [ebp - 0x58]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes E9 16 81 FA FF: jmp 0x5883abed
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xff
    }
}
