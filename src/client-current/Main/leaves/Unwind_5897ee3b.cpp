// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897EE3B .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5897ee3b() {
    __asm {
        ; Exact mapped bytes 8D 8D 9C F4 FF FF: lea ecx, [ebp - 0xb64]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 6A 35 F8 FF: jmp 0x589023b0
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0xff
    }
}
