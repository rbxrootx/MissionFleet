// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891860 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58891860() {
    __asm {
        ; Exact mapped bytes 8D 8D 38 FF FF FF: lea ecx, [ebp - 0xc8]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A5 C3 C8 FF: jmp 0x5851dc10
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0xc3
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
