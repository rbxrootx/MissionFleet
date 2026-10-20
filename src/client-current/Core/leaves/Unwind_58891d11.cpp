// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891D11 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58891d11() {
    __asm {
        ; Exact mapped bytes 8D 8D 20 FF FF FF: lea ecx, [ebp - 0xe0]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 14 80 C1 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0xff
    }
}
