// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58881968 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58881968() {
    __asm {
        ; Exact mapped bytes 8D 4D A8: lea ecx, [ebp - 0x58]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes E9 C0 83 C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
