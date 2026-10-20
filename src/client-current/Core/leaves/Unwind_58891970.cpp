// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891970 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58891970() {
    __asm {
        ; Exact mapped bytes 8D 8D A8 FE FF FF: lea ecx, [ebp - 0x158]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 95 C2 C8 FF: jmp 0x5851dc10
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0xc2
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
