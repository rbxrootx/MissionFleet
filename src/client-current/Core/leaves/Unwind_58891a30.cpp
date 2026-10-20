// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891A30 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58891a30() {
    __asm {
        ; Exact mapped bytes 8D 8D 3C FF FF FF: lea ecx, [ebp - 0xc4]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D5 C1 C8 FF: jmp 0x5851dc10
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0xc1
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
