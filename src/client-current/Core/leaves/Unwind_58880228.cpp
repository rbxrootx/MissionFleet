// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880228 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58880228() {
    __asm {
        ; Exact mapped bytes 8D 8D A0 FE FF FF: lea ecx, [ebp - 0x160]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4D 1D C8 FF: jmp 0x58501f80
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x1d
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
