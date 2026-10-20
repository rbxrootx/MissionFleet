// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588817E0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588817e0() {
    __asm {
        ; Exact mapped bytes 8D 8D F8 FE FF FF: lea ecx, [ebp - 0x108]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F5 E3 C9 FF: jmp 0x5851fbe0
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0xe3
        __asm _emit 0xc9
        __asm _emit 0xff
    }
}
