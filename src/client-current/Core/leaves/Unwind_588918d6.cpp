// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588918D6 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588918d6() {
    __asm {
        ; Exact mapped bytes 8D 8D 38 FF FF FF: lea ecx, [ebp - 0xc8]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2F C3 C8 FF: jmp 0x5851dc10
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xc3
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
