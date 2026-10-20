// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588800D0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588800d0() {
    __asm {
        ; Exact mapped bytes 8D 8D A4 FE FF FF: lea ecx, [ebp - 0x15c]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 55 9C C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x9c
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
