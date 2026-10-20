// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897F180 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5897f180() {
    __asm {
        ; Exact mapped bytes 8D 8D 70 FA FF FF: lea ecx, [ebp - 0x590]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 35 45 DD FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x45
        __asm _emit 0xdd
        __asm _emit 0xff
    }
}
