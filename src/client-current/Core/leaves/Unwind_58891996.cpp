// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891996 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58891996() {
    __asm {
        ; Exact mapped bytes 8D 8D 40 FF FF FF: lea ecx, [ebp - 0xc0]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 6F C2 C8 FF: jmp 0x5851dc10
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0xc2
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
