// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58888130 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58888130() {
    __asm {
        ; Exact mapped bytes 8D 4D A4: lea ecx, [ebp - 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes E9 18 EA DB FF: jmp 0x58646b50
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0xea
        __asm _emit 0xdb
        __asm _emit 0xff
    }
}
