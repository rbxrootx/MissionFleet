// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897E2A0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5897e2a0() {
    __asm {
        ; Exact mapped bytes 8D 4D D4: lea ecx, [ebp - 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes E9 D8 9E DC FF: jmp 0x58748180
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x9e
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
