// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887EBEB .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887ebeb() {
    __asm {
        ; Exact mapped bytes 8D 8D 98 FE FF FF: lea ecx, [ebp - 0x168]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 3A B1 C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0xb1
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
