// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880233 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58880233() {
    __asm {
        ; Exact mapped bytes 8D 8D BC FE FF FF: lea ecx, [ebp - 0x144]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F2 9A C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x9a
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
