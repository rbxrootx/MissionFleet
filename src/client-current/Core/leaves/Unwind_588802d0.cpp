// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588802D0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588802d0() {
    __asm {
        ; Exact mapped bytes 8D 8D 7C FF FF FF: lea ecx, [ebp - 0x84]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B5 70 C8 FF: jmp 0x58507390
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x70
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
