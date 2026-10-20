// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588818C0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588818c0() {
    __asm {
        ; Exact mapped bytes 8D 8D D8 FE FF FF: lea ecx, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 65 84 C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
