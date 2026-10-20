// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887EBE0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887ebe0() {
    __asm {
        ; Exact mapped bytes 8D 8D C8 FE FF FF: lea ecx, [ebp - 0x138]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 45 B1 C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0xb1
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
