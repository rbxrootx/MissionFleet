// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898047B .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5898047b() {
    __asm {
        ; Exact mapped bytes 8D 8D B0 FE FF FF: lea ecx, [ebp - 0x150]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2A 1F F8 FF: jmp 0x589023b0
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x1f
        __asm _emit 0xf8
        __asm _emit 0xff
    }
}
