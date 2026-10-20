// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588806D0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588806d0() {
    __asm {
        ; Exact mapped bytes 8D 8D CC FE FF FF: lea ecx, [ebp - 0x134]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D5 72 C8 FF: jmp 0x585079b0
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x72
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
