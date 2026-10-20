// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589803E0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_589803e0() {
    __asm {
        ; Exact mapped bytes 8D 4D D0: lea ecx, [ebp - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes E9 98 7D DC FF: jmp 0x58748180
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x7d
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
