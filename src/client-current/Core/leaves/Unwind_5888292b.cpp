// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888292B .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5888292b() {
    __asm {
        ; Exact mapped bytes 8D 8D C0 FE FF FF: lea ecx, [ebp - 0x140]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 FA 73 C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x73
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
