// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589814E0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_589814e0() {
    __asm {
        ; Exact mapped bytes 8D 4D D8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes E9 98 6C DC FF: jmp 0x58748180
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x6c
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
