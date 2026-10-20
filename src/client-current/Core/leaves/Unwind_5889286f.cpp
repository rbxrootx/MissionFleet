// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5889286F .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5889286f() {
    __asm {
        ; Exact mapped bytes 8D 8D 3C FA FF FF: lea ecx, [ebp - 0x5c4]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 40 CB FA FF: jmp 0x5883f3ba
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xcb
        __asm _emit 0xfa
        __asm _emit 0xff
    }
}
