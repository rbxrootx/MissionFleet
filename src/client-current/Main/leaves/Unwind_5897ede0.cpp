// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897EDE0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5897ede0() {
    __asm {
        ; Exact mapped bytes 8D 8D 34 DB FF FF: lea ecx, [ebp - 0x24cc]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x34
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C5 35 F8 FF: jmp 0x589023b0
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0xff
    }
}
