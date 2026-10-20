// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891A88 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58891a88() {
    __asm {
        ; Exact mapped bytes 8D 8D 30 FF FF FF: lea ecx, [ebp - 0xd0]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 7D C1 C8 FF: jmp 0x5851dc10
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0xc1
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
