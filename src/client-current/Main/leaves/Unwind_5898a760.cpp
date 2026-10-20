// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898A760 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5898a760() {
    __asm {
        ; Exact mapped bytes 8D 4D D0: lea ecx, [ebp - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes E9 18 DA DB FF: jmp 0x58748180
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0xda
        __asm _emit 0xdb
        __asm _emit 0xff
    }
}
