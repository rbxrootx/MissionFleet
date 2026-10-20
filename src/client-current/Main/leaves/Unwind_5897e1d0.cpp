// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897E1D0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5897e1d0() {
    __asm {
        ; Exact mapped bytes 8D 4D A8: lea ecx, [ebp - 0x58]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes E9 E8 54 DD FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xdd
        __asm _emit 0xff
    }
}
