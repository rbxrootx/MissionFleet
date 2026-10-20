// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891B9F .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58891b9f() {
    __asm {
        ; Exact mapped bytes 8D 8D 14 FF FF FF: lea ecx, [ebp - 0xec]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 66 C0 C8 FF: jmp 0x5851dc10
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xc0
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
