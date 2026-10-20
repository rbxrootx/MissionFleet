// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891D06 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58891d06() {
    __asm {
        ; Exact mapped bytes 8D 8D 08 FF FF FF: lea ecx, [ebp - 0xf8]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 1F 80 C1 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0xff
    }
}
