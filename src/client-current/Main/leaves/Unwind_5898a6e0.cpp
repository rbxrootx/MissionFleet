// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898A6E0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5898a6e0() {
    __asm {
        ; Exact mapped bytes 8D 8D F0 FE FF FF: lea ecx, [ebp - 0x110]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B5 C7 F7 FF: jmp 0x58906ea0
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0xc7
        __asm _emit 0xf7
        __asm _emit 0xff
    }
}
