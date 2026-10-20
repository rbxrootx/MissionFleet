// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892A3C .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58892a3c() {
    __asm {
        ; Exact mapped bytes 8D 4D BC: lea ecx, [ebp - 0x44]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes E9 C5 81 FA FF: jmp 0x5883ac09
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xff
    }
}
