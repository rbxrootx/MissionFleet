// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897ED10 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5897ed10() {
    __asm {
        ; Exact mapped bytes 8D 4D D4: lea ecx, [ebp - 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes E9 98 36 F8 FF: jmp 0x589023b0
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x36
        __asm _emit 0xf8
        __asm _emit 0xff
    }
}
