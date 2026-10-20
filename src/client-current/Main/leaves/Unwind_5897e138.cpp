// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897E138 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5897e138() {
    __asm {
        ; Exact mapped bytes 8D 4D D0: lea ecx, [ebp - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes E9 F0 65 DC FF: jmp 0x58744730
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x65
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
