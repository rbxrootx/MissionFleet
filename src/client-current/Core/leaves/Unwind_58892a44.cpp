// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892A44 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58892a44() {
    __asm {
        ; Exact mapped bytes 8D 4D C0: lea ecx, [ebp - 0x40]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes E9 A1 81 FA FF: jmp 0x5883abed
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xff
    }
}
