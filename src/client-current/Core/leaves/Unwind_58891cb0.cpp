// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891CB0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58891cb0() {
    __asm {
        ; Exact mapped bytes 8D 8D 60 FF FF FF: lea ecx, [ebp - 0xa0]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 75 80 C1 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0xff
    }
}
