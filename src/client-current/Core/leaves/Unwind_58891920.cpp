// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891920 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58891920() {
    __asm {
        ; Exact mapped bytes 8D 8D 34 FF FF FF: lea ecx, [ebp - 0xcc]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E5 C2 C8 FF: jmp 0x5851dc10
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0xc2
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
