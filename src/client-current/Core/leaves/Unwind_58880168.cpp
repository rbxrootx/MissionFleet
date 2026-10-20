// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880168 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58880168() {
    __asm {
        ; Exact mapped bytes 8D 8D BC FE FF FF: lea ecx, [ebp - 0x144]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0D 1E C8 FF: jmp 0x58501f80
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x1e
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
