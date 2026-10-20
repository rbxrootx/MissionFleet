// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588928D6 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588928d6() {
    __asm {
        ; Exact mapped bytes 8D 8D 3C FB FF FF: lea ecx, [ebp - 0x4c4]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D9 CA FA FF: jmp 0x5883f3ba
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0xca
        __asm _emit 0xfa
        __asm _emit 0xff
    }
}
