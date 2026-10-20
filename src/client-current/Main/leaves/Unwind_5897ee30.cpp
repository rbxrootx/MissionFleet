// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897EE30 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5897ee30() {
    __asm {
        ; Exact mapped bytes 8D 8D BC F4 FF FF: lea ecx, [ebp - 0xb44]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 75 35 F8 FF: jmp 0x589023b0
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0xff
    }
}
