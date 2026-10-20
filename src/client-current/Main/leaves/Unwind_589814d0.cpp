// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589814D0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_589814d0() {
    __asm {
        ; Exact mapped bytes 8D 4D 94: lea ecx, [ebp - 0x6c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x94
        ; Exact mapped bytes E9 A8 6C DC FF: jmp 0x58748180
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x6c
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
